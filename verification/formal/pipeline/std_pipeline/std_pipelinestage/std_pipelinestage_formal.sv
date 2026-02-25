`default_nettype none 
`timescale 1us / 100 ns

module std_pipelinestage_formal (
    input clk, reset_n,
    input [31:0] wi,
    pipe_if.in input_stage,
    pipe_if.out output_stage
);

    logic [31:0] a_in,b_in,c_in,d_in,e_in,f_in,g_in,h_in;
    logic [31:0] a_out,b_out,c_out,d_out,e_out,f_out,g_out,h_out;
    logic [31:0] t1, t2;
    logic [255:0] packed_ref;

    assign a_in = input_stage.data[31:0];
    assign b_in = input_stage.data[63:32];
    assign c_in = input_stage.data[95:64];
    assign d_in = input_stage.data[127:96];
    assign e_in = input_stage.data[159:128];
    assign f_in = input_stage.data[191:160];
    assign g_in = input_stage.data[223:192];
    assign h_in = input_stage.data[255:224];

    assign a_out = output_stage.data[31:0];
    assign b_out = output_stage.data[63:32];
    assign c_out = output_stage.data[95:64];
    assign d_out = output_stage.data[127:96];
    assign e_out = output_stage.data[159:128];
    assign f_out = output_stage.data[191:160];
    assign g_out = output_stage.data[223:192];
    assign h_out = output_stage.data[255:224];

    assign t1 = h_in + sigma1(e_in) + ch(e_in,f_in,g_in) + k + wi;
    assign t2 = sum0(a_in) + maj(a_in,b_in,c_in);

    assign h_ref = g_in;
    assign g_ref = f_in;
    assign f_ref = e_in;
    assign e_ref = d_in + t1;
    assign d_ref = c_in;
    assign c_ref = b_in;
    assign b_ref = a_in;
    assign a_ref = t1 + t2;

    assign packed_ref = {a_ref,b_ref,c_ref,d_ref,e_ref,f_ref,g_ref,h_ref};

    logic past_valid;

    always_ff @(posedge clk or negedge reset_n) begin
        if (!reset_n)
            past_valid <= 1'b0;
        else
            past_valid <= 1'b1;
    end

    always_ff @ (*) begin
        if(past_valid) begin
            assert(packed_ref == $past(output_stage.data));
        end
    end

endmodule