// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop___024unit;
class Vtop___024unit__03a__03aA;
class Vtop___024unit__03a__03aA__Vclpkg;
class Vtop___024unit__03a__03aB;
class Vtop___024unit__03a__03aB__Vclpkg;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;
    Vtop___024unit__03a__03aA__Vclpkg* __024unit__03a__03aA__Vclpkg;
    Vtop___024unit__03a__03aB__Vclpkg* __024unit__03a__03aB__Vclpkg;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
