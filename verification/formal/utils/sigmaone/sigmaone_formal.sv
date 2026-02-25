`default_nettype none `timescale 1us / 100 ns

module sigmaone_formal (
    input  logic [31:0] a,
    output logic [31:0] b
);

  sigma_one dut (
      .a(a),
      .b(b),
  );

  wire [31:0] ref_b = ((a >> 17) | (a << 15)) ^  /* ROTR17*/ ((a >> 19) | (a << 13)) ^  /* ROTR19 */ (a >> 10);  // SHR10
  always @(*) assert (b == ref_b);

endmodule