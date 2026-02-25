`default_nettype none 
`timescale 1us / 100 ns

module sumone_formal (
    input  logic [31:0] a,
    output logic [31:0] b
);

  sum_one dut (
      .a(a),
      .b(b),
  );

wire [31:0] ref_b = ((a >> 6) | (a << (32 - 6))) ^  /* ROTR2 */ ((a >> 11) | (a << (32 - 11))) ^ /* ROTR13 */ ((a >> 25) | (a << (32 - 25))); /*ROTR22*/
always @(*) assert (b == ref_b);

endmodule