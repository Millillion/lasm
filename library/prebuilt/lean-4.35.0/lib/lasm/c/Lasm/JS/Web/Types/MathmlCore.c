// Lean compiler output
// Module: Lasm.JS.Web.Types.MathmlCore
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMathMLElement___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSMathMLElement_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSMathMLElement___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMathMLElement = (const lean_object*)&l_Lasm_JS_Web_instToJSMathMLElement_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLElement___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLElement___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLElement;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeMathMLElementElement_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeMathMLElementElement = (const lean_object*)&l_Lasm_JS_Web_instCoeMathMLElementElement_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSMathMLAnchorElement_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSMathMLElement___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMathMLAnchorElement = (const lean_object*)&l_Lasm_JS_Web_instToJSMathMLAnchorElement_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLAnchorElement;
static const lean_closure_object l_Lasm_JS_Web_instCoeMathMLAnchorElementMathMLElement_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeMathMLAnchorElementMathMLElement = (const lean_object*)&l_Lasm_JS_Web_instCoeMathMLAnchorElementMathMLElement_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMathMLElement___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLElement___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMathMLElement___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Web_instFromJSMathMLElement___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSMathMLElement(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSMathMLElement___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Web.MathMLElement", 25, 25);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0(lean_object* v_self_16_){
_start:
{
lean_inc(v_self_16_);
return v_self_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0___boxed(lean_object* v_self_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lasm_JS_Web_instCoeMathMLElementElement___lam__0(v_self_17_);
lean_dec(v_self_17_);
return v_res_18_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSMathMLAnchorElement(void){
_start:
{
lean_object* v___f_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; 
v___f_21_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSMathMLElement___lam__0___boxed), 1, 0);
v___x_22_ = lean_mk_string_unchecked("Lasm.JS.Web.MathMLAnchorElement", 31, 31);
v___x_23_ = 0;
v___x_24_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_24_, 0, v___f_21_);
lean_ctor_set(v___x_24_, 1, v___x_22_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*2, v___x_23_);
return v___x_24_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Types_MathmlCore(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instFromJSMathMLElement = _init_l_Lasm_JS_Web_instFromJSMathMLElement();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSMathMLElement);
l_Lasm_JS_Web_instFromJSMathMLAnchorElement = _init_l_Lasm_JS_Web_instFromJSMathMLAnchorElement();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSMathMLAnchorElement);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
