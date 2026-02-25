interface pipe_if (input logic clk, reset_n);

    logic [255:0] data;
    logic valid;

    modport out (output data, valid, input clk, reset_n);
    modport in  (input data, valid, input clk, reset_n);

endinterface

module standard_stage # (parameter bit [31:0] k) (
    input logic [31:0] wi, 
    input pipe_if.in prev_stage, 
    input pipe_if.out next_stage
);

    logic [31:0] csa0_sum;
    logic [31:0] csa0_carry;

    logic [31:0] csa1_sum;
    logic [31:0] csa1_carry;

    logic [31:0] csa2_sum;
    logic [31:0] csa2_carry;

    always @ (posedge prev_stage.clk or negedge prev_stage.reset_n) begin
        if(~prev_stage.reset_n) begin

            next_stage.data <= '{default:0};
            next_stage.valid <= 1'b0;

        end else if (prev_stage.valid) begin

            csa(sum0(prev_stage.data[31:0]), maj(prev_stage.data[31:0],prev_stage.data[63:32],prev_stage.data[95:64]), prev_stage.data[127:96], csa0_carry, csa0_sum);

            csa(sum1(prev_stage.data[159:128]),ch(prev_stage.data[159:128],prev_stage.data[191:160],prev_stage.data[223:192]), prev_stage.data[255:224], csa1_carry, csa1_sum);

            csa(prev_stage.data[223:192],prev_stage.data[31:0],wi,csa2_carry, csa2_sum);

            next_stage.data[31:0] <= csa0_sum + (csa0_carry << 1);
            next_stage.data[63:32] <= prev_stage.data[31:0];
            next_stage.data[95:64] <= prev_stage.data[63:32];
            next_stage.data[127:96] <= prev_stage.data[95:64] + prev_stage.data[159:128] + 1;
            next_stage.data[159:128] <= csa1_sum + (csa1_carry << 1);
            next_stage.data[191:160] <= prev_stage.data[159:128];
            next_stage.data[223:192] <= prev_stage.data[191:160];
            next_stage.data[255:224] <= csa2_sum + (csa2_carry << 1) + k;

            next_stage.valid <= prev_stage.valid;
        end
    end

endmodule