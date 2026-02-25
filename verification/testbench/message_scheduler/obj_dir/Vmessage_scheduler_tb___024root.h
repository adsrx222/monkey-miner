// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmessage_scheduler_tb.h for the primary calling header

#ifndef VERILATED_VMESSAGE_SCHEDULER_TB___024ROOT_H_
#define VERILATED_VMESSAGE_SCHEDULER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmessage_scheduler_tb_message_if;


class Vmessage_scheduler_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmessage_scheduler_tb___024root final {
  public:
    // CELLS
    Vmessage_scheduler_tb_message_if* __PVT__message_scheduler_tb__DOT__tb_if;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    VlWide<64>/*2047:0*/ message_scheduler_tb__DOT__ref_schedule;
    VlWide<64>/*2047:0*/ message_scheduler_tb__DOT__prev_ref_schedule;
    VlWide<64>/*2047:0*/ message_scheduler_tb__DOT__dut__DOT__current_result;
    VlWide<64>/*2047:0*/ __Vfunc_message_scheduler_tb__DOT__dut__DOT__sha256_schedule__7__result;
    IData/*31:0*/ __Vfunc_sigma1__8__Vfuncout;
    IData/*31:0*/ __Vfunc_sigma1__8__a;
    IData/*31:0*/ __Vfunc_rotr32__9__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__9__a;
    IData/*31:0*/ __Vfunc_rotr32__10__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__10__a;
    IData/*31:0*/ __Vfunc_sigma0__11__Vfuncout;
    IData/*31:0*/ __Vfunc_sigma0__11__a;
    IData/*31:0*/ __Vfunc_rotr32__12__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__12__a;
    IData/*31:0*/ __Vfunc_rotr32__13__Vfuncout;
    IData/*31:0*/ __Vfunc_rotr32__13__a;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> __Vfunc_message_scheduler_tb__DOT__dut__DOT__sha256_schedule__7__W;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlTriggerScheduler __VtrigSched_h98d2db8e__0;

    // INTERNAL VARIABLES
    Vmessage_scheduler_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmessage_scheduler_tb___024root(Vmessage_scheduler_tb__Syms* symsp, const char* namep);
    ~Vmessage_scheduler_tb___024root();
    VL_UNCOPYABLE(Vmessage_scheduler_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
