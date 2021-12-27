package ALU

import chisel3._
import chisel3.util._
import javax.xml.transform.OutputKeys


class ALU extends Module {
    val io = IO(new Bundle {
        val A_in = Input(UInt(32.W))
        val B_in = Input(UInt(32.W))
        val ALU_op = Input(UInt(4.W))
        val ALU_out = Output(UInt(32.W))
        val Zero = Output(Bool())
        val Less = Output(Bool())
        val Overflow_out = Output(Bool())
    })
    val ctrl = Cat(
        (~io.ALU_op(3) & ~io.ALU_op(1)) | (~io.ALU_op(3) & io.ALU_op(2) & io.ALU_op(0)) | (io.ALU_op(3) & io.ALU_op(1)),
        Cat(
            (~io.ALU_op(3) & ~io.ALU_op(2) & ~io.ALU_op(1)) | (io.ALU_op(3) & ~io.ALU_op(2) & ~io.ALU_op(0)) | (io.ALU_op(2) & io.ALU_op(1) & ~io.ALU_op(0)) | (io.ALU_op(3)&io.ALU_op(1)),
            (~io.ALU_op(2) & ~io.ALU_op(1)) | (~io.ALU_op(3) & io.ALU_op(2) & io.ALU_op(0)) | (io.ALU_op(3) & io.ALU_op(2) & io.ALU_op(1))
        )
    )

    val adder = Module(new Adder())
    adder.io.A_in := io.A_in
    adder.io.B_in := io.B_in
    adder.io.cin := io.ALU_op(0)
    io.Zero := adder.io.zero

    when(io.ALU_op(3, 1) === 7.U){
        io.Overflow_out := adder.io.overflow
    } .otherwise{
        io.Overflow_out := 0.U
    }

    when(io.ALU_op===7.U){
        io.Less := ~adder.io.carry
    }.otherwise{
        io.Less := adder.io.overflow ^ adder.io.negative
    }

    val A_in_not = Mux(io.ALU_op(0), ~io.A_in, io.A_in)
    val tocount = Wire(Vec(32, Bool()))
    val count = Wire(Vec(32, UInt(6.W)))
    for(i <- 31 to 0 by -1){
        if(i==31) tocount(i) := (A_in_not(i)===0.U)
        else tocount(i) := tocount(i+1) & (A_in_not(i)===0.U)
    }
    for(i <- 31 to 0 by -1){
        if(i==31) count(i) := Mux(tocount(i), 1.U, 0.U)
        else count(i) := Mux(tocount(i), count(i+1)+1.U, count(i+1))
    }
    
    io.ALU_out := 0.U
    when(ctrl === 0.U) {
        io.ALU_out := count(0)
    } .elsewhen(ctrl === 1.U){
        io.ALU_out := io.A_in ^ io.B_in
    } .elsewhen (ctrl === 2.U) {
        io.ALU_out := io.A_in | io.B_in
    } .elsewhen(ctrl === 3.U) {
        io.ALU_out := ~(io.A_in | io.B_in)
    } .elsewhen (ctrl === 4.U) {
        io.ALU_out := io.A_in & io.B_in
    } .elsewhen(ctrl === 5.U) {
        io.ALU_out := Mux(io.Less, 1.U, 0.U)
    } .elsewhen(ctrl === 6.U) {
        io.ALU_out := Mux(io.ALU_op(0),
                Cat(Fill(16, io.B_in(15)), io.B_in(15, 0)), // 1
                Cat(Fill(24, io.B_in(7)), io.B_in(7, 0))    // 0
            )
    } .elsewhen (ctrl === 7.U) {
        io.ALU_out := adder.io.O_out
    }    
}