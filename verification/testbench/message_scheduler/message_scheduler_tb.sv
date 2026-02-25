`default_nettype none
`timescale 1us / 100 ns
`include "utils.sv"

module message_scheduler_tb (
    input logic clk,
    input logic reset_n
);

    import utils::*;

    message_if tb_if (.*);

    message_scheduler dut (
        .clk(clk),
        .reset_n(reset_n),
        .message_in(tb_if.in)
    );

    logic [2047:0] ref_schedule;
    logic [2047:0] prev_ref_schedule;

    function automatic logic [2047:0] compute_ref (
        input logic [511:0] block
    );

        logic [31:0] W [0:63];
        logic [2047:0] result;
        int t;

        for (t = 0; t < 16; t++) begin
            W[t] = block[511 - (t*32) -: 32];
        end

        for (t = 16; t < 64; t++) begin
            W[t] = sigma1(W[t-2]) +
                   W[t-7] +
                   sigma0(W[t-15]) +
                   W[t-16];
        end

        for (t = 0; t < 64; t++) begin
            result[2047 - (t*32) -: 32] = W[t];
        end

        return result;

    endfunction


    initial begin

        tb_if.block = '0;

        repeat (5) @(posedge clk);

        repeat (1000) begin

            @(posedge clk);

            tb_if.block = {8{$urandom,$urandom}};

            ref_schedule      = compute_ref(tb_if.block);
            prev_ref_schedule = ref_schedule;

            @(posedge clk);

            if (tb_if.schedule !== prev_ref_schedule) begin
                $display("Mismatch! ❌");
                $display("Expected: %h", prev_ref_schedule);
                $display("Got     : %h", tb_if.schedule);
                $fatal;
            end
            else begin
                $display("Match! ✅");
            end

        end

        $display("Message Scheduler Test PASSED");
        $finish;

    end

endmodule
