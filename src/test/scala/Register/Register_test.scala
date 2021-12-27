// See README.md for license details.

package Register

import chisel3._
import chisel3.iotesters._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._
import chisel3.iotesters.PeekPokeTester

class Register_test(dut: Register) extends PeekPokeTester(dut) {
  poke(dut.io.Rs_addr, 0.U)
  poke(dut.io.Rt_addr, 3.U)
  poke(dut.io.Rd_byte_w_en, 3.U)
  poke(dut.io.Rd_addr, 3.U)
  poke(dut.io.Rd_in, 1048575.U)
  step(1)
  expect(dut.io.Rs_out, 0.U)
  expect(dut.io.Rt_out, 65535.U) 
  poke(dut.io.Rd_byte_w_en, 15.U)
  poke(dut.io.Rd_addr, 0.U)
  poke(dut.io.Rd_addr, 12342.U)
  step(1)
  expect(dut.io.Rs_out, 0.U)
  expect(dut.io.Rt_out,65535.U)
  step(1)
}

object RegisterGen extends App{
  chisel3.iotesters.Driver.execute(args, ()=>new Register) { c => new Register_test(c)}
}