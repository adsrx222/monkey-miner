// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmessage_scheduler_tb.h for the primary calling header

#ifndef VERILATED_VMESSAGE_SCHEDULER_TB_MESSAGE_IF_H_
#define VERILATED_VMESSAGE_SCHEDULER_TB_MESSAGE_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmessage_scheduler_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmessage_scheduler_tb_message_if final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset_n,0,0);
    VlWide<16>/*511:0*/ block;
    VlWide<64>/*2047:0*/ schedule;

    // INTERNAL VARIABLES
    Vmessage_scheduler_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmessage_scheduler_tb_message_if() = default;
    ~Vmessage_scheduler_tb_message_if() = default;
    void ctor(Vmessage_scheduler_tb__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vmessage_scheduler_tb_message_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vmessage_scheduler_tb_message_if* obj);

#endif  // guard
