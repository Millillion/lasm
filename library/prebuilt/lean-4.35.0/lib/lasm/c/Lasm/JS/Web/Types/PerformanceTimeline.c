// Lean compiler output
// Module: Lasm.JS.Web.Types.PerformanceTimeline
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPerformanceEntry___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSPerformanceEntry_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSPerformanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPerformanceEntry = (const lean_object*)&l_Lasm_JS_Web_instToJSPerformanceEntry_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceEntry;
static const lean_closure_object l_Lasm_JS_Web_instToJSPerformanceObserver_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSPerformanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPerformanceObserver = (const lean_object*)&l_Lasm_JS_Web_instToJSPerformanceObserver_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceObserver;
static const lean_closure_object l_Lasm_JS_Web_instToJSPerformanceObserverEntryList_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSPerformanceEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSPerformanceObserverEntryList = (const lean_object*)&l_Lasm_JS_Web_instToJSPerformanceObserverEntryList_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceObserverEntryList;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPerformanceEntry___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPerformanceEntry(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Web.PerformanceEntry", 28, 28);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPerformanceObserver(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Web.PerformanceObserver", 31, 31);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSPerformanceObserverEntryList(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSPerformanceEntry___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Web.PerformanceObserverEntryList", 40, 40);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Types_PerformanceTimeline(uint8_t builtin) {
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
l_Lasm_JS_Web_instFromJSPerformanceEntry = _init_l_Lasm_JS_Web_instFromJSPerformanceEntry();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPerformanceEntry);
l_Lasm_JS_Web_instFromJSPerformanceObserver = _init_l_Lasm_JS_Web_instFromJSPerformanceObserver();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPerformanceObserver);
l_Lasm_JS_Web_instFromJSPerformanceObserverEntryList = _init_l_Lasm_JS_Web_instFromJSPerformanceObserverEntryList();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSPerformanceObserverEntryList);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
