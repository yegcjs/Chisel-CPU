;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit Shifter : 
  module Shifter : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip in : UInt<32>, flip amount : UInt<5>, flip operation : UInt<2>, out : UInt<32>}
    
    node extended_in = cat(io.in, UInt<32>("h00")) @[Cat.scala 30:58]
    node _T = eq(io.operation, UInt<1>("h00")) @[Shifter.scala 17:23]
    when _T : @[Shifter.scala 17:31]
      node _io_out_T = dshl(io.in, io.amount) @[Shifter.scala 18:24]
      io.out <= _io_out_T @[Shifter.scala 18:16]
      skip @[Shifter.scala 17:31]
    else : @[Shifter.scala 19:38]
      node _T_1 = eq(io.operation, UInt<1>("h01")) @[Shifter.scala 19:30]
      when _T_1 : @[Shifter.scala 19:38]
        node _io_out_T_1 = dshr(io.in, io.amount) @[Shifter.scala 20:24]
        io.out <= _io_out_T_1 @[Shifter.scala 20:16]
        skip @[Shifter.scala 19:38]
      else : @[Shifter.scala 21:38]
        node _T_2 = eq(io.operation, UInt<2>("h02")) @[Shifter.scala 21:30]
        when _T_2 : @[Shifter.scala 21:38]
          node _io_out_T_2 = asSInt(io.in) @[Shifter.scala 22:32]
          node _io_out_T_3 = dshr(_io_out_T_2, io.amount) @[Shifter.scala 22:34]
          node _io_out_T_4 = asUInt(_io_out_T_3) @[Shifter.scala 22:53]
          io.out <= _io_out_T_4 @[Shifter.scala 22:16]
          skip @[Shifter.scala 21:38]
        else : @[Shifter.scala 23:17]
          node _io_out_T_5 = dshr(extended_in, io.amount) @[Shifter.scala 24:31]
          node _io_out_T_6 = bits(_io_out_T_5, 63, 32) @[Shifter.scala 24:43]
          node _io_out_T_7 = dshr(extended_in, io.amount) @[Shifter.scala 24:66]
          node _io_out_T_8 = bits(_io_out_T_7, 31, 0) @[Shifter.scala 24:78]
          node _io_out_T_9 = or(_io_out_T_6, _io_out_T_8) @[Shifter.scala 24:52]
          io.out <= _io_out_T_9 @[Shifter.scala 24:16]
          skip @[Shifter.scala 23:17]
    
