`default_nettype none 
`timescale 1us / 100 ns
`include "utils.sv"

module std_pipeline_core_tb (
    input logic clk,
    input logic reset_n
);

    import utils::*;

    pipecore_if tb_if (.*);

    standard_pipeline pipeline (
        .clk(clk),
        .reset_n(reset_n),
        .out_if(tb_if.out)
    );

    logic [255:0] packed_ref;
    logic [255:0] prev_packed_ref;

    function automatic [255:0] compute_stage (
        input [255:0] data,
        input [31:0] w_message
    );
        logic [31:0] a,b,c,d,e,f,g,h;
        logic [31:0] t1,t2;
        logic [31:0] a_ref,b_ref,c_ref,d_ref,e_ref,f_ref,g_ref,h_ref;

        {h,g,f,e,d,c,b,a} = data;

        t1 = h + sigma1(e) + ch(e,f,g) + 32'h12345678 + w_message;
        t2 = sum0(a) + maj(a,b,c);

        h_ref = g;
        g_ref = f;
        f_ref = e;
        e_ref = d + t1;
        d_ref = c;
        c_ref = b;
        b_ref = a;
        a_ref = t1 + t2;

        return {h_ref,g_ref,f_ref,e_ref,d_ref,c_ref,b_ref,a_ref};
    endfunction

    function automatic [255:0] compute_ref (
        input [255:0] midstate_data,
        input [2047:0] message
    );
        logic [255:0] result;
        logic [31:0] wi;

        result = midstate_data;

        for (int i = 0; i < 64; i++) begin
            wi = message[i*32 +: 32];
            result = compute_stage(result,wi);
        end

        return result;
    endfunction

    initial begin
        repeat(5) @(posedge clk);

        repeat(1000) begin
            @(posedge clk);
            //randomize message, standardized h_init
            tb_if.enable = $urandom_range(0,1)[0];
            tb_if.midstate = h_init;
            tb_if.message = {64{$urandom}};

            packed_ref = compute_ref(tb_if.midstate, tb_if.message);
            prev_packed_ref = packed_ref;

            @(posedge clk);

            if (tb_if.done) begin
                if (tb_if.final_digest !== prev_packed_ref) begin
                    $display("Mismatch! ❌");
                    $display("Expected: %h", prev_packed_ref);
                    $display("Got     : %h", tb_if.final_digest);
                    $fatal;
                end else begin
                    $display("Match! ✅");
                    $display("Expected: %h", prev_packed_ref);
                    $display("Got     : %h", tb_if.final_digest);
                    $fatal;
                end
            end
        end

        $display("Test PASSED");
        $finish;
    end


endmodule
