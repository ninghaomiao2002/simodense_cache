// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtester.h for the primary calling header

#include "Vtester__pch.h"
#include "Vtester__Syms.h"
#include "Vtester___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__ico(Vtester___024root* vlSelf);
#endif  // VL_DEBUG

void Vtester___024root___eval_triggers__ico(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtester___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__act(Vtester___024root* vlSelf);
#endif  // VL_DEBUG

void Vtester___024root___eval_triggers__act(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__lc) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__lc__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__lc__0 
        = vlSelf->tester__DOT__t__DOT__s0__DOT__c0__DOT__alu2__DOT__lc;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtester___024root___dump_triggers__act(vlSelf);
    }
#endif
}
