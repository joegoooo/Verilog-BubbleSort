// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsort.h for the primary calling header

#include "Vsort__pch.h"
#include "Vsort___024root.h"

VlCoroutine Vsort___024root___eval_initial__TOP__Vtiming__0(Vsort___024root* vlSelf);

void Vsort___024root___eval_initial(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_initial\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsort___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vsort___024root___eval_initial__TOP__Vtiming__0(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ sort__DOT____Vconcswap_1_h913610fa__0;
    sort__DOT____Vconcswap_1_h913610fa__0 = 0;
    CData/*3:0*/ sort__DOT____Vconcswap_1_h9130d70e__0;
    sort__DOT____Vconcswap_1_h9130d70e__0 = 0;
    // Body
    while (1U) {
        vlSelfRef.sort__DOT__tmp[7U] = (0xfU & vlSelfRef.A);
        vlSelfRef.sort__DOT__tmp[6U] = (0xfU & (vlSelfRef.A 
                                                >> 4U));
        vlSelfRef.sort__DOT__tmp[5U] = (0xfU & (vlSelfRef.A 
                                                >> 8U));
        vlSelfRef.sort__DOT__tmp[4U] = (0xfU & (vlSelfRef.A 
                                                >> 0xcU));
        vlSelfRef.sort__DOT__tmp[3U] = (0xfU & (vlSelfRef.A 
                                                >> 0x10U));
        vlSelfRef.sort__DOT__tmp[2U] = (0xfU & (vlSelfRef.A 
                                                >> 0x14U));
        vlSelfRef.sort__DOT__tmp[1U] = (0xfU & (vlSelfRef.A 
                                                >> 0x18U));
        vlSelfRef.sort__DOT__tmp[0U] = (vlSelfRef.A 
                                        >> 0x1cU);
        vlSelfRef.sort__DOT__i = 8U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 3U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [2U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])));
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 4U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [3U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])));
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 5U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [5U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [4U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])));
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[5U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 6U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [6U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [5U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [6U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [6U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [5U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [5U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [6U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [6U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [6U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [5U])));
        vlSelfRef.sort__DOT__tmp[5U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[6U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 7U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [6U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [7U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [6U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [7U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [7U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [6U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [6U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [7U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [6U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [7U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [7U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [6U])));
        vlSelfRef.sort__DOT__tmp[6U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[7U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 8U;
        vlSelfRef.sort__DOT__i = 1U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 3U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [2U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])));
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 4U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [3U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])));
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 5U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [5U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [4U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])));
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[5U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [5U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [6U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [6U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [6U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [5U])));
        vlSelfRef.sort__DOT__j = 6U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [6U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [5U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [6U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [6U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [5U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[5U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[6U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 7U;
        vlSelfRef.sort__DOT__i = 2U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 3U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [2U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])));
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 4U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [3U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])));
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [4U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [5U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [5U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])));
        vlSelfRef.sort__DOT__j = 5U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [5U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [5U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[5U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 6U;
        vlSelfRef.sort__DOT__i = 3U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 3U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [2U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])));
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [3U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [4U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [4U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])));
        vlSelfRef.sort__DOT__j = 4U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [4U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [4U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[4U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 5U;
        vlSelfRef.sort__DOT__i = 4U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [2U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [3U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [3U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])));
        vlSelfRef.sort__DOT__j = 3U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [3U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [3U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[3U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 4U;
        vlSelfRef.sort__DOT__i = 5U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [1U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [2U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [2U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])));
        vlSelfRef.sort__DOT__j = 2U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [2U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [2U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[2U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 3U;
        vlSelfRef.sort__DOT__i = 6U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        sort__DOT____Vconcswap_1_h9130d70e__0 = (0xfU 
                                                 & ((vlSelfRef.sort__DOT__tmp
                                                     [0U] 
                                                     > 
                                                     vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     ? 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [1U])
                                                     : 
                                                    ((vlSelfRef.sort__DOT__tmp
                                                      [1U] 
                                                      << 4U) 
                                                     | vlSelfRef.sort__DOT__tmp
                                                     [0U])));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        sort__DOT____Vconcswap_1_h913610fa__0 = (0xfU 
                                                 & (((vlSelfRef.sort__DOT__tmp
                                                      [0U] 
                                                      > 
                                                      vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      ? 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [0U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [1U])
                                                      : 
                                                     ((vlSelfRef.sort__DOT__tmp
                                                       [1U] 
                                                       << 4U) 
                                                      | vlSelfRef.sort__DOT__tmp
                                                      [0U])) 
                                                    >> 4U));
        vlSelfRef.sort__DOT__tmp[0U] = sort__DOT____Vconcswap_1_h913610fa__0;
        vlSelfRef.sort__DOT__tmp[1U] = sort__DOT____Vconcswap_1_h9130d70e__0;
        vlSelfRef.sort__DOT__j = 2U;
        vlSelfRef.sort__DOT__i = 7U;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "sort.v", 
                                             15);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.sort__DOT__j = 1U;
        vlSelfRef.sort__DOT__i = 8U;
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vsort___024root___act_sequent__TOP__0(Vsort___024root* vlSelf);

void Vsort___024root___eval_act(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_act\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsort___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsort___024root___act_sequent__TOP__0(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___act_sequent__TOP__0\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.B = ((((vlSelfRef.sort__DOT__tmp[0U] 
                      << 0x1cU) | (vlSelfRef.sort__DOT__tmp
                                   [1U] << 0x18U)) 
                    | ((vlSelfRef.sort__DOT__tmp[2U] 
                        << 0x14U) | (vlSelfRef.sort__DOT__tmp
                                     [3U] << 0x10U))) 
                   | (((vlSelfRef.sort__DOT__tmp[4U] 
                        << 0xcU) | (vlSelfRef.sort__DOT__tmp
                                    [5U] << 8U)) | 
                      ((vlSelfRef.sort__DOT__tmp[6U] 
                        << 4U) | vlSelfRef.sort__DOT__tmp
                       [7U])));
}

void Vsort___024root___eval_nba(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_nba\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsort___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsort___024root___timing_resume(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___timing_resume\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsort___024root___eval_triggers__act(Vsort___024root* vlSelf);

bool Vsort___024root___eval_phase__act(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_phase__act\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsort___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsort___024root___timing_resume(vlSelf);
        Vsort___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsort___024root___eval_phase__nba(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_phase__nba\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsort___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__nba(Vsort___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsort___024root___dump_triggers__act(Vsort___024root* vlSelf);
#endif  // VL_DEBUG

void Vsort___024root___eval(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsort___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sort.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsort___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sort.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsort___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsort___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsort___024root___eval_debug_assertions(Vsort___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsort___024root___eval_debug_assertions\n"); );
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
