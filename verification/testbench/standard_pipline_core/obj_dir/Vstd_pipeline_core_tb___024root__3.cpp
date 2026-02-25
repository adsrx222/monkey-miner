// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_core_tb.h for the primary calling header

#include "Vstd_pipeline_core_tb__pch.h"

void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__66(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___nba_sequent__TOP__66\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum = 0;
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry = 0;
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum = 0;
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry = 0;
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum = 0;
    IData/*31:0*/ std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry = 0;
    // Body
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c 
        = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0U];
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum 
        = (0x9d91b5ebU ^ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c);
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry 
        = ((0x5be0cd19U & (0xc67178f2U | __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c)) 
           | (0xc67178f2U & __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c));
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b 
        = vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__ch_e;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
        = vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__s1;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum 
        = (__Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
           ^ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b);
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry 
        = (__Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
           & __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b);
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b 
        = std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
        = std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum;
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum 
        = (__Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
           ^ __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b);
    __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry 
        = (__Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
           & __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b);
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum;
    std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry 
        = __Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry;
    vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__t1 
        = (((std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum 
             + VL_SHIFTL_III(32,32,32, std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry, 1U)) 
            + VL_SHIFTL_III(32,32,32, std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry, 1U)) 
           + VL_SHIFTL_III(32,32,32, std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry, 1U));
}

extern const VlWide<8>/*255:0*/ Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0;
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__3(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__4(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__5(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__6(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__7(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__8(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__9(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__10(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__11(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__12(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__13(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__14(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__15(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__16(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__17(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__18(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__19(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__20(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__21(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__22(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__23(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__24(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__25(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__26(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__27(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__28(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__29(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__30(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__31(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__32(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__33(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__34(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__35(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__36(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__37(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__38(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__39(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__40(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__41(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__42(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__43(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__44(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__45(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__46(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__47(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__48(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__49(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__50(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__51(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__52(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__53(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__54(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__55(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__56(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__57(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__58(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__59(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__60(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__61(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__62(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__63(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_sequent__TOP__64(Vstd_pipeline_core_tb___024root* vlSelf);
void Vstd_pipeline_core_tb___024root___nba_comb__TOP__0(Vstd_pipeline_core_tb___024root* vlSelf);

void Vstd_pipeline_core_tb___024root___eval_nba(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_nba\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__1___Vtemp_1;
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__1___Vtemp_3;
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__2___Vtemp_1;
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__2___Vtemp_3;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__Vfuncout;
    __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a;
    __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__Vfuncout;
    __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a;
    __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__Vfuncout;
    __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__a;
    __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__b;
    __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__b = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__c;
    __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__c = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__Vfuncout;
    __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__Vfuncout = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__a;
    __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__b;
    __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__b = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__c;
    __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__c = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry;
    __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry;
    __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry = 0;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.done 
            = ((IData)(vlSelfRef.reset_n) && (IData)(vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.valid));
        if (vlSelfRef.reset_n) {
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[0U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[0U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[1U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[1U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[2U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[2U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[3U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[3U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[4U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[4U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[5U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[5U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[6U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[6U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[7U] 
                = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[7U];
        } else {
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[0U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[0U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[1U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[1U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[2U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[2U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[3U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[3U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[4U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[4U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[5U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[5U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[6U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[6U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.final_digest[7U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[7U];
        }
        if (vlSelfRef.reset_n) {
            if (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.valid) {
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.valid 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.valid;
            }
            if (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.valid) {
                __Vinline__nba_sequent__TOP__1___Vtemp_1[1U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[4U];
                __Vinline__nba_sequent__TOP__1___Vtemp_1[2U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[5U];
                __Vinline__nba_sequent__TOP__1___Vtemp_1[3U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[6U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[4U] 
                    = (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[3U] 
                       + vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__63__KET____DOT__stdstage_i__DOT__t1);
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[5U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_1[1U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[6U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_1[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[7U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_1[3U];
                __Vinline__nba_sequent__TOP__1___Vtemp_3[1U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[0U];
                __Vinline__nba_sequent__TOP__1___Vtemp_3[2U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[1U];
                __Vinline__nba_sequent__TOP__1___Vtemp_3[3U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[0U] 
                    = (vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__63__KET____DOT__stdstage_i__DOT__t1 
                       + (vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__63__KET____DOT__stdstage_i__DOT__maj_a 
                          + vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__63__KET____DOT__stdstage_i__DOT__s0));
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[1U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_3[1U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[2U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_3[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[3U] 
                    = __Vinline__nba_sequent__TOP__1___Vtemp_3[3U];
            }
        } else {
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.valid = 0U;
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[0U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[0U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[1U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[1U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[2U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[2U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[3U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[3U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[4U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[4U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[5U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[5U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[6U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[6U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET__.data[7U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[7U];
        }
        if (vlSelfRef.reset_n) {
            if (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.valid) {
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.valid 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.valid;
            }
            if (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.valid) {
                __Vinline__nba_sequent__TOP__2___Vtemp_1[1U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[4U];
                __Vinline__nba_sequent__TOP__2___Vtemp_1[2U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[5U];
                __Vinline__nba_sequent__TOP__2___Vtemp_1[3U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[6U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[4U] 
                    = (vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[3U] 
                       + vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__62__KET____DOT__stdstage_i__DOT__t1);
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[5U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_1[1U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[6U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_1[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[7U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_1[3U];
                __Vinline__nba_sequent__TOP__2___Vtemp_3[1U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[0U];
                __Vinline__nba_sequent__TOP__2___Vtemp_3[2U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[1U];
                __Vinline__nba_sequent__TOP__2___Vtemp_3[3U] 
                    = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__62__KET__.data[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[0U] 
                    = (vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__62__KET____DOT__stdstage_i__DOT__t1 
                       + (vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__62__KET____DOT__stdstage_i__DOT__maj_a 
                          + vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__62__KET____DOT__stdstage_i__DOT__s0));
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[1U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_3[1U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[2U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_3[2U];
                vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[3U] 
                    = __Vinline__nba_sequent__TOP__2___Vtemp_3[3U];
            }
        } else {
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.valid = 0U;
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[0U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[0U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[1U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[1U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[2U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[2U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[3U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[3U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[4U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[4U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[5U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[5U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[6U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[6U];
            vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__63__KET__.data[7U] 
                = Vstd_pipeline_core_tb__ConstPool__CONST_h9e67c271_0[7U];
        }
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__3(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__4(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__5(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__6(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__7(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__8(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__9(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__10(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__11(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__12(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__13(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__14(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__15(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__16(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__17(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__18(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__19(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__20(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__21(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__22(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__23(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__24(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__25(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__26(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__27(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__28(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__29(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__30(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__31(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__32(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__33(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__34(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__35(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__36(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__37(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__38(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__39(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__40(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__41(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__42(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__43(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__44(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__45(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__46(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__47(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__48(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__49(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__50(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__51(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__52(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__53(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__54(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__55(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__56(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__57(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__58(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__59(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__60(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__61(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__62(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__63(vlSelf);
        Vstd_pipeline_core_tb___024root___nba_sequent__TOP__64(vlSelf);
        __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__c 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[2U];
        __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__b 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[1U];
        __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__a 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[0U];
        __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__Vfuncout 
            = (((__Vinline__nba_sequent__TOP__65___Vfunc_maj__33__a 
                 & __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__b) 
                ^ (__Vinline__nba_sequent__TOP__65___Vfunc_maj__33__a 
                   & __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__c)) 
               ^ (__Vinline__nba_sequent__TOP__65___Vfunc_maj__33__b 
                  & __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__c));
        vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__1__KET____DOT__stdstage_i__DOT__maj_a 
            = __Vinline__nba_sequent__TOP__65___Vfunc_maj__33__Vfuncout;
        __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[0U];
        __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__Vfuncout 
            = ((([&]() {
                        vlSelfRef.__Vfunc_rotr32__29__a 
                            = __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a;
                        vlSelfRef.__Vfunc_rotr32__29__Vfuncout 
                            = ((vlSelfRef.__Vfunc_rotr32__29__a 
                                >> 2U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__29__a, 0x0000001eU));
                    }(), vlSelfRef.__Vfunc_rotr32__29__Vfuncout) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_rotr32__30__a 
                            = __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a;
                        vlSelfRef.__Vfunc_rotr32__30__Vfuncout 
                            = ((vlSelfRef.__Vfunc_rotr32__30__a 
                                >> 0x0dU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__30__a, 0x00000013U));
                    }(), vlSelfRef.__Vfunc_rotr32__30__Vfuncout)) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__31__a 
                        = __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__a;
                    vlSelfRef.__Vfunc_rotr32__31__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__31__a 
                            >> 0x16U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__31__a, 0x0000000aU));
                }(), vlSelfRef.__Vfunc_rotr32__31__Vfuncout));
        vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__1__KET____DOT__stdstage_i__DOT__s0 
            = __Vinline__nba_sequent__TOP__65___Vfunc_sum0__28__Vfuncout;
        __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__c 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[6U];
        __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__b 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[5U];
        __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__a 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[4U];
        __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__Vfuncout 
            = ((__Vinline__nba_sequent__TOP__65___Vfunc_ch__32__a 
                & __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__b) 
               ^ ((~ __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__a) 
                  & __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__c));
        vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__1__KET____DOT__stdstage_i__DOT__ch_e 
            = __Vinline__nba_sequent__TOP__65___Vfunc_ch__32__Vfuncout;
        __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__1__KET__.data[4U];
        __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__Vfuncout 
            = ((([&]() {
                        vlSelfRef.__Vfunc_rotr32__25__a 
                            = __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a;
                        vlSelfRef.__Vfunc_rotr32__25__Vfuncout 
                            = ((vlSelfRef.__Vfunc_rotr32__25__a 
                                >> 6U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__25__a, 0x0000001aU));
                    }(), vlSelfRef.__Vfunc_rotr32__25__Vfuncout) 
                ^ ([&]() {
                        vlSelfRef.__Vfunc_rotr32__26__a 
                            = __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a;
                        vlSelfRef.__Vfunc_rotr32__26__Vfuncout 
                            = ((vlSelfRef.__Vfunc_rotr32__26__a 
                                >> 0x0bU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__26__a, 0x00000015U));
                    }(), vlSelfRef.__Vfunc_rotr32__26__Vfuncout)) 
               ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__27__a 
                        = __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__a;
                    vlSelfRef.__Vfunc_rotr32__27__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__27__a 
                            >> 0x19U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__27__a, 7U));
                }(), vlSelfRef.__Vfunc_rotr32__27__Vfuncout));
        vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__1__KET____DOT__stdstage_i__DOT__s1 
            = __Vinline__nba_sequent__TOP__65___Vfunc_sum1__24__Vfuncout;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vstd_pipeline_core_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c 
            = vlSymsp->TOP__std_pipeline_core_tb__DOT__tb_if.message[0U];
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum 
            = (0x9d91b5ebU ^ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c);
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry 
            = ((0x5be0cd19U & (0xc67178f2U | __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c)) 
               | (0xc67178f2U & __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__c));
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__sum;
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__21__carry;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b 
            = vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__ch_e;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
            = vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__s1;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum 
            = (__Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
               ^ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b);
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry 
            = (__Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__a 
               & __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__b);
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__sum;
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__22__carry;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b 
            = __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_sum;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
            = __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_sum;
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum 
            = (__Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
               ^ __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b);
        __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry 
            = (__Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__a 
               & __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__b);
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__sum;
        __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry 
            = __Vinline__nba_sequent__TOP__66___Vtask_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa_fn__23__carry;
        vlSelfRef.std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__t1 
            = (((__Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_sum 
                 + VL_SHIFTL_III(32,32,32, __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa0_carry, 1U)) 
                + VL_SHIFTL_III(32,32,32, __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa1_carry, 1U)) 
               + VL_SHIFTL_III(32,32,32, __Vinline__nba_sequent__TOP__66_std_pipeline_core_tb__DOT__pipeline__DOT__genblk1__BRA__0__KET____DOT__stdstage_i__DOT__csa2_carry, 1U));
    }
}

void Vstd_pipeline_core_tb___024root___timing_commit(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___timing_commit\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.commit(
                                                   "@(posedge clk)");
    }
}

void Vstd_pipeline_core_tb___024root___timing_resume(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___timing_resume\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.resume(
                                                   "@(posedge clk)");
    }
}

void Vstd_pipeline_core_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vstd_pipeline_core_tb___024root___eval_triggers__act(Vstd_pipeline_core_tb___024root* vlSelf);
bool Vstd_pipeline_core_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vstd_pipeline_core_tb___024root___eval_act(Vstd_pipeline_core_tb___024root* vlSelf);

bool Vstd_pipeline_core_tb___024root___eval_phase__act(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_phase__act\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vstd_pipeline_core_tb___024root___eval_triggers__act(vlSelf);
    Vstd_pipeline_core_tb___024root___timing_commit(vlSelf);
    Vstd_pipeline_core_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vstd_pipeline_core_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vstd_pipeline_core_tb___024root___timing_resume(vlSelf);
        Vstd_pipeline_core_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vstd_pipeline_core_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vstd_pipeline_core_tb___024root___eval_phase__nba(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_phase__nba\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vstd_pipeline_core_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vstd_pipeline_core_tb___024root___eval_nba(vlSelf);
        Vstd_pipeline_core_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstd_pipeline_core_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vstd_pipeline_core_tb___024root___eval(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vstd_pipeline_core_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("std_pipeline_core_tb.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vstd_pipeline_core_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("std_pipeline_core_tb.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vstd_pipeline_core_tb___024root___eval_phase__act(vlSelf));
    } while (Vstd_pipeline_core_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vstd_pipeline_core_tb___024root___eval_debug_assertions(Vstd_pipeline_core_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_core_tb___024root___eval_debug_assertions\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
