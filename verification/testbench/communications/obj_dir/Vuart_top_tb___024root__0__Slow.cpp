// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_top_tb.h for the primary calling header

#include "Vuart_top_tb__pch.h"

VL_ATTR_COLD void Vuart_top_tb___024root___eval_static(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_static\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
    vlSelfRef.__Vtrigprevexpr_h2e3974bd__1 = (1U & 
                                              (~ (IData)(vlSelfRef.uart_top_tb__DOT__busy)));
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_initial__TOP(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_initial__TOP\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_top_tb__DOT__capture_index = 0U;
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_final(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_final\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_top_tb___024root___eval_phase__stl(Vuart_top_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_top_tb___024root___eval_settle(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_settle\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_top_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("uart_top_tb.sv", 9, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vuart_top_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_triggers__stl(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_triggers__stl\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_top_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vuart_top_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vuart_top_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vuart_top_tb___024root___stl_sequent__TOP__0(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___stl_sequent__TOP__0\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_start 
        = ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state)) 
           & (1U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state)));
}

VL_ATTR_COLD void Vuart_top_tb___024root___eval_stl(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_stl\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.uart_top_tb__DOT__dut__DOT__tx_start 
            = ((0U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_tx__DOT__state)) 
               & (1U == (IData)(vlSelfRef.uart_top_tb__DOT__dut__DOT__u_rx__DOT__state)));
    }
}

VL_ATTR_COLD bool Vuart_top_tb___024root___eval_phase__stl(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___eval_phase__stl\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_top_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vuart_top_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vuart_top_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vuart_top_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_top_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_top_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge reset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( reset_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( (~ uart_top_tb.busy))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_top_tb___024root___ctor_var_reset(Vuart_top_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_top_tb___024root___ctor_var_reset\n"); );
    Vuart_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    vlSelf->uart_top_tb__DOT__start_midstate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10811620790812471898ull);
    vlSelf->uart_top_tb__DOT__start_broadcast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6916797068038053364ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->uart_top_tb__DOT__midstate, __VscopeHash, 15259876719327349707ull);
    VL_SCOPED_RAND_RESET_W(96, vlSelf->uart_top_tb__DOT__data96, __VscopeHash, 15668057105955162662ull);
    vlSelf->uart_top_tb__DOT__broadcast_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13054488959978970633ull);
    vlSelf->uart_top_tb__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4283813831653006145ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->uart_top_tb__DOT__captured_bytes[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7479042234645000071ull);
    }
    vlSelf->uart_top_tb__DOT__capture_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17546273377009647471ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__tx_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7831438062378803418ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_rx__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16460255644916555409ull);
    VL_SCOPED_RAND_RESET_W(352, vlSelf->uart_top_tb__DOT__dut__DOT__u_rx__DOT__shift_reg, __VscopeHash, 11454390467704716535ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_rx__DOT__byte_count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9984068830370885167ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_rx__DOT__total_bytes = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14050705100570996820ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_tx__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7243598503074112549ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_tx__DOT__bit_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7517941209897079743ull);
    vlSelf->uart_top_tb__DOT__dut__DOT__u_tx__DOT__clk_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2219087281284490633ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = 0;
    vlSelf->__Vtrigprevexpr_h2e3974bd__1 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
