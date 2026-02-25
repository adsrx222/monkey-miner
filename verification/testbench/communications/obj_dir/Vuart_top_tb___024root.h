// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_top_tb.h for the primary calling header

#ifndef VERILATED_VUART_TOP_TB___024ROOT_H_
#define VERILATED_VUART_TOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuart_top_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_top_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    CData/*0:0*/ uart_top_tb__DOT__start_midstate;
    CData/*0:0*/ uart_top_tb__DOT__start_broadcast;
    CData/*0:0*/ uart_top_tb__DOT__busy;
    CData/*0:0*/ uart_top_tb__DOT__dut__DOT__tx_start;
    CData/*1:0*/ uart_top_tb__DOT__dut__DOT__u_rx__DOT__state;
    CData/*5:0*/ uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count;
    CData/*5:0*/ uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes;
    CData/*1:0*/ uart_top_tb__DOT__dut__DOT__u_tx__DOT__state;
    CData/*2:0*/ uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __Vtrigprevexpr_h2e3974bd__1;
    CData/*0:0*/ __VactDidInit;
    VlWide<8>/*255:0*/ uart_top_tb__DOT__midstate;
    VlWide<3>/*95:0*/ uart_top_tb__DOT__data96;
    IData/*31:0*/ uart_top_tb__DOT__broadcast_value;
    IData/*31:0*/ uart_top_tb__DOT__capture_index;
    VlWide<11>/*351:0*/ uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg;
    IData/*31:0*/ uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 64> uart_top_tb__DOT__captured_bytes;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlTriggerScheduler __VtrigSched_h6dff08c3__0;
    VlTriggerScheduler __VtrigSched_h98d2db8e__0;
    VlTriggerScheduler __VtrigSched_hba0e44da__0;

    // INTERNAL VARIABLES
    Vuart_top_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuart_top_tb___024root(Vuart_top_tb__Syms* symsp, const char* namep);
    ~Vuart_top_tb___024root();
    VL_UNCOPYABLE(Vuart_top_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
