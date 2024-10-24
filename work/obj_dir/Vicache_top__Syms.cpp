// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vicache_top__pch.h"
#include "Vicache_top.h"
#include "Vicache_top___024root.h"

// FUNCTIONS
Vicache_top__Syms::~Vicache_top__Syms()
{
}

Vicache_top__Syms::Vicache_top__Syms(VerilatedContext* contextp, const char* namep, Vicache_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1086);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_icache_top__u_data_array_ctrl__u_icache_data_array0.configure(this, name(), "icache_top.u_data_array_ctrl.u_icache_data_array0", "u_icache_data_array0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_icache_top__u_data_array_ctrl__u_icache_data_array1.configure(this, name(), "icache_top.u_data_array_ctrl.u_icache_data_array1", "u_icache_data_array1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_icache_top__u_icache_tag_array_ctrl__u_icache_tag_array0.configure(this, name(), "icache_top.u_icache_tag_array_ctrl.u_icache_tag_array0", "u_icache_tag_array0", -12, VerilatedScope::SCOPE_OTHER);
}
