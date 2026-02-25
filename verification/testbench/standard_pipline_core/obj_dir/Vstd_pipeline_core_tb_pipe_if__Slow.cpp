// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_core_tb.h for the primary calling header

#include "Vstd_pipeline_core_tb__pch.h"

void Vstd_pipeline_core_tb_pipe_if___ctor_var_reset(Vstd_pipeline_core_tb_pipe_if* vlSelf);

void Vstd_pipeline_core_tb_pipe_if::ctor(Vstd_pipeline_core_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vstd_pipeline_core_tb_pipe_if___ctor_var_reset(this);
}

void Vstd_pipeline_core_tb_pipe_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vstd_pipeline_core_tb_pipe_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
