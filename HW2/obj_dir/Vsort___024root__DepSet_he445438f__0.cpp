// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort.h for the primary calling header

#include "Vsort__pch.h"
#include "Vsort__Syms.h"
#include "Vsort___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__act(Vsort___024root* vlSelf);
#endif  // VL_DEBUG

void Vsort___024root___eval_triggers__act(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_triggers__act\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsort___024root___dump_triggers__act(vlSelf);
    }
#endif
}
