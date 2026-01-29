// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT__03A__03AB__VCLPKG_H_
#define VERILATED_VTOP___024UNIT__03A__03AB__VCLPKG_H_  // guard

#include "verilated.h"
class Vtop___024unit__03a__03aA;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit__03a__03aB__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024unit__03a__03aB__Vclpkg();
    ~Vtop___024unit__03a__03aB__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop___024unit__03a__03aB__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtop___024unit__03a__03aA__Vclpkg.h"

class Vtop__Syms;

class Vtop___024unit__03a__03aB : public Vtop___024unit__03a__03aA {
  public:
    void __VnoInFunc_modifyData(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop___024unit__03a__03aB(Vtop__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtop___024unit__03a__03aB();
};

std::string VL_TO_STRING(const VlClassRef<Vtop___024unit__03a__03aB>& obj);

#endif  // guard
