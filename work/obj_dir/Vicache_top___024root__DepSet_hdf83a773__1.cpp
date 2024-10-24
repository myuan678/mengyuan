// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_top.h for the primary calling header

#include "Vicache_top__pch.h"
#include "Vicache_top___024root.h"

VL_INLINE_OPT void Vicache_top___024root___nba_sequent__TOP__2(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s;
    icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_0;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_0 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_1;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_1 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_2;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_2 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_3;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_3 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_4;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_4 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_5;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_5 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_6;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_6 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_7;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_7 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_8;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_8 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_9;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_9 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_10;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_10 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_11;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_11 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_12;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_12 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_13;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_13 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_14;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_14 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_15;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_15 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_24;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_24 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_25;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_25 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_26;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_26 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_27;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_27 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_28;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_28 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_29;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_29 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_30;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_30 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_31;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_31 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_32;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_32 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_33;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_33 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_34;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_34 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_35;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_35 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_36;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_36 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_37;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_37 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_38;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_38 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_39;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_39 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_40;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_40 = 0;
    CData/*2:0*/ icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_41;
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_41 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    // Body
    vlSelf->icache_top__DOT__linefill_done = ((IData)(vlSelf->downstream_rxdat_rdy) 
                                              & (IData)(vlSelf->downstream_rxdat_vld));
    vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld 
        = vlSelf->__Vdly__icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld;
    vlSelf->icache_top__DOT__v_linefill_done = (0xfffeU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (1U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfffdU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((1U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (2U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfffbU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((2U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (4U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfff7U 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((3U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (8U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xffefU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((4U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x10U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xffdfU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((5U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x20U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xffbfU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((6U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x40U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xff7fU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((7U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x80U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfeffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((8U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x100U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfdffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((9U == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x200U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xfbffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xaU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x400U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xf7ffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xbU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x800U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xefffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xcU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x1000U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xdfffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xdU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x2000U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0xbfffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xeU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x4000U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__v_linefill_done = (0x7fffU 
                                                & (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    if (((0xfU == (0xfU & vlSelf->downstream_rxdat_pld[0U])) 
         & (IData)(vlSelf->icache_top__DOT__linefill_done))) {
        vlSelf->icache_top__DOT__v_linefill_done = 
            (0x8000U | (IData)(vlSelf->icache_top__DOT__v_linefill_done));
    }
    vlSelf->icache_top__DOT__tag_req_rdy = (1U & ((~ (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                      & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                         & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                            & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                               & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                  & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                     & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                        & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                           & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                              & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid) 
                                                                                & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__mshr_entry_array_valid)))))))))))))))))));
    __VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelf->icache_top__DOT__tag_req_rdy) 
                                      & (IData)(vlSelf->upstream_rxreq_vld));
    vlSelf->upstream_rxreq_rdy = ((0U != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_alloc_vld)) 
                                  & (IData)(__VdfgRegularize_hd87f99a1_0_0));
    icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s 
        = ((((IData)(vlSelf->icache_top__DOT__tag_req_rdy) 
             & ((~ (IData)((0U != (IData)(vlSelf->__VdfgRegularize_hd87f99a1_0_9)))) 
                & (IData)(vlSelf->prefetch_req_vld))) 
            << 2U) | ((((IData)(vlSelf->icache_top__DOT__tag_req_rdy) 
                        & ((~ (IData)(vlSelf->upstream_rxreq_vld)) 
                           & (IData)(vlSelf->downstream_rxsnp_vld))) 
                       << 1U) | (IData)(__VdfgRegularize_hd87f99a1_0_0)));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_41 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x29U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_40 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x28U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_39 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x27U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_38 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x26U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_37 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x25U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_36 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x24U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_35 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x23U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_34 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x22U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_33 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x21U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_32 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x20U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_31 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1fU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_30 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1eU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_29 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1dU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_28 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1cU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_27 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1bU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_26 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x1aU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_25 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x19U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_24 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x18U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_23 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x17U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_22 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x16U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_21 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x15U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_20 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x14U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_19 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x13U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_18 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x12U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_17 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x11U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_16 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0x10U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_15 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xfU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_14 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xeU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_13 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xdU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_12 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xcU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_11 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xbU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_10 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0xaU] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_9 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [9U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_8 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [8U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_7 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [7U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_6 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [6U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_5 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [5U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_4 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [4U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_3 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [3U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_2 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [2U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_1 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [1U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_0 
        = (vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT__v_pld_rev
           [0U] & (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__v_rdy_s));
    vlSelf->icache_top__DOT__tag_req_pld = (((QData)((IData)(
                                                             (0U 
                                                              != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_41)))) 
                                             << 0x29U) 
                                            | (((QData)((IData)(
                                                                (0U 
                                                                 != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_40)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0U 
                                                                    != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_39)))) 
                                                   << 0x27U) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_38)))) 
                                                      << 0x26U) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_37)))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_36)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_35)))) 
                                                               << 0x23U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_34)))) 
                                                                  << 0x22U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_33)))) 
                                                                     << 0x21U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_32)))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_31))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_30))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_29))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_28))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_27))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_26))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_25))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_24))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_23))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_22))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_21))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_20))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_19))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_18))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_17))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_16))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_15))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_14))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_13))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_12))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_11))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_10))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_9))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_8))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_7))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_6))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_5))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_4))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_3))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_0)))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vicache_top___024root___nba_comb__TOP__0(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_0;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_0 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_1;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_1 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_2;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_2 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_3;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_3 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_4;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_4 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_5;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_5 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_6;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_6 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_7;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_7 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_8;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_8 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_9;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_9 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_10;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_10 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_11;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_11 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_12;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_12 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_13;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_13 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_14;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_14 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_15;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_15 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_16;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_16 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_17;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_17 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_18;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_18 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_19;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_19 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_20;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_20 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_21;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_21 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_22;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_22 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_23;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_23 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_24;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_24 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_25;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_25 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_26;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_26 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_27;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_27 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_28;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_28 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_29;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_29 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_30;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_30 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_31;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_31 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_32;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_32 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_33;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_33 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_34;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_34 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_35;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_35 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_36;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_36 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_37;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_37 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_38;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_38 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_39;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_39 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_40;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_40 = 0;
    SData/*15:0*/ icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_41;
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_41 = 0;
    // Body
    vlSelf->icache_top__DOT__lru_pick = (1U & (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__lru[
                                               (7U 
                                                & ((IData)(
                                                           (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                            >> 0x10U)) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                              >> 0x10U)))));
    vlSelf->icache_top__DOT__mshr_update_en = 0U;
    if (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_vld) {
        vlSelf->icache_top__DOT__mshr_update_en = (1U 
                                                   != 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                               >> 5U))));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xdU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xcU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xbU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xaU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [9U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [8U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [7U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [6U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [5U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [4U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [3U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [2U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [1U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_41 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x29U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_40 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x28U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_39 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x27U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_38 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x26U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_37 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x25U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_36 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x24U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_35 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x23U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_34 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x22U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_33 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x21U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_32 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x20U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_31 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1fU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_30 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1eU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_29 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1dU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_28 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1cU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_27 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1bU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_26 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x1aU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_25 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x19U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_24 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x18U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_23 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x17U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_22 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x16U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_21 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x15U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_20 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x14U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_19 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x13U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_18 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x12U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_17 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x11U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_16 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0x10U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_15 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xfU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_14 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xeU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_13 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xdU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_12 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xcU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_11 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xbU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_10 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0xaU] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_9 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [9U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_8 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [8U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_7 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [7U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_6 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [6U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_5 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [5U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_4 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [4U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_3 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [3U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_2 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [2U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_1 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [1U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_0 
        = (vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT__v_pld_rev
           [0U] & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__v_grant));
    vlSelf->icache_top__DOT__tag_way0_hit = 0U;
    vlSelf->icache_top__DOT__tag_way1_hit = 0U;
    if (((IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld) 
         & ((0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                              >> 0x10U))) == (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_index)))) {
        if (((0x40000U | (0x3ffffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                              >> 0x18U)))) 
             == (0x7ffffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_pld 
                                     >> 0x13U))))) {
            vlSelf->icache_top__DOT__tag_way0_hit = 1U;
            vlSelf->icache_top__DOT__tag_way1_hit = 0U;
        } else if (((0x40000U | (0x3ffffU & (IData)(
                                                    (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                     >> 0x18U)))) 
                    == (0x7ffffU & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_pld)))) {
            vlSelf->icache_top__DOT__tag_way0_hit = 0U;
            vlSelf->icache_top__DOT__tag_way1_hit = 1U;
        }
    } else if (((0x40000U | (0x3ffffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                 >> 0x18U)))) 
                == (0x7ffffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__tag_array0_dout 
                                        >> 0x13U))))) {
        vlSelf->icache_top__DOT__tag_way0_hit = 1U;
        vlSelf->icache_top__DOT__tag_way1_hit = 0U;
    } else if (((0x40000U | (0x3ffffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                 >> 0x18U)))) 
                == (0x7ffffU & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__tag_array0_dout)))) {
        vlSelf->icache_top__DOT__tag_way0_hit = 0U;
        vlSelf->icache_top__DOT__tag_way1_hit = 1U;
    }
    vlSelf->icache_top__DOT__alloc_index = (((0U != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_alloc_rdy)) 
                                             & (IData)(vlSelf->icache_top__DOT__mshr_update_en))
                                             ? (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__taken_index)
                                             : 0U);
    vlSelf->downstream_txreq_pld = (((QData)((IData)(
                                                     (0U 
                                                      != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_41)))) 
                                     << 0x29U) | (((QData)((IData)(
                                                                   (0U 
                                                                    != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_40)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0U 
                                                                       != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_39)))) 
                                                      << 0x27U) 
                                                     | (((QData)((IData)(
                                                                         (0U 
                                                                          != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_38)))) 
                                                         << 0x26U) 
                                                        | (((QData)((IData)(
                                                                            (0U 
                                                                             != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_37)))) 
                                                            << 0x25U) 
                                                           | (((QData)((IData)(
                                                                               (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_36)))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_35)))) 
                                                                  << 0x23U) 
                                                                 | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_34)))) 
                                                                     << 0x22U) 
                                                                    | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_33)))) 
                                                                        << 0x21U) 
                                                                       | (((QData)((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_32)))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_31))) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_30))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_29))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_28))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_27))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_26))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_25))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_24))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_23))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_22))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_21))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_20))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_19))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_18))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_17))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_16))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_15))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_14))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_13))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_12))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_11))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_10))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_9))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_8))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_7))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_6))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_5))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_4))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_3))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(icache_top__DOT__u_icache_mshr_file__DOT__u_downstream_rd_arb__DOT__u_mux__DOT____VdfgRegularize_haf53b840_0_0)))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->icache_top__DOT__tag_miss = ((~ ((IData)(vlSelf->icache_top__DOT__tag_way0_hit) 
                                             | (IData)(vlSelf->icache_top__DOT__tag_way1_hit))) 
                                         & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_vld));
    vlSelf->icache_top__DOT__entry_data = ((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                            << 1U) 
                                           | (QData)((IData)(
                                                             ((~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)) 
                                                              & ((IData)(vlSelf->icache_top__DOT__tag_way1_hit) 
                                                                 | (IData)(vlSelf->icache_top__DOT__lru_pick))))));
    vlSelf->icache_top__DOT__tag_hit = (((IData)(vlSelf->icache_top__DOT__tag_way0_hit) 
                                         << 1U) | (IData)(vlSelf->icache_top__DOT__tag_way1_hit));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfffeU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (1U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfffdU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((1U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (2U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfffbU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((2U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (4U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfff7U & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((3U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (8U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xffefU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((4U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x10U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xffdfU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((5U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x20U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xffbfU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((6U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x40U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xff7fU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((7U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x80U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfeffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((8U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x100U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfdffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((9U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x200U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xfbffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xaU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x400U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xf7ffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xbU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x800U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xefffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xcU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x1000U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xdfffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xdU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x2000U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0xbfffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xeU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x4000U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
        = (0x7fffU & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    if (((0xfU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
         & (IData)(vlSelf->icache_top__DOT__mshr_update_en))) {
        vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en 
            = (0x8000U | (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en));
    }
    vlSelf->icache_top__DOT__bitmap = (0xfffeU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfffeU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (1U | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfffdU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((1U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (1U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfffdU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [1U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [1U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [1U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (2U | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfffbU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((2U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (2U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfffbU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [2U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [2U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [2U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (4U | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfff7U & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((3U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (3U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfff7U 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [3U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [3U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [3U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (8U | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xffefU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((4U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (4U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xffefU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [4U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [4U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [4U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x10U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xffdfU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((5U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (5U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xffdfU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [5U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [5U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [5U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x20U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xffbfU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((6U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (6U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xffbfU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [6U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [6U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [6U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x40U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xff7fU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((7U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (7U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xff7fU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [7U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [7U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [7U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x80U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfeffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((8U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (8U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfeffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [8U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [8U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [8U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x100U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfdffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((9U == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (9U == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfdffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [9U] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [9U] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [9U] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x200U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xfbffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xaU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xaU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xfbffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xaU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xaU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xaU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x400U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xf7ffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xbU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xbU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xf7ffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xbU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xbU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xbU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x800U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xefffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xcU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xcU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xefffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xcU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xcU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xcU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x1000U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xdfffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xdU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xdU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xdfffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xdU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xdU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xdU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x2000U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0xbfffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xeU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xeU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0xbfffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xeU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xeU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xeU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x4000U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__bitmap = (0x7fffU & (IData)(vlSelf->icache_top__DOT__bitmap));
    if (vlSelf->icache_top__DOT__mshr_update_en) {
        if (((0xfU == (IData)(vlSelf->icache_top__DOT__alloc_index)) 
             | (0xfU == (0xfU & (IData)(vlSelf->icache_top__DOT____Vcellout__u_icache_mshr_file__entry_release_done_index))))) {
            vlSelf->icache_top__DOT__bitmap = (0x7fffU 
                                               & (IData)(vlSelf->icache_top__DOT__bitmap));
        } else if ((((0xffU & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xfU] >> 0x24U))) 
                     == (0xffU & (IData)((vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                          >> 0x10U)))) 
                    & (((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                       [0xfU] >> 0x13U))) 
                        == (1U & (~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)))) 
                       | ((1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                         [0xfU] >> 0x13U))) 
                          == (IData)(vlSelf->icache_top__DOT__tag_way1_hit))))) {
            vlSelf->icache_top__DOT__bitmap = (0x8000U 
                                               | (IData)(vlSelf->icache_top__DOT__bitmap));
        }
    }
    vlSelf->icache_top__DOT__rd_vld = ((~ (IData)((0U 
                                                   != (IData)(vlSelf->icache_top__DOT__bitmap)))) 
                                       & (0U != (IData)(vlSelf->icache_top__DOT__tag_hit)));
    vlSelf->icache_top__DOT__dataram_rd_vld = ((0U 
                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_dataram_rd_vld)) 
                                               | (IData)(vlSelf->icache_top__DOT__rd_vld));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__0__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__1__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 1U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__2__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 2U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__3__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 3U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__4__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 4U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__5__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 5U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__6__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 6U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__7__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 7U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__8__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 8U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__9__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 9U)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__10__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 0xaU)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__11__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 0xbU)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__12__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 0xcU)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__13__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 0xdU)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__14__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = (1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                 & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
                    >> 0xeU)));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__MSHR_ENTRY_ARRAY__BRA__15__KET____DOT__u_icache_mshr_entry__DOT__allocate_en 
        = ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
           & ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_entry_en) 
              >> 0xfU));
    vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__v_dataram_rd_rdy 
        = ((IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__v_grant) 
           & (- (IData)((1U & ((~ (IData)(vlSelf->icache_top__DOT__rd_vld)) 
                               & (~ (IData)(vlSelf->icache_top__DOT__linefill_done)))))));
}

void Vicache_top___024root___timing_resume(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h759a0d49__0.resume("@(posedge clk)");
    }
}

void Vicache_top___024root___timing_commit(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h759a0d49__0.commit("@(posedge clk)");
    }
}

void Vicache_top___024root___eval_triggers__act(Vicache_top___024root* vlSelf);
void Vicache_top___024root___eval_act(Vicache_top___024root* vlSelf);

bool Vicache_top___024root___eval_phase__act(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vicache_top___024root___eval_triggers__act(vlSelf);
    Vicache_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vicache_top___024root___timing_resume(vlSelf);
        Vicache_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vicache_top___024root___eval_nba(Vicache_top___024root* vlSelf);

bool Vicache_top___024root___eval_phase__nba(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vicache_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__ico(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vicache_top___024root___eval_phase__ico(Vicache_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__nba(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__act(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vicache_top___024root___eval(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vicache_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/icache_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vicache_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vicache_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/icache_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vicache_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/icache_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vicache_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vicache_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vicache_top___024root___eval_debug_assertions(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->prefetch_enable & 0xfeU))) {
        Verilated::overWidthError("prefetch_enable");}
    if (VL_UNLIKELY((vlSelf->upstream_txdat_rdy & 0xfeU))) {
        Verilated::overWidthError("upstream_txdat_rdy");}
    if (VL_UNLIKELY((vlSelf->upstream_rxreq_vld & 0xfeU))) {
        Verilated::overWidthError("upstream_rxreq_vld");}
    if (VL_UNLIKELY((vlSelf->downstream_rxsnp_vld & 0xfeU))) {
        Verilated::overWidthError("downstream_rxsnp_vld");}
    if (VL_UNLIKELY((vlSelf->downstream_txreq_rdy & 0xfeU))) {
        Verilated::overWidthError("downstream_txreq_rdy");}
    if (VL_UNLIKELY((vlSelf->downstream_txrsp_vld & 0xfeU))) {
        Verilated::overWidthError("downstream_txrsp_vld");}
    if (VL_UNLIKELY((vlSelf->downstream_txrsp_opcode 
                     & 0xe0U))) {
        Verilated::overWidthError("downstream_txrsp_opcode");}
    if (VL_UNLIKELY((vlSelf->downstream_rxdat_vld & 0xfeU))) {
        Verilated::overWidthError("downstream_rxdat_vld");}
    if (VL_UNLIKELY((vlSelf->prefetch_req_vld & 0xfeU))) {
        Verilated::overWidthError("prefetch_req_vld");}
    if (VL_UNLIKELY((vlSelf->pref_to_mshr_req_rdy & 0xfeU))) {
        Verilated::overWidthError("pref_to_mshr_req_rdy");}
}
#endif  // VL_DEBUG
