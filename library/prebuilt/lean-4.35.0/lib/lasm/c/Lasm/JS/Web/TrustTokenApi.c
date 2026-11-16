// Lean compiler output
// Module: Lasm.JS.Web.TrustTokenApi
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Html public import Lasm.JS.Web.Types.TrustTokenApi public import Lasm.JS.Web.Types.Xhr
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
lean_object* l_Lasm_JS_Web_instToJSTokenVersion___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSPrivateToken___lam__0(lean_object* v___f_1_, lean_object* v___x_2_, lean_object* v_d_3_){
_start:
{
lean_object* v_version_4_; lean_object* v_operation_5_; lean_object* v_refreshPolicy_6_; lean_object* v_issuers_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v_version_4_ = lean_ctor_get(v_d_3_, 0);
lean_inc_ref(v_version_4_);
v_operation_5_ = lean_ctor_get(v_d_3_, 1);
lean_inc_ref(v_operation_5_);
v_refreshPolicy_6_ = lean_ctor_get(v_d_3_, 2);
lean_inc(v_refreshPolicy_6_);
v_issuers_7_ = lean_ctor_get(v_d_3_, 3);
lean_inc(v_issuers_7_);
lean_dec_ref(v_d_3_);
v___x_8_ = lean_mk_string_unchecked("version", 7, 7);
v___x_9_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_9_, 0, v_version_4_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v___x_8_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
v___x_11_ = lean_mk_string_unchecked("operation", 9, 9);
v___x_12_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_12_, 0, v_operation_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_mk_string_unchecked("refreshPolicy", 13, 13);
v___x_15_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_refreshPolicy_6_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_mk_string_unchecked("issuers", 7, 7);
v___x_18_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_2_, v_issuers_7_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_unsigned_to_nat(4u);
v___x_21_ = lean_mk_empty_array_with_capacity(v___x_20_);
v___x_22_ = lean_array_push(v___x_21_, v___x_10_);
v___x_23_ = lean_array_push(v___x_22_, v___x_13_);
v___x_24_ = lean_array_push(v___x_23_, v___x_16_);
v___x_25_ = lean_array_push(v___x_24_, v___x_19_);
v___x_26_ = l_Lasm_JS_Web_Internal_fields(v___x_25_);
lean_dec_ref(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSPrivateToken(void){
_start:
{
lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___f_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSTokenVersion___lam__0), 1, 0);
v___f_28_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_29_ = l_Lasm_JS_instToJSArray___redArg(v___f_28_);
v___f_30_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSPrivateToken___lam__0), 3, 2);
lean_closure_set(v___f_30_, 0, v___f_27_);
lean_closure_set(v___f_30_, 1, v___x_29_);
return v___f_30_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_TrustTokenApi(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Xhr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_TrustTokenApi(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_TrustTokenApi(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Xhr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSPrivateToken = _init_l_Lasm_JS_Web_instToJSPrivateToken();
lean_mark_persistent(l_Lasm_JS_Web_instToJSPrivateToken);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
