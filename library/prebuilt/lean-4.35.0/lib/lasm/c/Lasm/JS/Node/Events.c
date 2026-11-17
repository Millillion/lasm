// Lean compiler output
// Module: Lasm.JS.Node.Events
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Webidl public import Lasm.JS.Node.AsyncHooks
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSNodeEventTarget_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget = (const lean_object*)&l_Lasm_JS_Node_instToJSNodeEventTarget_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitter_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitter;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventsEventEmitterAsyncResource_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventsEventEmitterAsyncResource = (const lean_object*)&l_Lasm_JS_Node_instToJSEventsEventEmitterAsyncResource_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter = (const lean_object*)&l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol;
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterNewListenerListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterNewListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterNewListenerListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterRemoveListenerListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterRemoveListenerListener = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterRemoveListenerListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget = (const lean_object*)&l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTarget___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSNodeEventTarget(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Node.NodeEventTarget", 28, 28);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSEventEmitter(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Node.EventEmitter", 25, 25);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource(void){
_start:
{
lean_object* v___f_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed), 1, 0);
v___x_23_ = lean_mk_string_unchecked("Lasm.JS.Node.events.EventEmitterAsyncResource", 45, 45);
v___x_24_ = 0;
v___x_25_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_25_, 0, v___f_22_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
lean_ctor_set_uint8(v___x_25_, sizeof(void*)*2, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(lean_object* v_self_26_){
_start:
{
lean_inc(v_self_26_);
return v_self_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0___boxed(lean_object* v_self_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lasm_JS_Node_instCoeEventsEventEmitterAsyncResourceEventEmitter___lam__0(v_self_27_);
lean_dec(v_self_27_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0(lean_object* v___f_30_, lean_object* v_d_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_32_ = lean_mk_string_unchecked("capture", 7, 7);
v___x_33_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_30_, v_d_31_);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_32_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = lean_unsigned_to_nat(1u);
v___x_36_ = lean_mk_empty_array_with_capacity(v___x_35_);
v___x_37_ = lean_array_push(v___x_36_, v___x_34_);
v___x_38_ = l_Lasm_JS_Web_Internal_fields(v___x_37_);
lean_dec_ref(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions(void){
_start:
{
lean_object* v___f_39_; lean_object* v___f_40_; 
v___f_39_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_40_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0), 2, 1);
lean_closure_set(v___f_40_, 0, v___f_39_);
return v___f_40_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions(void){
_start:
{
lean_object* v___f_41_; lean_object* v___f_42_; 
v___f_41_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_42_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions___lam__0), 2, 1);
lean_closure_set(v___f_42_, 0, v___f_41_);
return v___f_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(lean_object* v_x_43_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
lean_object* v___x_44_; 
v___x_44_ = lean_unsigned_to_nat(0u);
return v___x_44_;
}
else
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(1u);
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx___boxed(lean_object* v_x_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorIdx(v_x_46_);
lean_dec_ref(v_x_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(lean_object* v_t_48_, lean_object* v_k_49_){
_start:
{
if (lean_obj_tag(v_t_48_) == 0)
{
lean_object* v_value_50_; lean_object* v___x_51_; 
v_value_50_ = lean_ctor_get(v_t_48_, 0);
lean_inc_ref(v_value_50_);
lean_dec_ref_known(v_t_48_, 1);
v___x_51_ = lean_apply_1(v_k_49_, v_value_50_);
return v___x_51_;
}
else
{
lean_object* v_value_52_; lean_object* v___x_53_; 
v_value_52_ = lean_ctor_get(v_t_48_, 0);
lean_inc(v_value_52_);
lean_dec_ref_known(v_t_48_, 1);
v___x_53_ = lean_apply_1(v_k_49_, v_value_52_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(lean_object* v_motive_54_, lean_object* v_ctorIdx_55_, lean_object* v_t_56_, lean_object* v_h_57_, lean_object* v_k_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_56_, v_k_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___boxed(lean_object* v_motive_60_, lean_object* v_ctorIdx_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_k_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim(v_motive_60_, v_ctorIdx_61_, v_t_62_, v_h_63_, v_k_64_);
lean_dec(v_ctorIdx_61_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim___redArg(lean_object* v_t_66_, lean_object* v_domString_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_66_, v_domString_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_domString_elim(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_domString_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_70_, v_domString_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim___redArg(lean_object* v_t_74_, lean_object* v_symbol_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_74_, v_symbol_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrSymbol_symbol_elim(lean_object* v_motive_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_symbol_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = l_Lasm_JS_Node_DOMStringOrSymbol_ctorElim___redArg(v_t_78_, v_symbol_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrSymbol___lam__0(lean_object* v_x_82_){
_start:
{
if (lean_obj_tag(v_x_82_) == 0)
{
lean_object* v_value_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_value_83_ = lean_ctor_get(v_x_82_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_x_82_);
if (v_isSharedCheck_90_ == 0)
{
v___x_85_ = v_x_82_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_value_83_);
lean_dec(v_x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set_tag(v___x_85_, 4);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_value_83_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_value_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v_value_91_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_value_91_);
lean_dec_ref_known(v_x_82_, 1);
v___x_92_ = lean_mk_string_unchecked("", 0, 0);
v___x_93_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_93_, 0, v_value_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrSymbol___lam__0(lean_object* v_value_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v_value_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0(lean_object* v_x_98_){
_start:
{
switch(lean_obj_tag(v_x_98_))
{
case 4:
{
lean_object* v_s_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_107_; 
v_s_99_ = lean_ctor_get(v_x_98_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v_x_98_);
if (v_isSharedCheck_107_ == 0)
{
v___x_101_ = v_x_98_;
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_s_99_);
lean_dec(v_x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_107_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set_tag(v___x_101_, 0);
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_s_99_);
v___x_104_ = v_reuseFailAlloc_106_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
}
case 9:
{
lean_object* v_value_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_value_108_ = lean_ctor_get(v_x_98_, 0);
lean_inc(v_value_108_);
lean_dec_ref_known(v_x_98_, 2);
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v_value_108_);
v___x_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
default: 
{
lean_object* v___x_111_; lean_object* v___x_112_; 
lean_dec(v_x_98_);
v___x_111_ = lean_mk_string_unchecked("", 0, 0);
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSDOMStringOrSymbol(void){
_start:
{
lean_object* v___f_113_; lean_object* v___x_114_; uint8_t v___x_115_; lean_object* v___x_116_; 
v___f_113_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol___lam__0), 1, 0);
v___x_114_ = lean_mk_string_unchecked("Lasm.JS.Node.DOMStringOrSymbol", 30, 30);
v___x_115_ = 0;
v___x_116_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_116_, 0, v___f_113_);
lean_ctor_set(v___x_116_, 1, v___x_114_);
lean_ctor_set_uint8(v___x_116_, sizeof(void*)*2, v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener(void){
_start:
{
lean_object* v___f_118_; lean_object* v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; 
v___f_118_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed), 1, 0);
v___x_119_ = lean_mk_string_unchecked("Lasm.JS.Node.EventEmitter.NewListenerListener", 45, 45);
v___x_120_ = 0;
v___x_121_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_121_, 0, v___f_118_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*2, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(lean_object* v_x_122_){
_start:
{
if (lean_obj_tag(v_x_122_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_132_; 
v_a_124_ = lean_ctor_get(v_x_122_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_132_ == 0)
{
v___x_126_ = v_x_122_;
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_a_124_);
lean_dec(v_x_122_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_132_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_129_; 
if (v_isShared_127_ == 0)
{
v___x_129_ = v___x_126_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_124_);
v___x_129_ = v_reuseFailAlloc_131_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
}
else
{
lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_141_; 
v_isSharedCheck_141_ = !lean_is_exclusive(v_x_122_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; 
v_unused_142_ = lean_ctor_get(v_x_122_, 0);
lean_dec(v_unused_142_);
v___x_134_ = v_x_122_;
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
else
{
lean_dec(v_x_122_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_141_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_box(0);
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_136_);
v___x_138_ = v___x_134_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_140_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_139_; 
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed(lean_object* v_x_143_, lean_object* v___y_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0(v_x_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(lean_object* v_f_146_, lean_object* v_a_147_, lean_object* v___f_148_, lean_object* v_x_149_){
_start:
{
if (lean_obj_tag(v_x_149_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_159_; 
lean_dec_ref(v___f_148_);
lean_dec_ref(v_a_147_);
lean_dec_ref(v_f_146_);
v_a_151_ = lean_ctor_get(v_x_149_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_149_);
if (v_isSharedCheck_159_ == 0)
{
v___x_153_ = v_x_149_;
v_isShared_154_ = v_isSharedCheck_159_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v_x_149_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_159_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_158_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_a_160_ = lean_ctor_get(v_x_149_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v_x_149_, 1);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = 0;
v___x_163_ = lean_apply_3(v_f_146_, v_a_147_, v_a_160_, lean_box(0));
v___x_164_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_161_, v___x_162_, v___x_163_, v___f_148_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed(lean_object* v_f_165_, lean_object* v_a_166_, lean_object* v___f_167_, lean_object* v_x_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1(v_f_165_, v_a_166_, v___f_167_, v_x_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0(lean_object* v_context_171_, lean_object* v_d_172_){
_start:
{
lean_object* v___y_175_; lean_object* v___y_176_; 
if (lean_obj_tag(v_d_172_) == 9)
{
lean_object* v_value_180_; lean_object* v___x_181_; 
v_value_180_ = lean_ctor_get(v_d_172_, 0);
lean_inc(v_value_180_);
lean_dec_ref_known(v_d_172_, 2);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v_value_180_);
return v___x_181_;
}
else
{
lean_object* v___x_182_; lean_object* v_received_184_; 
v___x_182_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_172_) == 9)
{
lean_object* v_value_200_; lean_object* v_description_201_; uint8_t v___x_202_; 
v_value_200_ = lean_ctor_get(v_d_172_, 0);
v_description_201_ = lean_ctor_get(v_d_172_, 1);
v___x_202_ = lean_string_dec_eq(v_description_201_, v___x_182_);
if (v___x_202_ == 0)
{
goto v___jp_198_;
}
else
{
uint32_t v___x_203_; uint64_t v___x_204_; lean_object* v___x_205_; uint32_t v___x_206_; lean_object* v___x_207_; 
lean_inc_n(v_value_200_, 2);
lean_dec_ref_known(v_d_172_, 2);
v___x_203_ = 206;
v___x_204_ = 0ULL;
lean_inc_ref(v___x_182_);
v___x_205_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_205_, 0, v_value_200_);
lean_ctor_set(v___x_205_, 1, v___x_182_);
v___x_206_ = lasm_js_value_handle(v_value_200_);
lean_dec(v_value_200_);
v___x_207_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_203_, v___x_204_, v___x_205_, v___x_206_);
lean_dec_ref_known(v___x_205_, 2);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; uint8_t v___x_209_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
lean_inc(v_a_208_);
lean_dec_ref_known(v___x_207_, 1);
v___x_209_ = lean_string_validate_utf8(v_a_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
lean_dec(v_a_208_);
v___x_210_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_211_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_212_ = lean_unsigned_to_nat(193u);
v___x_213_ = lean_unsigned_to_nat(46u);
v___x_214_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_215_ = l_mkPanicMessageWithDecl(v___x_210_, v___x_211_, v___x_212_, v___x_213_, v___x_214_);
lean_dec_ref(v___x_214_);
lean_dec_ref(v___x_211_);
lean_dec_ref(v___x_210_);
v___x_216_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_215_);
v_received_184_ = v___x_216_;
goto v___jp_183_;
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_string_from_utf8_unchecked(v_a_208_);
v_received_184_ = v___x_217_;
goto v___jp_183_;
}
}
else
{
lean_object* v___x_218_; 
lean_dec_ref_known(v___x_207_, 1);
v___x_218_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_184_ = v___x_218_;
goto v___jp_183_;
}
}
}
else
{
goto v___jp_198_;
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_185_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_186_ = lean_string_append(v___x_185_, v_context_171_);
v___x_187_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
lean_dec_ref(v___x_187_);
v___x_189_ = lean_mk_string_unchecked("Lasm.JS.Web.JSFunction", 22, 22);
v___x_190_ = lean_string_append(v___x_188_, v___x_189_);
lean_dec_ref(v___x_189_);
v___x_191_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_string_append(v___x_192_, v_received_184_);
lean_dec_ref(v_received_184_);
v___x_194_ = lean_string_utf8_byte_size(v___x_182_);
v___x_195_ = lean_unsigned_to_nat(0u);
v___x_196_ = lean_nat_dec_eq(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_dec_ref(v___x_182_);
v___x_197_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_175_ = v___x_193_;
v___y_176_ = v___x_197_;
goto v___jp_174_;
}
else
{
v___y_175_ = v___x_193_;
v___y_176_ = v___x_182_;
goto v___jp_174_;
}
}
v___jp_198_:
{
lean_object* v___x_199_; 
v___x_199_ = l_Lasm_JS_Data_describe(v_d_172_);
v_received_184_ = v___x_199_;
goto v___jp_183_;
}
}
v___jp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_string_append(v___y_175_, v___y_176_);
v___x_178_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
v___x_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
return v___x_179_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_219_, lean_object* v_d_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0(v_context_219_, v_d_220_);
lean_dec_ref(v_context_219_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(lean_object* v_args_223_, lean_object* v_i_224_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_226_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_227_ = lean_unsigned_to_nat(1u);
v___x_228_ = lean_nat_add(v_i_224_, v___x_227_);
v___x_229_ = l_Nat_reprFast(v___x_228_);
v___x_230_ = lean_string_append(v___x_226_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = lean_array_get_size(v_args_223_);
v___x_232_ = lean_nat_dec_lt(v_i_224_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = lean_box(0);
v___x_234_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0(v___x_230_, v___x_233_);
lean_dec_ref(v___x_230_);
return v___x_234_;
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_array_fget_borrowed(v_args_223_, v_i_224_);
lean_inc(v___x_235_);
v___x_236_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0_spec__0(v___x_230_, v___x_235_);
lean_dec_ref(v___x_230_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0___boxed(lean_object* v_args_237_, lean_object* v_i_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_237_, v_i_238_);
lean_dec(v_i_238_);
lean_dec_ref(v_args_237_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(lean_object* v_f_241_, lean_object* v___f_242_, lean_object* v_args_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_254_; 
lean_dec_ref(v___f_242_);
lean_dec_ref(v_f_241_);
v_a_246_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_254_ == 0)
{
v___x_248_ = v_x_244_;
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v_x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_253_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_276_; 
v_a_255_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_276_ == 0)
{
v___x_257_ = v_x_244_;
v_isShared_258_ = v_isSharedCheck_276_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v_x_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_276_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___f_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v_val_264_; lean_object* v___x_267_; 
v___f_259_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_259_, 0, v_f_241_);
lean_closure_set(v___f_259_, 1, v_a_255_);
lean_closure_set(v___f_259_, 2, v___f_242_);
v___x_260_ = lean_unsigned_to_nat(1u);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = 0;
v___x_267_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_243_, v___x_260_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_267_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v_a_268_);
v___x_270_ = v___x_257_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_268_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
v_val_264_ = v___x_270_;
goto v___jp_263_;
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; 
v_a_272_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_267_, 1);
if (v_isShared_258_ == 0)
{
lean_ctor_set_tag(v___x_257_, 0);
lean_ctor_set(v___x_257_, 0, v_a_272_);
v___x_274_ = v___x_257_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
v_val_264_ = v___x_274_;
goto v___jp_263_;
}
}
v___jp_263_:
{
lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_265_, 0, v_val_264_);
v___x_266_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_261_, v___x_262_, v___x_265_, v___f_259_);
return v___x_266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed(lean_object* v_f_277_, lean_object* v___f_278_, lean_object* v_args_279_, lean_object* v_x_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2(v_f_277_, v___f_278_, v_args_279_, v_x_280_);
lean_dec_ref(v_args_279_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2(lean_object* v_context_283_, lean_object* v_d_284_){
_start:
{
lean_object* v___y_287_; lean_object* v___y_288_; 
switch(lean_obj_tag(v_d_284_))
{
case 4:
{
lean_object* v_s_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_300_; 
v_s_292_ = lean_ctor_get(v_d_284_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_d_284_);
if (v_isSharedCheck_300_ == 0)
{
v___x_294_ = v_d_284_;
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_s_292_);
lean_dec(v_d_284_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_300_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 0);
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_s_292_);
v___x_297_ = v_reuseFailAlloc_299_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
case 9:
{
lean_object* v_value_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_value_301_ = lean_ctor_get(v_d_284_, 0);
lean_inc(v_value_301_);
lean_dec_ref_known(v_d_284_, 2);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v_value_301_);
v___x_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
return v___x_303_;
}
default: 
{
lean_object* v___x_304_; lean_object* v_received_306_; 
v___x_304_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_284_) == 9)
{
lean_object* v_value_322_; lean_object* v_description_323_; uint8_t v___x_324_; 
v_value_322_ = lean_ctor_get(v_d_284_, 0);
v_description_323_ = lean_ctor_get(v_d_284_, 1);
v___x_324_ = lean_string_dec_eq(v_description_323_, v___x_304_);
if (v___x_324_ == 0)
{
goto v___jp_320_;
}
else
{
uint32_t v___x_325_; uint64_t v___x_326_; lean_object* v___x_327_; uint32_t v___x_328_; lean_object* v___x_329_; 
lean_inc_n(v_value_322_, 2);
lean_dec_ref_known(v_d_284_, 2);
v___x_325_ = 206;
v___x_326_ = 0ULL;
lean_inc_ref(v___x_304_);
v___x_327_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_327_, 0, v_value_322_);
lean_ctor_set(v___x_327_, 1, v___x_304_);
v___x_328_ = lasm_js_value_handle(v_value_322_);
lean_dec(v_value_322_);
v___x_329_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_325_, v___x_326_, v___x_327_, v___x_328_);
lean_dec_ref_known(v___x_327_, 2);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; uint8_t v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = lean_string_validate_utf8(v_a_330_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
lean_dec(v_a_330_);
v___x_332_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_333_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_334_ = lean_unsigned_to_nat(193u);
v___x_335_ = lean_unsigned_to_nat(46u);
v___x_336_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_337_ = l_mkPanicMessageWithDecl(v___x_332_, v___x_333_, v___x_334_, v___x_335_, v___x_336_);
lean_dec_ref(v___x_336_);
lean_dec_ref(v___x_333_);
lean_dec_ref(v___x_332_);
v___x_338_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_337_);
v_received_306_ = v___x_338_;
goto v___jp_305_;
}
else
{
lean_object* v___x_339_; 
v___x_339_ = lean_string_from_utf8_unchecked(v_a_330_);
v_received_306_ = v___x_339_;
goto v___jp_305_;
}
}
else
{
lean_object* v___x_340_; 
lean_dec_ref_known(v___x_329_, 1);
v___x_340_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_306_ = v___x_340_;
goto v___jp_305_;
}
}
}
else
{
goto v___jp_320_;
}
v___jp_305_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_307_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_308_ = lean_string_append(v___x_307_, v_context_283_);
v___x_309_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = lean_mk_string_unchecked("Lasm.JS.Node.DOMStringOrSymbol", 30, 30);
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = lean_string_append(v___x_314_, v_received_306_);
lean_dec_ref(v_received_306_);
v___x_316_ = lean_string_utf8_byte_size(v___x_304_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v___x_316_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; 
lean_dec_ref(v___x_304_);
v___x_319_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_287_ = v___x_315_;
v___y_288_ = v___x_319_;
goto v___jp_286_;
}
else
{
v___y_287_ = v___x_315_;
v___y_288_ = v___x_304_;
goto v___jp_286_;
}
}
v___jp_320_:
{
lean_object* v___x_321_; 
v___x_321_ = l_Lasm_JS_Data_describe(v_d_284_);
v_received_306_ = v___x_321_;
goto v___jp_305_;
}
}
}
v___jp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_string_append(v___y_287_, v___y_288_);
v___x_290_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2___boxed(lean_object* v_context_341_, lean_object* v_d_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2(v_context_341_, v_d_342_);
lean_dec_ref(v_context_341_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(lean_object* v_args_345_, lean_object* v_i_346_){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_348_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_add(v_i_346_, v___x_349_);
v___x_351_ = l_Nat_reprFast(v___x_350_);
v___x_352_ = lean_string_append(v___x_348_, v___x_351_);
lean_dec_ref(v___x_351_);
v___x_353_ = lean_array_get_size(v_args_345_);
v___x_354_ = lean_nat_dec_lt(v_i_346_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_box(0);
v___x_356_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2(v___x_352_, v___x_355_);
lean_dec_ref(v___x_352_);
return v___x_356_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_array_fget_borrowed(v_args_345_, v_i_346_);
lean_inc(v___x_357_);
v___x_358_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1_spec__2(v___x_352_, v___x_357_);
lean_dec_ref(v___x_352_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1___boxed(lean_object* v_args_359_, lean_object* v_i_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_359_, v_i_360_);
lean_dec(v_i_360_);
lean_dec_ref(v_args_359_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(lean_object* v_f_363_, lean_object* v___f_364_, lean_object* v_args_365_){
_start:
{
lean_object* v___f_367_; lean_object* v___x_368_; uint8_t v___x_369_; lean_object* v_val_371_; lean_object* v___x_374_; 
lean_inc_ref(v_args_365_);
v___f_367_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_367_, 0, v_f_363_);
lean_closure_set(v___f_367_, 1, v___f_364_);
lean_closure_set(v___f_367_, 2, v_args_365_);
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = 0;
v___x_374_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_365_, v___x_368_);
lean_dec_ref(v_args_365_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_374_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_374_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set_tag(v___x_377_, 1);
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
v_val_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
else
{
lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
v_a_383_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v___x_374_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_374_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 0);
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_a_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
v_val_371_ = v___x_388_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v_val_371_);
v___x_373_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_368_, v___x_369_, v___x_372_, v___f_367_);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed(lean_object* v_f_391_, lean_object* v___f_392_, lean_object* v_args_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3(v_f_391_, v___f_392_, v_args_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(lean_object* v_f_396_){
_start:
{
lean_object* v___f_398_; lean_object* v___f_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___f_398_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed), 2, 0);
v___f_399_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_399_, 0, v_f_396_);
lean_closure_set(v___f_399_, 1, v___f_398_);
v___x_400_ = lean_unsigned_to_nat(0u);
v___x_401_ = l_Lasm_JS_Function_ofFn(v___f_399_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
v_a_410_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_401_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_401_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___boxed(lean_object* v_f_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn(v_f_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(lean_object* v_f_421_, lean_object* v_args_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__1(v_args_422_, v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn_spec__0(v_args_422_, v___x_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = lean_apply_3(v_f_421_, v_a_426_, v_a_429_, lean_box(0));
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_438_; 
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_438_ == 0)
{
lean_object* v_unused_439_; 
v_unused_439_ = lean_ctor_get(v___x_430_, 0);
lean_dec(v_unused_439_);
v___x_432_ = v___x_430_;
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
else
{
lean_dec(v___x_430_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_438_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = lean_box(0);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_436_ = v___x_432_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_434_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_a_440_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_430_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_430_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec(v_a_426_);
lean_dec_ref(v_f_421_);
v_a_448_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_428_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_428_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec_ref(v_f_421_);
v_a_456_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_425_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_425_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed(lean_object* v_f_464_, lean_object* v_args_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0(v_f_464_, v_args_465_);
lean_dec_ref(v_args_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(lean_object* v_f_468_){
_start:
{
lean_object* v___f_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___f_470_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_470_, 0, v_f_468_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Lasm_JS_Function_ofSyncFn(v___f_470_, v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_472_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_472_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___boxed(lean_object* v_f_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn(v_f_489_);
return v_res_491_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener(void){
_start:
{
lean_object* v___f_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; 
v___f_493_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instFromJSNodeEventTarget___lam__0___boxed), 1, 0);
v___x_494_ = lean_mk_string_unchecked("Lasm.JS.Node.EventEmitter.RemoveListenerListener", 48, 48);
v___x_495_ = 0;
v___x_496_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_496_, 0, v___f_493_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*2, v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(lean_object* v_f_497_){
_start:
{
lean_object* v___f_499_; lean_object* v___f_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___f_499_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__0___boxed), 2, 0);
v___f_500_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_500_, 0, v_f_497_);
lean_closure_set(v___f_500_, 1, v___f_499_);
v___x_501_ = lean_unsigned_to_nat(0u);
v___x_502_ = l_Lasm_JS_Function_ofFn(v___f_500_, v___x_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
v_a_511_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_502_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_502_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn___boxed(lean_object* v_f_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofFn(v_f_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(lean_object* v_f_522_){
_start:
{
lean_object* v___f_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___f_524_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_EventEmitter_NewListenerListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_524_, 0, v_f_522_);
v___x_525_ = lean_unsigned_to_nat(0u);
v___x_526_ = l_Lasm_JS_Function_ofSyncFn(v___f_524_, v___x_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_a_535_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_526_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_526_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn___boxed(lean_object* v_f_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lasm_JS_Node_EventEmitter_RemoveListenerListener_ofSyncFn(v_f_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(lean_object* v_x_546_){
_start:
{
if (lean_obj_tag(v_x_546_) == 0)
{
lean_object* v___x_547_; 
v___x_547_ = lean_unsigned_to_nat(0u);
return v___x_547_;
}
else
{
lean_object* v___x_548_; 
v___x_548_ = lean_unsigned_to_nat(1u);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx___boxed(lean_object* v_x_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorIdx(v_x_549_);
lean_dec_ref(v_x_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(lean_object* v_t_551_, lean_object* v_k_552_){
_start:
{
lean_object* v_value_553_; lean_object* v___x_554_; 
v_value_553_ = lean_ctor_get(v_t_551_, 0);
lean_inc(v_value_553_);
lean_dec_ref(v_t_551_);
v___x_554_ = lean_apply_1(v_k_552_, v_value_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(lean_object* v_motive_555_, lean_object* v_ctorIdx_556_, lean_object* v_t_557_, lean_object* v_h_558_, lean_object* v_k_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_557_, v_k_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___boxed(lean_object* v_motive_561_, lean_object* v_ctorIdx_562_, lean_object* v_t_563_, lean_object* v_h_564_, lean_object* v_k_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim(v_motive_561_, v_ctorIdx_562_, v_t_563_, v_h_564_, v_k_565_);
lean_dec(v_ctorIdx_562_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim___redArg(lean_object* v_t_567_, lean_object* v_eventEmitter_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_567_, v_eventEmitter_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventEmitter_elim(lean_object* v_motive_570_, lean_object* v_t_571_, lean_object* v_h_572_, lean_object* v_eventEmitter_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_571_, v_eventEmitter_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim___redArg(lean_object* v_t_575_, lean_object* v_eventTarget_576_){
_start:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_575_, v_eventTarget_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_EventEmitterOrEventTarget_eventTarget_elim(lean_object* v_motive_578_, lean_object* v_t_579_, lean_object* v_h_580_, lean_object* v_eventTarget_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lasm_JS_Node_EventEmitterOrEventTarget_ctorElim___redArg(v_t_579_, v_eventTarget_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(lean_object* v_x_583_){
_start:
{
lean_object* v_value_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v_value_584_ = lean_ctor_get(v_x_583_, 0);
v___x_585_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_value_584_);
v___x_586_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_586_, 0, v_value_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0___boxed(lean_object* v_x_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lasm_JS_Node_instToJSEventEmitterOrEventTarget___lam__0(v_x_587_);
lean_dec_ref(v_x_587_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventEmitterEventEmitterOrEventTarget___lam__0(lean_object* v_value_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_591_, 0, v_value_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeEventTargetEventEmitterOrEventTarget___lam__0(lean_object* v_value_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_594_, 0, v_value_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0(lean_object* v___f_596_, lean_object* v_d_597_){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_598_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_599_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_596_, v_d_597_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_unsigned_to_nat(1u);
v___x_602_ = lean_mk_empty_array_with_capacity(v___x_601_);
v___x_603_ = lean_array_push(v___x_602_, v___x_600_);
v___x_604_ = l_Lasm_JS_Web_Internal_fields(v___x_603_);
lean_dec_ref(v___x_603_);
return v___x_604_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSEventsOnceOptions(void){
_start:
{
lean_object* v___f_605_; lean_object* v___f_606_; 
v___f_605_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_606_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSEventsOnceOptions___lam__0), 2, 1);
lean_closure_set(v___f_606_, 0, v___f_605_);
return v___f_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0(lean_object* v___f_607_, lean_object* v___x_608_, lean_object* v___f_609_, lean_object* v_d_610_){
_start:
{
lean_object* v_signal_611_; lean_object* v_close_612_; lean_object* v_highWaterMark_613_; lean_object* v_lowWaterMark_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_signal_611_ = lean_ctor_get(v_d_610_, 0);
lean_inc(v_signal_611_);
v_close_612_ = lean_ctor_get(v_d_610_, 1);
lean_inc(v_close_612_);
v_highWaterMark_613_ = lean_ctor_get(v_d_610_, 2);
lean_inc(v_highWaterMark_613_);
v_lowWaterMark_614_ = lean_ctor_get(v_d_610_, 3);
lean_inc(v_lowWaterMark_614_);
lean_dec_ref(v_d_610_);
v___x_615_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_616_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_607_, v_signal_611_);
v___x_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = lean_mk_string_unchecked("close", 5, 5);
v___x_619_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_608_, v_close_612_);
v___x_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_mk_string_unchecked("highWaterMark", 13, 13);
lean_inc_ref(v___f_609_);
v___x_622_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_609_, v_highWaterMark_613_);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = lean_mk_string_unchecked("lowWaterMark", 12, 12);
v___x_625_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_609_, v_lowWaterMark_614_);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
v___x_627_ = lean_unsigned_to_nat(4u);
v___x_628_ = lean_mk_empty_array_with_capacity(v___x_627_);
v___x_629_ = lean_array_push(v___x_628_, v___x_617_);
v___x_630_ = lean_array_push(v___x_629_, v___x_620_);
v___x_631_ = lean_array_push(v___x_630_, v___x_623_);
v___x_632_ = lean_array_push(v___x_631_, v___x_626_);
v___x_633_ = l_Lasm_JS_Web_Internal_fields(v___x_632_);
lean_dec_ref(v___x_632_);
return v___x_633_;
}
}
static lean_object* _init_l_Lasm_JS_Node_instToJSEventsOnOptions(void){
_start:
{
lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___x_636_; lean_object* v___f_637_; lean_object* v___f_638_; 
v___f_634_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_635_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_636_ = l_Lasm_JS_instToJSArray___redArg(v___f_635_);
v___f_637_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSInt___lam__0), 1, 0);
v___f_638_ = lean_alloc_closure((void*)(l_Lasm_JS_Node_instToJSEventsOnOptions___lam__0), 4, 3);
lean_closure_set(v___f_638_, 0, v___f_634_);
lean_closure_set(v___f_638_, 1, v___x_636_);
lean_closure_set(v___f_638_, 2, v___f_637_);
return v___f_638_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Webidl(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_AsyncHooks(uint8_t builtin);
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
res = initialize_Lasm_JS_Node_AsyncHooks(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Node_instFromJSNodeEventTarget = _init_l_Lasm_JS_Node_instFromJSNodeEventTarget();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSNodeEventTarget);
l_Lasm_JS_Node_instFromJSEventEmitter = _init_l_Lasm_JS_Node_instFromJSEventEmitter();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSEventEmitter);
l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource = _init_l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSEventsEventEmitterAsyncResource);
l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions = _init_l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSNodeEventTargetOffOptions);
l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions = _init_l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSNodeEventTargetRemoveListenerOptions);
l_Lasm_JS_Node_instFromJSDOMStringOrSymbol = _init_l_Lasm_JS_Node_instFromJSDOMStringOrSymbol();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSDOMStringOrSymbol);
l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener = _init_l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSEventEmitterNewListenerListener);
l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener = _init_l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener();
lean_mark_persistent(l_Lasm_JS_Node_instFromJSEventEmitterRemoveListenerListener);
l_Lasm_JS_Node_instToJSEventsOnceOptions = _init_l_Lasm_JS_Node_instToJSEventsOnceOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSEventsOnceOptions);
l_Lasm_JS_Node_instToJSEventsOnOptions = _init_l_Lasm_JS_Node_instToJSEventsOnOptions();
lean_mark_persistent(l_Lasm_JS_Node_instToJSEventsOnOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
