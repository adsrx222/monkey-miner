// testbench.cpp
#include <verilated.h>
#include "Vstd_pipeline_core_tb.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vstd_pipeline_core_tb* top = new Vstd_pipeline_core_tb;

    vluint64_t main_time = 0;
    const vluint64_t half_period = 5;

    top->clk = 0;
    top->reset_n = 1;

    // Main simulation loop
    while (!Verilated::gotFinish()) {
        if (main_time % half_period == 0) {
            top->clk = !top->clk;
        }
        top->eval();
        main_time++;
    }

    // Cleanup
    top->final();
    delete top;
    return 0;
}