// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort.h for the primary calling header

#include "Vsort__pch.h"
#include "Vsort___024root.h"

VL_ATTR_COLD void Vsort___024root___eval_static(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_static\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsort___024root___eval_final(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_final\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__stl(Vsort___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsort___024root___eval_phase__stl(Vsort___024root* vlSelf);

VL_ATTR_COLD void Vsort___024root___eval_settle(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_settle\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsort___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sort.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsort___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__stl(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___dump_triggers__stl\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vsort___024root___act_sequent__TOP__0(Vsort___024root* vlSelf);

VL_ATTR_COLD void Vsort___024root___eval_stl(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_stl\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsort___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsort___024root___eval_triggers__stl(Vsort___024root* vlSelf);

VL_ATTR_COLD bool Vsort___024root___eval_phase__stl(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_phase__stl\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsort___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsort___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__act(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___dump_triggers__act\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__nba(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___dump_triggers__nba\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsort___024root___ctor_var_reset(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___ctor_var_reset\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->A = VL_RAND_RESET_I(32);
    vlSelf->B = VL_RAND_RESET_I(32);
    vlSelf->sort__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->sort__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->sort__DOT__tmp[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
