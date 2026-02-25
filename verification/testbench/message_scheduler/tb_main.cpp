// testbench.cpp
#include <verilated.h>
#include "Vmessage_scheduler_tb.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmessage_scheduler_tb* top = new Vmessage_scheduler_tb;

    vluint64_t main_time = 0;       // simulation time in time units
    const vluint64_t half_period = 5; // matches `always #5 clk = ~clk;` in SV

    // Initialize clock to 0
    top->clk = 0;
    top->reset_n = 1;

    // Main simulation loop
    while (!Verilated::gotFinish()) {
        // Toggle clock every half_period
        if (main_time % half_period == 0) {
            top->clk = !top->clk;
        }

        // Evaluate the model at current time
        top->eval();

        // Optional: print clock info for debugging
        // if (main_time % half_period == 0) {
        //     printf("Time %llu: clk=%d\n", main_time, top->clk);
        // }

        main_time++;
    }

    // Cleanup
    top->final();
    delete top;
    return 0;
}