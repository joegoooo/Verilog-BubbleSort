// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsort_tb.h for the primary calling header

#ifndef VERILATED_VSORT_TB___024ROOT_H_
#define VERILATED_VSORT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsort_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsort_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ sort_tb__DOT__in;
    IData/*31:0*/ sort_tb__DOT__i;
    IData/*31:0*/ sort_tb__DOT__dut__DOT__i;
    IData/*31:0*/ sort_tb__DOT__dut__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 8> sort_tb__DOT__dut__DOT__tmp;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsort_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsort_tb___024root(Vsort_tb__Syms* symsp, const char* v__name);
    ~Vsort_tb___024root();
    VL_UNCOPYABLE(Vsort_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
