// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstd_pipeline_stage_tb.h for the primary calling header

#include "Vstd_pipeline_stage_tb__pch.h"

std::string VL_TO_STRING(const Vstd_pipeline_stage_tb_pipe_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vstd_pipeline_stage_tb_pipe_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->vlNamep : "null");
}
