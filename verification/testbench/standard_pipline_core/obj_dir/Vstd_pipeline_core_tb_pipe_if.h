// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstd_pipeline_core_tb.h for the primary calling header

#ifndef VERILATED_VSTD_PIPELINE_CORE_TB_PIPE_IF_H_
#define VERILATED_VSTD_PIPELINE_CORE_TB_PIPE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstd_pipeline_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstd_pipeline_core_tb_pipe_if final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    CData/*0:0*/ valid;
    VlWide<8>/*255:0*/ data;
    VlWide<8>/*255:0*/ __Vdly__data;

    // INTERNAL VARIABLES
    Vstd_pipeline_core_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vstd_pipeline_core_tb_pipe_if() = default;
    ~Vstd_pipeline_core_tb_pipe_if() = default;
    void ctor(Vstd_pipeline_core_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vstd_pipeline_core_tb_pipe_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vstd_pipeline_core_tb_pipe_if* obj);

#endif  // guard
