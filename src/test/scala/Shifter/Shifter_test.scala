
package Shifter

import chisel3._
import chisel3.tester._
import chisel3.iotesters._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class Shifter_test(dut: Shifter) extends PeekPokeTester(dut) {
  poke(dut.io.in, "h_ffff_fff0".U)
  poke(dut.io.amount, 1.U)
  poke(dut.io.operation, 0.U)
  expect(dut.io.out, "h_ffff_ffe0".U)
  step(1)
  poke(dut.io.operation, 1.U)
  expect(dut.io.out, "h_7fff_fff8".U)
  step(1)
  poke(dut.io.operation, 2.U)
  expect(dut.io.out, "h_ffff_fff8".U)
  step(1)
  poke(dut.io.operation, 3.U)
  poke(dut.io.amount, 5.U)
  expect(dut.io.out, "h_87ff_ffff".U)
  step(1)
}

object ShifterGen extends App{
  chisel3.iotesters.Driver.execute(args, ()=>new Shifter) { c => new Shifter_test(c)}
}