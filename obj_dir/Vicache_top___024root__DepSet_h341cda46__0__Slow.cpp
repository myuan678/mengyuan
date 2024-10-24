// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_top.h for the primary calling header

#include "Vicache_top__pch.h"
#include "Vicache_top__Syms.h"
#include "Vicache_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__stl(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vicache_top___024root___eval_triggers__stl(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vicache_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
