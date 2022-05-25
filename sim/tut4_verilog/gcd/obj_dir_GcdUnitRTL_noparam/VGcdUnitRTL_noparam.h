// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VGCDUNITRTL_NOPARAM_H_
#define _VGCDUNITRTL_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VGcdUnitRTL_noparam__Dpi.h"

//==========

class VGcdUnitRTL_noparam__Syms;

//----------

VL_MODULE(VGcdUnitRTL_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(recv_rdy,0,0);
    VL_IN8(recv_val,0,0);
    VL_IN8(send_rdy,0,0);
    VL_OUT8(send_val,0,0);
    VL_OUT16(send_msg,15,0);
    VL_IN(recv_msg,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en;
    CData/*0:0*/ GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en;
    CData/*1:0*/ GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel;
    CData/*0:0*/ GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel;
    CData/*0:0*/ GcdUnitRTL_noparam__DOT__v__DOT__is_a_lt_b;
    CData/*1:0*/ GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_reg;
    CData/*1:0*/ GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next;
    SData/*15:0*/ GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__b_reg_out;
    SData/*15:0*/ GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__sub_out;
    SData/*15:0*/ GcdUnitRTL_noparam__DOT__v__DOT__dpath__DOT__a_reg_out;
    WData/*4095:0*/ GcdUnitRTL_noparam__DOT__v__DOT__str[128];
    IData/*31:0*/ GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ GcdUnitRTL_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*4:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*0:0*/ __Vclklast__TOP__clk;
    static CData/*1:0*/ __Vtable1_GcdUnitRTL_noparam__DOT__v__DOT__ctrl__DOT__state_next[32];
    static CData/*0:0*/ __Vtable2_recv_rdy[16];
    static CData/*0:0*/ __Vtable2_send_val[16];
    static CData/*0:0*/ __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_reg_en[16];
    static CData/*0:0*/ __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_reg_en[16];
    static CData/*1:0*/ __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__a_mux_sel[16];
    static CData/*0:0*/ __Vtable2_GcdUnitRTL_noparam__DOT__v__DOT__b_mux_sel[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VGcdUnitRTL_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VGcdUnitRTL_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VGcdUnitRTL_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VGcdUnitRTL_noparam();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VGcdUnitRTL_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_GcdUnitRTL_noparam__DOT__v__DOT__line_trace_TOP(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VGcdUnitRTL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
