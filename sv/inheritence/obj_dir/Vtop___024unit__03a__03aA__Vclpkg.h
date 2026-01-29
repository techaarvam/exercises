// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03AA__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03AA__VCLPKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03aA__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03aA__Vclpkg();
    ~Vtop___024unit__03a__03aA__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03aA__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop___024unit__03a__03aA : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__data;
    void __VnoInFunc_init(Vtop__Syms* __restrict vlSymsp);
    void __VnoInFunc_modifyData(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03aA(Vtop__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtop___024unit__03a__03aA();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aA>& obj);

#endif  // guard
