// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_top.h for the primary calling header

#include "Vicache_top__pch.h"
#include "Vicache_top__Syms.h"
#include "Vicache_top___024root.h"

VL_INLINE_OPT VlCoroutine Vicache_top___024root___eval_initial__TOP__Vtiming__0(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    QData/*37:0*/ __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout;
    __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address;
    __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 0;
    // Body
    VL_SFORMAT_NX(64,vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__arg_parse_str
                  ,"HEX=%%s",0);
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__arg_parse_str), 
                                         vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__code_path))) {
        VL_READMEM_N(true, 38, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__code_path)
                     , vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                     , 0, ~0ULL);
        if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
            VL_WRITEF_NX("print memory first 10 row parse from arg HEX:\n",0);
            VL_WRITEF_NX("memory row[0] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 0U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(0U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[1] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 1U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(1U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[2] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 2U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(2U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[3] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 3U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(3U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[4] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 4U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(4U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[5] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 5U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(5U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[6] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 6U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(6U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[7] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 7U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(7U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[8] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 8U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(8U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
            VL_WRITEF_NX("memory row[9] = %x\n",0,38,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address = 9U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.exists(9U)))) {
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data 
                                    = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                                    .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             8,__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address);
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory
                          .at((IData)(__Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__address)) = 0ULL;
                                vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data = 0ULL;
                            }
                            __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout 
                                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__Vstatic__data;
                        }(), __Vfunc_icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__read_memory__0__Vfuncout));
        }
    } else if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
        VL_WRITEF_NX("[%0t] -Info: toy_mem_model_bit.sv:60: %Nicache_top.u_icache_tag_array_ctrl.u_icache_tag_array0: Missing required parameter +HEX\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    }
    while (1U) {
        co_await vlSelf->__VtrigSched_h759a0d49__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/mem/toy_mem_model_bit.sv", 
                                                           70);
        if (((IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld) 
             & ((IData)(vlSelf->icache_top__DOT__tag_req_vld) 
                | (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld)))) {
            vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__tmp_data 
                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_pld;
            vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__memory.at(
                                                                                ((IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_vld)
                                                                                 ? (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__wr_tag_buf_index)
                                                                                 : 
                                                                                (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_23))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_22))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_21))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_20))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_19))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_18))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_17))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_req_arbiter__DOT__arbiter__DOT__u_mux__DOT____VdfgRegularize_hd505c857_0_16))))))))))) 
                = vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__u_icache_tag_array0__DOT__tmp_data;
        }
    }
}

extern const VlWide<8>/*255:0*/ Vicache_top__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT VlCoroutine Vicache_top___024root___eval_initial__TOP__Vtiming__3(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout;
    VL_ZERO_W(256, __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout);
    SData/*8:0*/ __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address;
    __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 0;
    // Body
    VL_SFORMAT_NX(64,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__arg_parse_str
                  ,"HEX=%%s",0);
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__arg_parse_str), 
                                         vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__code_path))) {
        VL_READMEM_N(true, 256, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__code_path)
                     , vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                     , 0, ~0ULL);
        if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
            VL_WRITEF_NX("print memory first 10 row parse from arg HEX:\n",0);
            VL_WRITEF_NX("memory row[0] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 0U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(0U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[1] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 1U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(1U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[2] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 2U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(2U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[3] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 3U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(3U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[4] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 4U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(4U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[5] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 5U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(5U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[6] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 6U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(6U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[7] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 7U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(7U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[8] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 8U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(8U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
            VL_WRITEF_NX("memory row[9] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address = 9U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory.exists(9U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__read_memory__3__Vfuncout).data());
        }
    } else if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
        VL_WRITEF_NX("[%0t] -Info: toy_mem_model_bit.sv:60: %Nicache_top.u_data_array_ctrl.u_icache_data_array0: Missing required parameter +HEX\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    }
    while (1U) {
        co_await vlSelf->__VtrigSched_h759a0d49__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/mem/toy_mem_model_bit.sv", 
                                                           70);
        if (((IData)(vlSelf->icache_top__DOT__linefill_done) 
             & ((IData)(vlSelf->icache_top__DOT__dataram_rd_vld) 
                | (IData)(vlSelf->icache_top__DOT__linefill_done)))) {
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[0U] 
                = ((vlSelf->downstream_rxdat_pld[1U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[1U] 
                = ((vlSelf->downstream_rxdat_pld[2U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[1U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[2U] 
                = ((vlSelf->downstream_rxdat_pld[3U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[2U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[3U] 
                = ((vlSelf->downstream_rxdat_pld[4U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[3U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[4U] 
                = ((vlSelf->downstream_rxdat_pld[5U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[4U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[5U] 
                = ((vlSelf->downstream_rxdat_pld[6U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[5U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[6U] 
                = ((vlSelf->downstream_rxdat_pld[7U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[6U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data[7U] 
                = ((vlSelf->downstream_rxdat_pld[8U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[7U] 
                                 >> 4U));
            VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__memory
                        .at(((IData)(vlSelf->icache_top__DOT__linefill_done)
                              ? ((0x1feU & ((IData)(
                                                    (vlSelf->icache_top__DOT__v_mshr_entry_array
                                                     [
                                                     (0xfU 
                                                      & vlSelf->downstream_rxdat_pld[0U])] 
                                                     >> 0x24U)) 
                                            << 1U)) 
                                 | (1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                                  [
                                                  (0xfU 
                                                   & vlSelf->downstream_rxdat_pld[0U])] 
                                                  >> 0x13U))))
                              : ((0x1feU & (((IData)(vlSelf->icache_top__DOT__rd_vld)
                                              ? ((0x2000U 
                                                  & ((~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)) 
                                                     << 0xdU)) 
                                                 | ((0x1fe0U 
                                                     & ((IData)(
                                                                (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                                 >> 0x10U)) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld))))
                                              : (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13))) 
                                                  << 0xdU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12))) 
                                                     << 0xcU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11))) 
                                                        << 0xbU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10))) 
                                                           << 0xaU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9))) 
                                                              << 9U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8))) 
                                                                 << 8U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7))) 
                                                                    << 7U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6))) 
                                                                       << 6U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5))) 
                                                                          << 5U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4))) 
                                                                             << 4U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3))) 
                                                                                << 3U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0)))))))))))))))) 
                                            >> 4U)) 
                                 | (1U & (((IData)(vlSelf->icache_top__DOT__rd_vld)
                                            ? ((0x2000U 
                                                & ((~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)) 
                                                   << 0xdU)) 
                                               | ((0x1fe0U 
                                                   & ((IData)(
                                                              (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                               >> 0x10U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld))))
                                            : (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13))) 
                                                << 0xdU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12))) 
                                                   << 0xcU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11))) 
                                                      << 0xbU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10))) 
                                                         << 0xaU) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9))) 
                                                            << 9U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8))) 
                                                               << 8U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7))) 
                                                                  << 7U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6))) 
                                                                     << 6U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5))) 
                                                                        << 5U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4))) 
                                                                           << 4U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3))) 
                                                                              << 3U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0)))))))))))))))) 
                                          >> 0xdU))))), vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array0__DOT__tmp_data);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vicache_top___024root___eval_initial__TOP__Vtiming__6(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_initial__TOP__Vtiming__6\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout;
    VL_ZERO_W(256, __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout);
    SData/*8:0*/ __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address;
    __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 0;
    // Body
    VL_SFORMAT_NX(64,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__arg_parse_str
                  ,"HEX=%%s",0);
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__arg_parse_str), 
                                         vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__code_path))) {
        VL_READMEM_N(true, 256, VL_CVT_PACK_STR_NN(vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__code_path)
                     , vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                     , 0, ~0ULL);
        if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
            VL_WRITEF_NX("print memory first 10 row parse from arg HEX:\n",0);
            VL_WRITEF_NX("memory row[0] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 0U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(0U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[1] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 1U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(1U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[2] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 2U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(2U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[3] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 3U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(3U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[4] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 4U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(4U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[5] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 5U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(5U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[6] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 6U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(6U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[7] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 7U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(7U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[8] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 8U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(8U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
            VL_WRITEF_NX("memory row[9] = %x\n",0,256,
                         ([&]() {
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address = 9U;
                            if (VL_LIKELY((0U != vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory.exists(9U)))) {
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data, vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)));
                            } else {
                                VL_WRITEF_NX("address is %3#\n",0,
                                             9,__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address);
                                VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                                            .at((IData)(__Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__address)), Vicache_top__ConstPool__CONST_h9e67c271_0);
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[0U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[1U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[2U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[3U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[4U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[5U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[6U];
                                vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U] 
                                    = Vicache_top__ConstPool__CONST_h9e67c271_0[7U];
                            }
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[0U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[0U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[1U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[1U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[2U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[2U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[3U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[3U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[4U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[4U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[5U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[5U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[6U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[6U];
                            __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout[7U] 
                                = vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__Vstatic__data[7U];
                        }(), __Vfunc_icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__read_memory__6__Vfuncout).data());
        }
    } else if (VL_UNLIKELY(VL_TESTPLUSARGS_I(std::string{"DEBUG"}))) {
        VL_WRITEF_NX("[%0t] -Info: toy_mem_model_bit.sv:60: %Nicache_top.u_data_array_ctrl.u_icache_data_array1: Missing required parameter +HEX\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    }
    while (1U) {
        co_await vlSelf->__VtrigSched_h759a0d49__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge clk)", 
                                                           "/home/xuemengyuan/try/cache_v1/icache_v1_1008_release/mem/toy_mem_model_bit.sv", 
                                                           70);
        if (((IData)(vlSelf->icache_top__DOT__linefill_done) 
             & ((IData)(vlSelf->icache_top__DOT__dataram_rd_vld) 
                | (IData)(vlSelf->icache_top__DOT__linefill_done)))) {
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[0U] 
                = ((vlSelf->downstream_rxdat_pld[9U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[8U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[1U] 
                = ((vlSelf->downstream_rxdat_pld[0xaU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[9U] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[2U] 
                = ((vlSelf->downstream_rxdat_pld[0xbU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xaU] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[3U] 
                = ((vlSelf->downstream_rxdat_pld[0xcU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xbU] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[4U] 
                = ((vlSelf->downstream_rxdat_pld[0xdU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xcU] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[5U] 
                = ((vlSelf->downstream_rxdat_pld[0xeU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xdU] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[6U] 
                = ((vlSelf->downstream_rxdat_pld[0xfU] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xeU] 
                                 >> 4U));
            vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data[7U] 
                = ((vlSelf->downstream_rxdat_pld[0x10U] 
                    << 0x1cU) | (vlSelf->downstream_rxdat_pld[0xfU] 
                                 >> 4U));
            VL_ASSIGN_W(256,vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__memory
                        .at(((IData)(vlSelf->icache_top__DOT__linefill_done)
                              ? ((0x1feU & ((IData)(
                                                    (vlSelf->icache_top__DOT__v_mshr_entry_array
                                                     [
                                                     (0xfU 
                                                      & vlSelf->downstream_rxdat_pld[0U])] 
                                                     >> 0x24U)) 
                                            << 1U)) 
                                 | (1U & (IData)((vlSelf->icache_top__DOT__v_mshr_entry_array
                                                  [
                                                  (0xfU 
                                                   & vlSelf->downstream_rxdat_pld[0U])] 
                                                  >> 0x13U))))
                              : ((0x1feU & (((IData)(vlSelf->icache_top__DOT__rd_vld)
                                              ? ((0x2000U 
                                                  & ((~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)) 
                                                     << 0xdU)) 
                                                 | ((0x1fe0U 
                                                     & ((IData)(
                                                                (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                                 >> 0x10U)) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld))))
                                              : (((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13))) 
                                                  << 0xdU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12))) 
                                                     << 0xcU) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11))) 
                                                        << 0xbU) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10))) 
                                                           << 0xaU) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9))) 
                                                              << 9U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8))) 
                                                                 << 8U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7))) 
                                                                    << 7U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6))) 
                                                                       << 6U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5))) 
                                                                          << 5U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4))) 
                                                                             << 4U) 
                                                                            | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3))) 
                                                                                << 3U) 
                                                                               | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0)))))))))))))))) 
                                            >> 4U)) 
                                 | (1U & (((IData)(vlSelf->icache_top__DOT__rd_vld)
                                            ? ((0x2000U 
                                                & ((~ (IData)(vlSelf->icache_top__DOT__tag_way0_hit)) 
                                                   << 0xdU)) 
                                               | ((0x1fe0U 
                                                   & ((IData)(
                                                              (vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld 
                                                               >> 0x10U)) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelf->icache_top__DOT__u_icache_tag_array_ctrl__DOT__req_pld))))
                                            : (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_13))) 
                                                << 0xdU) 
                                               | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_12))) 
                                                   << 0xcU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_11))) 
                                                      << 0xbU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_10))) 
                                                         << 0xaU) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_9))) 
                                                            << 9U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_8))) 
                                                               << 8U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_7))) 
                                                                  << 7U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_6))) 
                                                                     << 6U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_5))) 
                                                                        << 5U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_4))) 
                                                                           << 4U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_3))) 
                                                                              << 3U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_2))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_1))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->icache_top__DOT__u_icache_mshr_file__DOT__u_dataram_rd_arb__DOT__u_mux__DOT____VdfgRegularize_hf70afea1_0_0)))))))))))))))) 
                                          >> 0xdU))))), vlSelf->icache_top__DOT__u_data_array_ctrl__DOT__u_icache_data_array1__DOT__tmp_data);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__ico(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vicache_top___024root___eval_triggers__ico(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vicache_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vicache_top___024root___dump_triggers__act(Vicache_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vicache_top___024root___eval_triggers__act(Vicache_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vicache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vicache_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
