// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstd_pipeline_core_tb.h for the primary calling header

#ifndef VERILATED_VSTD_PIPELINE_CORE_TB_PIPECORE_IF_H_
#define VERILATED_VSTD_PIPELINE_CORE_TB_PIPECORE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vstd_pipeline_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstd_pipeline_core_tb_pipecore_if final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ done;
    CData/*0:0*/ enable;
    VlWide<8>/*255:0*/ midstate;
    VlWide<64>/*2047:0*/ message;
    VlWide<8>/*255:0*/ final_digest;

    // INTERNAL VARIABLES
    Vstd_pipeline_core_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vstd_pipeline_core_tb_pipecore_if() = default;
    ~Vstd_pipeline_core_tb_pipecore_if() = default;
    void ctor(Vstd_pipeline_core_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vstd_pipeline_core_tb_pipecore_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vstd_pipeline_core_tb_pipecore_if* obj);

#endif  // guard
