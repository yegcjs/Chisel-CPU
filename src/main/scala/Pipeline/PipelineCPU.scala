package Pipeline

import chisel3._
import chisel3.util._
import Register._
import Shifter._
import ALU._
import org.scalatestplus.selenium.WebBrowser
import firrtl.ir.IsDeclaration
import java.beans.IndexedPropertyDescriptor


class PipelineCPU extends Module {
    val io = IO(new Bundle{
        val run = Input(Bool())
        val instr_to_set = Input(UInt(32.W))
        val instr_addr = Input(UInt(32.W))
        val register_for_peek = Output(Vec(32, UInt(32.W)))
        val pc_for_peek = Output(UInt(32.W))
    })


    val pc_register = Module(new PC_Register())
    val IF_ID = Module(new IF_ID_Register())
    val ID_EX = Module(new ID_EX_Register())
    val EX_MEM = Module(new EX_MEM_Register())
    val MEM_WR = Module(new MEM_WR_Register())
    
    // components
    val instr_mem = Mem(1024, UInt(32.W))    // 4KB memory
    val data_mem = Mem(1024, UInt(32.W))
    val registers = Module(new Register())
    val alu = Module(new ALU())
    val shifter = Module(new Shifter())
    

    // peek
    for(i <- 0 to 31 by 1){
        io.register_for_peek(i) := registers.io.register_for_peek(i)
    }
    io.pc_for_peek := pc_register.io.pc

    // extra signals 
    val to_b_or_j = Wire(Bool())
    val block = Wire(Bool())
    // val c1_a = Wire(Bool())
    // val c1_b = Wire(Bool())
    // val c2_a = Wire(Bool())
    // val c2_b = Wire(Bool())
    val wr_result = Wire(UInt(32.W))

    when(~io.run){   
        // printf(p"instruction to set : 0x${Hexadecimal(io.instr_to_set)}\n")
        // printf(p"location to set : ${io.instr_addr(31, 2)}\n")
        instr_mem(Cat("b00".U(2.W), io.instr_addr(31, 2))) := io.instr_to_set
        printf(p"current instruction at 0x${Hexadecimal(io.instr_addr(31, 2))}: 0x${Hexadecimal(io.instr_to_set)}\n")
    }
    val pc_plus_4 = pc_register.io.pc + 4.U
    pc_register.io.pc_wr_data := Mux(to_b_or_j, Mux(EX_MEM.io.jump, EX_MEM.io.jump_target, EX_MEM.io.branch_pc), pc_plus_4)
    pc_register.io.w_en := ((~block) | to_b_or_j) & (io.run)

    IF_ID.io.in_instruction := Mux(io.run, instr_mem.read(Cat("b00".U(2.W) ,pc_register.io.pc(31, 2))), "hffff_ffff".U)
    // printf(p"${Mux(io.run, instr_mem.read(Cat("b00".U ,pc_register.io.pc(31, 2))), "hffff_ffff".U)}!!!\n")
    when(io.run){
        printf(p"IF: current instruction at 0x${Hexadecimal(pc_register.io.pc(31, 2))}: 0x${Hexadecimal(Mux(io.run, instr_mem.read(pc_register.io.pc(31, 2)), "hffff_ffff".U))}\n")
    }
    
    
    IF_ID.io.in_next_pc := pc_plus_4
    IF_ID.io.clr := to_b_or_j
    IF_ID.io.w_en := ((~block) | to_b_or_j) //& io.run

    // ID
    val op = IF_ID.io.instruction(31, 26)
    val funct = IF_ID.io.instruction(5, 0)
    val imm = IF_ID.io.instruction(15, 0)
    val id_rs = IF_ID.io.instruction(25, 21)
    val id_rt = IF_ID.io.instruction(20, 16)
    when(io.run){
        printf(p"ID: instruction = 0x${Hexadecimal(IF_ID.io.instruction)} next_pc = 0x${Hexadecimal(IF_ID.io.next_pc)}\n")
    }
    registers.io.Rs_addr := id_rs
    registers.io.Rt_addr := id_rt
    ID_EX.io.clr := (block | to_b_or_j)

    ID_EX.io.in_next_pc := IF_ID.io.next_pc
    // TODO: control signals here
    ID_EX.io.in_jump_w_r := (op=/="b000011".U) // op != jal / op===jalr
    ID_EX.io.in_jump := ((op==="b000011".U) | (op==="b000000".U & funct==="b001001".U))
    ID_EX.io.in_branch := ((op==="b000100".U) | (op==="b000101".U) | (op==="b000001".U))
    ID_EX.io.in_branch_cond_selector := Cat(op(2), Mux(op(2), op(0), id_rt(0)))
    ID_EX.io.in_reg_wr := ((op=/="b101011".U) & (op=/="b111111".U) & (op=/="b000100".U) & (op=/="b000101".U) & (op=/="b000001".U) & (op=/="b101011".U))
    ID_EX.io.in_mem_wr := (op==="b101011".U)        // sw
    ID_EX.io.in_mem_to_reg := (op==="b100011".U)    // lw
    ID_EX.io.in_imm_sign := ((op=/="b001110".U) & (op=/="b001101".U) & (op=/="b001100".U))
    ID_EX.io.in_rt_or_imm := (~((op==="b000000".U) | (op==="b000100".U) | (op==="b000101".U) | (op==="b000001".U)))   // r type or branch
    ID_EX.io.in_shift_op := Cat(funct(0), funct(1))
    when(op==="b001111".U | (op==="b000000".U & (funct==="b001001".U))| op==="b100011".U | op==="b101011".U){    // jr, lw, st, lui
        ID_EX.io.in_alu_op := "b0000".U
    } .elsewhen(op==="b000100".U | op==="b000101".U | op==="b000001".U){    // branch
        ID_EX.io.in_alu_op := "b0001".U
    } .elsewhen(op==="b001000".U | (op==="b000000".U & funct==="b100000".U)){      // add 
        ID_EX.io.in_alu_op := "b1110".U
    } .elsewhen(op==="b000000".U & funct==="b100010".U){        // sub
        ID_EX.io.in_alu_op := "b1111".U
    } .elsewhen(op==="b001010".U | (op==="b000000".U & funct==="b101010".U)){      // slt
        ID_EX.io.in_alu_op := "b0101".U 
    } .elsewhen(op==="b001011".U | (op==="b000000".U & funct==="b101011".U)){      // sltu
        ID_EX.io.in_alu_op := "b0111".U
    } .elsewhen(op==="b001110".U | (op==="b000000".U & funct==="b100110".U)){         // xor
        ID_EX.io.in_alu_op := "b1001".U
    } .elsewhen(op==="b001101".U | (op==="b000000".U & funct==="b100101".U)){       // or
        ID_EX.io.in_alu_op := "b0110".U
    } .elsewhen(op==="b001100".U | (op==="b000000".U & funct==="b100100".U)){       // and
        ID_EX.io.in_alu_op := "b0100".U
    } .otherwise{
        ID_EX.io.in_alu_op := "b0000".U
    }
    ID_EX.io.in_alu_or_shift := ((op==="b000000".U) & (funct(5,3)==="b000".U))
    ID_EX.io.in_shift_r_or_amt := (~funct(2))
    ID_EX.io.in_rt_or_rd := (op==="b000000".U)
    ID_EX.io.in_is_lui := (op==="b001111".U)

    val c3_a = (MEM_WR.io.reg_wr) & (MEM_WR.io.rd === id_rs)
    val c3_b = (MEM_WR.io.reg_wr) & (MEM_WR.io.rd === id_rt)
    ID_EX.io.in_rs_data := Mux(c3_a, wr_result, registers.io.Rs_out)
    ID_EX.io.in_rt_data := Mux(c3_b, wr_result, registers.io.Rt_out)
    ID_EX.io.in_rs := id_rs
    ID_EX.io.in_rt := id_rt
    ID_EX.io.in_rd := IF_ID.io.instruction(15, 11)
    ID_EX.io.in_shamt := IF_ID.io.instruction(10, 6)
    ID_EX.io.in_imm_sign_ext := Cat(Fill(16, imm(15)), imm)
    ID_EX.io.in_imm_zero_ext := Cat("h0000".U(16.W), imm)
    ID_EX.io.in_imm_upper := Cat(imm, "h0000".U(16.W))
    ID_EX.io.in_jump_target := Cat(IF_ID.io.next_pc(31, 28), Cat(IF_ID.io.instruction(25, 0), "b00".U(2.W)))

    // EX 
    when(io.run){
        // printf(p"EX: next_pc ${ID_EX.io.next_pc}\n")
        // printf(p"EX: jump_w_r ${ID_EX.io.jump_w_r}\n")
        // printf(p"EX: jump ${ID_EX.io.jump}\n")
        // printf(p"EX: branch ${ID_EX.io.branch}\n")
        // printf(p"EX: branch_cond_selector ${ID_EX.io.branch_cond_selector}\n")
        // printf(p"EX: reg_wr ${ID_EX.io.reg_wr}\n")
        // printf(p"EX: mem_wr ${ID_EX.io.mem_wr}\n")
        // printf(p"EX: mem_to_reg ${ID_EX.io.mem_to_reg}\n")
        // printf(p"EX: imm_sign ${ID_EX.io.imm_sign}\n")
        // printf(p"EX: rt_or_imm ${ID_EX.io.rt_or_imm}\n")
        // printf(p"EX: shift_op ${ID_EX.io.shift_op}\n")
        // printf(p"EX: alu_op ${ID_EX.io.alu_op}\n")
        // printf(p"EX: alu_or_shift ${ID_EX.io.alu_or_shift}\n")
        // printf(p"EX: shift_r_or_amt ${ID_EX.io.shift_r_or_amt}\n")
        // printf(p"EX: rt_or_rd ${ID_EX.io.rt_or_rd}\n")
        // printf(p"EX: is_lui ${ID_EX.io.is_lui}\n")
        // printf(p"EX: rs_data ${ID_EX.io.rs_data}\n")
        // printf(p"EX: rt_data ${ID_EX.io.rt_data}\n")
        // printf(p"EX: rs ${ID_EX.io.rs}\n")
        // printf(p"EX: rt ${ID_EX.io.rt}\n")
        // printf(p"EX: rd ${ID_EX.io.rd}\n")
        // printf(p"EX: shamt ${ID_EX.io.shamt}\n")
        // printf(p"EX: imm_sign_ext ${ID_EX.io.imm_sign_ext}\n")
        // printf(p"EX: imm_zero_ext ${ID_EX.io.imm_zero_ext}\n")
        // printf(p"EX: imm_upper ${ID_EX.io.imm_upper}\n")
        // printf(p"EX: jump_target 0x${Hexadecimal(ID_EX.io.jump_target)}\n")
    }

    val c1_a = (EX_MEM.io.reg_wr & (~EX_MEM.io.overflow)) & (EX_MEM.io.rd===ID_EX.io.rs)
    val c1_b = (EX_MEM.io.reg_wr & (~EX_MEM.io.overflow)) & (EX_MEM.io.rd===ID_EX.io.rt)
    val c2_a = MEM_WR.io.reg_wr & (MEM_WR.io.rd===ID_EX.io.rs)
    val c2_b = MEM_WR.io.reg_wr & (MEM_WR.io.rd===ID_EX.io.rt)
    val ex_imm = Mux(ID_EX.io.is_lui, ID_EX.io.imm_upper, Mux(ID_EX.io.imm_sign, ID_EX.io.imm_sign_ext, ID_EX.io.imm_zero_ext))    
    val ex_operand_a = Mux(c1_a | c2_a, Mux(c1_a, EX_MEM.io.out, wr_result), ID_EX.io.rs_data)
    val ex_operand_b = Mux(ID_EX.io.rt_or_imm, ex_imm, Mux(c1_b | c2_b, Mux(c1_b, EX_MEM.io.out, wr_result), ID_EX.io.rt_data))
    // printf(p"wr_result :${wr_result}\n")
    val ex_rd = Mux(ID_EX.io.jump, 31.U(5.W), Mux(ID_EX.io.rt_or_rd, ID_EX.io.rd, ID_EX.io.rt))
    block := ID_EX.io.mem_to_reg & ((ex_rd===id_rs) | (ex_rd===id_rt))
    alu.io.A_in := ex_operand_a
    alu.io.B_in := ex_operand_b
    alu.io.ALU_op := ID_EX.io.alu_op
    // printf(p"Executing ${ex_operand_a}(${c1_a}, ${c2_a}) op ${ex_operand_b}(${c1_b}, ${c2_b})\n")
    shifter.io.in := ex_operand_b
    shifter.io.amount := Mux(ID_EX.io.shift_r_or_amt, ID_EX.io.shamt, ex_operand_a)
    shifter.io.operation := ID_EX.io.shift_op 
    
    EX_MEM.io.clr := to_b_or_j
    EX_MEM.io.in_reg_wr := ID_EX.io.reg_wr
    EX_MEM.io.in_mem_wr := ID_EX.io.mem_wr
    EX_MEM.io.in_mem_to_reg := ID_EX.io.mem_to_reg
    EX_MEM.io.in_branch_pc := Cat(ID_EX.io.imm_sign_ext(29,0), "b00".U(2.W)) + ID_EX.io.next_pc
    printf(p"branch pc: ${Cat(ID_EX.io.imm_sign_ext(29,0), "b00".U(2.W)) + ID_EX.io.next_pc}\n")
    EX_MEM.io.in_jump := ID_EX.io.jump
    EX_MEM.io.in_branch := ID_EX.io.branch
    EX_MEM.io.in_branch_cond_selector := ID_EX.io.branch_cond_selector
    EX_MEM.io.in_less := alu.io.Less
    EX_MEM.io.in_zero := alu.io.Zero
    EX_MEM.io.in_overflow := alu.io.Overflow_out
    EX_MEM.io.in_out := Mux(ID_EX.io.jump & (~ID_EX.io.jump_w_r), ID_EX.io.next_pc, Mux(ID_EX.io.alu_or_shift, shifter.io.out, alu.io.ALU_out))
    EX_MEM.io.in_rt_data :=  Mux(c1_b | c2_b, Mux(c1_b, EX_MEM.io.out, wr_result), ID_EX.io.rt_data)
    EX_MEM.io.in_rd := ex_rd
    EX_MEM.io.in_jump_target := Mux(ID_EX.io.jump_w_r, ID_EX.io.rs_data, ID_EX.io.jump_target)

    // MEM
    when(io.run){
        printf(p"mem_wr: ${EX_MEM.io.mem_wr}, addr: ${EX_MEM.io.out(31, 2)}, data: ${EX_MEM.io.rt_data}\n")
    }
    val branch_ok = Mux(EX_MEM.io.branch_cond_selector(1),
        Mux(EX_MEM.io.branch_cond_selector(0), ~(EX_MEM.io.zero), EX_MEM.io.zero),   //11, 10
        Mux(EX_MEM.io.branch_cond_selector(0), ~(EX_MEM.io.less), EX_MEM.io.less)   // 01, 00
    ) & EX_MEM.io.branch
    to_b_or_j := branch_ok | (EX_MEM.io.jump)

    MEM_WR.io.in_reg_wr := EX_MEM.io.reg_wr & (~EX_MEM.io.overflow)
    MEM_WR.io.in_mem_to_reg := EX_MEM.io.mem_to_reg
    MEM_WR.io.in_out := EX_MEM.io.out
    when(EX_MEM.io.mem_wr){
        data_mem(EX_MEM.io.out(31, 2)) := EX_MEM.io.rt_data
        MEM_WR.io.in_mem_data := DontCare
    }.otherwise{
        MEM_WR.io.in_mem_data := data_mem(EX_MEM.io.out)
    }
    MEM_WR.io.in_rd := EX_MEM.io.rd
    
    // WR
    // when(io.run){
    //     printf(p"wr reg_wr: ${MEM_WR.io.reg_wr}\n")
    //     printf(p"mem_to_reg: ${MEM_WR.io.mem_to_reg}\n")
    //     printf(p"out: ${MEM_WR.io.out}\n")
    //     printf(p"mem_data: ${MEM_WR.io.mem_data}\n")
    // }
    wr_result := Mux(MEM_WR.io.mem_to_reg, MEM_WR.io.mem_data, MEM_WR.io.out)
    registers.io.Rd_addr := MEM_WR.io.rd
    registers.io.Rd_in := wr_result
    registers.io.Rd_byte_w_en := Mux(MEM_WR.io.reg_wr, "b1111".U, "b0000".U)

    printf("===============\n")
}