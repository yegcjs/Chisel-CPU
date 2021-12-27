package CPU

import chisel3._ 
import chisel3.util._ 
import Register._
import  Shifter._
import ALU._

class PCRegister extends Module{
    val io = IO(new Bundle{
        val w_data = Input(UInt(30.W))
        val w_en = Input(Bool())
        val pc = Output(UInt(30.W))
    })
    val pc = RegInit(0.U(30.W))
    io.pc := pc
    when(io.w_en===true.B){
        pc := io.w_data
    }
}

class CPU extends Module {
    val io = IO(new Bundle {
        val instruction = Input(UInt(32.W))
        val register_for_peek = Output(Vec(32, UInt(32.W)))
        val pc_for_peek = Output(UInt(30.W))
        // val operand_1 = Output(UInt(32.W))
        // val operand_2 = Output(UInt(32.W))
    })
    val pc = Module(new PCRegister())
    io.pc_for_peek := pc.io.pc
    val registers = Module(new Register() )
    
    for(i <- 0 to 31 by 1){
        io.register_for_peek(i) := registers.io.register_for_peek(i)
    }
    
    val shifter = Module(new Shifter() )
    val ALU = Module(new ALU() )//


    // instruction decomposition
    val opcode = io.instruction(31, 26)
    val rs = io.instruction(25, 21)
    val rt = io.instruction(20, 16)
    val rd = io.instruction(15, 11)
    val shamt = io.instruction(10, 6)
    val funct = io.instruction(5, 0)
    val imm = io.instruction(15, 0)
    val address = io.instruction(25, 0)
    
    
    // implementations begin
    // imm extension
    val ext_w_sign = Wire(Bool())
    val ext_imm = Cat(Fill(16, Mux(ext_w_sign, imm(15), "b0".U)), imm)
    
    // pc
    val branch = Wire(Bool())
    val branch_select = Wire(UInt(2.W))
    val jump = Wire(Bool())
    val jal_or_jalr = Wire(Bool())  // 0: jal, 1: jalr
    val branch_condition = Mux(branch_select(1),
        Mux(branch_select(0),~ALU.io.Zero, ALU.io.Zero),   // 11, 10
        Mux(branch_select(0),~ALU.io.Less, ALU.io.Less)  // 01, 00
    )

    val pc_plus_4 = pc.io.pc + 1.U(30.W)
    pc.io.w_data := Mux(jump, 
        Mux(jal_or_jalr, registers.io.Rs_out(31, 2), Cat(pc.io.pc(29, 26), address)),
        Mux(branch & branch_condition, pc_plus_4 + ext_imm, pc_plus_4)
    )
    
    // register
    val input_zero = Wire(Bool())
    val write_to_rt = Wire(Bool())
    val write_to_31 = jump&(~jal_or_jalr) //Wire(Bool())
    val alu_or_shift_res = Wire(Bool()) // 0: alu, 1: shift
    val is_arithmetic = Wire(Bool())

    registers.io.Rs_addr := rs 
    registers.io.Rt_addr := Mux(input_zero, 0.U, rt)
    registers.io.Rd_addr := Mux(write_to_31, 31.U, Mux(write_to_rt, rt, rd))
    registers.io.Rd_in := Mux(jump,
        Cat(pc_plus_4, "b00".U(2.W)), 
        Mux(alu_or_shift_res, shifter.io.out, ALU.io.ALU_out)
    )
    

    // alu
    val operand_selector = Wire(Bool())
    ALU.io.A_in := registers.io.Rs_out
    ALU.io.B_in := Mux(operand_selector, registers.io.Rt_out, ext_imm)
    // io.operand_1 := ALU.io.A_in
    // io.operand_2 := ALU.io.B_in
    // shifter
    val lui_or_shift = Wire(Bool()) // 0:lui, 1:shift
    val shift_r_or_amt = Wire(Bool())   // 0: r, 1: imm
    shifter.io.in := Mux(operand_selector, registers.io.Rt_out, ext_imm)
    shifter.io.amount := Mux(lui_or_shift, Mux(shift_r_or_amt, shamt, registers.io.Rs_out), 16.U)
    // implementations end

    // set control signals
    pc.io.w_en := true.B 
    jump := (opcode==="b000011".U) | (opcode==="b00000".U & funct==="b001001".U)
    jal_or_jalr := (opcode==="b00000".U & funct==="b001001".U)
    branch := (opcode==="b000100".U| opcode==="b000101".U | opcode==="b000001".U)
    branch_select := Cat(opcode(2), Mux(opcode(2), opcode(0), rt(0)))
    ext_w_sign := ((opcode(3) | funct(3))&(~opcode(2))) | branch
    input_zero := (opcode==="b000001".U)
    write_to_rt := opcode(3).asBool()
    alu_or_shift_res := ((opcode(3,0)==="b0000".U)&(~funct(5).asBool())) | (opcode(2,0)==="b111".U)
    registers.io.Rd_byte_w_en := Mux(is_arithmetic&ALU.io.Overflow_out, "b0000".U, 
        Mux(branch&(~jump), "b0000".U, "b1111".U))

    ALU.io.ALU_op := "b0000".U
    when(opcode === "b001000".U | (opcode === "b000000".U & funct==="b100000".U)){    // addi, add
        ALU.io.ALU_op:="b1110".U
    }.elsewhen(opcode === "b001010".U |(opcode === "b000000".U & funct==="b101010".U)){   // slti, slt
        ALU.io.ALU_op := "b0101".U
    }.elsewhen(opcode==="b001011".U |(opcode === "b000000".U & funct==="b101011".U) ){ // sltiu, sltu
        ALU.io.ALU_op := "b0111".U
    }.elsewhen(opcode==="b001110".U |(opcode === "b000000".U & funct==="b100110".U)){ // xori, xor
        ALU.io.ALU_op := "b1001".U
    } .elsewhen(opcode==="b001101".U |(opcode === "b000000".U & funct==="b100101".U)){ // ori, or
        ALU.io.ALU_op := "b0110".U
    }.elsewhen(opcode==="b001100".U |(opcode === "b000000".U & funct==="b100100".U)){ // andi, and 
        ALU.io.ALU_op := "b0100".U
    }.elsewhen(opcode==="b000101".U | opcode==="b000100".U | opcode === "b000001".U){ // bne, beq, bltz/bgez
        ALU.io.ALU_op := "b0001".U
    }.elsewhen(opcode==="b000000".U & funct==="b100010".U){
        ALU.io.ALU_op := "b1111".U
    }

    operand_selector := (opcode==="b000000".U | branch)
    lui_or_shift := ~(opcode==="b001111".U)
    shift_r_or_amt := ~funct(2).asBool()
    shifter.io.operation := Mux(opcode==="b000000".U, Cat(funct(0), funct(1)), "b00".U)
    is_arithmetic := opcode==="b001000".U | (opcode==="b000000".U & (funct==="b100000".U | funct==="b100010".U))
}