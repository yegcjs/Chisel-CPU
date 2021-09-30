
package ALU

import chisel3._
import chisel3.tester._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class ALU_test extends FreeSpec with ChiselScalatestTester {

  "ALU test" in {
    test(new ALU()) { dut =>
        dut.io.A_in.poke("h_7fff_ffff".U)
        dut.io.B_in.poke("h_0000_0001".U)

        dut.io.ALU_op.poke(0.U)
        dut.io.ALU_out.expect("h_8000_0000".U)
        dut.io.Zero.expect(false.B)
        dut.io.Less.expect(false.B)
        dut.io.Overflow_out.expect(false.B)

        dut.io.ALU_op.poke(1.U)
        dut.io.ALU_out.expect("h_7fff_fffe".U)
        dut.io.Zero.expect(false.B)
        dut.io.Less.expect(false.B)
        dut.io.Overflow_out.expect(false.B)

        dut.io.A_in.poke("h_0a00_0000".U)
        dut.io.B_in.poke("h_ff00_0000".U)
        dut.io.ALU_op.poke(2.U)
        dut.io.ALU_out.expect(4.U)
        dut.io.Less.expect(false.B)
        
        dut.io.A_in.poke("h_ff11_1111".U)
        dut.io.ALU_op.poke(3.U)
        dut.io.ALU_out.expect(8.U)
        dut.io.Less.expect(false.B)

        dut.io.ALU_op.poke(4.U)
        dut.io.ALU_out.expect("h_ff00_0000".U)
        
        dut.io.B_in.poke("h_0f00_0000".U)
        dut.io.ALU_op.poke(5.U)
        dut.io.ALU_out.expect(1.U)

        dut.io.ALU_op.poke(6.U)
        dut.io.ALU_out.expect("h_ff11_1111".U)

        dut.io.ALU_op.poke(7.U)
        dut.io.ALU_out.expect(0.U)

        dut.io.ALU_op.poke(8.U)
        dut.io.ALU_out.expect("h_00ee_eeee".U)

        dut.io.ALU_op.poke(9.U)
        dut.io.ALU_out.expect("h_f011_1111".U)

        dut.io.B_in.poke("h_1234_f00f".U)
        dut.io.ALU_op.poke(10.U)
        dut.io.ALU_out.expect(15.U)

        dut.io.ALU_op.poke(11.U)
        dut.io.ALU_out.expect("h_ffff_f00f".U)

        dut.io.A_in.poke("h_7000_0000".U)
        dut.io.ALU_op.poke(14.U)
        dut.io.ALU_out.expect("h_8234_f00f".U)
        dut.io.Overflow_out.expect(true.B)
        dut.io.Less.expect(false.B)

        dut.io.ALU_op.poke(15.U)
        dut.io.ALU_out.expect("h_5dcb_0ff1".U)
        dut.io.Overflow_out.expect(false.B)

        dut.io.A_in.poke(0xfffffff8L.U)
        dut.io.B_in.poke(0xffffffffL.U)
        dut.io.ALU_op.poke("b0111".U)
        dut.io.ALU_out.expect(1.U)
        dut.io.Less.expect(true.B)
        dut.io.Overflow_out.expect(false.B)
        dut.io.Zero.expect(false.B)
    }
  }
}