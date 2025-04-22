// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsort.h for the primary calling header

#ifndef VERILATED_VSORT___024ROOT_H_
#define VERILATED_VSORT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsort__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsort___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(A,31,0);
    VL_OUT(B,31,0);
    IData/*31:0*/ sort__DOT__i;
    IData/*31:0*/ sort__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 8> sort__DOT__tmp;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsort__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsort___024root(Vsort__Syms* symsp, const char* v__name);
    ~Vsort___024root();
    VL_UNCOPYABLE(Vsort___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
