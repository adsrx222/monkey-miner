// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmessage_scheduler_tb.h for the primary calling header

#include "Vmessage_scheduler_tb__pch.h"

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___eval_static(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_static\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
}

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___eval_final(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_final\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmessage_scheduler_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmessage_scheduler_tb___024root___eval_phase__stl(Vmessage_scheduler_tb___024root* vlSelf);

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___eval_settle(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_settle\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmessage_scheduler_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("message_scheduler_tb.sv", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vmessage_scheduler_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___eval_triggers__stl(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_triggers__stl\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmessage_scheduler_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vmessage_scheduler_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmessage_scheduler_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vmessage_scheduler_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vmessage_scheduler_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___trigger_anySet__stl\n"); );
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

void Vmessage_scheduler_tb___024root___act_sequent__TOP__0(Vmessage_scheduler_tb___024root* vlSelf);

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___eval_stl(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_stl\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vmessage_scheduler_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vmessage_scheduler_tb___024root___eval_phase__stl(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___eval_phase__stl\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmessage_scheduler_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vmessage_scheduler_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vmessage_scheduler_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vmessage_scheduler_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmessage_scheduler_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vmessage_scheduler_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge reset_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmessage_scheduler_tb___024root___ctor_var_reset(Vmessage_scheduler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmessage_scheduler_tb___024root___ctor_var_reset\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->message_scheduler_tb__DOT__ref_schedule, __VscopeHash, 13074131251376484480ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->message_scheduler_tb__DOT__prev_ref_schedule, __VscopeHash, 3698841882905744324ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->message_scheduler_tb__DOT__dut__DOT__current_result, __VscopeHash, 13841119938910751969ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__Vfunc_message_scheduler_tb__DOT__dut__DOT__sha256_schedule__7__W[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(2048, vlSelf->__Vfunc_message_scheduler_tb__DOT__dut__DOT__sha256_schedule__7__result);
    vlSelf->__Vfunc_sigma1__8__Vfuncout = 0;
    vlSelf->__Vfunc_sigma1__8__a = 0;
    vlSelf->__Vfunc_rotr32__9__Vfuncout = 0;
    vlSelf->__Vfunc_rotr32__9__a = 0;
    vlSelf->__Vfunc_rotr32__10__Vfuncout = 0;
    vlSelf->__Vfunc_rotr32__10__a = 0;
    vlSelf->__Vfunc_sigma0__11__Vfuncout = 0;
    vlSelf->__Vfunc_sigma0__11__a = 0;
    vlSelf->__Vfunc_rotr32__12__Vfuncout = 0;
    vlSelf->__Vfunc_rotr32__12__a = 0;
    vlSelf->__Vfunc_rotr32__13__Vfuncout = 0;
    vlSelf->__Vfunc_rotr32__13__a = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
