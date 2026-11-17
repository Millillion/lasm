// Lean compiler output
// Module: Lasm.JS.Web.Websockets
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Websockets public import Lasm.JS.Web.Html public import Lasm.JS.Web.WebAnimationsAndWebAnimations2 public import Lasm.JS.Web.Fs
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
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CONNECTING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_OPEN;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CLOSING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WebSocket_CLOSED;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCloseEventInit___lam__0(lean_object* v___f_1_, lean_object* v___f_2_, lean_object* v___f_3_, lean_object* v_d_4_){
_start:
{
lean_object* v_bubbles_5_; lean_object* v_cancelable_6_; lean_object* v_composed_7_; lean_object* v_wasClean_8_; lean_object* v_code_9_; lean_object* v_reason_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_bubbles_5_ = lean_ctor_get(v_d_4_, 0);
lean_inc(v_bubbles_5_);
v_cancelable_6_ = lean_ctor_get(v_d_4_, 1);
lean_inc(v_cancelable_6_);
v_composed_7_ = lean_ctor_get(v_d_4_, 2);
lean_inc(v_composed_7_);
v_wasClean_8_ = lean_ctor_get(v_d_4_, 3);
lean_inc(v_wasClean_8_);
v_code_9_ = lean_ctor_get(v_d_4_, 4);
lean_inc(v_code_9_);
v_reason_10_ = lean_ctor_get(v_d_4_, 5);
lean_inc(v_reason_10_);
lean_dec_ref(v_d_4_);
v___x_11_ = lean_mk_string_unchecked("bubbles", 7, 7);
lean_inc_ref_n(v___f_1_, 3);
v___x_12_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_bubbles_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_mk_string_unchecked("cancelable", 10, 10);
v___x_15_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_cancelable_6_);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_14_);
lean_ctor_set(v___x_16_, 1, v___x_15_);
v___x_17_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_18_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_composed_7_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_mk_string_unchecked("wasClean", 8, 8);
v___x_21_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_wasClean_8_);
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_20_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_mk_string_unchecked("code", 4, 4);
v___x_24_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2_, v_code_9_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_23_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
v___x_26_ = lean_mk_string_unchecked("reason", 6, 6);
v___x_27_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_3_, v_reason_10_);
v___x_28_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_28_, 0, v___x_26_);
lean_ctor_set(v___x_28_, 1, v___x_27_);
v___x_29_ = lean_unsigned_to_nat(6u);
v___x_30_ = lean_mk_empty_array_with_capacity(v___x_29_);
v___x_31_ = lean_array_push(v___x_30_, v___x_13_);
v___x_32_ = lean_array_push(v___x_31_, v___x_16_);
v___x_33_ = lean_array_push(v___x_32_, v___x_19_);
v___x_34_ = lean_array_push(v___x_33_, v___x_22_);
v___x_35_ = lean_array_push(v___x_34_, v___x_25_);
v___x_36_ = lean_array_push(v___x_35_, v___x_28_);
v___x_37_ = l_Lasm_JS_Web_Internal_fields(v___x_36_);
lean_dec_ref(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSCloseEventInit(void){
_start:
{
lean_object* v___f_38_; lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___f_41_; 
v___f_38_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_39_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_40_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_41_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSCloseEventInit___lam__0), 4, 3);
lean_closure_set(v___f_41_, 0, v___f_38_);
lean_closure_set(v___f_41_, 1, v___f_39_);
lean_closure_set(v___f_41_, 2, v___f_40_);
return v___f_41_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CONNECTING(void){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = lean_unsigned_to_nat(0u);
return v___x_42_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_OPEN(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_unsigned_to_nat(1u);
return v___x_43_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSING(void){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(2u);
return v___x_44_;
}
}
static lean_object* _init_l_Lasm_JS_Web_WebSocket_CLOSED(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(3u);
return v___x_45_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Websockets(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_WebAnimationsAndWebAnimations2(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fs(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Websockets(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Websockets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_WebAnimationsAndWebAnimations2(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSCloseEventInit = _init_l_Lasm_JS_Web_instToJSCloseEventInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSCloseEventInit);
l_Lasm_JS_Web_WebSocket_CONNECTING = _init_l_Lasm_JS_Web_WebSocket_CONNECTING();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CONNECTING);
l_Lasm_JS_Web_WebSocket_OPEN = _init_l_Lasm_JS_Web_WebSocket_OPEN();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_OPEN);
l_Lasm_JS_Web_WebSocket_CLOSING = _init_l_Lasm_JS_Web_WebSocket_CLOSING();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CLOSING);
l_Lasm_JS_Web_WebSocket_CLOSED = _init_l_Lasm_JS_Web_WebSocket_CLOSED();
lean_mark_persistent(l_Lasm_JS_Web_WebSocket_CLOSED);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
