// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort_tb.h for the primary calling header

#include "Vsort_tb__pch.h"
#include "Vsort_tb__Syms.h"
#include "Vsort_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsort_tb___024root___eval_initial__TOP__Vtiming__0(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.sort_tb__DOT__in = VL_RANDOM_I();
    co_await vlSelfRef.__VdlySched.delay(0x40ULL, nullptr, 
                                         "sort_tb.v", 
                                         11);
    VL_WRITEF_NX("In: %0# ",0,4,(vlSelfRef.sort_tb__DOT__in 
                                 >> 0x1cU));
    vlSelfRef.sort_tb__DOT__i = 1U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 0x18U)));
    vlSelfRef.sort_tb__DOT__i = 2U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 0x14U)));
    vlSelfRef.sort_tb__DOT__i = 3U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 0x10U)));
    vlSelfRef.sort_tb__DOT__i = 4U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 0xcU)));
    vlSelfRef.sort_tb__DOT__i = 5U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 8U)));
    vlSelfRef.sort_tb__DOT__i = 6U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & (vlSelfRef.sort_tb__DOT__in 
                                     >> 4U)));
    vlSelfRef.sort_tb__DOT__i = 7U;
    VL_WRITEF_NX("%0# ",0,4,(0xfU & vlSelfRef.sort_tb__DOT__in));
    vlSelfRef.sort_tb__DOT__i = 8U;
    VL_WRITEF_NX("\nOut: %0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [0U]);
    vlSelfRef.sort_tb__DOT__i = 1U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [1U]);
    vlSelfRef.sort_tb__DOT__i = 2U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [2U]);
    vlSelfRef.sort_tb__DOT__i = 3U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [3U]);
    vlSelfRef.sort_tb__DOT__i = 4U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [4U]);
    vlSelfRef.sort_tb__DOT__i = 5U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [5U]);
    vlSelfRef.sort_tb__DOT__i = 6U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [6U]);
    vlSelfRef.sort_tb__DOT__i = 7U;
    VL_WRITEF_NX("%0# ",0,4,vlSelfRef.sort_tb__DOT__dut__DOT__tmp
                 [7U]);
    vlSelfRef.sort_tb__DOT__i = 8U;
    VL_WRITEF_NX("\n",0);
    VL_FINISH_MT("sort_tb.v", 15, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort_tb___024root___dump_triggers__act(Vsort_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsort_tb___024root___eval_triggers__act(Vsort_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort_tb___024root___eval_triggers__act\n"); );
    Vsort_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsort_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
