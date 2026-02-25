// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_core_tb.h for the primary calling header

#include "Vstd_pipeline_core_tb__pch.h"

VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0(Vstd_pipeline_core_tb___024root* vlSelf);

void Vstd_pipeline_core_tb___024root___eval_initial(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_initial\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_sum1__11__Vfuncout;
    __Vinline__eval_initial__TOP___Vfunc_sum1__11__Vfuncout = 0;
    IData/*31:0*/ __Vinline__eval_initial__TOP___Vfunc_sum0__15__Vfuncout;
    __Vinline__eval_initial__TOP___Vfunc_sum0__15__Vfuncout = 0;
    // Body
    __Vinline__eval_initial__TOP___Vfunc_sum1__11__Vfuncout = 0x3587272bU;
    vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__s1 
        = __Vinline__eval_initial__TOP___Vfunc_sum1__11__Vfuncout;
    __Vinline__eval_initial__TOP___Vfunc_sum0__15__Vfuncout = 0xce20b47eU;
    vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__s0 
        = __Vinline__eval_initial__TOP___Vfunc_sum0__15__Vfuncout;
    vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__ch_e = 0x1f85c98cU;
    vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__maj_a = 0x3a6fe667U;
    Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__0(Vstd_pipeline_core_tb___024root* vlSelf);
VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__1(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__2(Vstd_pipeline_core_tb___024root* vlSelf);

VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
    co_return;}

VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__0(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_core_tb.sv", 
                                                             66);
        std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (std_pipeline_core_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.std_pipeline_core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x000003e8U;
    co_return;}

extern const VlWide<8>/*255:0*/ Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0;

VlCoroutine Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__1(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout;
    VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data;
    VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data);
    VlWide<64>/*2047:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message;
    VL_ZERO_W(2048, __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message);
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i;
    __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0;
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result;
    VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result);
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
    __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi = 0;
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout;
    VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data;
    VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data);
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref;
    __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
    IData/*31:0*/ __Vfunc_sigma1__2__Vfuncout;
    __Vfunc_sigma1__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sigma1__2__a;
    __Vfunc_sigma1__2__a = 0;
    IData/*31:0*/ __Vfunc_rotr32__3__Vfuncout;
    __Vfunc_rotr32__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__3__a;
    __Vfunc_rotr32__3__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__3__b;
    __Vfunc_rotr32__3__b = 0;
    IData/*31:0*/ __Vfunc_rotr32__4__Vfuncout;
    __Vfunc_rotr32__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__4__a;
    __Vfunc_rotr32__4__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__4__b;
    __Vfunc_rotr32__4__b = 0;
    IData/*31:0*/ __Vfunc_ch__5__Vfuncout;
    __Vfunc_ch__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ch__5__a;
    __Vfunc_ch__5__a = 0;
    IData/*31:0*/ __Vfunc_ch__5__b;
    __Vfunc_ch__5__b = 0;
    IData/*31:0*/ __Vfunc_ch__5__c;
    __Vfunc_ch__5__c = 0;
    IData/*31:0*/ __Vfunc_sum0__6__Vfuncout;
    __Vfunc_sum0__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum0__6__a;
    __Vfunc_sum0__6__a = 0;
    IData/*31:0*/ __Vfunc_rotr32__7__Vfuncout;
    __Vfunc_rotr32__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__7__a;
    __Vfunc_rotr32__7__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__7__b;
    __Vfunc_rotr32__7__b = 0;
    IData/*31:0*/ __Vfunc_rotr32__8__Vfuncout;
    __Vfunc_rotr32__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__8__a;
    __Vfunc_rotr32__8__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__8__b;
    __Vfunc_rotr32__8__b = 0;
    IData/*31:0*/ __Vfunc_rotr32__9__Vfuncout;
    __Vfunc_rotr32__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__9__a;
    __Vfunc_rotr32__9__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__9__b;
    __Vfunc_rotr32__9__b = 0;
    IData/*31:0*/ __Vfunc_maj__10__Vfuncout;
    __Vfunc_maj__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maj__10__a;
    __Vfunc_maj__10__a = 0;
    IData/*31:0*/ __Vfunc_maj__10__b;
    __Vfunc_maj__10__b = 0;
    IData/*31:0*/ __Vfunc_maj__10__c;
    __Vfunc_maj__10__c = 0;
    // Body
    while (VL_LTS_III(32, 0U, vlSelfRef.std_pipeline_core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_core_tb.sv", 
                                                             69);
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.enable 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[0U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[0U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[1U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[1U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[2U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[2U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[3U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[3U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[4U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[4U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[5U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[5U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[6U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[6U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[7U] 
            = Vstd_pipeline_core_tb__ConstPool__CONST_ha51a22ca_0[7U];
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[1U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[2U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[3U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[4U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[5U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[6U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[7U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[8U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[9U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000aU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000bU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000cU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000dU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000eU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000000fU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000010U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000011U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000012U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000013U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000014U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000015U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000016U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000017U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000018U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000019U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001aU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001bU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001cU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001dU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001eU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000001fU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000020U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000021U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000022U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000023U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000024U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000025U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000026U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000027U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000028U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000029U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002aU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002bU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002cU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002dU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002eU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000002fU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000030U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000031U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000032U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000033U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000034U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000035U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000036U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000037U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000038U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x00000039U] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003aU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003bU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003cU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003dU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003eU] 
            = VL_RANDOM_I();
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0x0000003fU] 
            = VL_RANDOM_I();
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x0000003fU)) {
            __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[__Vilp1] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[0U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[1U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[2U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[3U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[4U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[5U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[6U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[7U] 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.midstate[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0;
        VL_ZERO_W(256, __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result);
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__midstate_data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 1U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 2U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 3U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 4U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 5U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 6U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 7U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 8U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[8U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 9U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[9U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000aU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000aU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000bU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000bU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000cU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000cU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000dU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000dU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000eU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000eU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000000fU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000000fU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000010U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000010U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000011U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000011U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000012U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000012U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000013U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000013U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000014U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000014U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000015U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000015U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000016U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000016U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000017U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000017U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000018U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000018U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000019U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000019U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001aU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001aU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001bU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001bU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001cU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001cU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001dU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001dU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001eU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001eU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000001fU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000001fU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000020U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000020U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000021U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000021U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000022U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000022U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000023U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000023U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000024U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000024U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000025U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000025U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000026U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000026U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000027U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000027U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000028U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000028U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000029U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000029U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002aU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002aU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002bU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002bU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002cU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002cU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002dU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002dU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002eU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002eU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000002fU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000002fU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000030U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000030U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000031U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000031U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000032U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000032U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000033U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000033U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000034U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000034U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000035U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000035U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000036U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000036U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000037U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000037U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000038U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000038U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000039U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x00000039U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003aU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003aU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003bU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003bU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003cU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003cU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003dU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003dU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003eU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003eU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x0000003fU;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__message[0x0000003fU];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__wi;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref = 0;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__data[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h 
                                         + ([&]() {
                                __Vfunc_sigma1__2__a 
                                    = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                                __Vfunc_sigma1__2__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__3__b = 0x11U;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__4__b = 0x13U;
                                                __Vfunc_rotr32__4__a 
                                                    = __Vfunc_sigma1__2__a;
                                                __Vfunc_rotr32__4__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__4__a 
                                                      >> (IData)(__Vfunc_rotr32__4__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__4__b))));
                                            }(), __Vfunc_rotr32__4__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sigma1__2__a, 0x0000000aU));
                            }(), __Vfunc_sigma1__2__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__w_message));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_sum0__6__Vfuncout = ((([&]() {
                                    __Vfunc_rotr32__7__b = 2U;
                                    __Vfunc_rotr32__7__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__7__Vfuncout 
                                        = ((__Vfunc_rotr32__7__a 
                                            >> (IData)(__Vfunc_rotr32__7__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__7__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__7__b))));
                                }(), __Vfunc_rotr32__7__Vfuncout) 
                                                  ^ 
                                                  ([&]() {
                                    __Vfunc_rotr32__8__b = 0x0dU;
                                    __Vfunc_rotr32__8__a 
                                        = __Vfunc_sum0__6__a;
                                    __Vfunc_rotr32__8__Vfuncout 
                                        = ((__Vfunc_rotr32__8__a 
                                            >> (IData)(__Vfunc_rotr32__8__b)) 
                                           | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__8__a, 
                                                           ((IData)(0x00000020U) 
                                                            - (IData)(__Vfunc_rotr32__8__b))));
                                }(), __Vfunc_rotr32__8__Vfuncout)) 
                                                 ^ 
                                                 ([&]() {
                                __Vfunc_rotr32__9__b = 0x16U;
                                __Vfunc_rotr32__9__a 
                                    = __Vfunc_sum0__6__a;
                                __Vfunc_rotr32__9__Vfuncout 
                                    = ((__Vfunc_rotr32__9__a 
                                        >> (IData)(__Vfunc_rotr32__9__b)) 
                                       | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__9__a, 
                                                       ((IData)(0x00000020U) 
                                                        - (IData)(__Vfunc_rotr32__9__b))));
                            }(), __Vfunc_rotr32__9__Vfuncout));
                }(), __Vfunc_sum0__6__Vfuncout) + ([&]() {
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref 
            = (__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t1 
               + __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__t2);
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__a_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__b_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__e_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__f_ref;
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))));
        __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__g_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_stage__1__Vfuncout[7U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__unnamedblk1__DOT__i = 0x00000040U;
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[0U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[1U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[2U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[3U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[4U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[5U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[6U];
        __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__result[7U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[0U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[0U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[1U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[1U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[2U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[2U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[3U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[3U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[4U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[4U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[5U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[5U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[6U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[6U];
        vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[7U] 
            = __Vfunc_std_pipeline_core_tb__DOT__compute_ref__0__Vfuncout[7U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[0U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[0U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[1U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[1U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[2U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[2U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[3U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[3U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[4U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[4U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[5U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[5U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[6U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[6U];
        vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[7U] 
            = vlSelfRef.std_pipeline_core_tb__DOT__packed_ref[7U];
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_core_tb.sv", 
                                                             78);
        if (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.done) {
            if ((0U != ((((((((vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[0U] 
                               ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[0U]) 
                              | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[1U] 
                                 ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[1U])) 
                             | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[2U] 
                                ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[2U])) 
                            | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[3U] 
                               ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[3U])) 
                           | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[4U] 
                              ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[4U])) 
                          | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[5U] 
                             ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[5U])) 
                         | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[6U] 
                            ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[6U])) 
                        | (vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[7U] 
                           ^ vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref[7U])))) {
                VL_WRITEF_NX("Mismatch! \342\235\214\nExpected: %x\nGot     : %x\n[%0t] %%Fatal: std_pipeline_core_tb.sv:85: Assertion failed in %Nstd_pipeline_core_tb.unnamedblk1_2\n",0,
                             256,vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref.data(),
                             256,vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest.data(),
                             64,VL_TIME_UNITED_Q(10),
                             -6,vlSymsp->name());
                VL_STOP_MT("std_pipeline_core_tb.sv", 85, "", false);
            } else {
                VL_WRITEF_NX("Match! \342\234\205\nExpected: %x\nGot     : %x\n[%0t] %%Fatal: std_pipeline_core_tb.sv:90: Assertion failed in %Nstd_pipeline_core_tb.unnamedblk1_2\n",0,
                             256,vlSelfRef.std_pipeline_core_tb__DOT__prev_packed_ref.data(),
                             256,vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest.data(),
                             64,VL_TIME_UNITED_Q(10),
                             -6,vlSymsp->name());
                VL_STOP_MT("std_pipeline_core_tb.sv", 90, "", false);
            }
        }
        vlSelfRef.std_pipeline_core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (vlSelfRef.std_pipeline_core_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_return;}
