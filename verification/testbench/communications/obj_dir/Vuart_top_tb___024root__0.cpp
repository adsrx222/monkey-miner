// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_top_tb___024root* vlSelf);

void Vuart_top_tb___024root___eval_initial(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_top_tb__DOT__capture_index = 0U;
    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value;
    __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value = 0;
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i;
    __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 0;
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__check_broadcast__1__value;
    __Vtask_uart_top_tb__DOT__check_broadcast__1__value = 0;
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__check_broadcast__1__i;
    __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 0;
    VlWide<8>/*255:0*/ __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m;
    VL_ZERO_W(256, __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m);
    VlWide<3>/*95:0*/ __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d;
    VL_ZERO_W(96, __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d);
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i;
    __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0;
    VlWide<11>/*351:0*/ __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined;
    VL_ZERO_W(352, __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined);
    VlWide<8>/*255:0*/ __Vtask_uart_top_tb__DOT__check_midstate__3__m;
    VL_ZERO_W(256, __Vtask_uart_top_tb__DOT__check_midstate__3__m);
    VlWide<3>/*95:0*/ __Vtask_uart_top_tb__DOT__check_midstate__3__d;
    VL_ZERO_W(96, __Vtask_uart_top_tb__DOT__check_midstate__3__d);
    IData/*31:0*/ __Vtask_uart_top_tb__DOT__check_midstate__3__i;
    __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0;
    VlWide<11>/*351:0*/ __Vtask_uart_top_tb__DOT__check_midstate__3__combined;
    VL_ZERO_W(352, __Vtask_uart_top_tb__DOT__check_midstate__3__combined);
    // Body
    while ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        co_await vlSelfRef.__VtrigSched_h6dff08c3__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( reset_n)", 
                                                             "uart_top_tb.sv", 
                                                             91);
    }
    uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "uart_top_tb.sv", 
                                                             92);
        uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (uart_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x00000032U;
    while (VL_LTS_III(32, 0U, uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        vlSelfRef.uart_top_tb__DOT__capture_index = 0U;
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "uart_top_tb.sv", 
                                                             96);
        vlSelfRef.uart_top_tb__DOT__broadcast_value 
            = VL_RANDOM_I();
        vlSelfRef.uart_top_tb__DOT__start_broadcast = 1U;
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "uart_top_tb.sv", 
                                                             99);
        vlSelfRef.uart_top_tb__DOT__start_broadcast = 0U;
        while (vlSelfRef.uart_top_tb__DOT__busy) {
            co_await vlSelfRef.__VtrigSched_hba0e44da__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ uart_top_tb.busy))", 
                                                                 "uart_top_tb.sv", 
                                                                 101);
        }
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value 
            = vlSelfRef.uart_top_tb__DOT__broadcast_value;
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 0;
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 0U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value 
               >> 0x18U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 1U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value 
                              >> 0x10U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 2U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 3U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__value);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_broadcast_bytes__0__i = 4U;
        __Vtask_uart_top_tb__DOT__check_broadcast__1__value 
            = vlSelfRef.uart_top_tb__DOT__broadcast_value;
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 0;
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0U] != (__Vtask_uart_top_tb__DOT__check_broadcast__1__value 
                                   >> 0x18U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:74: Assertion failed in %Nuart_top_tb.check_broadcast\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 74, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [1U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_broadcast__1__value 
                                                  >> 0x10U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:74: Assertion failed in %Nuart_top_tb.check_broadcast\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 74, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [2U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_broadcast__1__value 
                                                  >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:74: Assertion failed in %Nuart_top_tb.check_broadcast\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 74, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [3U] != (0x000000ffU & __Vtask_uart_top_tb__DOT__check_broadcast__1__value))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:74: Assertion failed in %Nuart_top_tb.check_broadcast\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 74, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_broadcast__1__i = 4U;
        uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (uart_top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0x00000014U;
    while (VL_LTS_III(32, 0U, uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        vlSelfRef.uart_top_tb__DOT__capture_index = 0U;
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "uart_top_tb.sv", 
                                                             108);
        VL_RANDOM_W(256, vlSelfRef.uart_top_tb__DOT__midstate);
        VL_RANDOM_W(96, vlSelfRef.uart_top_tb__DOT__data96);
        vlSelfRef.uart_top_tb__DOT__start_midstate = 1U;
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "uart_top_tb.sv", 
                                                             113);
        vlSelfRef.uart_top_tb__DOT__start_midstate = 0U;
        while (vlSelfRef.uart_top_tb__DOT__busy) {
            co_await vlSelfRef.__VtrigSched_hba0e44da__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( (~ uart_top_tb.busy))", 
                                                                 "uart_top_tb.sv", 
                                                                 115);
        }
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[0U] 
            = vlSelfRef.uart_top_tb__DOT__data96[0U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[1U] 
            = vlSelfRef.uart_top_tb__DOT__data96[1U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[2U] 
            = vlSelfRef.uart_top_tb__DOT__data96[2U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[0U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[0U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[1U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[1U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[2U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[2U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[3U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[3U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[4U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[4U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[5U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[5U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[6U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[6U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[7U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[7U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0;
        VL_ZERO_W(352, __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[0U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[1U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[1U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[2U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__d[2U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[3U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[0U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[4U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[1U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[5U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[2U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[6U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[3U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[7U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[4U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[8U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[5U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[9U] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[6U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0x0000000aU] 
            = __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__m[7U];
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0x0000000aU] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 1U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0x0000000aU] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 2U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0x0000000aU] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 3U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0x0000000aU]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 4U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[9U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 5U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[9U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 6U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[9U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 7U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[9U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 8U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[8U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 9U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[8U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000aU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[8U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000bU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[8U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000cU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[7U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000dU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[7U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000eU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[7U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000000fU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[7U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000010U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[6U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000011U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[6U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000012U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[6U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000013U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[6U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000014U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[5U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000015U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[5U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000016U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[5U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000017U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[5U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000018U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[4U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000019U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[4U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001aU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[4U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001bU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[4U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001cU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[3U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001dU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[3U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001eU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[3U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000001fU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[3U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000020U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[2U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000021U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[2U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000022U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[2U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000023U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[2U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000024U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[1U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000025U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[1U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000026U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[1U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000027U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[1U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000028U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0U] 
               >> 0x00000018U);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x00000029U;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0U] 
                              >> 0x00000010U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000002aU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & (__Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0U] 
                              >> 8U));
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000002bU;
        vlSelfRef.uart_top_tb__DOT__captured_bytes[(0x0000003fU 
                                                    & vlSelfRef.uart_top_tb__DOT__capture_index)] 
            = (0x000000ffU & __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__combined[0U]);
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__capture_index);
        __Vtask_uart_top_tb__DOT__capture_midstate_bytes__2__i = 0x0000002cU;
        __Vtask_uart_top_tb__DOT__check_midstate__3__d[0U] 
            = vlSelfRef.uart_top_tb__DOT__data96[0U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__d[1U] 
            = vlSelfRef.uart_top_tb__DOT__data96[1U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__d[2U] 
            = vlSelfRef.uart_top_tb__DOT__data96[2U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[0U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[0U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[1U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[1U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[2U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[2U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[3U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[3U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[4U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[4U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[5U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[5U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[6U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[6U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__m[7U] 
            = vlSelfRef.uart_top_tb__DOT__midstate[7U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0;
        VL_ZERO_W(352, __Vtask_uart_top_tb__DOT__check_midstate__3__combined);
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[0U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__d[0U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[1U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__d[1U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[2U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__d[2U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[3U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[0U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[4U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[1U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[5U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[2U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[6U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[3U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[7U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[4U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[8U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[5U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[9U] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[6U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__combined[0x0000000aU] 
            = __Vtask_uart_top_tb__DOT__check_midstate__3__m[7U];
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0x0000000aU] 
                                   >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 1U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [1U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0x0000000aU] 
                                                  >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 2U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [2U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0x0000000aU] 
                                                  >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 3U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [3U] != (0x000000ffU & __Vtask_uart_top_tb__DOT__check_midstate__3__combined[0x0000000aU]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 4U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [4U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[9U] 
                                   >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 5U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [5U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[9U] 
                                                  >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 6U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [6U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[9U] 
                                                  >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 7U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [7U] != (0x000000ffU & __Vtask_uart_top_tb__DOT__check_midstate__3__combined[9U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 8U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [8U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[8U] 
                                   >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 9U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [9U] != (0x000000ffU & (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[8U] 
                                                  >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000aU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0aU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[8U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000bU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0bU] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[8U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000cU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0cU] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[7U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000dU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0dU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[7U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000eU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0eU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[7U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000000fU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x0fU] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[7U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000010U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x10U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[6U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000011U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x11U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[6U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000012U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x12U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[6U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000013U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x13U] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[6U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000014U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x14U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[5U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000015U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x15U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[5U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000016U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x16U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[5U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000017U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x17U] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[5U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000018U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x18U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[4U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000019U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x19U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[4U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001aU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1aU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[4U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001bU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1bU] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[4U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001cU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1cU] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[3U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001dU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1dU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[3U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001eU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1eU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[3U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000001fU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x1fU] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[3U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000020U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x20U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[2U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000021U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x21U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[2U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000022U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x22U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[2U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000023U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x23U] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[2U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000024U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x24U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[1U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000025U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x25U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[1U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000026U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x26U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[1U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000027U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x27U] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[1U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000028U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x28U] != (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0U] 
                                      >> 0x00000018U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x00000029U;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x29U] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0U] 
                                       >> 0x00000010U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000002aU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x2aU] != (0x000000ffU & 
                                      (__Vtask_uart_top_tb__DOT__check_midstate__3__combined[0U] 
                                       >> 8U)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000002bU;
        if (VL_UNLIKELY(((vlSelfRef.uart_top_tb__DOT__captured_bytes
                          [0x2bU] != (0x000000ffU & 
                                      __Vtask_uart_top_tb__DOT__check_midstate__3__combined[0U]))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: uart_top_tb.sv:85: Assertion failed in %Nuart_top_tb.check_midstate\n",0,
                         64,VL_TIME_UNITED_Q(10),-6,
                         vlSymsp->name());
            VL_STOP_MT("uart_top_tb.sv", 85, "", false);
        }
        __Vtask_uart_top_tb__DOT__check_midstate__3__i = 0x0000002cU;
        uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (uart_top_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    VL_WRITEF_NX("UART Top Test PASSED \342\234\205\n",0);
    VL_FINISH_MT("uart_top_tb.sv", 121, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_top_tb___024root___eval_triggers__act(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_triggers__act\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h2e3974bd__0;
    __Vtrigprevexpr_h2e3974bd__0 = 0;
    // Body
    __Vtrigprevexpr_h2e3974bd__0 = (1U & (~ (IData)(vlSelfRef.uart_top_tb__DOT__busy)));
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(__Vtrigprevexpr_h2e3974bd__0) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr_h2e3974bd__1)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.reset_n) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.reset_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
    vlSelfRef.__Vtrigprevexpr_h2e3974bd__1 = __Vtrigprevexpr_h2e3974bd__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered
                                         [0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vuart_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<11>/*351:0*/ Vuart_top_tb__ConstPool__CONST_h51f37808_0;

void Vuart_top_tb___024root___nba_sequent__TOP__0(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___nba_sequent__TOP__0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<11>/*351:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg;
    VL_ZERO_W(352, __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg);
    CData/*5:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes = 0;
    CData/*5:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count = 0;
    CData/*1:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = 0;
    IData/*31:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0;
    CData/*1:0*/ __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 0;
    // Body
    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU] 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU];
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count;
    __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state 
        = vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state;
    if (vlSelfRef.reset_n) {
        if ((2U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt);
                if ((0x00000031U == vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt)) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
                }
            } else {
                __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                    = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt);
                if ((0x00000031U == vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt)) {
                    __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
                    if ((7U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx))) {
                        __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 3U;
                    } else {
                        vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx)));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state))) {
            __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                = ((IData)(1U) + vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt);
            if ((0x00000031U == vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt)) {
                vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 2U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
            }
        } else if (vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_start) {
            __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 1U;
            __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
        }
        if ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            vlSelfRef.uart_top_tb__DOT__busy = 0U;
            if (vlSelfRef.uart_top_tb__DOT__start_midstate) {
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U] 
                    = vlSelfRef.uart_top_tb__DOT__data96[0U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U] 
                    = vlSelfRef.uart_top_tb__DOT__data96[1U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U] 
                    = vlSelfRef.uart_top_tb__DOT__data96[2U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[0U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[1U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[2U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[3U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[4U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[5U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[6U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU] 
                    = vlSelfRef.uart_top_tb__DOT__midstate[7U];
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes = 0x2cU;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count = 0U;
                vlSelfRef.uart_top_tb__DOT__busy = 1U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = 1U;
            } else if (vlSelfRef.uart_top_tb__DOT__start_broadcast) {
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U] 
                    = vlSelfRef.uart_top_tb__DOT__broadcast_value;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU] = 0U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes = 4U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count = 0U;
                vlSelfRef.uart_top_tb__DOT__busy = 1U;
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state))) {
                VL_SHIFTL_WWI(352,352,32, __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg, vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg, 8U);
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count)));
                __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state 
                    = ((((IData)(1U) + (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count)) 
                        == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes))
                        ? 0U : 1U);
            }
        }
    } else {
        vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[0U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[1U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[2U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[3U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[4U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[5U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[6U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[7U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[8U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[9U];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU] 
            = Vuart_top_tb__ConstPool__CONST_h51f37808_0[0x0000000aU];
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count = 0U;
        __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes = 0U;
        vlSelfRef.uart_top_tb__DOT__busy = 0U;
    }
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[1U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[2U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[3U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[4U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[5U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[6U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[7U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[8U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[9U];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU] 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg[0x0000000aU];
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_rx__DOT__state;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state 
        = __Vdly__uart_top_tb__DOT__dut__DOT__u_tx__DOT__state;
    vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_start 
        = ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state)) 
           & (1U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state)));
}

void Vuart_top_tb___024root___nba_sequent__TOP__1(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___nba_sequent__TOP__1\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__uart_top_tb__DOT__capture_index;
    __Vdly__uart_top_tb__DOT__capture_index = 0;
    IData/*31:0*/ __VdlyMask__uart_top_tb__DOT__capture_index;
    __VdlyMask__uart_top_tb__DOT__capture_index = 0;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
        __Vdly__uart_top_tb__DOT__capture_index = 0U;
        __VdlyMask__uart_top_tb__DOT__capture_index = 0xffffffffU;
    }
    vlSelfRef.uart_top_tb__DOT__capture_index = ((__Vdly__uart_top_tb__DOT__capture_index 
                                                  & __VdlyMask__uart_top_tb__DOT__capture_index) 
                                                 | (vlSelfRef.uart_top_tb__DOT__capture_index 
                                                    & (~ __VdlyMask__uart_top_tb__DOT__capture_index)));
    __VdlyMask__uart_top_tb__DOT__capture_index = 0U;
}

void Vuart_top_tb___024root___eval_nba(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_nba\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__1___Vdly__uart_top_tb__DOT__capture_index;
    __Vinline__nba_sequent__TOP__1___Vdly__uart_top_tb__DOT__capture_index = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index;
    __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_top_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.reset_n)))) {
            __Vinline__nba_sequent__TOP__1___Vdly__uart_top_tb__DOT__capture_index = 0U;
            __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index = 0xffffffffU;
        }
        vlSelfRef.uart_top_tb__DOT__capture_index = 
            ((__Vinline__nba_sequent__TOP__1___Vdly__uart_top_tb__DOT__capture_index 
              & __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index) 
             | (vlSelfRef.uart_top_tb__DOT__capture_index 
                & (~ __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index)));
        __Vinline__nba_sequent__TOP__1___VdlyMask__uart_top_tb__DOT__capture_index = 0U;
    }
}

void Vuart_top_tb___024root___timing_commit(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___timing_commit\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h6dff08c3__0.commit(
                                                   "@( reset_n)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.commit(
                                                   "@(posedge clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hba0e44da__0.commit(
                                                   "@( (~ uart_top_tb.busy))");
    }
}

void Vuart_top_tb___024root___timing_resume(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___timing_resume\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h6dff08c3__0.resume(
                                                   "@( reset_n)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.resume(
                                                   "@(posedge clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hba0e44da__0.resume(
                                                   "@( (~ uart_top_tb.busy))");
    }
}

void Vuart_top_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top_tb___024root___eval_phase__act(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_phase__act\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_top_tb___024root___eval_triggers__act(vlSelf);
    Vuart_top_tb___024root___timing_commit(vlSelf);
    Vuart_top_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vuart_top_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vuart_top_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vuart_top_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_top_tb___024root___eval_phase__nba(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_phase__nba\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_top_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_top_tb___024root___eval_nba(vlSelf);
        Vuart_top_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_top_tb___024root___eval(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("uart_top_tb.sv", 9, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_top_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("uart_top_tb.sv", 9, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vuart_top_tb___024root___eval_phase__act(vlSelf));
    } while (Vuart_top_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vuart_top_tb___024root___eval_debug_assertions(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_debug_assertions\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset_n & 0xfeU)))) {
        Verilated::overWidthError("reset_n");
    }
}
#endif  // VL_DEBUG
