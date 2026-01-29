// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024unit__03a__03aB::__VnoInFunc_modifyData(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::__VnoInFunc_modifyData\n"); );
    // Body
    Vtop___024unit__03a__03aA::__PVT__data = ((IData)(2U) 
                                              + Vtop___024unit__03a__03aA::__PVT__data);
    VL_WRITEF_NX("B says data is %x\n",0,32,Vtop___024unit__03a__03aA::__PVT__data);
}

Vtop___024unit__03a__03aB::Vtop___024unit__03a__03aB(Vtop__Syms* __restrict vlSymsp)
    : Vtop___024unit__03a__03aA(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtop___024unit__03a__03aB::_ctor_var_reset(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtop___024unit__03a__03aB::~Vtop___024unit__03a__03aB() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aB>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtop___024unit__03a__03aB::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtop___024unit__03a__03aB::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop___024unit__03a__03aB::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtop___024unit__03a__03aA::to_string_middle();
    return (out);
}
