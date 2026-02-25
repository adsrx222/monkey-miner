`default_nettype none 
`timescale 1us / 100 ns
`include "utils.sv"

module std_pipeline_stage_tb (
    logic clk,
    logic reset_n
);

    import utils::*;
    logic [31:0] wi;

    pipe_if input_if(clk, reset_n);
    pipe_if output_if(clk, reset_n);

    standard_stage #(.k(32'h12345678)) dut (
        .wi(wi),
        .prev_stage(input_if.in),
        .next_stage(output_if.out)
    );

    logic [255:0] packed_ref;
    logic [255:0] prev_packed_ref;

    function automatic [255:0] compute_ref(
        input [255:0] data,
        input [31:0] w
    );
        logic [31:0] a_in,b_in,c_in,d_in,e_in,f_in,g_in,h_in;
        logic [31:0] t1,t2;
        logic [31:0] a_ref,b_ref,c_ref,d_ref,e_ref,f_ref,g_ref,h_ref;

        {h_in,g_in,f_in,e_in,d_in,c_in,b_in,a_in} = data;

        t1 = h_in + sum1(e_in) + ch(e_in,f_in,g_in) + 32'h12345678 + w;
        t2 = sum0(a_in) + maj(a_in,b_in,c_in);

        a_ref = t1 + t2;
        b_ref = a_in; 
        c_ref = b_in; 
        d_ref = c_in; 
        e_ref = d_in + t1; 
        f_ref = e_in; 
        g_ref = f_in; 
        h_ref = g_in; 

        return {h_ref,g_ref,f_ref,e_ref,d_ref,c_ref,b_ref,a_ref};
    endfunction

    initial begin
        input_if.valid = 0;
        input_if.data  = 0;
        wi = 0;

        repeat(5) @(posedge clk);

        repeat(1000) begin
            @(posedge clk);
            input_if.valid = $urandom_range(0,1)[0];
            input_if.data  = {$urandom,$urandom,$urandom,$urandom,$urandom,$urandom,$urandom,$urandom};
            wi = $urandom;

            packed_ref = compute_ref(input_if.data, wi);
            prev_packed_ref = packed_ref;

            @(posedge clk);

            if (output_if.valid) begin
                if (output_if.data !== prev_packed_ref) begin
                    $display("Mismatch! ❌");
                    $display("Midstate: %h W: %h", input_if.data, wi);
                    $display("Expected: %h", prev_packed_ref);
                    $display("Got     : %h", output_if.data);
                    $fatal;
                end else begin
                    $display("Match! ✅");
                    $display("Expected: %h", prev_packed_ref);
                    $display("Got     : %h", output_if.data);
                end
            end

            
        end

        $display("Test PASSED");
        $finish;
    end

endmodule
