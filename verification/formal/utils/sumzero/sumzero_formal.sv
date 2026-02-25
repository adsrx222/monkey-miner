`default_nettype none 
`timescale 1us / 100 ns

module sumzero_formal (
    input  logic [31:0] a,
    output logic [31:0] b
);

  sum_zero dut (
      .a(a),
      .b(b),
  );

wire [31:0] ref_b = ((a >> 2) | (a << (32 - 2))) ^  /* ROTR2 */ ((a >> 13) | (a << (32 - 13))) ^ /* ROTR13 */ ((a >> 22) | (a << (32 - 22))); /*ROTR22*/
always @(*) assert (b == ref_b);

endmodule