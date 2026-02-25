// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_stage_tb.h for the primary calling header

#include "Vstd_pipeline_stage_tb__pch.h"

VL_ATTR_COLD void Vstd_pipeline_stage_tb_pipe_if___ctor_var_reset(Vstd_pipeline_stage_tb_pipe_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstd_pipeline_stage_tb_pipe_if___ctor_var_reset\n"); );
    Vstd_pipeline_stage_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    VL_SCOPED_RAND_RESET_W(256, vlSelf->data, __VscopeHash, 10363016170300574568ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
}
