module maj (
    input logic [31:0] a,b,c,
    output logic [31:0] z
);

assign z = (a & b) ^ (a & c) ^ (b & c);

endmodule

module ch (
    input logic [31:0] a,b,c,
    output logic [31:0] z
);

assign z = (a & b) ^ ((~a) & c);

endmodule

module sum_zero (
    input logic [31:0] a,
    output logic [31:0] b
);

assign b = {a[1:0],a[31:2]} /* <- RIGHT ROTATE 2*/ ^ {a[12:0],a[31:13]} /* <- RIGHT ROTATE 13*/ ^ {a[21:0],a[31:22]}; /* <- RIGHT ROTATE 22*/

endmodule

module sum_one (
    input logic [31:0] a,
    output logic [31:0] b
);

assign b = {a[5:0],a[31:6]} /* <- RIGHT ROTATE 6*/ ^ {a[10:0],a[31:11]} /* <- RIGHT ROTATE 11*/ ^ {a[24:0],a[31:25]}; /* <- RIGHT ROTATE 25*/

endmodule

module sigma_zero (
    input logic [31:0] a,
    output logic [31:0] b
);

assign b = ({a[6:0],  a[31:7]})  /* RotR(X, 7)*/ ^ {a[17:0], a[31:18]} /* <- RIGHT ROTATE 17*/ ^ ({3'b0, a[31:3]}); /* <- RIGHT SHIFT 3*/

endmodule

module sigma_one (
    input logic [31:0] a,
    output logic [31:0] b
);

assign b = ({a[16:0], a[31:17]}) /* <- RIGHT ROTATE 17*/ ^ ({a[18:0], a[31:19]}) /* <- RIGHT ROTATE 19*/ ^ ({10'b0, a[31:10]}); /* <- RIGHT SHIFT 10*/

endmodule

module csa (
    input logic [31:0] a,b,c,
    output logic [31:0] sum,carry
);

assign sum = a ^ b ^ c;
assign carry = (a & b) | (a & c) | (b & c);

endmodule