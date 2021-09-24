package Register

import chisel3._
import chisel3.util._

class Register extends Module {
    val io = IO (new Bundle{
        val Rs_addr = Input(UInt(5.W))
        val Rt_addr = Input(UInt(5.W))
        val Rd_addr = Input(UInt(5.W))
        val Rd_in = Input(UInt(32.W))
        val Rd_byte_w_en = Input(UInt(4.W))
        val Rs_out = Output(UInt(32.W))
        val Rt_out = Output(UInt(32.W))
    })

    val reg = RegInit(VecInit(Seq.fill(32){VecInit(Seq.fill(4){0.U(8.W)})}))
    
    io.Rs_out := Cat(Cat(Cat(reg(io.Rs_addr)(3), reg(io.Rs_addr)(2)), reg(io.Rs_addr)(1)) ,reg(io.Rs_addr)(0))
    io.Rt_out := Cat(Cat(Cat(reg(io.Rt_addr)(3), reg(io.Rt_addr)(2)), reg(io.Rt_addr)(1)), reg(io.Rt_addr)(0))
    when(io.Rd_addr =/= 0.U){
        when(io.Rd_byte_w_en(0)){
            reg(io.Rd_addr)(0) := io.Rd_in(7, 0)
        }
        when(io.Rd_byte_w_en(1)){
            reg(io.Rd_addr)(1) := io.Rd_in(15, 8)
        }
        when(io.Rd_byte_w_en(2)){
            reg(io.Rd_addr)(2) := io.Rd_in(23, 16)
        }
        when(io.Rd_byte_w_en(3)){
            reg(io.Rd_addr)(3) := io.Rd_in(31, 24)
        }
    }

}