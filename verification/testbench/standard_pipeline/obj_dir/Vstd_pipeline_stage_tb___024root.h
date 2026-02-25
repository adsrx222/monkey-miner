// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vstd_pipeline_stage_tb.h for the primary calling header

#ifndef VERILATED_VSTD_PIPELINE_STAGE_TB___024ROOT_H_
#define VERILATED_VSTD_PIPELINE_STAGE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vstd_pipeline_stage_tb_pipe_if;


class Vstd_pipeline_stage_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vstd_pipeline_stage_tb___024root final {
  public:
    // CELLS
    Vstd_pipeline_stage_tb_pipe_if* __PVT__std_pipeline_stage_tb__DOT__input_if;
    Vstd_pipeline_stage_tb_pipe_if* __PVT__std_pipeline_stage_tb__DOT__output_if;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__wi;
    VlWide<8>/*255:0*/ std_pipeline_stage_tb__DOT__packed_ref;
    VlWide<8>/*255:0*/ std_pipeline_stage_tb__DOT__prev_packed_ref;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__t1;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__s0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__maj_a;
    IData/*31:0*/ __Vfunc_rotr32__12__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__12__a;
    IData/*31:0*/ __Vfunc_rotr32__13__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__13__a;
    IData/*31:0*/ __Vfunc_rotr32__14__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__14__a;
    IData/*31:0*/ __Vfunc_rotr32__16__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__16__a;
    IData/*31:0*/ __Vfunc_rotr32__17__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__17__a;
    IData/*31:0*/ __Vfunc_rotr32__18__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__18__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlTriggerScheduler __VtrigSched_h98d2db8e__0;

    // INTERNAL VARIABLES
    Vstd_pipeline_stage_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vstd_pipeline_stage_tb___024root(Vstd_pipeline_stage_tb__Syms* symsp, const char* namep);
    ~Vstd_pipeline_stage_tb___024root();
    VL_UNCOPYABLE(Vstd_pipeline_stage_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
