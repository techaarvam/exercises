// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x000000c7U)) {
        vlSelfRef.top__DOT__a[__Vilp1] = 0xff223344U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.top__DOT__b[0U] = 1U;
    vlSelfRef.top__DOT__b[1U] = 2U;
    vlSelfRef.top__DOT__b[2U] = 3U;
    vlSelfRef.top__DOT__c[0U] = 2U;
    vlSelfRef.top__DOT__c[1U] = 1U;
    vlSelfRef.top__DOT__c[2U] = 3U;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x000000c7U)) {
        vlSelfRef.top__DOT__a[__Vilp1] = 0xff223344U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.top__DOT__b[0U] = 1U;
    vlSelfRef.top__DOT__b[1U] = 2U;
    vlSelfRef.top__DOT__b[2U] = 3U;
    vlSelfRef.top__DOT__c[0U] = 2U;
    vlSelfRef.top__DOT__c[1U] = 1U;
    vlSelfRef.top__DOT__c[2U] = 3U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__i;
    top__DOT__unnamedblk1__DOT__i = 0;
    // Body
    top__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x000000c8U, top__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.top__DOT____Vlvbound_hbeb49f42__0 
            = (0xff120000U | top__DOT__unnamedblk1__DOT__i);
        if (VL_LIKELY(((0xc7U >= (0x000000ffU & top__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.top__DOT__a[(0x000000ffU & top__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.top__DOT____Vlvbound_hbeb49f42__0;
        }
        top__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                         + top__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->top__DOT____Vlvbound_hbeb49f42__0 = 0;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        vlSelf->top__DOT__a[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13394877895942293449ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__b[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10040169573526154973ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__c[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11740110494050380976ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
