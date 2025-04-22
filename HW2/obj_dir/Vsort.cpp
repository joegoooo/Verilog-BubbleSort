// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsort__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsort::Vsort(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsort__Syms(contextp(), _vcname__, this)}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsort::Vsort(const char* _vcname__)
    : Vsort(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsort::~Vsort() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsort___024root___eval_debug_assertions(Vsort___024root* vlSelf);
#endif  // VL_DEBUG
void Vsort___024root___eval_static(Vsort___024root* vlSelf);
void Vsort___024root___eval_initial(Vsort___024root* vlSelf);
void Vsort___024root___eval_settle(Vsort___024root* vlSelf);
void Vsort___024root___eval(Vsort___024root* vlSelf);

void Vsort::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsort::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsort___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsort___024root___eval_static(&(vlSymsp->TOP));
        Vsort___024root___eval_initial(&(vlSymsp->TOP));
        Vsort___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsort___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsort::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsort::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsort::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsort___024root___eval_final(Vsort___024root* vlSelf);

VL_ATTR_COLD void Vsort::final() {
    Vsort___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsort::hierName() const { return vlSymsp->name(); }
const char* Vsort::modelName() const { return "Vsort"; }
unsigned Vsort::threads() const { return 1; }
void Vsort::prepareClone() const { contextp()->prepareClone(); }
void Vsort::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsort::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsort___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsort___024root__trace_init_top(Vsort___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsort___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsort___024root*>(voidSelf);
    Vsort__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsort___024root__trace_decl_types(tracep);
    Vsort___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsort___024root__trace_register(Vsort___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsort::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsort::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsort___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
