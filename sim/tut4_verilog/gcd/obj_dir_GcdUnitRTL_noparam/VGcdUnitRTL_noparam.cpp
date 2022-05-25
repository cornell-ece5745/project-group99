// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGcdUnitRTL_noparam.h for the primary calling header

#include "VGcdUnitRTL_noparam.h"
#include "VGcdUnitRTL_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VGcdUnitRTL_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGcdUnitRTL_noparam::eval\n"); );
    VGcdUnitRTL_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tut4_verilog/gcd/GcdUnitRTL.v", 390, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VGcdUnitRTL_noparam::_eval_initial_loop(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("tut4_verilog/gcd/GcdUnitRTL.v", 390, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VGcdUnitRTL_noparam::__Vdpiexp_GcdUnitRTL_noparam__DOT__v__DOT__line_trace_TOP(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::__Vdpiexp_GcdUnitRTL_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val;
    CData/*0:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    CData/*0:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val;
    CData/*0:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__char;
    CData/*7:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__char;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__str[128];
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__num;
    WData/*4095:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[128];
    IData/*31:0*/ __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__num;
    IData/*31:0*/ __Vilp;
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_SFORMAT_X(4096,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str
                 ,"%x:%x",16,(0xffffU & (vlTOPp->recv_msg 
                                         >> 0x10U)),
                 16,(0xffffU & vlTOPp->recv_msg));
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[__Vilp] 
            = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy 
        = vlTOPp->recv_rdy;
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val 
        = vlTOPp->recv_val;
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val) 
         & (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[__Vilp] 
                = __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy) 
             & (~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val)))) {
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num 
                = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char = 0x20U;
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__2__char);
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if ((1U & ((~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                       & (~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))))) {
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[0U] = 0x2eU;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__4__char);
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if (((~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__rdy)) 
                     & (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__0__val))) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[0U] = 0x23U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__6__char);
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[0U] = 0x28U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str
                 ,"%x",16,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] 
            = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[0U] = 0x20U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str
                 ,"%x",16,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[__Vilp] 
            = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[0U] = 0x20U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    if ((0U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg))) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[0U] = 0x4920U;
        __Vilp = 1U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if ((1U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg))) {
            if (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b) {
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[0U] = 0x4373U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if ((0U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out))) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[0U] = 0x4320U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[0U] = 0x432dU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg))) {
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[0U] = 0x4420U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[0U] = 0x3f20U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            }
        }
    }
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[0U] = 0x29U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_SFORMAT_X(4096,vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str
                 ,"%x",16,vlTOPp->send_msg);
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__str[__Vilp] 
            = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy 
        = vlTOPp->send_rdy;
    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val 
        = vlTOPp->send_val;
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val) 
         & (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[__Vilp] 
                = __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy) 
             & (~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val)))) {
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__num 
                = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1;
            __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__char = 0x20U;
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__23__char);
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        } else {
            if ((1U & ((~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy)) 
                       & (~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val))))) {
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[0U] = 0x2eU;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__num 
                    = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__char = 0x20U;
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__25__char);
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            } else {
                if (((~ (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy)) 
                     & (IData)(__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_val_rdy_str__21__val))) {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[0U] = 0x23U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__num 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__27__char);
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__num 
                        = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__char = 0x20U;
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__29__char);
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VGcdUnitRTL_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VGcdUnitRTL_noparam__Vcb_line_trace_t __Vcb = (VGcdUnitRTL_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VGcdUnitRTL_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VGcdUnitRTL_noparam::_sequent__TOP__1(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_sequent__TOP__1\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*15:0*/ __Vdly__GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out;
    // Body
    __Vdly__GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out 
        = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out;
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next));
    if (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en) {
        __Vdly__GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out 
            = (0xffffU & ((0U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel))
                           ? (vlTOPp->recv_msg >> 0x10U)
                           : ((1U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel))
                               ? (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out)
                               : ((2U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel))
                                   ? (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__sub_out)
                                   : 0U))));
    }
    if (vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en) {
        vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out 
            = (0xffffU & ((IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel)
                           ? ((IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel)
                               ? (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out)
                               : 0U) : vlTOPp->recv_msg));
    }
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out 
        = __Vdly__GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out;
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__sub_out 
        = (0xffffU & ((IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out) 
                      - (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out)));
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b 
        = ((IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out) 
           < (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out));
    vlTOPp->send_msg = vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__sub_out;
    vlTOPp->__Vtableidx2 = (((0U != (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out)) 
                             << 3U) | (((IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b) 
                                        << 2U) | (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg)));
    vlTOPp->recv_rdy = vlTOPp->__Vtable2_recv_rdy[vlTOPp->__Vtableidx2];
    vlTOPp->send_val = vlTOPp->__Vtable2_send_val[vlTOPp->__Vtableidx2];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en 
        = vlTOPp->__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en
        [vlTOPp->__Vtableidx2];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en 
        = vlTOPp->__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en
        [vlTOPp->__Vtableidx2];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel 
        = vlTOPp->__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel
        [vlTOPp->__Vtableidx2];
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel 
        = vlTOPp->__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel
        [vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VGcdUnitRTL_noparam::_combo__TOP__3(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_combo__TOP__3\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = ((((IData)(vlTOPp->send_val) 
                              & (IData)(vlTOPp->send_rdy)) 
                             << 4U) | ((((~ (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b)) 
                                         & (0U == (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out))) 
                                        << 3U) | ((
                                                   ((IData)(vlTOPp->recv_val) 
                                                    & (IData)(vlTOPp->recv_rdy)) 
                                                   << 2U) 
                                                  | (IData)(vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg))));
    vlTOPp->GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next 
        = vlTOPp->__Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next
        [vlTOPp->__Vtableidx1];
}

void VGcdUnitRTL_noparam::_eval(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_eval\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VGcdUnitRTL_noparam::_change_request(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_change_request\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VGcdUnitRTL_noparam::_change_request_1(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_change_request_1\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VGcdUnitRTL_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((recv_val & 0xfeU))) {
        Verilated::overWidthError("recv_val");}
    if (VL_UNLIKELY((send_rdy & 0xfeU))) {
        Verilated::overWidthError("send_rdy");}
}
#endif  // VL_DEBUG
