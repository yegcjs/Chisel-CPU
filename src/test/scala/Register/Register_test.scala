// See README.md for license details.

package Register

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class Register_test extends FreeSpec with ChiselScalatestTester {

  "Register test" in {
    test(new Register()) { dut =>
        dut.io.Rs_addr.poke(0.U)
        dut.io.Rt_addr.poke(3.U)
        dut.io.Rd_byte_w_en.poke(3.U)
        dut.io.Rd_addr.poke(3.U)
        dut.io.Rd_in.poke(1048575.U)
        dut.clock.step(1)
        dut.io.Rs_out.expect(0.U)
        dut.io.Rt_out.expect(65535.U) 
        dut.io.Rd_byte_w_en.poke(15.U)
        dut.io.Rd_addr.poke(0.U)
        dut.io.Rd_addr.poke(12342.U)
        dut.clock.step(1)
        dut.io.Rs_out.expect(0.U)
        dut.io.Rt_out.expect(65535.U)
    }
  }
}