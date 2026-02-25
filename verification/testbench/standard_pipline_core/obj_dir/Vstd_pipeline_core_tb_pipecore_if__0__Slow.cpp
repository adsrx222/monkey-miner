// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_core_tb.h for the primary calling header

#include "Vstd_pipeline_core_tb__pch.h"

VL_ATTR_COLD void Vstd_pipeline_core_tb_pipecore_if___ctor_var_reset(Vstd_pipeline_core_tb_pipecore_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstd_pipeline_core_tb_pipecore_if___ctor_var_reset\n"); );
    Vstd_pipeline_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->midstate, __VscopeHash, 15143968845135750687ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->message, __VscopeHash, 11263761559013077561ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->final_digest, __VscopeHash, 4910761695899849894ull);
}
