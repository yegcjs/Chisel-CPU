package ALU 

import chisel3._
import chisel3.util._
import javax.xml.transform.OutputKeys


class Adder extends Module{
    val io = IO(new Bundle{
        val cin = Input(UInt(1.W))
        val A_in = Input(UInt(32.W))
        val B_in = Input(UInt(32.W))
        val zero = Output(Bool())
        val carry = Output(Bool())
        val overflow = Output(Bool())
        val negative = Output(Bool())
        val O_out = Output(UInt(32.W))
    })
    val B_in_not = Mux(io.cin===1.U, ~io.B_in, io.B_in)
    val res = io.A_in +& B_in_not +& io.cin
    
    io.carry := res(32)
    io.O_out := res(31, 0)
    io.overflow := (io.A_in(31) && B_in_not(31) && ~res(31)) || (~io.A_in(31) && ~B_in_not(31) && res(31))
    io.negative := res(31)===1.U
    io.zero := (io.O_out === 0.U)
}