// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_top.h for the primary calling header

#include "Vicache_top__pch.h"
#include "Vicache_top__Syms.h"
#include "Vicache_top___024root.h"

void Vicache_top___024root___ctor_var_reset(Vicache_top___024root* vlSelf);

Vicache_top___024root::Vicache_top___024root(Vicache_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vicache_top___024root___ctor_var_reset(this);
}

void Vicache_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vicache_top___024root::~Vicache_top___024root() {
}
