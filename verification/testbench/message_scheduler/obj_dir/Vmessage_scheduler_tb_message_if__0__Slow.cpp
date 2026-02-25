// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmessage_scheduler_tb.h for the primary calling header

#include "Vmessage_scheduler_tb__pch.h"

VL_ATTR_COLD void Vmessage_scheduler_tb_message_if___ctor_var_reset(Vmessage_scheduler_tb_message_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmessage_scheduler_tb_message_if___ctor_var_reset\n"); );
    Vmessage_scheduler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14129604614540204776ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->block, __VscopeHash, 12356766002385227290ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->schedule, __VscopeHash, 11588393759945147675ull);
}
