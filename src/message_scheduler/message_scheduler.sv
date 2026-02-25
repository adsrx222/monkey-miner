`include "../utils.sv"

module message_scheduler (
    input  logic clk,
    input  logic reset_n,
    message_if.in message_in
);

    logic [2047:0] current_result;

    task automatic sha256_schedule(
        input  logic [511:0] block,
        output logic [2047:0] schedule_out
    );
        logic [31:0] W [0:63];
        int t;

        // First 16 words
        for (t = 0; t < 16; t++) begin
            W[t] = block[511 - t*32 -: 32];
        end

        // Remaining words
        for (t = 16; t < 64; t++) begin
            W[t] = sigma1(W[t-2]) + W[t-7] + sigma0(W[t-15]) + W[t-16];
        end

        // Flatten into 2048-bit vector
        for (t = 0; t < 64; t++) begin
            schedule_out[2047 - t*32 -: 32] = W[t];
        end
    endtask

    always_ff @(posedge clk or negedge reset_n) begin
        if (~reset_n) begin
            message_in.schedule <= '0;
        end else begin
            sha256_schedule(message_in.block, message_in.schedule);
        end
    end

endmodule