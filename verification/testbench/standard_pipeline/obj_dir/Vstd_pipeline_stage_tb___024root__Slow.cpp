// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_stage_tb.h for the primary calling header

#include "Vstd_pipeline_stage_tb__pch.h"

void Vstd_pipeline_stage_tb___024root___ctor_var_reset(Vstd_pipeline_stage_tb___024root* vlSelf);

Vstd_pipeline_stage_tb___024root::Vstd_pipeline_stage_tb___024root(Vstd_pipeline_stage_tb__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vstd_pipeline_stage_tb___024root___ctor_var_reset(this);
}

void Vstd_pipeline_stage_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstd_pipeline_stage_tb___024root::~Vstd_pipeline_stage_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
