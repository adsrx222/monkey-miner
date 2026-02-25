`default_nettype none
`timescale 1us / 100 ns

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
/* verilator lint_off CASEINCOMPLETE */
/* verilator lint_off SYNCASYNCNET */

module uart_top_tb (
    input logic clk,
    input logic reset_n
);

    logic start_midstate;
    logic start_broadcast;
    logic [255:0] midstate;
    logic [95:0]  data96;
    logic [31:0]  broadcast_value;
    logic busy;

    logic tx;      // intentionally unused
    logic rx = 0;  // tie low to avoid UNDRIVEN warning

    uart_top dut (
        .clk(clk),
        .reset_n(reset_n),
        .start_midstate(start_midstate),
        .start_broadcast(start_broadcast),
        .midstate(midstate),
        .data96(data96),
        .broadcast_value(broadcast_value),
        .busy(busy),
        .tx(tx),
        .rx(rx)
    );

    logic [7:0] captured_bytes [0:63];
    integer capture_index;

    initial capture_index = 0;

    always @(posedge clk) begin
        if (!reset_n) begin
            capture_index <= 0;
        end
    end

    task automatic capture_broadcast_bytes(input [31:0] value);
        integer i;
    begin
        for (i = 0; i < 4; i = i+1) begin
            captured_bytes[capture_index] = value[31-i*8 -: 8];
            capture_index = capture_index + 1;
        end
    end
    endtask

    task automatic capture_midstate_bytes(input [255:0] m, input [95:0] d);
        integer i;
        reg [351:0] combined;
    begin
        combined = {m,d};
        for (i = 0; i < 44; i=i+1) begin
            captured_bytes[capture_index] = combined[351-i*8 -: 8];
            capture_index = capture_index + 1;
        end
    end
    endtask

    task automatic check_broadcast(input [31:0] value);
        integer i;
    begin
        for (i = 0; i < 4; i=i+1) begin
            if (captured_bytes[i] !== value[31-i*8 -: 8]) $fatal;
        end
    end
    endtask

    task automatic check_midstate(input [255:0] m, input [95:0] d);
        integer i;
        reg [351:0] combined;
    begin
        combined = {m,d};
        for (i = 0; i < 44; i=i+1) begin
            if (captured_bytes[i] !== combined[351-i*8 -: 8]) $fatal;
        end
    end
    endtask

    initial begin
        wait(reset_n);
        repeat (5) @(posedge clk);

        repeat (50) begin
            capture_index = 0;
            @(posedge clk);
            broadcast_value = $urandom;
            start_broadcast = 1;
            @(posedge clk);
            start_broadcast = 0;
            wait(!busy);
            capture_broadcast_bytes(broadcast_value);
            check_broadcast(broadcast_value);
        end

        repeat (20) begin
            capture_index = 0;
            @(posedge clk);
            midstate = {$urandom,$urandom,$urandom,$urandom,
                        $urandom,$urandom,$urandom,$urandom};
            data96   = {$urandom,$urandom,$urandom};
            start_midstate = 1;
            @(posedge clk);
            start_midstate = 0;
            wait(!busy);
            capture_midstate_bytes(midstate,data96);
            check_midstate(midstate,data96);
        end

        $display("UART Top Test PASSED ✅");
        $finish;
    end

endmodule

/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNDRIVEN */
/* verilator lint_on CASEINCOMPLETE */
/* verilator lint_on SYNCASYNCNET */

