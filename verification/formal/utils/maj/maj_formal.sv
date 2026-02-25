`default_nettype none 
`timescale 1us / 100 ns

module maj_formal (
    input  logic [31:0] a,b,c,
    output logic [31:0] z
);

  maj dut (
      .a(a),
      .b(b),
      .c(c),
      .z(z)
  );

  wire [31:0] ref_z = (a & b) ^ (a & c) ^ (b & c);

  always @(*) assert (z == ref_z);

endmodule