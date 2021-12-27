package Pipeline

import Chisel.Bool
import chisel3.RegInit

import chisel3._
import chisel3.util._
import Chisel.INPUT

class PC_Register extends Module {
    val io = IO (new Bundle{
        val w_en = Input(Bool())
        val pc_wr_data = Input(UInt(32.W))
        val pc = Output(UInt(32.W))

    })
    val pc_reg = RegInit(0.U(32.W))
    io.pc := pc_reg

    when(io.w_en === true.B){
        pc_reg := io.pc_wr_data
    } .otherwise{
        pc_reg := pc_reg
    }
}

class IF_ID_Register extends Module {
    val io = IO (new Bundle{
        val in_next_pc = Input(UInt(32.W))
        val in_instruction = Input(UInt(32.W))
        val w_en = Input(Bool())
        val clr = Input(Bool())
        val next_pc = Output(UInt(32.W))
        val instruction = Output(UInt(32.W))
    })

    val next_pc = Reg(UInt(32.W))
    val instruction = Reg(UInt(32.W))
    io.next_pc := next_pc 
    io.instruction := instruction


    when(io.clr===true.B){
        next_pc := 0.U(32.W)
        instruction := "h_ffff_ffff".U(32.W)
        // printf(p"io.clr == true\n")
    } .elsewhen(io.w_en){
        next_pc := io.in_next_pc
        instruction := io.in_instruction
        // printf(p"in_next_pc:${io.in_next_pc}, ${(io.in_instruction}\n")
    } .otherwise{
        printf(p"what the hell?\n")
    }
}

class ID_EX_Register extends Module {
    val io = IO(new Bundle{
        val in_next_pc = Input(UInt(32.W))
        val in_jump_w_r = Input(Bool())
        val in_jump = Input(Bool())
        val in_branch = Input(Bool())
        val in_branch_cond_selector = Input(UInt(2.W))
        val in_reg_wr = Input(Bool())
        val in_mem_wr = Input(Bool())
        val in_mem_to_reg = Input(Bool())
        val in_imm_sign = Input(Bool())
        val in_rt_or_imm = Input(Bool())
        val in_shift_op = Input(UInt(2.W))
        val in_alu_op = Input(UInt(4.W))
        val in_alu_or_shift = Input(Bool())
        val in_shift_r_or_amt = Input(Bool())
        val in_rt_or_rd = Input(Bool())
        val in_is_lui = Input(Bool())
        val in_rs_data = Input(UInt(32.W))
        val in_rt_data = Input(UInt(32.W))
        val in_rs = Input(UInt(5.W))
        val in_rt = Input(UInt(5.W))
        val in_rd = Input(UInt(5.W))
        val in_shamt = Input(UInt(5.W))
        val in_imm_sign_ext = Input(UInt(32.W))
        val in_imm_zero_ext = Input(UInt(32.W))
        val in_imm_upper = Input(UInt(32.W))
        val in_jump_target = Input(UInt(32.W))

        val clr = Input(Bool())

        val next_pc = Output(UInt(32.W))
        val jump_w_r = Output(Bool())
        val jump = Output(Bool())
        val branch = Output(Bool())
        val branch_cond_selector = Output(UInt(2.W))
        val reg_wr = Output(Bool())
        val mem_wr = Output(Bool())
        val mem_to_reg = Output(Bool())
        val imm_sign = Output(Bool())
        val rt_or_imm = Output(Bool())
        val shift_op = Output(UInt(2.W))
        val alu_op = Output(UInt(4.W))
        val alu_or_shift = Output(Bool())
        val shift_r_or_amt = Output(Bool())
        val rt_or_rd = Output(Bool())
        val is_lui = Output(Bool())
        val rs_data = Output(UInt(32.W))
        val rt_data = Output(UInt(32.W))
        val rs = Output(UInt(5.W))
        val rt = Output(UInt(5.W))
        val rd = Output(UInt(5.W))
        val shamt = Output(UInt(5.W))
        val imm_sign_ext = Output(UInt(32.W))
        val imm_zero_ext = Output(UInt(32.W))
        val imm_upper = Output(UInt(32.W))
        val jump_target = Output(UInt(32.W))
    })

    val next_pc = RegInit(0.U(32.W))
    io.next_pc := next_pc
    val jump_w_r = RegInit(false.B)
    io.jump_w_r := jump_w_r
    val jump = RegInit(false.B)
    io.jump := jump
    val branch = RegInit(false.B)
    io.branch := branch
    val branch_cond_selector = RegInit(2.U(2.W))
    io.branch_cond_selector := branch_cond_selector
    val reg_wr = RegInit(false.B)
    io.reg_wr := reg_wr
    val mem_wr = RegInit(false.B)
    io.mem_wr := mem_wr
    val mem_to_reg = RegInit(false.B)
    io.mem_to_reg := mem_to_reg
    val imm_sign = RegInit(false.B)
    io.imm_sign := imm_sign
    val rt_or_imm = RegInit(false.B)
    io.rt_or_imm := rt_or_imm
    val shift_op = RegInit(0.U)
    io.shift_op := shift_op
    val alu_op = RegInit(0.U(4.W))
    io.alu_op := alu_op
    val alu_or_shift = RegInit(false.B)
    io.alu_or_shift := alu_or_shift
    val shift_r_or_amt = RegInit(false.B)
    io.shift_r_or_amt := shift_r_or_amt
    val rt_or_rd = RegInit(false.B)
    io.rt_or_rd := rt_or_rd
    val is_lui = RegInit(false.B)
    io.is_lui := is_lui
    val rs_data = RegInit(0.U(32.W))
    io.rs_data := rs_data
    val rt_data = RegInit(0.U(32.W))
    io.rt_data := rt_data
    val rs = RegInit(0.U(5.W))
    io.rs := rs
    val rt = RegInit(0.U(5.W))
    io.rt := rt
    val rd = RegInit(0.U(5.W))
    io.rd := rd
    val shamt = RegInit(0.U(5.W))
    io.shamt := shamt
    val imm_sign_ext = RegInit(0.U(32.W))
    io.imm_sign_ext := imm_sign_ext
    val imm_zero_ext = RegInit(0.U(32.W))
    io.imm_zero_ext := imm_zero_ext
    val imm_upper = RegInit(0.U(32.W))
    io.imm_upper := imm_upper
    val jump_target = RegInit(0.U(32.W))
    io.jump_target := jump_target

    when(io.clr===true.B){
        jump := false.B
        branch := false.B
        reg_wr := false.B
        mem_wr := false.B
        mem_to_reg := false.B
        // alu_op :=    // avoid overflow error
        // shift_op :=
    } .otherwise{
        next_pc := io.in_next_pc
        jump_w_r := io. in_jump_w_r
        jump := io.in_jump
        branch := io.in_branch
        branch_cond_selector := io.in_branch_cond_selector
        reg_wr := io.in_reg_wr
        mem_wr := io.in_mem_wr
        mem_to_reg := io.in_mem_to_reg
        imm_sign := io.in_imm_sign
        rt_or_imm := io.in_rt_or_imm 
        shift_op := io.in_shift_op
        alu_op := io.in_alu_op
        alu_or_shift := io.in_alu_or_shift
        rt_or_rd := io.in_rt_or_rd 
        shift_r_or_amt := io.in_shift_r_or_amt
        is_lui := io.in_is_lui
        rs_data := io.in_rs_data
        rt_data := io.in_rt_data
        rs := io.in_rs
        rt := io.in_rt
        rd := io.in_rd
        shamt := io.in_shamt
        imm_sign_ext := io.in_imm_sign_ext
        imm_zero_ext := io.in_imm_zero_ext 
        imm_upper := io.in_imm_upper
        jump_target := io.in_jump_target
    }
}

class EX_MEM_Register extends Module {
    val io = IO (new Bundle{
        val in_reg_wr = Input(Bool())
        val in_mem_wr = Input(Bool())
        val in_mem_to_reg = Input(Bool())
        val in_branch_pc = Input(UInt(32.W))
        val in_jump_target = Input(UInt(32.W))
        val in_branch = Input(Bool())
        val in_jump = Input(Bool())
        val in_branch_cond_selector = Input(UInt(2.W))
        val in_less = Input(Bool())
        val in_zero = Input(Bool())
        val in_overflow = Input(Bool())
        val in_out = Input(UInt(32.W))
        val in_rt_data = Input(UInt(32.W))
        val in_rd = Input(UInt(5.W))

        val clr = Input(Bool())

        val reg_wr = Output(Bool())
        val mem_wr = Output(Bool())
        val mem_to_reg = Output(Bool())
        val branch_pc = Output(UInt(32.W))
        val jump_target = Output(UInt(32.W))
        val branch = Output(Bool())
        val jump = Output(Bool())
        val branch_cond_selector = Output(UInt(2.W))
        val less = Output(Bool())
        val zero = Output(Bool())
        val overflow = Output(Bool())
        val out = Output(UInt(32.W))
        val rt_data = Output(UInt(32.W))
        val rd = Output(UInt(5.W))
    })


    val reg_wr = RegInit(false.B)
    io.reg_wr := reg_wr
    val mem_wr = RegInit(false.B)
    io.mem_wr := mem_wr
    val mem_to_reg = RegInit(false.B)
    io.mem_to_reg := mem_to_reg
    val branch_pc = RegInit(0.U(32.W))
    io.branch_pc := branch_pc
    val jump_target = RegInit(0.U(32.W))
    io.jump_target := jump_target
    val branch = RegInit(false.B)
    io.branch := branch
    val jump = RegInit(false.B)
    io.jump := jump
    val branch_cond_selector = RegInit(0.U(2.W))
    io.branch_cond_selector := branch_cond_selector
    val less = RegInit(false.B)
    io.less := less
    val zero = RegInit(false.B)
    io.zero := zero
    val overflow = RegInit(false.B)
    io.overflow := overflow
    val out = RegInit(0.U(32.W))
    io.out := out
    val rt_data = RegInit(0.U(32.W))
    io.rt_data := rt_data
    val rd = RegInit(0.U(5.W))
    io.rd := rd 


    when(io.clr===true.B){
        reg_wr := false.B 
        mem_wr := false.B 
        mem_to_reg := false.B 
        branch := false.B 
        jump := false.B
        // alu_op :=    // avoid overflow error
        // shift_op :=
    } .otherwise{
        reg_wr := io.in_reg_wr
        mem_wr := io.in_mem_wr
        mem_to_reg := io.in_mem_to_reg
        branch_pc := io.in_branch_pc
        branch := io.in_branch
        jump := io.in_jump
        branch_cond_selector := io.in_branch_cond_selector
        jump_target := io.in_jump_target
        less := io.in_less
        zero := io.in_zero
        overflow := io.in_overflow
        out := io.in_out
        rt_data := io.in_rt_data
        rd := io.in_rd
    }
}

class MEM_WR_Register extends Module{
    val io = IO (new Bundle{
        val in_reg_wr = Input(Bool())
        val in_mem_to_reg = Input(Bool())
        val in_out = Input(UInt(32.W))
        val in_mem_data = Input(UInt(32.W))
        val in_rd = Input(UInt(5.W))
        
        val reg_wr = Output(Bool())
        val mem_to_reg = Output(Bool())
        val out = Output(UInt(32.W))
        val mem_data = Output(UInt(32.W))
        val rd = Output(UInt(5.W))
    })

    val reg_wr = RegInit(false.B)
    val mem_to_reg = RegInit(false.B)
    val out = RegInit(0.U(32.W))
    val mem_data = RegInit(0.U(32.W))
    val rd = RegInit(0.U(5.W))

    reg_wr := io.in_reg_wr
    io.reg_wr := reg_wr
    mem_to_reg := io.in_mem_to_reg
    io.mem_to_reg := mem_to_reg
    out := io.in_out
    io.out := out
    mem_data := io.in_mem_data
    io.mem_data := mem_data
    rd := io.in_rd
    io.rd := rd 
}