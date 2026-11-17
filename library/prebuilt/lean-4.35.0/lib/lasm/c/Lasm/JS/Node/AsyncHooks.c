// Lean compiler output
// Module: Lasm.JS.Node.AsyncHooks
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Webidl
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
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsyncResource___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSAsyncResource_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAsyncResource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncResource_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource;
static const lean_closure_object l_Lasm_JS_Node_instToJSAsyncHook_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAsyncResource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncHook = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncHook_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncHook;
static const lean_closure_object l_Lasm_JS_Node_instToJSAsyncLocalStorage_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSAsyncResource___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSAsyncLocalStorage = (const lean_object*)&l_Lasm_JS_Node_instToJSAsyncLocalStorage_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncLocalStorage;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsyncResource___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSAsyncResource___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSAsyncResource(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.AsyncResource", 26, 26);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSAsyncHook(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.AsyncHook", 22, 22);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSAsyncLocalStorage(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSAsyncResource___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Node.AsyncLocalStorage", 30, 30);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0(lean_object* v___f_26_, lean_object* v___f_27_, lean_object* v_d_28_){
_start:
{
lean_object* v_init_29_; lean_object* v_before_30_; lean_object* v_after_31_; lean_object* v_destroy_32_; lean_object* v_promiseResolve_33_; lean_object* v_trackPromises_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v_init_29_ = lean_ctor_get(v_d_28_, 0);
lean_inc(v_init_29_);
v_before_30_ = lean_ctor_get(v_d_28_, 1);
lean_inc(v_before_30_);
v_after_31_ = lean_ctor_get(v_d_28_, 2);
lean_inc(v_after_31_);
v_destroy_32_ = lean_ctor_get(v_d_28_, 3);
lean_inc(v_destroy_32_);
v_promiseResolve_33_ = lean_ctor_get(v_d_28_, 4);
lean_inc(v_promiseResolve_33_);
v_trackPromises_34_ = lean_ctor_get(v_d_28_, 5);
lean_inc(v_trackPromises_34_);
lean_dec_ref(v_d_28_);
v___x_35_ = lean_mk_string_unchecked("init", 4, 4);
lean_inc_ref_n(v___f_26_, 4);
v___x_36_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_26_, v_init_29_);
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_35_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_mk_string_unchecked("before", 6, 6);
v___x_39_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_26_, v_before_30_);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_38_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = lean_mk_string_unchecked("after", 5, 5);
v___x_42_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_26_, v_after_31_);
v___x_43_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lean_mk_string_unchecked("destroy", 7, 7);
v___x_45_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_26_, v_destroy_32_);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
v___x_47_ = lean_mk_string_unchecked("promiseResolve", 14, 14);
v___x_48_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_26_, v_promiseResolve_33_);
v___x_49_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_47_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = lean_mk_string_unchecked("trackPromises", 13, 13);
v___x_51_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_27_, v_trackPromises_34_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = lean_unsigned_to_nat(6u);
v___x_54_ = lean_mk_empty_array_with_capacity(v___x_53_);
v___x_55_ = lean_array_push(v___x_54_, v___x_37_);
v___x_56_ = lean_array_push(v___x_55_, v___x_40_);
v___x_57_ = lean_array_push(v___x_56_, v___x_43_);
v___x_58_ = lean_array_push(v___x_57_, v___x_46_);
v___x_59_ = lean_array_push(v___x_58_, v___x_49_);
v___x_60_ = lean_array_push(v___x_59_, v___x_52_);
v___x_61_ = l_Lasm_JS_Web_Internal_fields(v___x_60_);
lean_dec_ref(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions(void){
_start:
{
lean_object* v___f_62_; lean_object* v___f_63_; lean_object* v___f_64_; 
v___f_62_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_63_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_64_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions___lam__0), 3, 2);
lean_closure_set(v___f_64_, 0, v___f_62_);
lean_closure_set(v___f_64_, 1, v___f_63_);
return v___f_64_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_AsyncHooks(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Webidl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSAsyncResource = _init_l_Lasm_JS_Node_instFromJSAsyncResource();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSAsyncResource);
l_Lasm_JS_Node_instFromJSAsyncHook = _init_l_Lasm_JS_Node_instFromJSAsyncHook();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSAsyncHook);
l_Lasm_JS_Node_instFromJSAsyncLocalStorage = _init_l_Lasm_JS_Node_instFromJSAsyncLocalStorage();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSAsyncLocalStorage);
l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions = _init_l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSAsync__hooksCreateHookOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
