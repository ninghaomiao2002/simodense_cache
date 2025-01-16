// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtester.h for the primary calling header

#include "Vtester__pch.h"
#include "Vtester__Syms.h"
#include "Vtester___024root.h"

extern const VlWide<512>/*16383:0*/ Vtester__ConstPool__CONST_h60a81158_0;

VL_ATTR_COLD void Vtester___024root___eval_initial__TOP(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ tester__DOT__t__DOT__md__DOT__fd;
    tester__DOT__t__DOT__md__DOT__fd = 0;
    IData/*31:0*/ tester__DOT__t__DOT__md__DOT__byte_address;
    tester__DOT__t__DOT__md__DOT__byte_address = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    tester__DOT__t__DOT__md__DOT__byte_address = 0x8000U;
    __Vtemp_1[0U] = 0x2e62696eU;
    __Vtemp_1[1U] = 0x77617265U;
    __Vtemp_1[2U] = 0x6669726dU;
    tester__DOT__t__DOT__md__DOT__fd = VL_FOPEN_NN(
                                                   VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                                                   , 
                                                   std::string{"rb"});
    ;
    if (VL_UNLIKELY((1U & (~ (IData)((0U != tester__DOT__t__DOT__md__DOT__fd)))))) {
        VL_WRITEF("[%0t] %%Error: testbench.v:97: Assertion failed in %Ntester.t.md: could not read file\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("testbench.v", 97, "");
    }
    while ((! (tester__DOT__t__DOT__md__DOT__fd ? feof(VL_CVT_I_FP(tester__DOT__t__DOT__md__DOT__fd)) : true))) {
        (void)VL_FREAD_I(8,0,0, &(vlSelf->tester__DOT__t__DOT__md__DOT__value)
                         , tester__DOT__t__DOT__md__DOT__fd
                         , 0, 0);
        VL_ASSIGNSEL_WI(16384,8,(0x3ff8U & VL_SHIFTL_III(14,32,32, tester__DOT__t__DOT__md__DOT__byte_address, 3U)), vlSelf->tester__DOT__t__DOT__md__DOT__word, vlSelf->tester__DOT__t__DOT__md__DOT__value);
        if ((0x7ffU == VL_MODDIVS_III(32, tester__DOT__t__DOT__md__DOT__byte_address, (IData)(0x800U)))) {
            VL_ASSIGN_W(16384,vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
                        [(0x1ffffU & VL_DIVS_III(32, tester__DOT__t__DOT__md__DOT__byte_address, (IData)(0x800U)))], vlSelf->tester__DOT__t__DOT__md__DOT__word);
            VL_ASSIGN_W(16384,vlSelf->tester__DOT__t__DOT__md__DOT__word, Vtester__ConstPool__CONST_h60a81158_0);
        }
        tester__DOT__t__DOT__md__DOT__byte_address 
            = ((IData)(1U) + tester__DOT__t__DOT__md__DOT__byte_address);
    }
    VL_ASSIGN_W(16384,vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
                [(0x1ffffU & VL_DIVS_III(32, tester__DOT__t__DOT__md__DOT__byte_address, (IData)(0x800U)))], vlSelf->tester__DOT__t__DOT__md__DOT__word);
    vlSelf->tester__DOT__t__DOT__doutD[0U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0U];
    vlSelf->tester__DOT__t__DOT__doutD[1U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][1U];
    vlSelf->tester__DOT__t__DOT__doutD[2U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][2U];
    vlSelf->tester__DOT__t__DOT__doutD[3U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][3U];
    vlSelf->tester__DOT__t__DOT__doutD[4U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][4U];
    vlSelf->tester__DOT__t__DOT__doutD[5U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][5U];
    vlSelf->tester__DOT__t__DOT__doutD[6U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][6U];
    vlSelf->tester__DOT__t__DOT__doutD[7U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][7U];
    vlSelf->tester__DOT__t__DOT__doutD[8U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][8U];
    vlSelf->tester__DOT__t__DOT__doutD[9U] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][9U];
    vlSelf->tester__DOT__t__DOT__doutD[0xaU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xaU];
    vlSelf->tester__DOT__t__DOT__doutD[0xbU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xbU];
    vlSelf->tester__DOT__t__DOT__doutD[0xcU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xcU];
    vlSelf->tester__DOT__t__DOT__doutD[0xdU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xdU];
    vlSelf->tester__DOT__t__DOT__doutD[0xeU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xeU];
    vlSelf->tester__DOT__t__DOT__doutD[0xfU] = vlSelf->tester__DOT__t__DOT__md__DOT__block_ram
        [0U][0xfU];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtester___024root___dump_triggers__stl(Vtester___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtester___024root___eval_triggers__stl(Vtester___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtester___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtester___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
