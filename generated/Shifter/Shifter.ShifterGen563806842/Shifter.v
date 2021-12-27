module Shifter(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  input  [4:0]  io_amount,
  input  [1:0]  io_operation,
  output [31:0] io_out
);
  wire [63:0] extended_in = {io_in,32'h0}; // @[Cat.scala 30:58]
  wire [62:0] _GEN_3 = {{31'd0}, io_in}; // @[Shifter.scala 18:24]
  wire [62:0] _io_out_T = _GEN_3 << io_amount; // @[Shifter.scala 18:24]
  wire [31:0] _io_out_T_1 = io_in >> io_amount; // @[Shifter.scala 20:24]
  wire [31:0] _io_out_T_4 = $signed(io_in) >>> io_amount; // @[Shifter.scala 22:53]
  wire [63:0] _io_out_T_5 = extended_in >> io_amount; // @[Shifter.scala 24:31]
  wire [31:0] _io_out_T_9 = _io_out_T_5[63:32] | _io_out_T_5[31:0]; // @[Shifter.scala 24:52]
  wire [31:0] _GEN_0 = io_operation == 2'h2 ? _io_out_T_4 : _io_out_T_9; // @[Shifter.scala 21:38 Shifter.scala 22:16 Shifter.scala 24:16]
  wire [31:0] _GEN_1 = io_operation == 2'h1 ? _io_out_T_1 : _GEN_0; // @[Shifter.scala 19:38 Shifter.scala 20:16]
  wire [62:0] _GEN_2 = io_operation == 2'h0 ? _io_out_T : {{31'd0}, _GEN_1}; // @[Shifter.scala 17:31 Shifter.scala 18:16]
  assign io_out = _GEN_2[31:0];
endmodule
