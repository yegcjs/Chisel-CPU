package CPU

import chisel3._
import chisel3.tester._
import chisel3.iotesters._
import org.scalatest.FreeSpec
import chisel3.experimental.BundleLiterals._

class CPU_test(dut: CPU) extends PeekPokeTester(dut) {
    poke(dut.io.instruction, "b001111_00000_00001_00000000_00000001".U) // lui $1 1
    step(1) // 1
    expect(dut.io.pc_for_peek, "h_0000_0001".U(30.W))
    expect(dut.io.register_for_peek(1), "h_0001_0000".U) // $1=2<<16


    poke(dut.io.instruction, "b000011_00_00000000_00000000_00000011".U) // jal 3
    step(1) // 2
    expect(dut.io.pc_for_peek, 3.U(30.W)) 
    expect(dut.io.register_for_peek(31), 8.U)

    poke(dut.io.instruction, "b000000_00001_00000_11111_00000_001001".U) // Jalr $1
    step(1) // 3
    expect(dut.io.pc_for_peek, "h_0000_4000".U(30.W))
    expect(dut.io.register_for_peek(31), 16.U)

    poke(dut.io.instruction, "b001000_00000_00010_00000000_00001000".U) // Addi $2 $0 8
    step(1) // 4
    expect(dut.io.register_for_peek(2), 8.U)


    poke(dut.io.instruction, "b001010_00010_00011_00000000_00010000".U) // Slti $3 $2 16
    step(1) // 5
    expect(dut.io.register_for_peek(3), 1.U)

    poke(dut.io.instruction, "b001011_00010_00001_11111111_11111111".U) // Sltui $1 $2 2^16-1  
    step(1) // 6
    expect(dut.io.register_for_peek(1), 1.U)


    poke(dut.io.instruction, "b001110_00010_00100_11111111_11111111".U) // Xori $4 $2 2^16-1 
    step(1) // 7
    expect(dut.io.register_for_peek(4), "h_0000_fff7".U)

    poke(dut.io.instruction, "b001101_00100_00100_11111111_11111111".U) // Ori $4 $2 2^16-1 
    step(1) // 8
    expect(dut.io.register_for_peek(4), "h_0000_ffff".U)

    poke(dut.io.instruction, "b001100_00010_00101_11111111_11111111".U) // Andi $5 $2 2^16-1
    step(1) // 9
    expect(dut.io.register_for_peek(2), 8.U)
    expect(dut.io.register_for_peek(5), 8.U)

    poke(dut.io.instruction, "b001000_00000_00100_11111111_11111111".U) // addi $4 $0 -1
    step(1) // 10
    expect(dut.io.register_for_peek(4), "h_ffff_ffff".U)


    poke(dut.io.instruction, "b001111_00000_01010_10000000_00000000".U) // lui $10 0x8000
    step(1) // 11
    expect(dut.io.register_for_peek(10), "h_8000_0000".U)

    poke(dut.io.instruction, "b000000_01010_01010_01010_00000_100000".U) // add $10 $10 $10
    step(1) // 12
    expect(dut.io.register_for_peek(10), "h_8000_0000".U)

    poke(dut.io.instruction, "b000000_01010_00001_01010_00000_100010".U) // sub $10 $10 $1
    step(1) // 13
    expect(dut.io.register_for_peek(10), "h_8000_0000".U)

    poke(dut.io.instruction, "b001000_01010_01010_11111111_11111111".U) // addi $10 $10 -1
    step(1) // 14
    expect(dut.io.register_for_peek(10), "h_8000_0000".U)

    poke(dut.io.instruction, "b000000_00000_00101_00101_00010_000000".U) // Sll $5 $5 2
    step(1) // 15
    expect(dut.io.register_for_peek(5), 32.U)

    poke(dut.io.instruction, "b000000_00000_00100_00110_11111_000010".U) // Srl $6 $4 31
    step(1) // 16
    expect(dut.io.register_for_peek(6), 1.U)

    poke(dut.io.instruction, "b000000_00000_00100_00100_11111_000011".U) // Sra $4 $4 31 
    step(1) // 17
    expect(dut.io.register_for_peek(4), "h_ffff_ffff".U)

    poke(dut.io.instruction, "b000000_00101_00110_00110_00000_100000".U) // Add $6 $5 $6 
    step(1) // 18
    expect(dut.io.register_for_peek(6), 33.U)

    poke(dut.io.instruction, "b000000_00101_00001_00110_00000_100010".U) // Sub $6 $5 $1
    step(1) // 19
    expect(dut.io.register_for_peek(6), 31.U)

    poke(dut.io.instruction, "b000000_00001_00101_00111_00000_000100".U) // Sllv $7 $5 $1
    step(1) // 20
    expect(dut.io.register_for_peek(1), 1.U)
    expect(dut.io.register_for_peek(7), 64.U)


    poke(dut.io.instruction, "b000000_00101_00111_01000_00000_101010".U) // Slt $8 $7 $5
    step(1) // 21
    expect(dut.io.register_for_peek(8), 1.U)

    poke(dut.io.instruction, "b000000_00100_00111_01000_00000_101011".U) // Sltu $8 $7 $4
    step(1) // 22
    expect(dut.io.register_for_peek(8), 0.U)


    poke(dut.io.instruction, "b000000_00110_00111_01000_00000_100110".U) // Xor $8 $6 $7
    step(1) // 23
    expect(dut.io.register_for_peek(8), 95.U)


    poke(dut.io.instruction, "b000000_00110_00100_01000_00000_000110".U) // srlv $8 $4 $6
    step(1) // 24
    expect(dut.io.register_for_peek(8), 1.U)


    poke(dut.io.instruction, "b000000_00110_00100_01000_00000_000111".U) // srav $8 $4 $6
    step(1) // 25
    expect(dut.io.register_for_peek(8), "h_ffff_ffff".U)


    poke(dut.io.instruction, "b000000_00110_00100_00111_00000_100101".U) // Or $7 $6 $4
    step(1) // 26
    expect(dut.io.register_for_peek(7), "h_ffff_ffff".U)

    poke(dut.io.instruction, "b000000_00100_00000_00111_00000_100100".U) // And $7 $4 $0
    step(1) //27
    expect(dut.io.register_for_peek(7), 0.U)

    poke(dut.io.instruction, "b000000_11111_00000_11111_00000_001001".U) // Jalr $31
    step(1) //28
    expect(dut.io.pc_for_peek, 4.U(30.W))

    poke(dut.io.instruction, "b000100_00100_01000_00000000_00000001".U) // Beq $4 $8 1
    step(1) // 29
    expect(dut.io.pc_for_peek, 6.U(30.W))


    poke(dut.io.instruction, "b000101_00111_01000_11111111_11111111".U) // Bne $7 $8 -1
    step(1)
    expect(dut.io.pc_for_peek, 6.U(30.W))

    poke(dut.io.instruction, "b000001_01000_00000_11111111_11111111".U) // Bltz $7 -1
    // expect(dut.io.operand_1, (-1).U)
    // expect(dut.io.operand_2, 0.U)
    step(1) // 31
    expect(dut.io.pc_for_peek, 6.U(30.W))
    
    poke(dut.io.instruction, "b000001_00000_00001_11111111_11111111".U) // Lgez $0 -1 
    step(1) // 32
    expect(dut.io.pc_for_peek, 6.U(30.W))
    // expect(dut.io.operand_1, 0.U)
    //expect(dut.io.operand_2, 0.U)

}

object CPUGen extends App{
  chisel3.iotesters.Driver.execute(args, () => new CPU) {c => new CPU_test(c)}
}