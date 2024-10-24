// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VICACHE_TOP__SYMS_H_
#define VERILATED_VICACHE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vicache_top.h"

// INCLUDE MODULE CLASSES
#include "Vicache_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vicache_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vicache_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vicache_top___024root          TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_icache_top__u_data_array_ctrl__u_icache_data_array0;
    VerilatedScope __Vscope_icache_top__u_data_array_ctrl__u_icache_data_array1;
    VerilatedScope __Vscope_icache_top__u_icache_tag_array_ctrl__u_icache_tag_array0;

    // CONSTRUCTORS
    Vicache_top__Syms(VerilatedContext* contextp, const char* namep, Vicache_top* modelp);
    ~Vicache_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
