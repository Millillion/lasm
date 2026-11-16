// Lean compiler output
// Module: Lasm.JS.Node.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Webidl
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitter___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitter___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrSymbol_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrSymbol_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitter___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_mk_string_unchecked("", 0, 0);
v___x_3_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3_, 0, v_x_1_);
lean_ctor_set(v___x_3_, 1, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 9)
{
lean_object* v_value_6_; lean_object* v___x_7_; 
v_value_6_ = lean_ctor_get(v_x_5_, 0);
lean_inc(v_value_6_);
v___x_7_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7_, 0, v_value_6_);
return v___x_7_;
}
else
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_mk_string_unchecked("", 0, 0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSEventEmitter___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSEventEmitter(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSEventEmitter___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.EventEmitter", 25, 25);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object* v_x_16_){
_start:
{
if (lean_obj_tag(v_x_16_) == 0)
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(0u);
return v___x_17_;
}
else
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1u);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object* v_x_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(v_x_19_);
lean_dec_ref(v_x_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object* v_t_21_, lean_object* v_k_22_){
_start:
{
if (lean_obj_tag(v_t_21_) == 0)
{
lean_object* v_value_23_; lean_object* v___x_24_; 
v_value_23_ = lean_ctor_get(v_t_21_, 0);
lean_inc_ref(v_value_23_);
lean_dec_ref_known(v_t_21_, 1);
v___x_24_ = lean_apply_1(v_k_22_, v_value_23_);
return v___x_24_;
}
else
{
lean_object* v_value_25_; lean_object* v___x_26_; 
v_value_25_ = lean_ctor_get(v_t_21_, 0);
lean_inc(v_value_25_);
lean_dec_ref_known(v_t_21_, 1);
v___x_26_ = lean_apply_1(v_k_22_, v_value_25_);
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_29_, v_k_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object* v_motive_33_, lean_object* v_ctorIdx_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_k_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(v_motive_33_, v_ctorIdx_34_, v_t_35_, v_h_36_, v_k_37_);
lean_dec(v_ctorIdx_34_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object* v_t_39_, lean_object* v_domString_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_39_, v_domString_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_domString_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_43_, v_domString_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object* v_t_47_, lean_object* v_symbol_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_47_, v_symbol_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_symbol_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_51_, v_symbol_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
lean_object* v_value_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
v_value_56_ = lean_ctor_get(v_x_55_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_55_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v_x_55_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_value_56_);
lean_dec(v_x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 4);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_value_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
else
{
lean_object* v_value_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v_value_64_ = lean_ctor_get(v_x_55_, 0);
lean_inc(v_value_64_);
lean_dec_ref_known(v_x_55_, 1);
v___x_65_ = lean_mk_string_unchecked("", 0, 0);
v___x_66_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_66_, 0, v_value_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object* v_value_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v_value_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSOnceOptions___lam__0(lean_object* v___f_71_, lean_object* v_d_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_73_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_74_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_71_, v_d_72_);
v___x_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_mk_empty_array_with_capacity(v___x_76_);
v___x_78_ = lean_array_push(v___x_77_, v___x_75_);
v___x_79_ = l_Lasm_JS_Web_Internal_fields(v___x_78_);
lean_dec_ref(v___x_78_);
return v___x_79_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSOnceOptions(void){
_start:
{
lean_object* v___f_80_; lean_object* v___f_81_; 
v___f_80_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_81_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSOnceOptions___lam__0), 2, 1);
lean_closure_set(v___f_81_, 0, v___f_80_);
return v___f_81_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSEventEmitter = _init_l_Lasm_JS_Node_instFromJSEventEmitter();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSEventEmitter);
l_Lasm_JS_Node_instToJSOnceOptions = _init_l_Lasm_JS_Node_instToJSOnceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSOnceOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
