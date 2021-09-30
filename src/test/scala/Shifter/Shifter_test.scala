
package Shifter

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class Shifter_test extends FreeSpec with ChiselScalatestTester {

  "Shifter test" in {
    test(new Shifter()) { dut =>
        dut.io.in.poke("h_ffff_fff0".U)
        dut.io.amount.poke(1.U)
        dut.io.operation.poke(0.U)
        dut.io.out.expect("h_ffff_ffe0".U)
        dut.io.operation.poke(1.U)
        dut.io.out.expect("h_7fff_fff8".U)
        dut.io.operation.poke(2.U)
        dut.io.out.expect("h_ffff_fff8".U)
        dut.io.operation.poke(3.U)
        dut.io.amount.poke(4.U)
        dut.io.out.expect("h_0fff_ffff".U)
    }
  }
}