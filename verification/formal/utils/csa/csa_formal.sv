`default_nettype none 
`timescale 1us / 100 ns

module csa_formal (
    input  logic [31:0] a,b,c,
    output logic [31:0] sum, carry,
);

csa dut (
      .a(a),
      .b(b),
      .c(c),
      .sum(sum),
      .carry(carry)
);

always @(*) begin
    assert (a + b + c == (2 * carry) + sum);
end

endmodule