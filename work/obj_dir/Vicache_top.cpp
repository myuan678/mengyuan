// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vicache_top__pch.h"

//============================================================
// Constructors

Vicache_top::Vicache_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vicache_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , prefetch_enable{vlSymsp->TOP.prefetch_enable}
    , upstream_txdat_vld{vlSymsp->TOP.upstream_txdat_vld}
    , upstream_txdat_txnid{vlSymsp->TOP.upstream_txdat_txnid}
    , upstream_txdat_rdy{vlSymsp->TOP.upstream_txdat_rdy}
    , upstream_rxreq_vld{vlSymsp->TOP.upstream_rxreq_vld}
    , upstream_rxreq_rdy{vlSymsp->TOP.upstream_rxreq_rdy}
    , downstream_rxsnp_vld{vlSymsp->TOP.downstream_rxsnp_vld}
    , downstream_rxsnp_rdy{vlSymsp->TOP.downstream_rxsnp_rdy}
    , downstream_txreq_vld{vlSymsp->TOP.downstream_txreq_vld}
    , downstream_txreq_rdy{vlSymsp->TOP.downstream_txreq_rdy}
    , downstream_txreq_entry_id{vlSymsp->TOP.downstream_txreq_entry_id}
    , downstream_txrsp_vld{vlSymsp->TOP.downstream_txrsp_vld}
    , downstream_txrsp_rdy{vlSymsp->TOP.downstream_txrsp_rdy}
    , downstream_txrsp_opcode{vlSymsp->TOP.downstream_txrsp_opcode}
    , downstream_rxdat_vld{vlSymsp->TOP.downstream_rxdat_vld}
    , downstream_rxdat_rdy{vlSymsp->TOP.downstream_rxdat_rdy}
    , prefetch_req_vld{vlSymsp->TOP.prefetch_req_vld}
    , pref_to_mshr_req_rdy{vlSymsp->TOP.pref_to_mshr_req_rdy}
    , upstream_txdat_data{vlSymsp->TOP.upstream_txdat_data}
    , upstream_rxreq_pld{vlSymsp->TOP.upstream_rxreq_pld}
    , downstream_rxsnp_pld{vlSymsp->TOP.downstream_rxsnp_pld}
    , downstream_txreq_pld{vlSymsp->TOP.downstream_txreq_pld}
    , downstream_rxdat_pld{vlSymsp->TOP.downstream_rxdat_pld}
    , prefetch_req_pld{vlSymsp->TOP.prefetch_req_pld}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vicache_top::Vicache_top(const char* _vcname__)
    : Vicache_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vicache_top::~Vicache_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vicache_top___024root___eval_debug_assertions(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vicache_top___024root___eval_static(Vicache_top___024root* vlSelf);
void Vicache_top___024root___eval_initial(Vicache_top___024root* vlSelf);
void Vicache_top___024root___eval_settle(Vicache_top___024root* vlSelf);
void Vicache_top___024root___eval(Vicache_top___024root* vlSelf);

void Vicache_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vicache_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vicache_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vicache_top___024root___eval_static(&(vlSymsp->TOP));
        Vicache_top___024root___eval_initial(&(vlSymsp->TOP));
        Vicache_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vicache_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vicache_top::eventsPending() { return false; }

uint64_t Vicache_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vicache_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vicache_top___024root___eval_final(Vicache_top___024root* vlSelf);

VL_ATTR_COLD void Vicache_top::final() {
    Vicache_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vicache_top::hierName() const { return vlSymsp->name(); }
const char* Vicache_top::modelName() const { return "Vicache_top"; }
unsigned Vicache_top::threads() const { return 1; }
void Vicache_top::prepareClone() const { contextp()->prepareClone(); }
void Vicache_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
