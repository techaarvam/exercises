// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtop___024unit__03a__03aA> __Vinline__eval_initial__TOP_top__DOT__a;
    VlClassRef<Vtop___024unit__03a__03aB> __Vinline__eval_initial__TOP_top__DOT__b;
    // Body
    __Vinline__eval_initial__TOP_top__DOT__b = VL_NEW(Vtop___024unit__03a__03aB, vlSymsp);
    VL_NULL_CHECK(__Vinline__eval_initial__TOP_top__DOT__b, "inh.sv", 38)->__VnoInFunc_init(vlSymsp);
    __Vinline__eval_initial__TOP_top__DOT__a = __Vinline__eval_initial__TOP_top__DOT__b;
    VL_NULL_CHECK(__Vinline__eval_initial__TOP_top__DOT__b, "inh.sv", 40)->__VnoInFunc_modifyData(vlSymsp);
    VL_NULL_CHECK(__Vinline__eval_initial__TOP_top__DOT__a, "inh.sv", 41)->__VnoInFunc_modifyData(vlSymsp);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtop___024unit__03a__03aA> top__DOT__a;
    VlClassRef<Vtop___024unit__03a__03aB> top__DOT__b;
    // Body
    top__DOT__b = VL_NEW(Vtop___024unit__03a__03aB, vlSymsp);
    VL_NULL_CHECK(top__DOT__b, "inh.sv", 38)->__VnoInFunc_init(vlSymsp);
    top__DOT__a = top__DOT__b;
    VL_NULL_CHECK(top__DOT__b, "inh.sv", 40)->__VnoInFunc_modifyData(vlSymsp);
    VL_NULL_CHECK(top__DOT__a, "inh.sv", 41)->__VnoInFunc_modifyData(vlSymsp);
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

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
