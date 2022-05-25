// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGcdUnitRTL_noparam.h for the primary calling header

#include "VGcdUnitRTL_noparam.h"
#include "VGcdUnitRTL_noparam__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*1:0*/ VGcdUnitRTL_noparam::__Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[32];
CData/*0:0*/ VGcdUnitRTL_noparam::__Vtable2_recv_rdy[16];
CData/*0:0*/ VGcdUnitRTL_noparam::__Vtable2_send_val[16];
CData/*0:0*/ VGcdUnitRTL_noparam::__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[16];
CData/*0:0*/ VGcdUnitRTL_noparam::__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[16];
CData/*1:0*/ VGcdUnitRTL_noparam::__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[16];
CData/*0:0*/ VGcdUnitRTL_noparam::__Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[16];

VL_CTOR_IMP(VGcdUnitRTL_noparam) {
    VGcdUnitRTL_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VGcdUnitRTL_noparam__Syms(this, name());
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VGcdUnitRTL_noparam::__Vconfigure(VGcdUnitRTL_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VGcdUnitRTL_noparam::~VGcdUnitRTL_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VGcdUnitRTL_noparam::_settle__TOP__2(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_settle__TOP__2\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VGcdUnitRTL_noparam::_eval_initial(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_eval_initial\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VGcdUnitRTL_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::final\n"); );
    // Variables
    VGcdUnitRTL_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGcdUnitRTL_noparam::_eval_settle(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_eval_settle\n"); );
    VGcdUnitRTL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VGcdUnitRTL_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGcdUnitRTL_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    recv_msg = VL_RAND_RESET_I(32);
    recv_rdy = VL_RAND_RESET_I(1);
    recv_val = VL_RAND_RESET_I(1);
    send_msg = VL_RAND_RESET_I(16);
    send_rdy = VL_RAND_RESET_I(1);
    send_val = VL_RAND_RESET_I(1);
    GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en = VL_RAND_RESET_I(1);
    GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en = VL_RAND_RESET_I(1);
    GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel = VL_RAND_RESET_I(2);
    GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, GcdUnitRTL_noparam__DOT__v__DOT__str);
    GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg = VL_RAND_RESET_I(2);
    GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next = VL_RAND_RESET_I(2);
    GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out = VL_RAND_RESET_I(16);
    GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__sub_out = VL_RAND_RESET_I(16);
    GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out = VL_RAND_RESET_I(16);
    GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    __Vtableidx1 = 0;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[0] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[1] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[2] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[3] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[4] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[5] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[6] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[7] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[8] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[9] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[10] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[11] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[12] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[13] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[14] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[15] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[16] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[17] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[18] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[19] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[20] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[21] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[22] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[23] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[24] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[25] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[26] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[27] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[28] = 1U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[29] = 2U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[30] = 0U;
    __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[31] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_recv_rdy[0] = 1U;
    __Vtable2_recv_rdy[1] = 0U;
    __Vtable2_recv_rdy[2] = 0U;
    __Vtable2_recv_rdy[3] = 0U;
    __Vtable2_recv_rdy[4] = 1U;
    __Vtable2_recv_rdy[5] = 0U;
    __Vtable2_recv_rdy[6] = 0U;
    __Vtable2_recv_rdy[7] = 0U;
    __Vtable2_recv_rdy[8] = 1U;
    __Vtable2_recv_rdy[9] = 0U;
    __Vtable2_recv_rdy[10] = 0U;
    __Vtable2_recv_rdy[11] = 0U;
    __Vtable2_recv_rdy[12] = 1U;
    __Vtable2_recv_rdy[13] = 0U;
    __Vtable2_recv_rdy[14] = 0U;
    __Vtable2_recv_rdy[15] = 0U;
    __Vtable2_send_val[0] = 0U;
    __Vtable2_send_val[1] = 0U;
    __Vtable2_send_val[2] = 1U;
    __Vtable2_send_val[3] = 0U;
    __Vtable2_send_val[4] = 0U;
    __Vtable2_send_val[5] = 0U;
    __Vtable2_send_val[6] = 1U;
    __Vtable2_send_val[7] = 0U;
    __Vtable2_send_val[8] = 0U;
    __Vtable2_send_val[9] = 0U;
    __Vtable2_send_val[10] = 1U;
    __Vtable2_send_val[11] = 0U;
    __Vtable2_send_val[12] = 0U;
    __Vtable2_send_val[13] = 0U;
    __Vtable2_send_val[14] = 1U;
    __Vtable2_send_val[15] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[0] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[1] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[2] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[3] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[4] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[5] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[6] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[7] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[8] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[9] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[10] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[11] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[12] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[13] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[14] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[15] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[0] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[1] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[2] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[3] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[4] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[5] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[6] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[7] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[8] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[9] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[10] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[11] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[12] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[13] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[14] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[15] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[0] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[1] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[2] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[3] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[4] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[5] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[6] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[7] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[8] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[9] = 2U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[10] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[11] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[12] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[13] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[14] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[15] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[0] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[1] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[2] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[3] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[4] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[5] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[6] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[7] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[8] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[9] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[10] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[11] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[12] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[13] = 1U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[14] = 0U;
    __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[15] = 0U;
}
