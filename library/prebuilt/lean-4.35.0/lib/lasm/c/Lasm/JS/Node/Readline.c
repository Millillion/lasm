// Lean compiler output
// Module: Lasm.JS.Node.Readline
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Webidl public import Lasm.JS.Node.Events public import Lasm.JS.Node.Stream
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_instToJSStreamWritable___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSJSFunction___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructor_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructor_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlinePromisesInterface_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterface = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesInterface_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesInterface;
static const lean_closure_object l_Lasm_JS_Node_instCoeReadlinePromisesInterfaceInterfaceConstructor_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadlinePromisesInterfaceInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instCoeReadlinePromisesInterfaceInterfaceConstructor_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlinePromisesReadline_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesReadline = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlinePromisesReadline_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadlinePromisesReadline;
static const lean_closure_object l_Lasm_JS_Node_instToJSReadlineInterface_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSReadlineInterface = (const lean_object*)&l_Lasm_JS_Node_instToJSReadlineInterface_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSReadlineInterface;
static const lean_closure_object l_Lasm_JS_Node_instCoeReadlineInterfaceInterfaceConstructor_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeReadlineInterfaceInterfaceConstructor = (const lean_object*)&l_Lasm_JS_Node_instCoeReadlineInterfaceInterfaceConstructor_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorCloseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorCloseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorCloseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorErrorListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorErrorListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorErrorListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorLineListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorLineListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorLineListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorHistoryListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorHistoryListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorHistoryListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorPauseListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorPauseListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorPauseListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorResumeListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorResumeListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorResumeListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorSIGCONTListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGCONTListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorSIGCONTListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorSIGINTListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGINTListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorSIGINTListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSInterfaceConstructorSIGTSTPListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorSIGTSTPListener = (const lean_object*)&l_Lasm_JS_Node_instToJSInterfaceConstructorSIGTSTPListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructor___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructor(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor", 33, 33);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(lean_object* v_self_16_){
_start:
{
lean_inc(v_self_16_);
return v_self_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0___boxed(lean_object* v_self_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lasm_JS_Node_instCoeInterfaceConstructorEventEmitter___lam__0(v_self_17_);
lean_dec(v_self_17_);
return v_res_18_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSReadlinePromisesInterface(void){
_start:
{
lean_object* v___f_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; 
v___f_21_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_22_ = lean_mk_string_unchecked("Lasm.JS.Node.readlinePromises.Interface", 39, 39);
v___x_23_ = 0;
v___x_24_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_24_, 0, v___f_21_);
lean_ctor_set(v___x_24_, 1, v___x_22_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*2, v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSReadlinePromisesReadline(void){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; uint8_t v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_28_ = lean_mk_string_unchecked("Lasm.JS.Node.readlinePromises.Readline", 38, 38);
v___x_29_ = 0;
v___x_30_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_30_, 0, v___f_27_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set_uint8(v___x_30_, sizeof(void*)*2, v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSReadlineInterface(void){
_start:
{
lean_object* v___f_32_; lean_object* v___x_33_; uint8_t v___x_34_; lean_object* v___x_35_; 
v___f_32_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_33_ = lean_mk_string_unchecked("Lasm.JS.Node.readline.Interface", 31, 31);
v___x_34_ = 0;
v___x_35_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_35_, 0, v___f_32_);
lean_ctor_set(v___x_35_, 1, v___x_33_);
lean_ctor_set_uint8(v___x_35_, sizeof(void*)*2, v___x_34_);
return v___x_35_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener(void){
_start:
{
lean_object* v___f_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; 
v___f_38_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_39_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.CloseListener", 47, 47);
v___x_40_ = 0;
v___x_41_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_41_, 0, v___f_38_);
lean_ctor_set(v___x_41_, 1, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*2, v___x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_a_44_ = lean_ctor_get(v_x_42_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_52_ == 0)
{
v___x_46_ = v_x_42_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v_x_42_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_49_; 
if (v_isShared_47_ == 0)
{
v___x_49_ = v___x_46_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_44_);
v___x_49_ = v_reuseFailAlloc_51_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
lean_object* v___x_50_; 
v___x_50_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
return v___x_50_;
}
}
}
else
{
lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_61_; 
v_isSharedCheck_61_ = !lean_is_exclusive(v_x_42_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; 
v_unused_62_ = lean_ctor_get(v_x_42_, 0);
lean_dec(v_unused_62_);
v___x_54_ = v_x_42_;
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
else
{
lean_dec(v_x_42_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_58_; 
v___x_56_ = lean_box(0);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v___x_56_);
v___x_58_ = v___x_54_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_56_);
v___x_58_ = v_reuseFailAlloc_60_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed(lean_object* v_x_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0(v_x_63_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(lean_object* v_f_66_, lean_object* v___f_67_, lean_object* v_x_68_){
_start:
{
lean_object* v___x_70_; uint8_t v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = 0;
v___x_72_ = lean_apply_1(v_f_66_, lean_box(0));
v___x_73_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_70_, v___x_71_, v___x_72_, v___f_67_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed(lean_object* v_f_74_, lean_object* v___f_75_, lean_object* v_x_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1(v_f_74_, v___f_75_, v_x_76_);
lean_dec_ref(v_x_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(lean_object* v_f_79_){
_start:
{
lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___f_81_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_82_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_82_, 0, v_f_79_);
lean_closure_set(v___f_82_, 1, v___f_81_);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = l_Lasm_JS_Function_ofFn(v___f_82_, v___x_83_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_87_; uint8_t v_isShared_88_; uint8_t v_isSharedCheck_92_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_92_ == 0)
{
v___x_87_ = v___x_84_;
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
else
{
lean_inc(v_a_85_);
lean_dec(v___x_84_);
v___x_87_ = lean_box(0);
v_isShared_88_ = v_isSharedCheck_92_;
goto v_resetjp_86_;
}
v_resetjp_86_:
{
lean_object* v___x_90_; 
if (v_isShared_88_ == 0)
{
v___x_90_ = v___x_87_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_a_85_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
v_a_93_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_84_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_84_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___boxed(lean_object* v_f_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn(v_f_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(lean_object* v_f_104_, lean_object* v_x_105_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = lean_apply_1(v_f_104_, lean_box(0));
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_115_; 
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_115_ == 0)
{
lean_object* v_unused_116_; 
v_unused_116_ = lean_ctor_get(v___x_107_, 0);
lean_dec(v_unused_116_);
v___x_109_ = v___x_107_;
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
else
{
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_115_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = lean_box(0);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 0, v___x_111_);
v___x_113_ = v___x_109_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_117_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_107_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_107_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed(lean_object* v_f_125_, lean_object* v_x_126_, lean_object* v___y_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0(v_f_125_, v_x_126_);
lean_dec_ref(v_x_126_);
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(lean_object* v_f_129_){
_start:
{
lean_object* v___f_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___f_131_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_131_, 0, v_f_129_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = l_Lasm_JS_Function_ofSyncFn(v___f_131_, v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_149_; 
v_a_142_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_149_ == 0)
{
v___x_144_ = v___x_133_;
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_133_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_149_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___boxed(lean_object* v_f_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn(v_f_150_);
return v_res_152_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener(void){
_start:
{
lean_object* v___f_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; 
v___f_154_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_155_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.ErrorListener", 47, 47);
v___x_156_ = 0;
v___x_157_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_157_, 0, v___f_154_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*2, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(lean_object* v_f_158_){
_start:
{
lean_object* v___f_160_; lean_object* v___f_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___f_160_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_161_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_161_, 0, v_f_158_);
lean_closure_set(v___f_161_, 1, v___f_160_);
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = l_Lasm_JS_Function_ofFn(v___f_161_, v___x_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_163_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_163_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_163_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_163_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn___boxed(lean_object* v_f_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofFn(v_f_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(lean_object* v_f_183_){
_start:
{
lean_object* v___f_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___f_185_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_185_, 0, v_f_183_);
v___x_186_ = lean_unsigned_to_nat(0u);
v___x_187_ = l_Lasm_JS_Function_ofSyncFn(v___f_185_, v___x_186_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_187_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_187_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn___boxed(lean_object* v_f_204_, lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lasm_JS_Node_InterfaceConstructor_ErrorListener_ofSyncFn(v_f_204_);
return v_res_206_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener(void){
_start:
{
lean_object* v___f_208_; lean_object* v___x_209_; uint8_t v___x_210_; lean_object* v___x_211_; 
v___f_208_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_209_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.LineListener", 46, 46);
v___x_210_ = 0;
v___x_211_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_211_, 0, v___f_208_);
lean_ctor_set(v___x_211_, 1, v___x_209_);
lean_ctor_set_uint8(v___x_211_, sizeof(void*)*2, v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(lean_object* v_f_212_){
_start:
{
lean_object* v___f_214_; lean_object* v___f_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___f_214_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_215_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_215_, 0, v_f_212_);
lean_closure_set(v___f_215_, 1, v___f_214_);
v___x_216_ = lean_unsigned_to_nat(0u);
v___x_217_ = l_Lasm_JS_Function_ofFn(v___f_215_, v___x_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_225_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_225_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_225_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_225_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_a_218_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
}
else
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
v_a_226_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_217_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_217_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v___x_231_; 
if (v_isShared_229_ == 0)
{
v___x_231_ = v___x_228_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_a_226_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn___boxed(lean_object* v_f_234_, lean_object* v_a_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofFn(v_f_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(lean_object* v_f_237_){
_start:
{
lean_object* v___f_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___f_239_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_239_, 0, v_f_237_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = l_Lasm_JS_Function_ofSyncFn(v___f_239_, v___x_240_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_241_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
v_a_250_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_241_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_241_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn___boxed(lean_object* v_f_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lasm_JS_Node_InterfaceConstructor_LineListener_ofSyncFn(v_f_258_);
return v_res_260_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener(void){
_start:
{
lean_object* v___f_262_; lean_object* v___x_263_; uint8_t v___x_264_; lean_object* v___x_265_; 
v___f_262_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_263_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.HistoryListener", 49, 49);
v___x_264_ = 0;
v___x_265_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_265_, 0, v___f_262_);
lean_ctor_set(v___x_265_, 1, v___x_263_);
lean_ctor_set_uint8(v___x_265_, sizeof(void*)*2, v___x_264_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(lean_object* v_f_266_){
_start:
{
lean_object* v___f_268_; lean_object* v___f_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___f_268_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_269_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_269_, 0, v_f_266_);
lean_closure_set(v___f_269_, 1, v___f_268_);
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = l_Lasm_JS_Function_ofFn(v___f_269_, v___x_270_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_271_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
v_a_280_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_271_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_271_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn___boxed(lean_object* v_f_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofFn(v_f_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(lean_object* v_f_291_){
_start:
{
lean_object* v___f_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___f_293_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_293_, 0, v_f_291_);
v___x_294_ = lean_unsigned_to_nat(0u);
v___x_295_ = l_Lasm_JS_Function_ofSyncFn(v___f_293_, v___x_294_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_295_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_295_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
else
{
lean_object* v_a_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_a_304_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_295_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_a_304_);
lean_dec(v___x_295_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_a_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn___boxed(lean_object* v_f_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lasm_JS_Node_InterfaceConstructor_HistoryListener_ofSyncFn(v_f_312_);
return v_res_314_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener(void){
_start:
{
lean_object* v___f_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; 
v___f_316_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_317_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.PauseListener", 47, 47);
v___x_318_ = 0;
v___x_319_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_319_, 0, v___f_316_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
lean_ctor_set_uint8(v___x_319_, sizeof(void*)*2, v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(lean_object* v_f_320_){
_start:
{
lean_object* v___f_322_; lean_object* v___f_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___f_322_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_323_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_323_, 0, v_f_320_);
lean_closure_set(v___f_323_, 1, v___f_322_);
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = l_Lasm_JS_Function_ofFn(v___f_323_, v___x_324_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_325_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_325_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
v_a_334_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_325_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_325_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn___boxed(lean_object* v_f_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofFn(v_f_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(lean_object* v_f_345_){
_start:
{
lean_object* v___f_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___f_347_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_347_, 0, v_f_345_);
v___x_348_ = lean_unsigned_to_nat(0u);
v___x_349_ = l_Lasm_JS_Function_ofSyncFn(v___f_347_, v___x_348_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
v_a_350_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_349_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_365_; 
v_a_358_ = lean_ctor_get(v___x_349_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_365_ == 0)
{
v___x_360_ = v___x_349_;
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_349_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_365_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn___boxed(lean_object* v_f_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lasm_JS_Node_InterfaceConstructor_PauseListener_ofSyncFn(v_f_366_);
return v_res_368_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener(void){
_start:
{
lean_object* v___f_370_; lean_object* v___x_371_; uint8_t v___x_372_; lean_object* v___x_373_; 
v___f_370_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_371_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.ResumeListener", 48, 48);
v___x_372_ = 0;
v___x_373_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_373_, 0, v___f_370_);
lean_ctor_set(v___x_373_, 1, v___x_371_);
lean_ctor_set_uint8(v___x_373_, sizeof(void*)*2, v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(lean_object* v_f_374_){
_start:
{
lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___f_376_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_377_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_377_, 0, v_f_374_);
lean_closure_set(v___f_377_, 1, v___f_376_);
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = l_Lasm_JS_Function_ofFn(v___f_377_, v___x_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
v_a_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_379_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_379_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn___boxed(lean_object* v_f_396_, lean_object* v_a_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofFn(v_f_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(lean_object* v_f_399_){
_start:
{
lean_object* v___f_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___f_401_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_401_, 0, v_f_399_);
v___x_402_ = lean_unsigned_to_nat(0u);
v___x_403_ = l_Lasm_JS_Function_ofSyncFn(v___f_401_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
v_a_412_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_403_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_403_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn___boxed(lean_object* v_f_420_, lean_object* v_a_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lasm_JS_Node_InterfaceConstructor_ResumeListener_ofSyncFn(v_f_420_);
return v_res_422_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener(void){
_start:
{
lean_object* v___f_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; 
v___f_424_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_425_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.SIGCONTListener", 49, 49);
v___x_426_ = 0;
v___x_427_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_427_, 0, v___f_424_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*2, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(lean_object* v_f_428_){
_start:
{
lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___f_430_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_431_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_431_, 0, v_f_428_);
lean_closure_set(v___f_431_, 1, v___f_430_);
v___x_432_ = lean_unsigned_to_nat(0u);
v___x_433_ = l_Lasm_JS_Function_ofFn(v___f_431_, v___x_432_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
v_a_442_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_433_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_433_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn___boxed(lean_object* v_f_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofFn(v_f_450_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(lean_object* v_f_453_){
_start:
{
lean_object* v___f_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___f_455_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_455_, 0, v_f_453_);
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = l_Lasm_JS_Function_ofSyncFn(v___f_455_, v___x_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_457_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_457_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v_a_466_ = lean_ctor_get(v___x_457_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_457_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_457_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_457_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn___boxed(lean_object* v_f_474_, lean_object* v_a_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lasm_JS_Node_InterfaceConstructor_SIGCONTListener_ofSyncFn(v_f_474_);
return v_res_476_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener(void){
_start:
{
lean_object* v___f_478_; lean_object* v___x_479_; uint8_t v___x_480_; lean_object* v___x_481_; 
v___f_478_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_479_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.SIGINTListener", 48, 48);
v___x_480_ = 0;
v___x_481_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_481_, 0, v___f_478_);
lean_ctor_set(v___x_481_, 1, v___x_479_);
lean_ctor_set_uint8(v___x_481_, sizeof(void*)*2, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(lean_object* v_f_482_){
_start:
{
lean_object* v___f_484_; lean_object* v___f_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___f_484_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_485_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_485_, 0, v_f_482_);
lean_closure_set(v___f_485_, 1, v___f_484_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l_Lasm_JS_Function_ofFn(v___f_485_, v___x_486_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_487_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_487_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn___boxed(lean_object* v_f_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofFn(v_f_504_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(lean_object* v_f_507_){
_start:
{
lean_object* v___f_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___f_509_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_509_, 0, v_f_507_);
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = l_Lasm_JS_Function_ofSyncFn(v___f_509_, v___x_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
v_a_520_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_511_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_511_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn___boxed(lean_object* v_f_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lasm_JS_Node_InterfaceConstructor_SIGINTListener_ofSyncFn(v_f_528_);
return v_res_530_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener(void){
_start:
{
lean_object* v___f_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; 
v___f_532_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSInterfaceConstructor___lam__0___boxed), 1, 0);
v___x_533_ = lean_mk_string_unchecked("Lasm.JS.Node.InterfaceConstructor.SIGTSTPListener", 49, 49);
v___x_534_ = 0;
v___x_535_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_535_, 0, v___f_532_);
lean_ctor_set(v___x_535_, 1, v___x_533_);
lean_ctor_set_uint8(v___x_535_, sizeof(void*)*2, v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(lean_object* v_f_536_){
_start:
{
lean_object* v___f_538_; lean_object* v___f_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___f_538_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__0___boxed), 2, 0);
v___f_539_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_539_, 0, v_f_536_);
lean_closure_set(v___f_539_, 1, v___f_538_);
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = l_Lasm_JS_Function_ofFn(v___f_539_, v___x_540_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_a_550_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_541_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_541_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn___boxed(lean_object* v_f_558_, lean_object* v_a_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofFn(v_f_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(lean_object* v_f_561_){
_start:
{
lean_object* v___f_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___f_563_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_InterfaceConstructor_CloseListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_563_, 0, v_f_561_);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = l_Lasm_JS_Function_ofSyncFn(v___f_563_, v___x_564_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
else
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_581_; 
v_a_574_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_581_ == 0)
{
v___x_576_ = v___x_565_;
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v___x_565_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_581_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn___boxed(lean_object* v_f_582_, lean_object* v_a_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lasm_JS_Node_InterfaceConstructor_SIGTSTPListener_ofSyncFn(v_f_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0(lean_object* v___f_585_, lean_object* v___f_586_, lean_object* v_d_587_){
_start:
{
lean_object* v_ctrl_588_; lean_object* v_meta_589_; lean_object* v_shift_590_; lean_object* v_name_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v_ctrl_588_ = lean_ctor_get(v_d_587_, 0);
lean_inc(v_ctrl_588_);
v_meta_589_ = lean_ctor_get(v_d_587_, 1);
lean_inc(v_meta_589_);
v_shift_590_ = lean_ctor_get(v_d_587_, 2);
lean_inc(v_shift_590_);
v_name_591_ = lean_ctor_get(v_d_587_, 3);
lean_inc(v_name_591_);
lean_dec_ref(v_d_587_);
v___x_592_ = lean_mk_string_unchecked("ctrl", 4, 4);
lean_inc_ref_n(v___f_585_, 2);
v___x_593_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_585_, v_ctrl_588_);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v___x_592_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lean_mk_string_unchecked("meta", 4, 4);
v___x_596_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_585_, v_meta_589_);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = lean_mk_string_unchecked("shift", 5, 5);
v___x_599_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_585_, v_shift_590_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_mk_string_unchecked("name", 4, 4);
v___x_602_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_586_, v_name_591_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_601_);
lean_ctor_set(v___x_603_, 1, v___x_602_);
v___x_604_ = lean_unsigned_to_nat(4u);
v___x_605_ = lean_mk_empty_array_with_capacity(v___x_604_);
v___x_606_ = lean_array_push(v___x_605_, v___x_594_);
v___x_607_ = lean_array_push(v___x_606_, v___x_597_);
v___x_608_ = lean_array_push(v___x_607_, v___x_600_);
v___x_609_ = lean_array_push(v___x_608_, v___x_603_);
v___x_610_ = l_Lasm_JS_Web_Internal_fields(v___x_609_);
lean_dec_ref(v___x_609_);
return v___x_610_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey(void){
_start:
{
lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; 
v___f_611_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_612_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_613_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey___lam__0), 3, 2);
lean_closure_set(v___f_613_, 0, v___f_611_);
lean_closure_set(v___f_613_, 1, v___f_612_);
return v___f_613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0(lean_object* v___f_614_, lean_object* v_d_615_){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_616_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_617_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_614_, v_d_615_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = lean_mk_empty_array_with_capacity(v___x_619_);
v___x_621_ = lean_array_push(v___x_620_, v___x_618_);
v___x_622_ = l_Lasm_JS_Web_Internal_fields(v___x_621_);
lean_dec_ref(v___x_621_);
return v___x_622_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions(void){
_start:
{
lean_object* v___f_623_; lean_object* v___f_624_; 
v___f_623_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_624_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0), 2, 1);
lean_closure_set(v___f_624_, 0, v___f_623_);
return v___f_624_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions(void){
_start:
{
lean_object* v___f_625_; lean_object* v___f_626_; 
v___f_625_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_626_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions___lam__0), 2, 1);
lean_closure_set(v___f_626_, 0, v___f_625_);
return v___f_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0(lean_object* v___f_627_, lean_object* v___f_628_, lean_object* v___f_629_, lean_object* v___f_630_, lean_object* v___x_631_, lean_object* v___f_632_, lean_object* v___f_633_, lean_object* v___f_634_, lean_object* v___f_635_, lean_object* v_d_636_){
_start:
{
lean_object* v_input_637_; lean_object* v_output_638_; lean_object* v_completer_639_; lean_object* v_terminal_640_; lean_object* v_history_641_; lean_object* v_historySize_642_; lean_object* v_removeHistoryDuplicates_643_; lean_object* v_prompt_644_; lean_object* v_crlfDelay_645_; lean_object* v_escapeCodeTimeout_646_; lean_object* v_tabSize_647_; lean_object* v_signal_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v_input_637_ = lean_ctor_get(v_d_636_, 0);
lean_inc(v_input_637_);
v_output_638_ = lean_ctor_get(v_d_636_, 1);
lean_inc(v_output_638_);
v_completer_639_ = lean_ctor_get(v_d_636_, 2);
lean_inc(v_completer_639_);
v_terminal_640_ = lean_ctor_get(v_d_636_, 3);
lean_inc(v_terminal_640_);
v_history_641_ = lean_ctor_get(v_d_636_, 4);
lean_inc(v_history_641_);
v_historySize_642_ = lean_ctor_get(v_d_636_, 5);
lean_inc(v_historySize_642_);
v_removeHistoryDuplicates_643_ = lean_ctor_get(v_d_636_, 6);
lean_inc(v_removeHistoryDuplicates_643_);
v_prompt_644_ = lean_ctor_get(v_d_636_, 7);
lean_inc(v_prompt_644_);
v_crlfDelay_645_ = lean_ctor_get(v_d_636_, 8);
lean_inc(v_crlfDelay_645_);
v_escapeCodeTimeout_646_ = lean_ctor_get(v_d_636_, 9);
lean_inc(v_escapeCodeTimeout_646_);
v_tabSize_647_ = lean_ctor_get(v_d_636_, 10);
lean_inc(v_tabSize_647_);
v_signal_648_ = lean_ctor_get(v_d_636_, 11);
lean_inc(v_signal_648_);
lean_dec_ref(v_d_636_);
v___x_649_ = lean_mk_string_unchecked("input", 5, 5);
v___x_650_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_627_, v_input_637_);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_649_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = lean_mk_string_unchecked("output", 6, 6);
v___x_653_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_628_, v_output_638_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_652_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_mk_string_unchecked("completer", 9, 9);
v___x_656_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_629_, v_completer_639_);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_mk_string_unchecked("terminal", 8, 8);
lean_inc_ref(v___f_630_);
v___x_659_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_630_, v_terminal_640_);
v___x_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = lean_mk_string_unchecked("history", 7, 7);
v___x_662_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_631_, v_history_641_);
v___x_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = lean_mk_string_unchecked("historySize", 11, 11);
lean_inc_ref_n(v___f_632_, 2);
v___x_665_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_632_, v_historySize_642_);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_mk_string_unchecked("removeHistoryDuplicates", 23, 23);
v___x_668_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_630_, v_removeHistoryDuplicates_643_);
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = lean_mk_string_unchecked("prompt", 6, 6);
v___x_671_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_633_, v_prompt_644_);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_mk_string_unchecked("crlfDelay", 9, 9);
v___x_674_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_632_, v_crlfDelay_645_);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_mk_string_unchecked("escapeCodeTimeout", 17, 17);
v___x_677_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_632_, v_escapeCodeTimeout_646_);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_mk_string_unchecked("tabSize", 7, 7);
v___x_680_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_634_, v_tabSize_647_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_683_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_635_, v_signal_648_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v___x_685_ = lean_unsigned_to_nat(12u);
v___x_686_ = lean_mk_empty_array_with_capacity(v___x_685_);
v___x_687_ = lean_array_push(v___x_686_, v___x_651_);
v___x_688_ = lean_array_push(v___x_687_, v___x_654_);
v___x_689_ = lean_array_push(v___x_688_, v___x_657_);
v___x_690_ = lean_array_push(v___x_689_, v___x_660_);
v___x_691_ = lean_array_push(v___x_690_, v___x_663_);
v___x_692_ = lean_array_push(v___x_691_, v___x_666_);
v___x_693_ = lean_array_push(v___x_692_, v___x_669_);
v___x_694_ = lean_array_push(v___x_693_, v___x_672_);
v___x_695_ = lean_array_push(v___x_694_, v___x_675_);
v___x_696_ = lean_array_push(v___x_695_, v___x_678_);
v___x_697_ = lean_array_push(v___x_696_, v___x_681_);
v___x_698_ = lean_array_push(v___x_697_, v___x_684_);
v___x_699_ = l_Lasm_JS_Web_Internal_fields(v___x_698_);
lean_dec_ref(v___x_698_);
return v___x_699_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions(void){
_start:
{
lean_object* v___f_700_; lean_object* v___f_701_; lean_object* v___f_702_; lean_object* v___f_703_; lean_object* v___x_704_; lean_object* v___f_705_; lean_object* v___f_706_; lean_object* v___f_707_; lean_object* v___f_708_; 
v___f_700_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamWritable___lam__0), 1, 0);
v___f_701_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_702_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_703_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
lean_inc_ref(v___f_703_);
v___x_704_ = l_Lasm_JS_instToJSArray___redArg(v___f_703_);
v___f_705_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_706_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_707_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
lean_inc_ref(v___f_700_);
v___f_708_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions___lam__0), 10, 9);
lean_closure_set(v___f_708_, 0, v___f_700_);
lean_closure_set(v___f_708_, 1, v___f_700_);
lean_closure_set(v___f_708_, 2, v___f_701_);
lean_closure_set(v___f_708_, 3, v___f_702_);
lean_closure_set(v___f_708_, 4, v___x_704_);
lean_closure_set(v___f_708_, 5, v___f_705_);
lean_closure_set(v___f_708_, 6, v___f_703_);
lean_closure_set(v___f_708_, 7, v___f_706_);
lean_closure_set(v___f_708_, 8, v___f_707_);
return v___f_708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0(lean_object* v___f_709_, lean_object* v___f_710_, lean_object* v___f_711_, lean_object* v___f_712_, lean_object* v___x_713_, lean_object* v___f_714_, lean_object* v___f_715_, lean_object* v___f_716_, lean_object* v___f_717_, lean_object* v_d_718_){
_start:
{
lean_object* v_input_719_; lean_object* v_output_720_; lean_object* v_completer_721_; lean_object* v_terminal_722_; lean_object* v_history_723_; lean_object* v_historySize_724_; lean_object* v_removeHistoryDuplicates_725_; lean_object* v_prompt_726_; lean_object* v_crlfDelay_727_; lean_object* v_escapeCodeTimeout_728_; lean_object* v_tabSize_729_; lean_object* v_signal_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v_input_719_ = lean_ctor_get(v_d_718_, 0);
lean_inc(v_input_719_);
v_output_720_ = lean_ctor_get(v_d_718_, 1);
lean_inc(v_output_720_);
v_completer_721_ = lean_ctor_get(v_d_718_, 2);
lean_inc(v_completer_721_);
v_terminal_722_ = lean_ctor_get(v_d_718_, 3);
lean_inc(v_terminal_722_);
v_history_723_ = lean_ctor_get(v_d_718_, 4);
lean_inc(v_history_723_);
v_historySize_724_ = lean_ctor_get(v_d_718_, 5);
lean_inc(v_historySize_724_);
v_removeHistoryDuplicates_725_ = lean_ctor_get(v_d_718_, 6);
lean_inc(v_removeHistoryDuplicates_725_);
v_prompt_726_ = lean_ctor_get(v_d_718_, 7);
lean_inc(v_prompt_726_);
v_crlfDelay_727_ = lean_ctor_get(v_d_718_, 8);
lean_inc(v_crlfDelay_727_);
v_escapeCodeTimeout_728_ = lean_ctor_get(v_d_718_, 9);
lean_inc(v_escapeCodeTimeout_728_);
v_tabSize_729_ = lean_ctor_get(v_d_718_, 10);
lean_inc(v_tabSize_729_);
v_signal_730_ = lean_ctor_get(v_d_718_, 11);
lean_inc(v_signal_730_);
lean_dec_ref(v_d_718_);
v___x_731_ = lean_mk_string_unchecked("input", 5, 5);
v___x_732_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_709_, v_input_719_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v___x_731_);
lean_ctor_set(v___x_733_, 1, v___x_732_);
v___x_734_ = lean_mk_string_unchecked("output", 6, 6);
v___x_735_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_710_, v_output_720_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = lean_mk_string_unchecked("completer", 9, 9);
v___x_738_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_711_, v_completer_721_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_mk_string_unchecked("terminal", 8, 8);
lean_inc_ref(v___f_712_);
v___x_741_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_712_, v_terminal_722_);
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_740_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_mk_string_unchecked("history", 7, 7);
v___x_744_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_713_, v_history_723_);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_mk_string_unchecked("historySize", 11, 11);
lean_inc_ref_n(v___f_714_, 2);
v___x_747_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_714_, v_historySize_724_);
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = lean_mk_string_unchecked("removeHistoryDuplicates", 23, 23);
v___x_750_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_712_, v_removeHistoryDuplicates_725_);
v___x_751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
v___x_752_ = lean_mk_string_unchecked("prompt", 6, 6);
v___x_753_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_715_, v_prompt_726_);
v___x_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_752_);
lean_ctor_set(v___x_754_, 1, v___x_753_);
v___x_755_ = lean_mk_string_unchecked("crlfDelay", 9, 9);
v___x_756_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_714_, v_crlfDelay_727_);
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
v___x_758_ = lean_mk_string_unchecked("escapeCodeTimeout", 17, 17);
v___x_759_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_714_, v_escapeCodeTimeout_728_);
v___x_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
v___x_761_ = lean_mk_string_unchecked("tabSize", 7, 7);
v___x_762_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_716_, v_tabSize_729_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v___x_761_);
lean_ctor_set(v___x_763_, 1, v___x_762_);
v___x_764_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_765_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_717_, v_signal_730_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_unsigned_to_nat(12u);
v___x_768_ = lean_mk_empty_array_with_capacity(v___x_767_);
v___x_769_ = lean_array_push(v___x_768_, v___x_733_);
v___x_770_ = lean_array_push(v___x_769_, v___x_736_);
v___x_771_ = lean_array_push(v___x_770_, v___x_739_);
v___x_772_ = lean_array_push(v___x_771_, v___x_742_);
v___x_773_ = lean_array_push(v___x_772_, v___x_745_);
v___x_774_ = lean_array_push(v___x_773_, v___x_748_);
v___x_775_ = lean_array_push(v___x_774_, v___x_751_);
v___x_776_ = lean_array_push(v___x_775_, v___x_754_);
v___x_777_ = lean_array_push(v___x_776_, v___x_757_);
v___x_778_ = lean_array_push(v___x_777_, v___x_760_);
v___x_779_ = lean_array_push(v___x_778_, v___x_763_);
v___x_780_ = lean_array_push(v___x_779_, v___x_766_);
v___x_781_ = l_Lasm_JS_Web_Internal_fields(v___x_780_);
lean_dec_ref(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions(void){
_start:
{
lean_object* v___f_782_; lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___x_786_; lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___f_789_; lean_object* v___f_790_; 
v___f_782_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSStreamWritable___lam__0), 1, 0);
v___f_783_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSJSFunction___lam__0), 1, 0);
v___f_784_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_785_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
lean_inc_ref(v___f_785_);
v___x_786_ = l_Lasm_JS_instToJSArray___redArg(v___f_785_);
v___f_787_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSFloat___lam__0___boxed), 1, 0);
v___f_788_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_789_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
lean_inc_ref(v___f_782_);
v___f_790_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions___lam__0), 10, 9);
lean_closure_set(v___f_790_, 0, v___f_782_);
lean_closure_set(v___f_790_, 1, v___f_782_);
lean_closure_set(v___f_790_, 2, v___f_783_);
lean_closure_set(v___f_790_, 3, v___f_784_);
lean_closure_set(v___f_790_, 4, v___x_786_);
lean_closure_set(v___f_790_, 5, v___f_787_);
lean_closure_set(v___f_790_, 6, v___f_785_);
lean_closure_set(v___f_790_, 7, v___f_788_);
lean_closure_set(v___f_790_, 8, v___f_789_);
return v___f_790_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Stream(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Readline(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Stream(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSInterfaceConstructor = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructor();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructor);
l_Lasm_JS_Node_instFromJSReadlinePromisesInterface = _init_l_Lasm_JS_Node_instFromJSReadlinePromisesInterface();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSReadlinePromisesInterface);
l_Lasm_JS_Node_instFromJSReadlinePromisesReadline = _init_l_Lasm_JS_Node_instFromJSReadlinePromisesReadline();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSReadlinePromisesReadline);
l_Lasm_JS_Node_instFromJSReadlineInterface = _init_l_Lasm_JS_Node_instFromJSReadlineInterface();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSReadlineInterface);
l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorCloseListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorErrorListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorLineListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorHistoryListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorPauseListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorResumeListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGCONTListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGINTListener);
l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener = _init_l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSInterfaceConstructorSIGTSTPListener);
l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey = _init_l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey();
lean_mark_persistent(l_Lasm_JS_Node_instToJSInterfaceConstructorWriteKey);
l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions = _init_l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlinePromisesInterfaceQuestionOptions);
l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions = _init_l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlineInterfaceQuestionOptions);
l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions = _init_l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlineCreateInterfaceOptions);
l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions = _init_l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSReadlinePromisesCreateInterfaceOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
