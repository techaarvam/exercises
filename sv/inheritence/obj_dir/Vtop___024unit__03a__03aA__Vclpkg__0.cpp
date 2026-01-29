// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit__03a__03aA::__VnoInFunc_modifyData(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::__VnoInFunc_modifyData\n"); );
    // Body
    this->__PVT__data = ((IData)(1U) + this->__PVT__data);
    VL_WRITEF_NX("A says data is %x\n",0,32,this->__PVT__data);
}

void Vtop___024unit__03a__03aA::__VnoInFunc_init(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::__VnoInFunc_init\n"); );
    // Body
    this->__PVT__data = 0x00000064U;
}

Vtop___024unit__03a__03aA::Vtop___024unit__03a__03aA(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtop___024unit__03a__03aA::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = VL_SCOPED_RAND_RESET_I(32, 7347329466310175894ULL, 10363016170300574568ull);
}

Vtop___024unit__03a__03aA::~Vtop___024unit__03a__03aA() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aA>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03aA::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03aA::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aA::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    return (out);
}
