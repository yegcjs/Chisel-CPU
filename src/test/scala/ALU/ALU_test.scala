
package ALU

import chisel3._
import chisel3.tester._
import chisel3.iotesters._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._


class ALU_test(dut: ALU) extends PeekPokeTester(dut){

    poke(dut.io.A_in, "h_7fff_ffff".U)
    poke(dut.io.B_in, "h_0000_0001".U)

    poke(dut.io.ALU_op, 0.U)
    expect(dut.io.ALU_out, "h_8000_0000".U)
    expect(dut.io.Zero, false.B)
    expect(dut.io.Less, false.B)
    expect(dut.io.Overflow_out, false.B)
    step(1)
    poke(dut.io.ALU_op, 1.U)
    expect(dut.io.ALU_out, "h_7fff_fffe".U)
    expect(dut.io.Zero, false.B)
    expect(dut.io.Less, false.B)
    expect(dut.io.Overflow_out, false.B)
    step(1)
    poke(dut.io.A_in, "h_0a00_0000".U)
    poke(dut.io.B_in, "h_ff00_0000".U)
    poke(dut.io.ALU_op, 2.U)
    expect(dut.io.ALU_out, 4.U)
    expect(dut.io.Less, false.B)
    step(1)
    poke(dut.io.A_in, "h_ff11_1111".U)
    poke(dut.io.ALU_op, 3.U)
    expect(dut.io.ALU_out, 8.U)
    expect(dut.io.Less, false.B)
    step(1)
    poke(dut.io.ALU_op, 4.U)
    expect(dut.io.ALU_out, "h_ff00_0000".U)
    step(1)
    poke(dut.io.B_in, "h_0f00_0000".U)
    poke(dut.io.ALU_op, 5.U)
    expect(dut.io.ALU_out, 1.U)
    step(1)
    poke(dut.io.ALU_op, 6.U)
    expect(dut.io.ALU_out, "h_ff11_1111".U)
    step(1)
    poke(dut.io.ALU_op, 7.U)
    expect(dut.io.ALU_out, 0.U)
    step(1)
    poke(dut.io.ALU_op, 8.U)
    expect(dut.io.ALU_out, "h_00ee_eeee".U)
    step(1)
    poke(dut.io.ALU_op, 9.U)
    expect(dut.io.ALU_out, "h_f011_1111".U)
    step(1)
    poke(dut.io.B_in, "h_1234_f00f".U)
    poke(dut.io.ALU_op, 10.U)
    expect(dut.io.ALU_out, 15.U)

    step(1)
    poke(dut.io.ALU_op, 11.U)
    expect(dut.io.ALU_out, "h_ffff_f00f".U)

    step(1)
    poke(dut.io.A_in, "h_7000_0000".U)
    poke(dut.io.ALU_op, 14.U)
    expect(dut.io.ALU_out, "h_8234_f00f".U)
    expect(dut.io.Overflow_out,true.B)
    expect(dut.io.Less, false.B)

    step(1)
    poke(dut.io.ALU_op, 15.U)
    expect(dut.io.ALU_out, "h_5dcb_0ff1".U)
    expect(dut.io.Overflow_out, false.B)

    step(1)
    poke(dut.io.A_in, 0xfffffff8L.U)
    poke(dut.io.B_in, 0xffffffffL.U)
    poke(dut.io.ALU_op, "b0111".U)
    expect(dut.io.ALU_out, 1.U)
    expect(dut.io.Less, true.B)
    expect(dut.io.Overflow_out, false.B)
    expect(dut.io.Zero, false.B)
}


object ALUGen extends App{
  chisel3.iotesters.Driver.execute(args, () => new ALU) {c => new ALU_test(c)}
}