// Lean compiler output
// Module: Lasm.JS.Node.Os
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support
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
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0(lean_object* v___f_1_, lean_object* v_d_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_3_ = lean_mk_string_unchecked("encoding", 8, 8);
v___x_4_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_d_2_);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_3_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
v___x_6_ = lean_unsigned_to_nat(1u);
v___x_7_ = lean_mk_empty_array_with_capacity(v___x_6_);
v___x_8_ = lean_array_push(v___x_7_, v___x_5_);
v___x_9_ = l_Lasm_JS_Web_Internal_fields(v___x_8_);
lean_dec_ref(v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSUserInfoOptions(void){
_start:
{
lean_object* v___f_10_; lean_object* v___f_11_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_11_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSUserInfoOptions___lam__0), 2, 1);
lean_closure_set(v___f_11_, 0, v___f_10_);
return v___f_11_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Os(uint8_t builtin) {
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
l_Lasm_JS_Node_instToJSUserInfoOptions = _init_l_Lasm_JS_Node_instToJSUserInfoOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSUserInfoOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
