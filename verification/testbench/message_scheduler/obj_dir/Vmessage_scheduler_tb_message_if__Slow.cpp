// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmessage_scheduler_tb.h for the primary calling header

#include "Vmessage_scheduler_tb__pch.h"

void Vmessage_scheduler_tb_message_if___ctor_var_reset(Vmessage_scheduler_tb_message_if* vlSelf);

void Vmessage_scheduler_tb_message_if::ctor(Vmessage_scheduler_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vmessage_scheduler_tb_message_if___ctor_var_reset(this);
}

void Vmessage_scheduler_tb_message_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vmessage_scheduler_tb_message_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
