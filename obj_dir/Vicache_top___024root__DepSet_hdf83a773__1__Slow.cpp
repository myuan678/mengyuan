// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_top.h for the primary calling header

#include "Vicache_top__pch.h"
#include "Vicache_top___024root.h"

VL_ATTR_COLD void Vicache_top___024root___eval_triggers__stl(Vicache_top___024root* vlSelf);
VL_ATTR_COLD void Vicache_top___024root___eval_stl(Vicache_top___024root* vlSelf);

VL_ATTR_COLD bool Vicache_top___024root___eval_phase__stl(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vicache_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vicache_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__ico(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__act(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__nba(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vicache_top___024root___ctor_var_reset(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->prefetch_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->upstream_txdat_data);
    vlSelf->upstream_txdat_vld = VL_RAND_RESET_I(1);
    vlSelf->upstream_txdat_txnid = VL_RAND_RESET_I(5);
    vlSelf->upstream_txdat_rdy = VL_RAND_RESET_I(1);
    vlSelf->upstream_rxreq_vld = VL_RAND_RESET_I(1);
    vlSelf->upstream_rxreq_rdy = VL_RAND_RESET_I(1);
    vlSelf->upstream_rxreq_pld = VL_RAND_RESET_Q(42);
    vlSelf->downstream_rxsnp_vld = VL_RAND_RESET_I(1);
    vlSelf->downstream_rxsnp_rdy = VL_RAND_RESET_I(1);
    vlSelf->downstream_rxsnp_pld = VL_RAND_RESET_Q(42);
    vlSelf->downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->downstream_txreq_rdy = VL_RAND_RESET_I(1);
    vlSelf->downstream_txreq_pld = VL_RAND_RESET_Q(42);
    vlSelf->downstream_txreq_entry_id = VL_RAND_RESET_I(4);
    vlSelf->downstream_txrsp_vld = VL_RAND_RESET_I(1);
    vlSelf->downstream_txrsp_rdy = VL_RAND_RESET_I(1);
    vlSelf->downstream_txrsp_opcode = VL_RAND_RESET_I(5);
    vlSelf->downstream_rxdat_vld = VL_RAND_RESET_I(1);
    vlSelf->downstream_rxdat_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(526, vlSelf->downstream_rxdat_pld);
    vlSelf->prefetch_req_vld = VL_RAND_RESET_I(1);
    vlSelf->prefetch_req_pld = VL_RAND_RESET_Q(42);
    vlSelf->pref_to_mshr_req_rdy = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__tag_req_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__tag_req_rdy = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__tag_req_pld = VL_RAND_RESET_Q(42);
    vlSelf->icache_top__DOT__tag_miss = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__tag_hit = VL_RAND_RESET_I(2);
    vlSelf->icache_top__DOT__lru_pick = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__dataram_rd_vld = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->icache_top__DOT__v_mshr_entry_array[__Vi0] = VL_RAND_RESET_Q(63);
    }
    vlSelf->icache_top__DOT__linefill_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__v_linefill_done = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__alloc_index = VL_RAND_RESET_I(4);
    vlSelf->icache_top__DOT__mshr_update_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__entry_data = VL_RAND_RESET_Q(43);
    vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index = VL_RAND_RESET_I(5);
    vlSelf->icache_top__DOT__tag_way0_hit = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__tag_way1_hit = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__rd_vld = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__v_pld_s[__Vi0] = VL_RAND_RESET_Q(42);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT____Vcellinp__arbiter__v_pld_s[__Vi0] = VL_RAND_RESET_Q(42);
    }
    for (int __Vi0 = 0; __Vi0 < 42; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_16 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_17 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_18 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_19 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_20 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_21 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_22 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_23 = VL_RAND_RESET_I(3);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__tag_array0_dout = VL_RAND_RESET_Q(38);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__lru);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_pld = VL_RAND_RESET_Q(38);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_index = VL_RAND_RESET_I(8);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld = VL_RAND_RESET_Q(42);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.atDefault() = VL_RAND_RESET_Q(38);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__tmp_data = VL_RAND_RESET_Q(38);
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = VL_RAND_RESET_Q(38);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_alloc_vld = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_alloc_rdy = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_dataram_rd_vld = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_dataram_rd_rdy = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_dataram_rd_pld[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_downstream_txreq_pld[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_downstream_txreq_rdy = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__taken_index = VL_RAND_RESET_I(4);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_release_en = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellinp__u_dataram_rd_arb__v_pld_s[__Vi0] = VL_RAND_RESET_I(14);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellinp__u_downstream_rd_arb__v_pld_s[__Vi0] = VL_RAND_RESET_Q(42);
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__downstream_txreq_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__dataram_rd_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT____Vcellout__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__mshr_entry_array = VL_RAND_RESET_Q(63);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_pre_allocate__DOT__v_vld_reg = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13 = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 42; ++__Vi0) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__linefill_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__linefill_data_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__state_done = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__state_rd_dataram_sent = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__allocate_en = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__hazard_free = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__v_hazard_bitmap = VL_RAND_RESET_I(16);
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__data_array0_dout);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__data_array1_dout);
    VL_RAND_RESET_W(512, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__linefill_data);
    vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__linefill_done_txnid = VL_RAND_RESET_I(5);
    vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__dataram_rd_txnid_out = VL_RAND_RESET_I(5);
    vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__dataram_dout_vld = VL_RAND_RESET_I(1);
    vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__linefill_data_vld = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.atDefault().data());
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.atDefault().data());
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data);
    VL_RAND_RESET_W(256, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data);
    vlSelf->__VdfgRegularize_hd87f99a1_0_9 = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
