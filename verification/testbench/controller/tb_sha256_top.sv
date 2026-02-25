`timescale 1ns/1ps
`include "sha256_top.sv"
`include "uart_if.sv"

module tb_sha256_top;

    // Parameters
    localparam int NUM_CORES = 4;
    localparam int CLK_PERIOD = 10;

    // Clock & reset
    logic clk;
    logic reset_n;

    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    initial begin
        reset_n = 0;
        #25;
        reset_n = 1;
    end

    // UART wires
    logic uart_rx;
    logic uart_tx;

    // Instantiate DUT
    sha256_top #(
        .NUM_CORES(NUM_CORES)
    ) dut (
        .clk(clk),
        .reset_n(reset_n),
        .uart_rx(uart_rx),
        .uart_tx(uart_tx)
    );

    // Task to send random UART data
    task send_uart_data(input logic [351:0] data); // 256+96 bits
        begin
            uart_rx = 0;
            #(CLK_PERIOD*5);
            // Direct assignment for simulation
            dut.uart_bus.rx_data = data;
            dut.uart_bus.rx_done = 1'b1;
            #(CLK_PERIOD*10);
            dut.uart_bus.rx_done = 1'b0;
        end
    endtask

    // Randomized test
    initial begin
        logic [255:0] midstate;
        logic [31:0]  merkle_root;
        logic [31:0]  target;
        logic [95:0]  data96;
        logic [351:0] uart_data;

        @(posedge reset_n);

        repeat (5) begin
            // Generate random data
            midstate    = {$urandom, $urandom, $urandom, $urandom, $urandom, $urandom, $urandom, $urandom};
            merkle_root = $urandom;
            target      = $urandom_range(32'h0000_ffff, 32'h0fff_ffff);
            data96      = {merkle_root, target, $urandom};

            uart_data   = {midstate, data96};

            $display("[%0t] Sending random data...", $time);
            send_uart_data(uart_data);

            // Wait for cores to finish
            wait(|{dut.pipe_bus[0].done, dut.pipe_bus[1].done, dut.pipe_bus[2].done, dut.pipe_bus[3].done});
            for(int i=0; i<NUM_CORES; i++) begin
                $display("[%0t] Core %0d digest: %h, target: %h",
                         $time, i, dut.pipe_bus[i].final_digest, target);

                if(dut.pipe_bus[i].final_digest < {224'b0, target})
                    $display("[%0t] Core %0d found valid nonce!", $time, i);
            end

            #(CLK_PERIOD*50);
        end

        $display("Testbench completed.");
        $finish;
    end

endmodule
