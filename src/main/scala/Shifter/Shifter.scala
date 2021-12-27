package Shifter

import chisel3._
import chisel3.util._


class Shifter extends Module {
    val io = IO(new Bundle {
        val in = Input(UInt(32.W))
        val amount = Input(UInt(5.W))
        val operation = Input(UInt(2.W))
        val out = Output(UInt(32.W))
    })
    val extended_in = Cat(io.in, 0.U(32.W))
    //val shifted_in = Wire(UInt(64.W))
    
    when(io.operation === 0.U){    // logit left
        io.out := io.in<<io.amount;
    } .elsewhen(io.operation === 1.U){
        io.out := io.in>>io.amount
    } .elsewhen(io.operation === 3.U){
        io.out := (io.in.asSInt()>>io.amount).asUInt()
    } .otherwise{
        io.out := (extended_in>>io.amount)(63, 32) | (extended_in>>io.amount)(31, 0)
    }
}