// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtester.h for the primary calling header

#include "Vtester__pch.h"
#include "Vtester___024root.h"

VL_INLINE_OPT void Vtester___024root___nba_sequent__TOP__1(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product = 0;
    // Body
    if (VL_UNLIKELY(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3)) {
        VL_WRITEF("ALUM %10# %10# = %10#, func %2#\n",
                  32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1,
                  32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2,
                  32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_res,
                  4,(IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func));
    }
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product 
        = (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s 
           * vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s);
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_res 
        = ((4U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
            ? ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                    ? VL_MODDIV_III(32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s), (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s))
                    : VL_MODDIVS_III(32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s), (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s)))
                : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                    ? VL_DIV_III(32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s), (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s))
                    : VL_DIVS_III(32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s), (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s))))
            : ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                    ? (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product 
                               >> 0x20U)) : (IData)(
                                                    (tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product 
                                                     >> 0x20U)))
                : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f))
                    ? (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product 
                               >> 0x20U)) : (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__product))));
}

VL_INLINE_OPT void Vtester___024root___nba_sequent__TOP__2(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*1:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst = 0;
    CData/*7:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1_from_vregs;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1_from_vregs = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_haf22c186__0;
    tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_haf22c186__0 = 0;
    IData/*31:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_hb7f5a559__0;
    tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_hb7f5a559__0 = 0;
    QData/*32:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap = 0;
    QData/*32:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNall;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNall = 0;
    CData/*0:0*/ tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone;
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone = 0;
    CData/*1:0*/ __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0;
    __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0 = 0;
    SData/*12:0*/ __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0;
    __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid__v0;
    __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0;
    __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0;
    VL_ZERO_W(256, __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0);
    CData/*5:0*/ __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64;
    __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64 = 0;
    CData/*5:0*/ __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64;
    __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64 = 0;
    SData/*9:0*/ __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64;
    __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64 = 0;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_8;
    // Body
    if (vlSelf->reset) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend2 = 0U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2 = 0U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_acc = 1U;
    } else {
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2 
            = (3U & ((IData)(1U) + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2)));
        if (VL_UNLIKELY(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3)) {
            VL_WRITEF("ALUintM %x %x%10#%10#\n",64,
                      vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1,
                      64,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2,
                      32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1,
                      32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2);
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend2 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_rd 
                = (0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                            >> 7U));
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f 
                = (7U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func));
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_acc = 0U;
        }
        if (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend2) 
             & (1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend2 = 0U;
            vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend = 1U;
        }
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_ready = 0U;
        if (((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2)) 
             & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend))) {
            vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend = 0U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_ready = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_acc = 1U;
        }
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__lc 
        = (3U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__clk2));
    if (VL_LIKELY(vlSelf->reset)) {
        vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v0 = 1U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__pending = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__enI = 0U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay = 0U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit = 0U;
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits = 0U;
        vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v1 = 1U;
    } else {
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus 
            = ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)
                ? ((0x1f00U & ((((0U == (0x1fU & ((IData)(0x1bU) 
                                                  + 
                                                  VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))
                                  ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                          (((IData)(4U) 
                                            + (0xffU 
                                               & ((IData)(0x1bU) 
                                                  + 
                                                  VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))))) 
                                | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                   (7U & (((IData)(0x1bU) 
                                           + VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x1bU) 
                                                + VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))) 
                               << 8U)) | ((0xe0U & 
                                           ((((0U == 
                                               (0x1fU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))
                                               ? 0U
                                               : (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                                  (((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0xcU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0xcU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))))) 
                                             | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                                (7U 
                                                 & (((IData)(0xcU) 
                                                     + 
                                                     VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                                  (((IData)(4U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)))))) 
                                                | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                                                   (7U 
                                                    & (((IData)(2U) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset), 5U))))))))
                : ((0x1f00U & ((((0U == (0x1fU & ((IData)(0x1bU) 
                                                  + 
                                                  VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                    >> 2U)), 5U))))
                                  ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                          [(0x3fU & 
                                            (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                             >> 5U))][
                                          (((IData)(4U) 
                                            + (0xffU 
                                               & ((IData)(0x1bU) 
                                                  + 
                                                  VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                    >> 2U)), 5U)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x1bU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                      >> 2U)), 5U)))))) 
                                | (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                   [(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                              >> 5U))][
                                   (7U & (((IData)(0x1bU) 
                                           + VL_SHIFTL_III(8,32,32, 
                                                           (7U 
                                                            & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                               >> 2U)), 5U)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x1bU) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                    >> 2U)), 5U))))) 
                               << 8U)) | ((0xe0U & 
                                           ((((0U == 
                                               (0x1fU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   VL_SHIFTL_III(8,32,32, 
                                                                 (7U 
                                                                  & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                     >> 2U)), 5U))))
                                               ? 0U
                                               : (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                      >> 5U))][
                                                  (((IData)(2U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0xcU) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, 
                                                                      (7U 
                                                                       & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                          >> 2U)), 5U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0xcU) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                         >> 2U)), 5U)))))) 
                                             | (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                                [(0x3fU 
                                                  & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                     >> 5U))][
                                                (7U 
                                                 & (((IData)(0xcU) 
                                                     + 
                                                     VL_SHIFTL_III(8,32,32, 
                                                                   (7U 
                                                                    & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                       >> 2U)), 5U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, 
                                                                  (7U 
                                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                      >> 2U)), 5U))))) 
                                            << 5U)) 
                                          | (0x1fU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, 
                                                                    (7U 
                                                                     & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                        >> 2U)), 5U))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                      >> 5U))][
                                                  (((IData)(4U) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, 
                                                                      (7U 
                                                                       & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                          >> 2U)), 5U)))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                         >> 2U)), 5U)))))) 
                                                | (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                       >> 5U))][
                                                   (7U 
                                                    & (((IData)(2U) 
                                                        + 
                                                        VL_SHIFTL_III(8,32,32, 
                                                                      (7U 
                                                                       & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                          >> 2U)), 5U)) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       VL_SHIFTL_III(8,32,32, 
                                                                     (7U 
                                                                      & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                         >> 2U)), 5U)))))))));
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__in_M_or_F 
            = ((((((0xcU == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus))) 
                   | (0x10U == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) 
                  | (0x11U == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) 
                 | (0x12U == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) 
                | (0x13U == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) 
               | (((0x14U == (0x1fU & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus))) 
                   & (0x1cU != (0x1fU & ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus) 
                                         >> 8U)))) 
                  & (0x1eU != (0x1fU & ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus) 
                                        >> 8U)))));
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit 
            = (1U & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__in_M_or_F)));
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found = 0U;
        if (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
              & vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid
              [0U]) & (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array
                       [0U] == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 0U;
        }
        if (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
              & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit))) 
             & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 0U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found = 1U;
        }
        if (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
              & vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid
              [1U]) & (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array
                       [1U] == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 1U;
        }
        if ((((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
                | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
               & (~ ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit) 
                     >> 1U))) & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found))) 
             & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found = 1U;
        }
        if (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
              & vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid
              [2U]) & (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array
                       [2U] == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 2U;
        }
        if ((((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
                | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
               & (~ ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit) 
                     >> 2U))) & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found))) 
             & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 2U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found = 1U;
        }
        if (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
              & vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid
              [3U]) & (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array
                       [3U] == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 3U;
        }
        if ((((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
                | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
               & (~ ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit) 
                     >> 3U))) & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found))) 
             & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate = 3U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__zero_found = 1U;
        }
        if (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__in_M_or_F) 
             & (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
                 & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)))) {
            if ((0xfU == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit))) {
                vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit = 0U;
            }
            vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit 
                = ((IData)(vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit) 
                   | (0xfU & ((IData)(1U) << (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate))));
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__opcode_plus;
            vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0 = 1U;
            __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate;
            __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid__v0 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__candidate;
        }
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay 
            = (0x3ffU & (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA) 
                            & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit)) 
                           | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
                          & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)))
                          ? (1U | VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay), 1U))
                          : VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay), 1U)));
        vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits 
            = (0x3ffU & (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA) 
                            & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit)) 
                           | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
                          & ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit) 
                             & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__in_M_or_F)))
                          ? (1U | VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits), 1U))
                          : VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits), 1U)));
        if (VL_UNLIKELY(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) {
            VL_WRITEF("filling set %2# with %x ready %1#\n",
                      6,(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                  >> 5U)),256,vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout.data(),
                      1,(IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA));
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[0U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[1U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[2U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[3U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[4U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[5U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[6U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U];
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[7U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U];
            vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0 
                = (0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                            >> 5U));
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(8,32,32, 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset)), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                             (((IData)(0x1fU) + (0xffU 
                                                 & ((VL_SHIFTL_III(8,32,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset)), 5U) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(8,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset)), 5U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                      (7U & (((VL_SHIFTL_III(8,32,32, 
                                             ((IData)(1U) 
                                              + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset)), 5U) 
                               - (IData)(1U)) - (IData)(0x1fU)) 
                             >> 5U))] >> (0x1fU & (
                                                   (VL_SHIFTL_III(8,32,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset)), 5U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x1fU)))));
        } else if (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit) 
                    & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                = (((0U == (0x1fU & ((VL_SHIFTL_III(8,32,32, 
                                                    ((IData)(1U) 
                                                     + 
                                                     (7U 
                                                      & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                         >> 2U))), 5U) 
                                      - (IData)(1U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                             [(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                        >> 5U))][(((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & ((VL_SHIFTL_III(8,32,32, 
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       (7U 
                                                                        & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                           >> 2U))), 5U) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x1fU)))) 
                                                  >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((VL_SHIFTL_III(8,32,32, 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (7U 
                                                                       & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                          >> 2U))), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))))) 
                   | (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem
                      [(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                 >> 5U))][(7U & (((
                                                   VL_SHIFTL_III(8,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                                      >> 2U))), 5U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)) 
                                                 >> 5U))] 
                      >> (0x1fU & ((VL_SHIFTL_III(8,32,32, 
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                       >> 2U))), 5U) 
                                    - (IData)(1U)) 
                                   - (IData)(0x1fU)))));
        }
        vlSelf->tester__DOT__t__DOT__s0__DOT__readyA 
            = (1U & (((((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA) 
                          & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit)) 
                         | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyI)) 
                        & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_hit)) 
                       & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__in_M_or_F))) 
                      | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay) 
                         >> 9U)) | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits)));
        VL_WRITEF("ihit %1# roffset %1# %x\n",1,vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit,
                  3,(IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset),
                  21,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext);
        vlSelf->tester__DOT__t__DOT__s0__DOT__enI = 0U;
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit)) 
                               & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__pending)))))) {
            VL_WRITEF("requesting %x\n",21,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext);
            vlSelf->tester__DOT__t__DOT__s0__DOT__enI = 1U;
            vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__pending = 1U;
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__roffset 
                = (7U & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                         >> 2U));
            vlSelf->tester__DOT__t__DOT__s0__DOT__addrI 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext;
        }
        if (vlSelf->tester__DOT__t__DOT__s0__DOT__readyI) {
            vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__pending = 0U;
            vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64 = 1U;
            __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64 
                = (0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                            >> 5U));
            __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64 
                = (0x3ffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                             >> 0xbU));
            __Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64 
                = (0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                            >> 5U));
        }
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__pending 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__pending;
    vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay;
    vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_nru_bit;
    vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits 
        = vlSelf->__Vdly__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_delay_hits;
    vlSelf->tester__DOT__t__DOT__s0__DOT__readyI = 
        ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__IorD) 
         & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dready));
    if (vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][0U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[0U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][1U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[1U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][2U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[2U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][3U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[3U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][4U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[4U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][5U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[5U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][6U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[6U];
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__mem[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0][7U] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__mem__v0[7U];
    }
    if (vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_valid__v0] = 1U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__bl1_tag_array__v0;
    }
    if ((1U & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__roffset)))) {
        if (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__load_from_prev_lev) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U] 
                = vlSelf->tester__DOT__t__DOT__doutD[1U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U] 
                = vlSelf->tester__DOT__t__DOT__doutD[2U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U] 
                = vlSelf->tester__DOT__t__DOT__doutD[3U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U] 
                = vlSelf->tester__DOT__t__DOT__doutD[4U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U] 
                = vlSelf->tester__DOT__t__DOT__doutD[5U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U] 
                = vlSelf->tester__DOT__t__DOT__doutD[6U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U] 
                = vlSelf->tester__DOT__t__DOT__doutD[7U];
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[1U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[2U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[3U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[4U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[5U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[6U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[7U];
        }
    }
    if (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__roffset) {
        if (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__load_from_prev_lev) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U] 
                = vlSelf->tester__DOT__t__DOT__doutD[8U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U] 
                = vlSelf->tester__DOT__t__DOT__doutD[9U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xaU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xbU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xcU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xdU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xeU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U] 
                = vlSelf->tester__DOT__t__DOT__doutD[0xfU];
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[8U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[9U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xaU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xbU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xcU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xdU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xeU];
            vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dl2u__DOT__rdata_updated[0xfU];
        }
    }
    if (vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v0) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__valid[0U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v1) {
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__valid[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->__Vdlyvset__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__valid[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__valid__v64] = 1U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array[__Vdlyvdim0__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64] 
            = __Vdlyvval__tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array__v64;
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__acceptingC 
        = (1U & (~ ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__pending) 
                    | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__pendingI) 
                       | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__enI) 
                          | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__enC) 
                             | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__weC)))))));
    __Vtemp_7[0U] = (((0U == (0x1fU & ((VL_SHIFTL_III(8,8,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                        - (IData)(1U)) 
                                       - (IData)(0x1fU))))
                       ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                               (((IData)(0x1fU) + (0xffU 
                                                   & ((VL_SHIFTL_III(8,8,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)))))) 
                     | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[
                        (7U & (((VL_SHIFTL_III(8,8,32, 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
    __Vtemp_8[0U] = (((0U == (0x1fU & ((VL_SHIFTL_III(8,8,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                        - (IData)(1U)) 
                                       - (IData)(0x1fU))))
                       ? 0U : (vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[
                               (((IData)(0x1fU) + (0xffU 
                                                   & ((VL_SHIFTL_III(8,8,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((VL_SHIFTL_III(8,8,32, 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x1fU)))))) 
                     | (vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[
                        (7U & (((VL_SHIFTL_III(8,8,32, 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                 - (IData)(1U)) - (IData)(0x1fU)) 
                               >> 5U))] >> (0x1fU & 
                                            ((VL_SHIFTL_III(8,8,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU)))));
    if ((0U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__roffset))) {
        if (vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__load_from_prev_lev) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[0U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[0U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[1U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[1U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[2U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[2U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[3U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[3U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[4U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[4U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[5U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[5U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[6U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[6U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[7U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc2__DOT__dout[7U];
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[0U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[0U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[1U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[1U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[2U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[2U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[3U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[3U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[4U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[4U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[5U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[5U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[6U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[6U];
            vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[7U] 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__rdata_updated[7U];
        }
    } else {
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[0U] 
            = ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__dc1__DOT__load_from_prev_lev)
                ? __Vtemp_7[0U] : __Vtemp_8[0U]);
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[1U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[2U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[3U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[4U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[5U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[6U] = 0U;
        vlSelf->tester__DOT__t__DOT__s0__DOT__doutB[7U] = 0U;
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fma = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alui_enable = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__auipc_enable = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c3_en = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c1_en = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c2_en = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[0U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][0U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[1U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][1U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[2U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][2U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[3U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][3U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[4U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][4U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[5U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][5U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[6U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][6U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[7U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x17U))][7U];
    tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func 
        = ((0xf8U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                     >> 0x18U)) | (7U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                         >> 0xcU)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__absolute_pc = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file
        [(0x20U | (0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                            >> 0x14U)))];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__sys_inst = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__load_enable = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_inst = 0U;
    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                      >> 5U)))) {
            if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 3U)))) {
                    if ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__auipc_enable = 1U;
                    }
                }
            }
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 4U)))) {
                if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__load_enable 
                            = (0U == (7U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                            >> 0xcU)));
                    }
                } else {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__load_enable = 1U;
                }
            }
        }
        if ((0x20U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 4U)))) {
                if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c1_en = 1U;
                    }
                }
            }
            if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_inst 
                            = (1U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                     >> 0x19U));
                    }
                }
            }
        }
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst = 0U;
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file
        [(0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                   >> 0xfU))];
    tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_hb7f5a559__0 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file
        [(0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                   >> 0x14U))];
    tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst = 0U;
    if ((0x40U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
        if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 4U)))) {
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fma 
                    = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                        ? ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                            ? 7U : 6U) : ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                                           ? 5U : 4U));
            }
            if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c2_en = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float = 1U;
                        tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst = 1U;
                    }
                }
            }
        }
        if ((0x20U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 3U)))) {
                    if ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alui_enable = 1U;
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__absolute_pc = 1U;
                    }
                }
            }
            if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c3_en = 1U;
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst = 1U;
                    }
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                        = ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                            ? 0U : 1U);
                } else {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                        = ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                            ? 0U : 1U);
                }
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                  >> 2U)))) {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__sys_inst = 1U;
                    }
                }
            } else {
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                    = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                        ? ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                            ? 5U : 0U) : ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                                           ? 1U : 3U));
            }
        } else if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 2U)))) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst = 1U;
                }
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                    = ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                        ? 0U : 1U);
            } else {
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat = 0U;
            }
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat = 6U;
        }
    } else if ((0x20U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
        if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 2U)))) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alui_enable 
                        = (1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                    >> 0x19U)));
                }
            }
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                    ? 0U : ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                             ? 4U : 0U));
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                    ? ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                        ? 0U : 1U) : 2U);
        }
        if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 3U)))) {
                if ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float = 1U;
                }
            }
            if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 2U)))) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst = 1U;
                }
            }
        }
    } else {
        if ((0x10U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 2U)))) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alui_enable = 1U;
                }
            }
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                    ? 0U : ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                             ? 4U : 1U));
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat 
                = ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                    ? ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                        ? 1U : 0U) : 1U);
        }
        if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 3U)))) {
                if ((4U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float = 1U;
                }
            }
            if ((8U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
                if ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 2U)))) {
                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst = 1U;
                }
            }
        }
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate 
        = ((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
            ? (((- (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                            >> 0x1fU))) << 0xbU) | 
               (0x7ffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 0x14U))) : ((2U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                          ? (((- (IData)(
                                                         (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                      >> 7U))))
                                          : ((3U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                              ? (((- (IData)(
                                                             (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                             >> 7U)))))
                                              : ((4U 
                                                  == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA) 
                                                      | ((0x800U 
                                                          & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                             >> 9U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                  >> 0x14U))))))
                                                   : 0U)))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[0U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][0U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[1U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][1U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[2U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][2U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[3U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][3U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[4U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][4U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[5U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][5U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[6U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][6U];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[7U] 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file_v
        [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                >> 0x1dU))][7U];
    tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_haf22c186__0 
        = ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__sys_inst) 
           & (0U == (0x7000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rd_to_vregs 
        = ((~ ((0x14U == (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                          >> 0x1bU)) | ((0x1cU == (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                   >> 0x1bU)) 
                                        | (0x18U == 
                                           (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                            >> 0x1bU))))) 
           & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_external 
        = ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst) 
           & ((4U > (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                     >> 0x1bU)) | ((0x18U == (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                              >> 0x1bU)) 
                                   | (0x1aU == (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                >> 0x1bU)))));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1_from_vregs 
        = ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst) 
           & ((0x1eU != (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                         >> 0x1bU)) & (0x1aU != (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                 >> 0x1bU))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__auipc 
        = (0x1fffffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PC 
                        + vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__daddr 
        = (0x3fffffffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                          + ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst)
                              ? tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_hb7f5a559__0
                              : vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func 
        = ((8U & (((~ (IData)(((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)) 
                               & (0U == (0x7000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA))))) 
                   << 3U) & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                             >> 0x1bU))) | (7U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                  >> 0xcU)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2 
        = (((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)) 
            | (2U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)))
            ? vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate
            : tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_hb7f5a559__0);
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c1_merg__DOT__direction 
        = (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inA[0U] 
           < vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c_inB[0U]);
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mret 
        = ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_haf22c186__0) 
           & (0x302U == (0xfffU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_file
        [(((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1_from_vregs) 
           << 5U) | (0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                              >> 0xfU)))];
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt 
        = (1U & ((0U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                  ? (((((((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                          | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                     >> (((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1_from_vregs) 
                                          << 5U) | 
                                         (0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                   >> 0xfU)))))) 
                         | ((IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                     >> (((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst) 
                                          << 5U) | 
                                         (0x1fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                   >> 0x14U))))) 
                            & ((~ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__falu_inst)) 
                               | (0x14U >= (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                            >> 0x1bU))))) 
                        | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                   >> (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rd_to_vregs) 
                                        << 5U) | (0x1fU 
                                                  & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                     >> 7U)))))) 
                       | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_inst) 
                          & (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_acc)))) 
                      | (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fpu_valid_sr) 
                          >> 5U) & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_external))) 
                     | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst) 
                        & ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend_v
                            [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                    >> 0x1aU))] | vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend_v
                            [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                    >> 0x1dU))]) | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fetch_wait))))
                  : ((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                      ? (((((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                            | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                       >> (0x1fU & 
                                           (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                            >> 0xfU))))) 
                           | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                      >> (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float) 
                                           << 5U) | 
                                          (0x1fU & 
                                           (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                            >> 7U)))))) 
                          | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__load_enable) 
                             & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fetch_wait))) 
                         | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__simd_inst) 
                            & ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend_v
                                [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                        >> 0x1dU))] 
                                | vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend_v
                                [(3U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                        >> 0x17U))]) 
                               | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c1_not_accepting))))
                      : ((2U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                          ? ((((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                               | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                          >> (0x1fU 
                                              & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                 >> 0xfU))))) 
                              | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                         >> (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__float) 
                                              << 5U) 
                                             | (0x1fU 
                                                & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                   >> 0x14U)))))) 
                             | (IData)(vlSelf->__VdfgTmp_h76863b34__0))
                          : ((3U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                              ? (((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                                  | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                             >> (0x1fU 
                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                    >> 0xfU))))) 
                                 | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                            >> (0x1fU 
                                                & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                   >> 0x14U)))))
                              : ((4U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                  ? ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                                     | (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                    >> 7U)))))
                                  : ((5U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                      ? ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                                         | (IData)(
                                                   (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                    >> 
                                                    (0x1fU 
                                                     & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                        >> 7U)))))
                                      : ((6U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat))
                                          ? ((((((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA)) 
                                                 | (IData)(
                                                           (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                            >> 
                                                            (0x20U 
                                                             | (0x1fU 
                                                                & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                   >> 0xfU)))))) 
                                                | (IData)(
                                                          (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                           >> 
                                                           (0x20U 
                                                            | (0x1fU 
                                                               & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                  >> 0x14U)))))) 
                                               | (IData)(
                                                         (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                          >> 
                                                          (0x20U 
                                                           | (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                              >> 0x1bU))))) 
                                              | (IData)(
                                                        (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__reg_pend 
                                                         >> 
                                                         (0x20U 
                                                          | (0x1fU 
                                                             & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                                >> 7U)))))) 
                                             | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__fpu_valid_sr) 
                                                >> 5U))
                                          : (~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__readyA))))))))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__to_mmap_reg 
        = ((0x800U == (0x7ffffffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__daddr 
                                     >> 3U))) | (0x820U 
                                                 == 
                                                 (0x7ffffffU 
                                                  & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__daddr 
                                                     >> 3U))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
        = ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
            ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1))
            : ((4U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1))
                : ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1))
                        : (((QData)((IData)((- (IData)(
                                                       (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1))))
                    : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)))
                        : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1))))));
    VL_WRITEF("%x func(%x) %x\n",32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1,
              4,(IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func),
              32,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2);
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
        = ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
            ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
            : ((4U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                : ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                        : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))
                    : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))
                        : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))))));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)) 
                             - (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap 
        = ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
            >> 0x1fU) != (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2 
                          >> 0x1fU));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__next_step 
        = (0x1fffffU & ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mret)
                         ? vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mepc
                         : ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__absolute_pc)
                             ? (0x3ffffffeU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__daddr)
                             : vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate)));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNall 
        = ((0x7fc00000U == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1) 
           & (0x7fc00000U == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone 
        = ((0x7fc00000U == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1) 
           | (0x7fc00000U == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2));
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)) 
                             - (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3 
        = ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
           & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_inst));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__c1_merg____pinNumber6 
        = ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
           & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c1_en));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__c2_s____pinNumber4 
        = ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
           & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__c2_en));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__ecall_int 
        = ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__sys_inst) 
           & ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_haf22c186__0) 
              & ((0U == (0xfffU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__immediate)) 
                 & ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
                    & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mstatus 
                       >> 3U)))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__timer_interrupt 
        = ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mie 
            >> 7U) & ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mstatus 
                       >> 3U) & ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__already_trapped)) 
                                 & ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__cycle_counter 
                                     >= vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mtimecmp) 
                                    & ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
                                       & (0ULL != vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mtimecmp))))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_dst 
        = ((4U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
            ? ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                       & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)
                    : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                       | vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1, 
                                         (0x1fU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                        : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                           >> (0x1fU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))
                    : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                       ^ vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))
            : ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                ? ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? (1U & (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                     >> 0x20U))) : 
                   ((1U & (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                   >> 0x20U))) ^ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap)))
                : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                       << (0x1fU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                    : ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub)
                        : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                           + vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))));
    if ((0x4000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
        if ((0x2000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            if (VL_UNLIKELY((0x1000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA))) {
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take 
                    = (1U & (~ (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                        >> 0x20U))));
                VL_WRITEF("bgeu> %x %x %x\n",33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)),
                          33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)),
                          1,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take);
            } else {
                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take 
                    = (1U & (IData)((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                     >> 0x20U)));
            }
        } else if ((0x1000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take 
                = (1U ^ ((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                          >> 0x20U) ^ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap)));
            VL_WRITEF("bge> %x %x %x\n",33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)),
                      33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)),
                      1,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take);
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take 
                = (IData)(((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                            >> 0x20U) ^ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap)));
            VL_WRITEF("blt> %x %x %x\n",33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)),
                      33,(QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)),
                      1,vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take);
        }
    } else {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take 
            = ((1U & (~ (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                         >> 0xdU))) && ((0x1000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA)
                                         ? (0ULL != tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub)
                                         : (0ULL == tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub)));
    }
    tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt 
        = (IData)(((tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub 
                    >> 0x20U) ^ ((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1 
                                  >> 0x1fU) != (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2 
                                                >> 0x1fU))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_h01a245f1__0 
        = ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__branch_take) 
           & (3U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)));
    if ((0x80U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
        if ((0x40U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
            if ((0x20U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
                if ((0x10U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
                    if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func)))) {
                                    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                     >> 3U)))) {
                    if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func)))) {
                                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                    = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1;
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
            if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                  >> 2U)))) {
                        if ((2U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
                            if ((1U & (~ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func)))) {
                                vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                    = ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone)
                                        ? 0U : (0ULL 
                                                == tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub));
                            }
                        } else {
                            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                = ((1U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))
                                    ? ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone)
                                        ? 0U : (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt))
                                    : ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone)
                                        ? 0U : ((0ULL 
                                                 == tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__sub) 
                                                | (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt))));
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                         >> 6U)))) {
        if ((0x20U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
            if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                          >> 4U)))) {
                if ((8U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
                    if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                      >> 1U)))) {
                            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                = ((1U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))
                                    ? (IData)(((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNall)
                                                ? 0x7fc00000ULL
                                                : ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone)
                                                    ? 
                                                   ((0x7fc00000U 
                                                     == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)
                                                     ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2))
                                                     : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)))
                                                    : 
                                                   ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt)
                                                     ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2))
                                                     : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1))))))
                                    : (IData)(((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNall)
                                                ? 0x7fc00000ULL
                                                : ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__NaNone)
                                                    ? 
                                                   ((0x7fc00000U 
                                                     == vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)
                                                     ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2))
                                                     : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)))
                                                    : 
                                                   ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__alu3__DOT__lt)
                                                     ? (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1))
                                                     : (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2)))))));
                        }
                    }
                } else if ((1U & (~ ((IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func) 
                                     >> 2U)))) {
                    if ((2U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))) {
                        if ((1U & (~ (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func)))) {
                            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                                = ((0x80000000U & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2 
                                                   ^ vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)) 
                                   | (0x7fffffffU & (IData)((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)))));
                        }
                    } else {
                        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_dst 
                            = ((1U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_func))
                                ? (((~ (IData)(((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2)) 
                                                >> 0x1fU))) 
                                    << 0x1fU) | (0x7fffffffU 
                                                 & (IData)((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1)))))
                                : (((IData)(((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs2)) 
                                             >> 0x1fU)) 
                                    << 0x1fU) | (0x7fffffffU 
                                                 & (IData)((QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__aluf_rs1))))));
                    }
                }
            }
        }
    }
    tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction 
        = (((((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mret) 
              | ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__absolute_pc) 
                 | ((5U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)) 
                    | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_h01a245f1__0)))) 
             << 1U) | (1U & ((~ ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____VdfgTmp_h01a245f1__0) 
                                 | (5U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)))) 
                             | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mret)))) 
           & (- (IData)((1U & (~ ((IData)(vlSelf->reset) 
                                  | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)))))));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext_unint 
        = (0x1fffffU & ((2U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction))
                         ? ((1U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction))
                             ? vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__next_step
                             : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PC 
                                + vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__next_step))
                         : ((1U & (IData)(tester__DOT__t__DOT__s0__DOT__c0__DOT__next_direction))
                             ? ((IData)(4U) + vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PC)
                             : vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PC)));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
        = (0x1fffffU & (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__timer_interrupt) 
                         | (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__ecall_int))
                         ? ((2U & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mtvec)
                             ? VL_SHIFTL_III(21,21,32, 
                                             ((0x7ffffU 
                                               & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mtvec 
                                                  >> 2U)) 
                                              + (0x3fU 
                                                 & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mcause)), 2U)
                             : (0x1ffffcU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__mtvec))
                         : vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext_unint));
    vlSelf->tester__DOT__t__DOT__debug = (((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt) 
                                           << 0x15U) 
                                          | vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext);
    vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__hit 
        = (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__valid
           [(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                      >> 5U))] & (vlSelf->tester__DOT__t__DOT__s0__DOT__il1__DOT__tag_array
                                  [(0x3fU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                             >> 5U))] 
                                  == (0x3ffU & (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__PCnext 
                                                >> 0xbU))));
}

void Vtester___024root___nba_sequent__TOP__0(Vtester___024root* vlSelf);

void Vtester___024root___eval_nba(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtester___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtester___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtester___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtester___024root___eval_triggers__act(Vtester___024root* vlSelf);
void Vtester___024root___eval_act(Vtester___024root* vlSelf);

bool Vtester___024root___eval_phase__act(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtester___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtester___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtester___024root___eval_phase__nba(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtester___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__ico(Vtester___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtester___024root___eval_phase__ico(Vtester___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__nba(Vtester___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__act(Vtester___024root* vlSelf);
#endif  // VL_DEBUG

void Vtester___024root___eval(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval\n"); );
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
            Vtester___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tester.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtester___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtester___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tester.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtester___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tester.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtester___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtester___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtester___024root___eval_debug_assertions(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
