// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmessage_scheduler_tb.h for the primary calling header

#include "Vmessage_scheduler_tb__pch.h"

void Vmessage_scheduler_tb___024root___ctor_var_reset(Vmessage_scheduler_tb___024root* vlSelf);

Vmessage_scheduler_tb___024root::Vmessage_scheduler_tb___024root(Vmessage_scheduler_tb__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vmessage_scheduler_tb___024root___ctor_var_reset(this);
}

void Vmessage_scheduler_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmessage_scheduler_tb___024root::~Vmessage_scheduler_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
