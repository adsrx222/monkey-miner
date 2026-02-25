// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_stage_tb.h for the primary calling header

#include "Vstd_pipeline_stage_tb__pch.h"

VlCoroutine Vstd_pipeline_stage_tb___024root___eval_initial__TOP__Vtiming__0(Vstd_pipeline_stage_tb___024root* vlSelf);

void Vstd_pipeline_stage_tb___024root___eval_initial(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_initial\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vstd_pipeline_stage_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

extern const VlWide<8>/*255:0*/ Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0;

VlCoroutine Vstd_pipeline_stage_tb___024root___eval_initial__TOP__Vtiming__0(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout;
    VL_ZERO_W(256, __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data;
    VL_ZERO_W(256, __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data);
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__w;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__w = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_in;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_in = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1 = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t2;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t2 = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref = 0;
    IData/*31:0*/ __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref;
    __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref = 0;
    IData/*31:0*/ __Vfunc_sum1__1__Vfuncout;
    __Vfunc_sum1__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum1__1__a;
    __Vfunc_sum1__1__a = 0;
    IData/*31:0*/ __Vfunc_rotr32__2__Vfuncout;
    __Vfunc_rotr32__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rotr32__2__a;
    __Vfunc_rotr32__2__a = 0;
    CData/*4:0*/ __Vfunc_rotr32__2__b;
    __Vfunc_rotr32__2__b = 0;
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
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid = 0U;
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[0U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[1U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[2U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[3U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[3U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[4U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[5U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[6U];
    vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[7U] 
        = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.std_pipeline_stage_tb__DOT__wi = 0U;
    std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_stage_tb.sv", 
                                                             55);
        std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (std_pipeline_stage_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x000003e8U;
    while (VL_LTS_III(32, 0U, std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_stage_tb.sv", 
                                                             58);
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        VL_RANDOM_W(256, vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data);
        vlSelfRef.std_pipeline_stage_tb__DOT__wi = 
            VL_RANDOM_I();
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__w 
            = vlSelfRef.std_pipeline_stage_tb__DOT__wi;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[0U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[1U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[2U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[3U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[3U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[4U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[5U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[6U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[7U] 
            = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[7U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_in = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1 = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t2 = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref = 0;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[7U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[6U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[5U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[4U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[3U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[2U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[1U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__data[0U];
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1 
            = ((IData)(0x12345678U) + (((__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_in 
                                         + ([&]() {
                                __Vfunc_sum1__1__a 
                                    = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in;
                                __Vfunc_sum1__1__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_rotr32__2__b = 6U;
                                                __Vfunc_rotr32__2__a 
                                                    = __Vfunc_sum1__1__a;
                                                __Vfunc_rotr32__2__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__2__a 
                                                      >> (IData)(__Vfunc_rotr32__2__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__2__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__2__b))));
                                            }(), __Vfunc_rotr32__2__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_rotr32__3__b = 0x0bU;
                                                __Vfunc_rotr32__3__a 
                                                    = __Vfunc_sum1__1__a;
                                                __Vfunc_rotr32__3__Vfuncout 
                                                    = 
                                                    ((__Vfunc_rotr32__3__a 
                                                      >> (IData)(__Vfunc_rotr32__3__b)) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__3__a, 
                                                                     ((IData)(0x00000020U) 
                                                                      - (IData)(__Vfunc_rotr32__3__b))));
                                            }(), __Vfunc_rotr32__3__Vfuncout)) 
                                       ^ ([&]() {
                                            __Vfunc_rotr32__4__b = 0x19U;
                                            __Vfunc_rotr32__4__a 
                                                = __Vfunc_sum1__1__a;
                                            __Vfunc_rotr32__4__Vfuncout 
                                                = (
                                                   (__Vfunc_rotr32__4__a 
                                                    >> (IData)(__Vfunc_rotr32__4__b)) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_rotr32__4__a, 
                                                                   ((IData)(0x00000020U) 
                                                                    - (IData)(__Vfunc_rotr32__4__b))));
                                        }(), __Vfunc_rotr32__4__Vfuncout));
                            }(), __Vfunc_sum1__1__Vfuncout)) 
                                        + ([&]() {
                            __Vfunc_ch__5__c = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in;
                            __Vfunc_ch__5__b = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in;
                            __Vfunc_ch__5__a = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in;
                            __Vfunc_ch__5__Vfuncout 
                                = ((__Vfunc_ch__5__a 
                                    & __Vfunc_ch__5__b) 
                                   ^ ((~ __Vfunc_ch__5__a) 
                                      & __Vfunc_ch__5__c));
                        }(), __Vfunc_ch__5__Vfuncout)) 
                                       + __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__w));
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t2 
            = (([&]() {
                    __Vfunc_sum0__6__a = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in;
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
                    __Vfunc_maj__10__c = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in;
                    __Vfunc_maj__10__b = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in;
                    __Vfunc_maj__10__a = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in;
                    __Vfunc_maj__10__Vfuncout = (((__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__b) 
                                                  ^ 
                                                  (__Vfunc_maj__10__a 
                                                   & __Vfunc_maj__10__c)) 
                                                 ^ 
                                                 (__Vfunc_maj__10__b 
                                                  & __Vfunc_maj__10__c));
                }(), __Vfunc_maj__10__Vfuncout));
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_ref 
            = (__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1 
               + __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t2);
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_ref 
            = (__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_in 
               + __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__t1);
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_in;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[0U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__a_ref;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[1U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__b_ref;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[2U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref))));
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[3U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__d_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__c_ref))) 
                       >> 0x00000020U));
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[4U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__e_ref;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[5U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__f_ref;
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[6U] 
            = (IData)((((QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref)) 
                        << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref))));
        __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[7U] 
            = (IData)(((((QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__h_ref)) 
                         << 0x00000020U) | (QData)((IData)(__Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__g_ref))) 
                       >> 0x00000020U));
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[0U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[0U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[1U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[1U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[2U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[2U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[3U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[3U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[4U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[4U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[5U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[5U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[6U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[6U];
        vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[7U] 
            = __Vfunc_std_pipeline_stage_tb__DOT__compute_ref__0__Vfuncout[7U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[0U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[0U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[1U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[1U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[2U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[2U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[3U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[3U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[4U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[4U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[5U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[5U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[6U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[6U];
        vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[7U] 
            = vlSelfRef.std_pipeline_stage_tb__DOT__packed_ref[7U];
        co_await vlSelfRef.__VtrigSched_h98d2db8e__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "std_pipeline_stage_tb.sv", 
                                                             66);
        if (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.valid) {
            if (VL_UNLIKELY(((0U != ((((((((vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[0U] 
                                            ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[0U]) 
                                           | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[1U] 
                                              ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[1U])) 
                                          | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[2U] 
                                             ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[2U])) 
                                         | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[3U] 
                                            ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[3U])) 
                                        | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[4U] 
                                           ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[4U])) 
                                       | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[5U] 
                                          ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[5U])) 
                                      | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[6U] 
                                         ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[6U])) 
                                     | (vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[7U] 
                                        ^ vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref[7U])))))) {
                VL_WRITEF_NX("Mismatch! \342\235\214\nMidstate: %x W: %x\nExpected: %x\nGot     : %x\n[%0t] %%Fatal: std_pipeline_stage_tb.sv:74: Assertion failed in %Nstd_pipeline_stage_tb.unnamedblk1_2\n",0,
                             256,vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data.data(),
                             32,vlSelfRef.std_pipeline_stage_tb__DOT__wi,
                             256,vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref.data(),
                             256,vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data.data(),
                             64,VL_TIME_UNITED_Q(10),
                             -6,vlSymsp->name());
                VL_STOP_MT("std_pipeline_stage_tb.sv", 74, "", false);
            } else {
                VL_WRITEF_NX("Match! \342\234\205\nMidstate: %x W: %x\nExpected: %x\nGot     : %x\n",0,
                             256,vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data.data(),
                             32,vlSelfRef.std_pipeline_stage_tb__DOT__wi,
                             256,vlSelfRef.std_pipeline_stage_tb__DOT__prev_packed_ref.data(),
                             256,vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data.data());
            }
        }
        std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (std_pipeline_stage_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("Test PASSED\n",0);
    VL_FINISH_MT("std_pipeline_stage_tb.sv", 85, "");
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstd_pipeline_stage_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vstd_pipeline_stage_tb___024root___eval_triggers__act(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_triggers__act\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.reset_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstd_pipeline_stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vstd_pipeline_stage_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___trigger_anySet__act\n"); );
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

void Vstd_pipeline_stage_tb___024root___act_sequent__TOP__0(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___act_sequent__TOP__0\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__s1;
    std_pipeline_stage_tb__DOT__dut__DOT__s1 = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__ch_e;
    std_pipeline_stage_tb__DOT__dut__DOT__ch_e = 0;
    IData/*31:0*/ __Vfunc_sum1__11__Vfuncout;
    __Vfunc_sum1__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum1__11__a;
    __Vfunc_sum1__11__a = 0;
    IData/*31:0*/ __Vfunc_sum0__15__Vfuncout;
    __Vfunc_sum0__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum0__15__a;
    __Vfunc_sum0__15__a = 0;
    IData/*31:0*/ __Vfunc_ch__19__Vfuncout;
    __Vfunc_ch__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ch__19__a;
    __Vfunc_ch__19__a = 0;
    IData/*31:0*/ __Vfunc_ch__19__b;
    __Vfunc_ch__19__b = 0;
    IData/*31:0*/ __Vfunc_ch__19__c;
    __Vfunc_ch__19__c = 0;
    IData/*31:0*/ __Vfunc_maj__20__Vfuncout;
    __Vfunc_maj__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maj__20__a;
    __Vfunc_maj__20__a = 0;
    IData/*31:0*/ __Vfunc_maj__20__b;
    __Vfunc_maj__20__b = 0;
    IData/*31:0*/ __Vfunc_maj__20__c;
    __Vfunc_maj__20__c = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry = 0;
    // Body
    __Vfunc_maj__20__c = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U];
    __Vfunc_maj__20__b = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U];
    __Vfunc_maj__20__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
    __Vfunc_maj__20__Vfuncout = (((__Vfunc_maj__20__a 
                                   & __Vfunc_maj__20__b) 
                                  ^ (__Vfunc_maj__20__a 
                                     & __Vfunc_maj__20__c)) 
                                 ^ (__Vfunc_maj__20__b 
                                    & __Vfunc_maj__20__c));
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__maj_a 
        = __Vfunc_maj__20__Vfuncout;
    __Vfunc_sum0__15__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
    __Vfunc_sum0__15__Vfuncout = ((([&]() {
                    vlSelfRef.__Vfunc_rotr32__16__a 
                        = __Vfunc_sum0__15__a;
                    vlSelfRef.__Vfunc_rotr32__16__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__16__a 
                            >> 2U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__16__a, 0x0000001eU));
                }(), vlSelfRef.__Vfunc_rotr32__16__Vfuncout) 
                                   ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__17__a 
                        = __Vfunc_sum0__15__a;
                    vlSelfRef.__Vfunc_rotr32__17__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__17__a 
                            >> 0x0dU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__17__a, 0x00000013U));
                }(), vlSelfRef.__Vfunc_rotr32__17__Vfuncout)) 
                                  ^ ([&]() {
                vlSelfRef.__Vfunc_rotr32__18__a = __Vfunc_sum0__15__a;
                vlSelfRef.__Vfunc_rotr32__18__Vfuncout 
                    = ((vlSelfRef.__Vfunc_rotr32__18__a 
                        >> 0x16U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__18__a, 0x0000000aU));
            }(), vlSelfRef.__Vfunc_rotr32__18__Vfuncout));
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__s0 
        = __Vfunc_sum0__15__Vfuncout;
    __Vfunc_ch__19__c = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U];
    __Vfunc_ch__19__b = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U];
    __Vfunc_ch__19__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
    __Vfunc_ch__19__Vfuncout = ((__Vfunc_ch__19__a 
                                 & __Vfunc_ch__19__b) 
                                ^ ((~ __Vfunc_ch__19__a) 
                                   & __Vfunc_ch__19__c));
    std_pipeline_stage_tb__DOT__dut__DOT__ch_e = __Vfunc_ch__19__Vfuncout;
    __Vfunc_sum1__11__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
    __Vfunc_sum1__11__Vfuncout = ((([&]() {
                    vlSelfRef.__Vfunc_rotr32__12__a 
                        = __Vfunc_sum1__11__a;
                    vlSelfRef.__Vfunc_rotr32__12__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__12__a 
                            >> 6U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__12__a, 0x0000001aU));
                }(), vlSelfRef.__Vfunc_rotr32__12__Vfuncout) 
                                   ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__13__a 
                        = __Vfunc_sum1__11__a;
                    vlSelfRef.__Vfunc_rotr32__13__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__13__a 
                            >> 0x0bU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__13__a, 0x00000015U));
                }(), vlSelfRef.__Vfunc_rotr32__13__Vfuncout)) 
                                  ^ ([&]() {
                vlSelfRef.__Vfunc_rotr32__14__a = __Vfunc_sum1__11__a;
                vlSelfRef.__Vfunc_rotr32__14__Vfuncout 
                    = ((vlSelfRef.__Vfunc_rotr32__14__a 
                        >> 0x19U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__14__a, 7U));
            }(), vlSelfRef.__Vfunc_rotr32__14__Vfuncout));
    std_pipeline_stage_tb__DOT__dut__DOT__s1 = __Vfunc_sum1__11__Vfuncout;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c 
        = vlSelfRef.std_pipeline_stage_tb__DOT__wi;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
        = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[7U];
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum 
        = (0x12345678U ^ (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
                          ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c));
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry 
        = ((__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
            & (0x12345678U | __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c)) 
           | (0x12345678U & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c));
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b 
        = std_pipeline_stage_tb__DOT__dut__DOT__ch_e;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
        = std_pipeline_stage_tb__DOT__dut__DOT__s1;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
           ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b);
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
           & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b);
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b 
        = std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
        = std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
           ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b);
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
           & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b);
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry;
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1 
        = (((std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum 
             + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry, 1U)) 
            + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry, 1U)) 
           + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry, 1U));
}

void Vstd_pipeline_stage_tb___024root___eval_act(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_act\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vstd_pipeline_stage_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vstd_pipeline_stage_tb___024root___nba_sequent__TOP__0(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___nba_sequent__TOP__0\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    if (vlSelfRef.reset_n) {
        if (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid) {
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.valid 
                = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid;
        }
        if (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid) {
            __Vtemp_1[1U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
            __Vtemp_1[2U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U];
            __Vtemp_1[3U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[4U] 
                = (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[3U] 
                   + vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1);
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[5U] 
                = __Vtemp_1[1U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[6U] 
                = __Vtemp_1[2U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[7U] 
                = __Vtemp_1[3U];
            __Vtemp_3[1U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
            __Vtemp_3[2U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U];
            __Vtemp_3[3U] = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[0U] 
                = (vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1 
                   + (vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__maj_a 
                      + vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__s0));
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[1U] 
                = __Vtemp_3[1U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[2U] 
                = __Vtemp_3[2U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[3U] 
                = __Vtemp_3[3U];
        }
    } else {
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.valid = 0U;
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[0U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[1U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[2U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[3U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[4U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[5U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[6U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[7U] 
            = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[7U];
    }
}

void Vstd_pipeline_stage_tb___024root___nba_sequent__TOP__1(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___nba_sequent__TOP__1\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__s1;
    std_pipeline_stage_tb__DOT__dut__DOT__s1 = 0;
    IData/*31:0*/ std_pipeline_stage_tb__DOT__dut__DOT__ch_e;
    std_pipeline_stage_tb__DOT__dut__DOT__ch_e = 0;
    IData/*31:0*/ __Vfunc_sum1__11__Vfuncout;
    __Vfunc_sum1__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum1__11__a;
    __Vfunc_sum1__11__a = 0;
    IData/*31:0*/ __Vfunc_sum0__15__Vfuncout;
    __Vfunc_sum0__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sum0__15__a;
    __Vfunc_sum0__15__a = 0;
    IData/*31:0*/ __Vfunc_ch__19__Vfuncout;
    __Vfunc_ch__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ch__19__a;
    __Vfunc_ch__19__a = 0;
    IData/*31:0*/ __Vfunc_ch__19__b;
    __Vfunc_ch__19__b = 0;
    IData/*31:0*/ __Vfunc_ch__19__c;
    __Vfunc_ch__19__c = 0;
    IData/*31:0*/ __Vfunc_maj__20__Vfuncout;
    __Vfunc_maj__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_maj__20__a;
    __Vfunc_maj__20__a = 0;
    IData/*31:0*/ __Vfunc_maj__20__b;
    __Vfunc_maj__20__b = 0;
    IData/*31:0*/ __Vfunc_maj__20__c;
    __Vfunc_maj__20__c = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum = 0;
    IData/*31:0*/ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry = 0;
    // Body
    __Vfunc_ch__19__c = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U];
    __Vfunc_ch__19__b = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U];
    __Vfunc_ch__19__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
    __Vfunc_ch__19__Vfuncout = ((__Vfunc_ch__19__a 
                                 & __Vfunc_ch__19__b) 
                                ^ ((~ __Vfunc_ch__19__a) 
                                   & __Vfunc_ch__19__c));
    std_pipeline_stage_tb__DOT__dut__DOT__ch_e = __Vfunc_ch__19__Vfuncout;
    __Vfunc_sum1__11__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
    __Vfunc_sum1__11__Vfuncout = ((([&]() {
                    vlSelfRef.__Vfunc_rotr32__12__a 
                        = __Vfunc_sum1__11__a;
                    vlSelfRef.__Vfunc_rotr32__12__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__12__a 
                            >> 6U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__12__a, 0x0000001aU));
                }(), vlSelfRef.__Vfunc_rotr32__12__Vfuncout) 
                                   ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__13__a 
                        = __Vfunc_sum1__11__a;
                    vlSelfRef.__Vfunc_rotr32__13__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__13__a 
                            >> 0x0bU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__13__a, 0x00000015U));
                }(), vlSelfRef.__Vfunc_rotr32__13__Vfuncout)) 
                                  ^ ([&]() {
                vlSelfRef.__Vfunc_rotr32__14__a = __Vfunc_sum1__11__a;
                vlSelfRef.__Vfunc_rotr32__14__Vfuncout 
                    = ((vlSelfRef.__Vfunc_rotr32__14__a 
                        >> 0x19U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__14__a, 7U));
            }(), vlSelfRef.__Vfunc_rotr32__14__Vfuncout));
    std_pipeline_stage_tb__DOT__dut__DOT__s1 = __Vfunc_sum1__11__Vfuncout;
    __Vfunc_maj__20__c = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U];
    __Vfunc_maj__20__b = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U];
    __Vfunc_maj__20__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
    __Vfunc_maj__20__Vfuncout = (((__Vfunc_maj__20__a 
                                   & __Vfunc_maj__20__b) 
                                  ^ (__Vfunc_maj__20__a 
                                     & __Vfunc_maj__20__c)) 
                                 ^ (__Vfunc_maj__20__b 
                                    & __Vfunc_maj__20__c));
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__maj_a 
        = __Vfunc_maj__20__Vfuncout;
    __Vfunc_sum0__15__a = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
    __Vfunc_sum0__15__Vfuncout = ((([&]() {
                    vlSelfRef.__Vfunc_rotr32__16__a 
                        = __Vfunc_sum0__15__a;
                    vlSelfRef.__Vfunc_rotr32__16__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__16__a 
                            >> 2U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__16__a, 0x0000001eU));
                }(), vlSelfRef.__Vfunc_rotr32__16__Vfuncout) 
                                   ^ ([&]() {
                    vlSelfRef.__Vfunc_rotr32__17__a 
                        = __Vfunc_sum0__15__a;
                    vlSelfRef.__Vfunc_rotr32__17__Vfuncout 
                        = ((vlSelfRef.__Vfunc_rotr32__17__a 
                            >> 0x0dU) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__17__a, 0x00000013U));
                }(), vlSelfRef.__Vfunc_rotr32__17__Vfuncout)) 
                                  ^ ([&]() {
                vlSelfRef.__Vfunc_rotr32__18__a = __Vfunc_sum0__15__a;
                vlSelfRef.__Vfunc_rotr32__18__Vfuncout 
                    = ((vlSelfRef.__Vfunc_rotr32__18__a 
                        >> 0x16U) | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_rotr32__18__a, 0x0000000aU));
            }(), vlSelfRef.__Vfunc_rotr32__18__Vfuncout));
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__s0 
        = __Vfunc_sum0__15__Vfuncout;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c 
        = vlSelfRef.std_pipeline_stage_tb__DOT__wi;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
        = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[7U];
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum 
        = (0x12345678U ^ (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
                          ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c));
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry 
        = ((__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__a 
            & (0x12345678U | __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c)) 
           | (0x12345678U & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__c));
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__21__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b 
        = std_pipeline_stage_tb__DOT__dut__DOT__ch_e;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
        = std_pipeline_stage_tb__DOT__dut__DOT__s1;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
           ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b);
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__a 
           & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__b);
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__22__carry;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b 
        = std_pipeline_stage_tb__DOT__dut__DOT__csa1_sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
        = std_pipeline_stage_tb__DOT__dut__DOT__csa0_sum;
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
           ^ __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b);
    __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry 
        = (__Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__a 
           & __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__b);
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__sum;
    std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry 
        = __Vtask_std_pipeline_stage_tb__DOT__dut__DOT__csa_fn__23__carry;
    vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1 
        = (((std_pipeline_stage_tb__DOT__dut__DOT__csa2_sum 
             + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa0_carry, 1U)) 
            + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa1_carry, 1U)) 
           + VL_SHIFTL_III(32,32,32, std_pipeline_stage_tb__DOT__dut__DOT__csa2_carry, 1U));
}

void Vstd_pipeline_stage_tb___024root___eval_nba(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_nba\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__0___Vtemp_1;
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__0___Vtemp_3;
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.reset_n) {
            if (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid) {
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.valid 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid;
            }
            if (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.valid) {
                __Vinline__nba_sequent__TOP__0___Vtemp_1[1U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[4U];
                __Vinline__nba_sequent__TOP__0___Vtemp_1[2U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[5U];
                __Vinline__nba_sequent__TOP__0___Vtemp_1[3U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[6U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[4U] 
                    = (vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[3U] 
                       + vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1);
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[5U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_1[1U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[6U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_1[2U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[7U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_1[3U];
                __Vinline__nba_sequent__TOP__0___Vtemp_3[1U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[0U];
                __Vinline__nba_sequent__TOP__0___Vtemp_3[2U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[1U];
                __Vinline__nba_sequent__TOP__0___Vtemp_3[3U] 
                    = vlSymsp->TOP__std_pipeline_stage_tb__DOT__input_if.data[2U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[0U] 
                    = (vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__t1 
                       + (vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__maj_a 
                          + vlSelfRef.std_pipeline_stage_tb__DOT__dut__DOT__s0));
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[1U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_3[1U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[2U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_3[2U];
                vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[3U] 
                    = __Vinline__nba_sequent__TOP__0___Vtemp_3[3U];
            }
        } else {
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.valid = 0U;
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[0U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[0U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[1U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[1U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[2U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[2U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[3U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[3U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[4U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[4U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[5U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[5U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[6U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[6U];
            vlSymsp->TOP__std_pipeline_stage_tb__DOT__output_if.data[7U] 
                = Vstd_pipeline_stage_tb__ConstPool__CONST_h9e67c271_0[7U];
        }
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vstd_pipeline_stage_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vstd_pipeline_stage_tb___024root___timing_commit(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___timing_commit\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.commit(
                                                   "@(posedge clk)");
    }
}

void Vstd_pipeline_stage_tb___024root___timing_resume(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___timing_resume\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h98d2db8e__0.resume(
                                                   "@(posedge clk)");
    }
}

void Vstd_pipeline_stage_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vstd_pipeline_stage_tb___024root___eval_phase__act(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_phase__act\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vstd_pipeline_stage_tb___024root___eval_triggers__act(vlSelf);
    Vstd_pipeline_stage_tb___024root___timing_commit(vlSelf);
    Vstd_pipeline_stage_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vstd_pipeline_stage_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vstd_pipeline_stage_tb___024root___timing_resume(vlSelf);
        Vstd_pipeline_stage_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vstd_pipeline_stage_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vstd_pipeline_stage_tb___024root___eval_phase__nba(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_phase__nba\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vstd_pipeline_stage_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vstd_pipeline_stage_tb___024root___eval_nba(vlSelf);
        Vstd_pipeline_stage_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vstd_pipeline_stage_tb___024root___eval(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vstd_pipeline_stage_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("std_pipeline_stage_tb.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vstd_pipeline_stage_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("std_pipeline_stage_tb.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vstd_pipeline_stage_tb___024root___eval_phase__act(vlSelf));
    } while (Vstd_pipeline_stage_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vstd_pipeline_stage_tb___024root___eval_debug_assertions(Vstd_pipeline_stage_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstd_pipeline_stage_tb___024root___eval_debug_assertions\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
