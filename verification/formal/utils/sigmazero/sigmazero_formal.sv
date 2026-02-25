`default_nettype none 
`timescale 1us / 100 ns

module sigmazero_formal (
    input  logic [31:0] a,
    output logic [31:0] b
);

  sigma_zero dut (
      .a(a),
      .b(b),
  );

wire [31:0] ref_b = ((a >> 7) | (a << (32 - 7))) ^  /* ROTR7 */ ((a >> 18) | (a << (32 - 18))) ^ /* ROTR18 */ (a >> 3); // SHR3
always @(*) assert (b == ref_b);

endmodule