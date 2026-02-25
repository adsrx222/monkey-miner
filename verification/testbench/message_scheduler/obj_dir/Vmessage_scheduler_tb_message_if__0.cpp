// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmessage_scheduler_tb.h for the primary calling header

#include "Vmessage_scheduler_tb__pch.h"

std::string VL_TO_STRING(const Vmessage_scheduler_tb_message_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vmessage_scheduler_tb_message_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
