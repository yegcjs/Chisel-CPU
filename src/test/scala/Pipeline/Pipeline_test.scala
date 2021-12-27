package Pipeline


import chisel3._
import chisel3.tester._
import chisel3.iotesters._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class Pipeline_test(dut: PipelineCPU) extends PeekPokeTester(dut) {
  poke(dut.io.run, false.B)

  poke(dut.io.instr_addr, 0.U)
  poke(dut.io.instr_to_set, "b001000_00000_00010_00000000_00010000".U)  // addi $2 $0 16
  step(3)

  poke(dut.io.instr_addr, 4.U)
  poke(dut.io.instr_to_set, "b001111_00000_00001_00000000_00000001".U)  // lui $1 1
  step(1)
  
  poke(dut.io.instr_addr, 8.U)
  poke(dut.io.instr_to_set, "b000011_00_00000000_00000000_00000011".U)  // jal 3   # pc -> 12
  step(1)

  poke(dut.io.instr_addr, 12.U)
  poke(dut.io.instr_to_set, "b000000_00010_00000_11111_00000_001001".U)  // jalr $2
  step(1)


  poke(dut.io.instr_addr, 16.U)
  poke(dut.io.instr_to_set, "b001010_00010_00011_00000000_00010000".U)  // slti $3 $2 16
  step(1)

  poke(dut.io.instr_addr, 20.U)
  poke(dut.io.instr_to_set, "b001011_00010_00001_11111111_11111111".U)  // sltui $1 $2 2^16-1
  step(1)

  poke(dut.io.instr_addr, 24.U)
  poke(dut.io.instr_to_set, "b001110_00010_00100_11111111_11111111".U)  // xori $4 $2 2^16-1
  step(1)

  poke(dut.io.instr_addr, 28.U)
  poke(dut.io.instr_to_set, "b001101_00100_00100_11111111_11111111".U)  // ori $4 $2 2^16-1
  step(1)

  poke(dut.io.instr_addr, 32.U)
  poke(dut.io.instr_to_set, "b001100_00010_00101_11111111_11111111".U)  // andi $5 $2 2^16-1
  step(1)
  
  poke(dut.io.instr_addr, 36.U)
  poke(dut.io.instr_to_set, "b001000_00000_00100_11111111_11111111".U)  // addi $4 $0 -1
  step(1)

  poke(dut.io.instr_addr, 40.U)
  poke(dut.io.instr_to_set, "b001111_00000_01010_10000000_00000000".U)  // lui $10 0x8000
  step(1)

  poke(dut.io.instr_addr, 44.U)
  poke(dut.io.instr_to_set, "b000000_01010_01010_01010_00000_100000".U)  // add $10 $10 $10
  step(1)

  poke(dut.io.instr_addr, 48.U)
  poke(dut.io.instr_to_set, "b000000_01010_00101_01010_00000_100010".U)  // sub $10 $10 $5
  step(1)

  poke(dut.io.instr_addr, 52.U)
  poke(dut.io.instr_to_set, "b001000_01010_01010_11111111_11111111".U)  // addi $10 $10 -1
  step(1)

  poke(dut.io.instr_addr, 56.U)
  poke(dut.io.instr_to_set, "b000000_00000_00101_00101_00000_000000".U)  // sll $5 $5 2
  step(1)


  poke(dut.io.instr_addr, 60.U)
  poke(dut.io.instr_to_set, "b000000_00000_00100_00110_11111_000010".U)  // srl $6 $4 31
  step(1)


  poke(dut.io.instr_addr, 64.U)
  poke(dut.io.instr_to_set, "b000000_00000_00100_00100_11111_000011".U)  // sra $4 $4 31
  step(1)
  

  poke(dut.io.instr_addr, 68.U)
  poke(dut.io.instr_to_set, "b000000_00101_00110_00110_00000_100000".U)  // add $6 $5 $6
  step(1)


  poke(dut.io.instr_addr, 72.U)
  poke(dut.io.instr_to_set, "b000000_00101_00001_00110_00000_100010".U)  // sub $6 $5 $1
  step(1)


  poke(dut.io.instr_addr, 76.U)
  poke(dut.io.instr_to_set, "b000000_00001_00101_00111_00000_000100".U)  // sllv $7 $5 $1
  step(1)


  poke(dut.io.instr_addr, 80.U)
  poke(dut.io.instr_to_set, "b000000_00111_00101_01000_00000_101010".U)  // slt $8 $7 $5
  step(1)


  poke(dut.io.instr_addr, 84.U)
  poke(dut.io.instr_to_set, "b000000_00100_00111_01000_00000_101011".U)  // sltu $8 $4 $7
  step(1)

  poke(dut.io.instr_addr, 88.U)
  poke(dut.io.instr_to_set, "b000000_00110_00111_01000_00000_100110".U)  // xor $8 $6 $7
  step(1)
  
  poke(dut.io.instr_addr, 92.U)
  poke(dut.io.instr_to_set, "b000000_00110_00100_01000_00000_000110".U)  // srlv $8 $4 $6
  step(1)

  poke(dut.io.instr_addr, 96.U)
  poke(dut.io.instr_to_set, "b000000_00110_00100_01000_00000_000111".U)  // srav $8 $4 $6
  step(1)

  poke(dut.io.instr_addr, 100.U)
  poke(dut.io.instr_to_set, "b000000_00110_00100_00111_00000_100101".U)  // or $7 $6 $4
  step(1)

  poke(dut.io.instr_addr, 104.U)
  poke(dut.io.instr_to_set, "b000000_00100_00000_00111_00000_100100".U)  // and $7 $4 $0
  step(1)

  poke(dut.io.instr_addr, 108.U)
  poke(dut.io.instr_to_set, "b101011_00000_00001_00000000_00000000".U)  // sw $1 0($0)
  step(1)

  poke(dut.io.instr_addr, 112.U)
  poke(dut.io.instr_to_set, "b100011_00000_01000_00000000_00000000".U)  // lw $8 0($0)
  step(1)

  poke(dut.io.instr_addr, 116.U)
  poke(dut.io.instr_to_set, "b000100_01000_01000_00000000_00000000".U)  // beq $8 $8 0
  step(1)

  poke(dut.io.instr_addr, 120.U)
  poke(dut.io.instr_to_set, "b000101_00111_01000_00000000_00000000".U)  // bne $7 $8 0
  step(1)

  poke(dut.io.instr_addr, 124.U)
  poke(dut.io.instr_to_set, "b000001_00100_00000_00000000_00000000".U)  // bltz $4 0
  step(1)

  poke(dut.io.instr_addr, 128.U)
  poke(dut.io.instr_to_set, "b000001_01000_00001_11111111_11111111".U)  // lgez $8 -1
  step(1)

  poke(dut.io.instr_addr, 132.U)
  poke(dut.io.instr_to_set, "b111111_11111_11111_11111111_11111111".U)  // nop
  step(1)

  poke(dut.io.instr_addr, 136.U)
  poke(dut.io.instr_to_set, "b111111_11111_11111_11111111_11111111".U)  // nop
  step(1)

  poke(dut.io.instr_addr, 140.U)
  poke(dut.io.instr_to_set, "b111111_11111_11111_11111111_11111111".U)  // nop
  step(1)

  poke(dut.io.instr_addr, 144.U)
  poke(dut.io.instr_to_set, "b111111_11111_11111_11111111_11111111".U)  // nop
  step(1)

  poke(dut.io.run, true.B)
  step(5)
  expect(dut.io.register_for_peek(2), 16.U)

  step(1)   // t=6
  expect(dut.io.register_for_peek(1), "h_0001_0000".U)

  step(1)   // t=7
  expect(dut.io.register_for_peek(31), 12.U)

  step(4)   // t=11
  expect(dut.io.register_for_peek(31), 16.U)

  step(4)   // t=15
  expect(dut.io.register_for_peek(3), 0.U)

  step(1)   // t=16
  expect(dut.io.register_for_peek(1), 1.U)

  step(1)   // t=17
  expect(dut.io.register_for_peek(4), "h_0000_ffef".U)

  step(1)   // t=18
  expect(dut.io.register_for_peek(4), "h_0000_ffff".U)

  step(1)   // t=19
  expect(dut.io.register_for_peek(5), 16.U)

  step(1)   // t=20
  expect(dut.io.register_for_peek(4), "h_ffff_ffff".U)

  step(1)   // t=21
  expect(dut.io.register_for_peek(10), "h_8000_0000".U)

  step(1)   // t=22
  expect(dut.io.register_for_peek(10), "h_8000_0000".U)

  step(1)   // t=23
  expect(dut.io.register_for_peek(10), "h_8000_0000".U)

  step(1)   // t=24
  expect(dut.io.register_for_peek(10), "h_8000_0000".U)

  step(1)   // t=25
  expect(dut.io.register_for_peek(5), 16.U)

  step(1)   // t=26
  expect(dut.io.register_for_peek(6), 1.U)

  step(1)   // t=27
  expect(dut.io.register_for_peek(4), "h_ffff_ffff".U)

  step(1)   // t=28
  expect(dut.io.register_for_peek(6), 17.U)

  step(1)   // t=29
  expect(dut.io.register_for_peek(6), 15.U)

  step(1)   // t=30
  expect(dut.io.register_for_peek(7), 32.U)

  step(1)   // t=31
  expect(dut.io.register_for_peek(8), 0.U)

  step(1)   // t=32
  expect(dut.io.register_for_peek(8), 0.U)

  step(1)   // t=33
  expect(dut.io.register_for_peek(8), "h_0000_002f".U)

  step(1)   // t=34
  expect(dut.io.register_for_peek(8), "h_0001_ffff".U)

  step(1)   // t=35
  expect(dut.io.register_for_peek(8), "h_ffff_ffff".U)

  step(1)   // t=36
  expect(dut.io.register_for_peek(7), "h_ffff_ffff".U)

  step(1)   // t=37
  expect(dut.io.register_for_peek(7), "h_0000_0000".U)

  step(2)   // t=39
  expect(dut.io.register_for_peek(8), 1.U)

  step(2)   // t=40
  expect(dut.io.pc_for_peek, 124.U)

  step(4)   // t=44
  expect(dut.io.pc_for_peek, 128.U)

  step(4)   // t=48
  expect(dut.io.pc_for_peek, 132.U)

  step(4)   // t=52
  expect(dut.io.pc_for_peek, 132.U)
}

object PipelineGen extends App{
  chisel3.iotesters.Driver.execute(args, () => new PipelineCPU) {c => new Pipeline_test(c)}
}