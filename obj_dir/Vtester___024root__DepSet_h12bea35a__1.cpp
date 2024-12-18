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
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data1s 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1;
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__data2s 
                = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2;
        }
    }
    if (vlSelf->reset) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f = 0U;
    } else if (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__pend_f 
            = (7U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func));
    }
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT____Vcellinp__alu2____pinNumber3 
        = ((~ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__halt)) 
           & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__m_inst));
    vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func 
        = ((8U & (((~ (IData)(((1U == (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__iformat)) 
                               & (0U == (0x7000U & vlSelf->tester__DOT__t__DOT__s0__DOT__doutA))))) 
                   << 3U) & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                             >> 0x1bU))) | (7U & (vlSelf->tester__DOT__t__DOT__s0__DOT__doutA 
                                                  >> 0xcU)));
    if ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1));
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2));
    } else if ((4U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1));
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2));
    } else if ((2U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))) {
        if ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))) {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
                = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1));
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
                = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2));
        } else {
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
                = (((QData)((IData)((- (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)));
            vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
                = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2));
        }
    } else if ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))) {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
            = (((QData)((IData)((- (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1)));
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
            = (((QData)((IData)((- (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)));
    } else {
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num1 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1));
        vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__num2 
            = (QData)((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2));
    }
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
                    ? (1U & (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                     >> 0x20U))) : 
                   ((1U & (IData)((vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub 
                                   >> 0x20U))) ^ (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu1__DOT__sign_swap)))
                : ((1U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                    ? (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                       << (0x1fU & vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2))
                    : ((8U & (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_func))
                        ? (IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu0__DOT__sub)
                        : (vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs1 
                           + vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu_rs2)))));
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
