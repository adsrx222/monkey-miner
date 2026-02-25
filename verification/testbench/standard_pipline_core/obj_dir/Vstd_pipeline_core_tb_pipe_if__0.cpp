// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_core_tb.h for the primary calling header

#include "Vstd_pipeline_core_tb__pch.h"

void Vstd_pipeline_core_tb_pipe_if___nba_sequent__TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET____0(Vstd_pipeline_core_tb_pipe_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vstd_pipeline_core_tb_pipe_if___nba_sequent__TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET____0\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__data[0U] = vlSelfRef.data[0U];
    vlSelfRef.__Vdly__data[1U] = vlSelfRef.data[1U];
    vlSelfRef.__Vdly__data[2U] = vlSelfRef.data[2U];
    vlSelfRef.__Vdly__data[3U] = vlSelfRef.data[3U];
    vlSelfRef.__Vdly__data[4U] = vlSelfRef.data[4U];
    vlSelfRef.__Vdly__data[5U] = vlSelfRef.data[5U];
    vlSelfRef.__Vdly__data[6U] = vlSelfRef.data[6U];
    vlSelfRef.__Vdly__data[7U] = vlSelfRef.data[7U];
}

void Vstd_pipeline_core_tb_pipe_if___nba_sequent__TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET____1(Vstd_pipeline_core_tb_pipe_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vstd_pipeline_core_tb_pipe_if___nba_sequent__TOP__std_pipeline_core_tb__DOT__pipeline__DOT__bus__BRA__64__KET____1\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.data[0U] = vlSelfRef.__Vdly__data[0U];
    vlSelfRef.data[1U] = vlSelfRef.__Vdly__data[1U];
    vlSelfRef.data[2U] = vlSelfRef.__Vdly__data[2U];
    vlSelfRef.data[3U] = vlSelfRef.__Vdly__data[3U];
    vlSelfRef.data[4U] = vlSelfRef.__Vdly__data[4U];
    vlSelfRef.data[5U] = vlSelfRef.__Vdly__data[5U];
    vlSelfRef.data[6U] = vlSelfRef.__Vdly__data[6U];
    vlSelfRef.data[7U] = vlSelfRef.__Vdly__data[7U];
}

std::string VL_TO_STRING(const Vstd_pipeline_core_tb_pipe_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vstd_pipeline_core_tb_pipe_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
