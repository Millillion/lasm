// Lean compiler output
// Module: Lasm.JS.Web.Dom
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Html public import Lasm.JS.Web.Types.TrustedTypes public import Lasm.JS.Web.Html
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
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
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSShadowRootMode___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAudioTrack___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_EventHandlerNonNull_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_OnErrorEventHandlerNonNull_ofFn_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListener___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEventListener_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListener___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventListener = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListener_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventListener___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventListener;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSMutationCallback_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListener___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSMutationCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSMutationCallback_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSMutationCallback;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMutationObserverInit___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMutationObserverInit;
static const lean_closure_object l_Lasm_JS_Web_instToJSNodeFilter_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListener___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSNodeFilter = (const lean_object*)&l_Lasm_JS_Web_instToJSNodeFilter_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSNodeFilter;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSXPathNSResolver_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListener___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSXPathNSResolver = (const lean_object*)&l_Lasm_JS_Web_instToJSXPathNSResolver_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSXPathNSResolver;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGetRootNodeOptions___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGetRootNodeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStaticRangeInit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSStaticRangeInit_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSStaticRangeInit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSStaticRangeInit = (const lean_object*)&l_Lasm_JS_Web_instToJSStaticRangeInit_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSNodeOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSNodeOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSNodeOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSNodeOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instToJSNodeOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeNodeNodeOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeNodeNodeOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeNodeNodeOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeNodeNodeOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeNodeNodeOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringNodeOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringNodeOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringNodeOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringNodeOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringNodeOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSElementCreationOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSElementCreationOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions = (const lean_object*)&l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions = (const lean_object*)&l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportNodeOptions___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportNodeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions = (const lean_object*)&l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString = (const lean_object*)&l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSShadowRootInit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSShadowRootInit;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_NONE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_CAPTURING__PHASE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_AT__TARGET;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_BUBBLING__PHASE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_ANY__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_NUMBER__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_STRING__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_ELEMENT__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_ATTRIBUTE__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_TEXT__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_CDATA__SECTION__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_ENTITY__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_COMMENT__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_NOTATION__NODE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Range_START__TO__START;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Range_START__TO__END;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Range_END__TO__END;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Range_END__TO__START;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0(lean_object* v___f_1_, lean_object* v_d_2_){
_start:
{
lean_object* v_bubbles_3_; lean_object* v_cancelable_4_; lean_object* v_composed_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v_bubbles_3_ = lean_ctor_get(v_d_2_, 0);
lean_inc(v_bubbles_3_);
v_cancelable_4_ = lean_ctor_get(v_d_2_, 1);
lean_inc(v_cancelable_4_);
v_composed_5_ = lean_ctor_get(v_d_2_, 2);
lean_inc(v_composed_5_);
lean_dec_ref(v_d_2_);
v___x_6_ = lean_mk_string_unchecked("bubbles", 7, 7);
lean_inc_ref_n(v___f_1_, 2);
v___x_7_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_bubbles_3_);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_6_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
v___x_9_ = lean_mk_string_unchecked("cancelable", 10, 10);
v___x_10_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_cancelable_4_);
v___x_11_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_11_, 0, v___x_9_);
lean_ctor_set(v___x_11_, 1, v___x_10_);
v___x_12_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_13_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1_, v_composed_5_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_12_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = lean_unsigned_to_nat(3u);
v___x_16_ = lean_mk_empty_array_with_capacity(v___x_15_);
v___x_17_ = lean_array_push(v___x_16_, v___x_8_);
v___x_18_ = lean_array_push(v___x_17_, v___x_11_);
v___x_19_ = lean_array_push(v___x_18_, v___x_14_);
v___x_20_ = l_Lasm_JS_Web_Internal_fields(v___x_19_);
lean_dec_ref(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSEventInit(void){
_start:
{
lean_object* v___f_21_; lean_object* v___f_22_; 
v___f_21_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_22_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSEventInit___lam__0), 2, 1);
lean_closure_set(v___f_22_, 0, v___f_21_);
return v___f_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListener___lam__0(lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_mk_string_unchecked("", 0, 0);
v___x_25_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_25_, 0, v_x_23_);
lean_ctor_set(v___x_25_, 1, v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventListener___lam__0(lean_object* v_x_27_){
_start:
{
if (lean_obj_tag(v_x_27_) == 9)
{
lean_object* v_value_28_; lean_object* v___x_29_; 
v_value_28_ = lean_ctor_get(v_x_27_, 0);
lean_inc(v_value_28_);
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v_value_28_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_mk_string_unchecked("", 0, 0);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed(lean_object* v_x_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lasm_JS_Web_instFromJSEventListener___lam__0(v_x_32_);
lean_dec(v_x_32_);
return v_res_33_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSEventListener(void){
_start:
{
lean_object* v___f_34_; lean_object* v___x_35_; uint8_t v___x_36_; lean_object* v___x_37_; 
v___f_34_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_35_ = lean_mk_string_unchecked("Lasm.JS.Web.EventListener", 25, 25);
v___x_36_ = 0;
v___x_37_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_37_, 0, v___f_34_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
lean_ctor_set_uint8(v___x_37_, sizeof(void*)*2, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0(lean_object* v_x_38_){
_start:
{
if (lean_obj_tag(v_x_38_) == 0)
{
lean_object* v_a_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_48_; 
v_a_40_ = lean_ctor_get(v_x_38_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_48_ == 0)
{
v___x_42_ = v_x_38_;
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_a_40_);
lean_dec(v_x_38_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_48_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_40_);
v___x_45_ = v_reuseFailAlloc_47_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
return v___x_46_;
}
}
}
else
{
lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_57_; 
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_38_);
if (v_isSharedCheck_57_ == 0)
{
lean_object* v_unused_58_; 
v_unused_58_ = lean_ctor_get(v_x_38_, 0);
lean_dec(v_unused_58_);
v___x_50_ = v_x_38_;
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
else
{
lean_dec(v_x_38_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_52_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v___x_52_);
v___x_54_ = v___x_50_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_56_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
lean_object* v___x_55_; 
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed(lean_object* v_x_59_, lean_object* v___y_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lasm_JS_Web_EventListener_ofFn___lam__0(v_x_59_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1(lean_object* v_f_62_, lean_object* v___f_63_, lean_object* v_x_64_){
_start:
{
if (lean_obj_tag(v_x_64_) == 0)
{
lean_object* v_a_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
lean_dec_ref(v___f_63_);
lean_dec_ref(v_f_62_);
v_a_66_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v_x_64_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_a_66_);
lean_dec(v_x_64_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_71_; 
if (v_isShared_69_ == 0)
{
v___x_71_ = v___x_68_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_a_66_);
v___x_71_ = v_reuseFailAlloc_73_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
lean_object* v___x_72_; 
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
return v___x_72_;
}
}
}
else
{
lean_object* v_a_75_; lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v_a_75_ = lean_ctor_get(v_x_64_, 0);
lean_inc(v_a_75_);
lean_dec_ref_known(v_x_64_, 1);
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = 0;
v___x_78_ = lean_apply_2(v_f_62_, v_a_75_, lean_box(0));
v___x_79_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_76_, v___x_77_, v___x_78_, v___f_63_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed(lean_object* v_f_80_, lean_object* v___f_81_, lean_object* v_x_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lasm_JS_Web_EventListener_ofFn___lam__1(v_f_80_, v___f_81_, v_x_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2(lean_object* v___f_85_, lean_object* v_args_86_){
_start:
{
lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v_val_91_; lean_object* v___x_94_; 
v___x_88_ = lean_unsigned_to_nat(0u);
v___x_89_ = 0;
v___x_94_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_EventHandlerNonNull_ofFn_spec__0(v_args_86_, v___x_88_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
lean_ctor_set_tag(v___x_97_, 1);
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
v_val_91_ = v___x_100_;
goto v___jp_90_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
v_a_103_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_110_ == 0)
{
v___x_105_ = v___x_94_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_a_103_);
lean_dec(v___x_94_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 0);
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_a_103_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
v_val_91_ = v___x_108_;
goto v___jp_90_;
}
}
}
v___jp_90_:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v_val_91_);
v___x_93_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_88_, v___x_89_, v___x_92_, v___f_85_);
return v___x_93_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed(lean_object* v___f_111_, lean_object* v_args_112_, lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lasm_JS_Web_EventListener_ofFn___lam__2(v___f_111_, v_args_112_);
lean_dec_ref(v_args_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn(lean_object* v_f_115_){
_start:
{
lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___x_120_; 
v___f_117_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed), 2, 0);
v___f_118_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_118_, 0, v_f_115_);
lean_closure_set(v___f_118_, 1, v___f_117_);
v___f_119_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_119_, 0, v___f_118_);
v___x_120_ = l_Lasm_JS_Function_ofFn(v___f_119_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_128_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_128_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_128_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_126_; 
if (v_isShared_124_ == 0)
{
v___x_126_ = v___x_123_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_121_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
v_a_129_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_120_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_120_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object* v_f_137_, lean_object* v_a_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lasm_JS_Web_EventListener_ofFn(v_f_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object* v_f_140_, lean_object* v_args_141_){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_unsigned_to_nat(0u);
v___x_144_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_EventHandlerNonNull_ofFn_spec__0(v_args_141_, v___x_143_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_146_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
lean_inc(v_a_145_);
lean_dec_ref_known(v___x_144_, 1);
v___x_146_ = lean_apply_2(v_f_140_, v_a_145_, lean_box(0));
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_154_; 
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_154_ == 0)
{
lean_object* v_unused_155_; 
v_unused_155_ = lean_ctor_get(v___x_146_, 0);
lean_dec(v_unused_155_);
v___x_148_ = v___x_146_;
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
else
{
lean_dec(v___x_146_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_150_ = lean_box(0);
if (v_isShared_149_ == 0)
{
lean_ctor_set(v___x_148_, 0, v___x_150_);
v___x_152_ = v___x_148_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_150_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_146_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_146_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_f_140_);
v_a_164_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_144_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_144_);
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
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object* v_f_172_, lean_object* v_args_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(v_f_172_, v_args_173_);
lean_dec_ref(v_args_173_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object* v_f_176_){
_start:
{
lean_object* v___f_178_; lean_object* v___x_179_; 
v___f_178_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_178_, 0, v_f_176_);
v___x_179_ = l_Lasm_JS_Function_ofSyncFn(v___f_178_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_179_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
else
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_179_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_179_);
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
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object* v_f_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_JS_Web_EventListener_ofSyncFn(v_f_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object* v___f_199_, lean_object* v___f_200_, lean_object* v_d_201_){
_start:
{
lean_object* v_capture_202_; lean_object* v_passive_203_; lean_object* v_once_204_; lean_object* v_signal_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_capture_202_ = lean_ctor_get(v_d_201_, 0);
lean_inc(v_capture_202_);
v_passive_203_ = lean_ctor_get(v_d_201_, 1);
lean_inc(v_passive_203_);
v_once_204_ = lean_ctor_get(v_d_201_, 2);
lean_inc(v_once_204_);
v_signal_205_ = lean_ctor_get(v_d_201_, 3);
lean_inc(v_signal_205_);
lean_dec_ref(v_d_201_);
v___x_206_ = lean_mk_string_unchecked("capture", 7, 7);
lean_inc_ref_n(v___f_199_, 2);
v___x_207_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_199_, v_capture_202_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
v___x_209_ = lean_mk_string_unchecked("passive", 7, 7);
v___x_210_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_199_, v_passive_203_);
v___x_211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = lean_mk_string_unchecked("once", 4, 4);
v___x_213_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_199_, v_once_204_);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_216_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_200_, v_signal_205_);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_unsigned_to_nat(4u);
v___x_219_ = lean_mk_empty_array_with_capacity(v___x_218_);
v___x_220_ = lean_array_push(v___x_219_, v___x_208_);
v___x_221_ = lean_array_push(v___x_220_, v___x_211_);
v___x_222_ = lean_array_push(v___x_221_, v___x_214_);
v___x_223_ = lean_array_push(v___x_222_, v___x_217_);
v___x_224_ = l_Lasm_JS_Web_Internal_fields(v___x_223_);
lean_dec_ref(v___x_223_);
return v___x_224_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSAddEventListenerOptions(void){
_start:
{
lean_object* v___f_225_; lean_object* v___f_226_; lean_object* v___f_227_; 
v___f_225_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_226_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_227_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0), 3, 2);
lean_closure_set(v___f_227_, 0, v___f_225_);
lean_closure_set(v___f_227_, 1, v___f_226_);
return v___f_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_228_) == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_unsigned_to_nat(0u);
return v___x_229_;
}
else
{
lean_object* v___x_230_; 
v___x_230_ = lean_unsigned_to_nat(1u);
return v___x_230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(v_x_231_);
lean_dec_ref(v_x_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_233_, lean_object* v_k_234_){
_start:
{
if (lean_obj_tag(v_t_233_) == 0)
{
lean_object* v_value_235_; lean_object* v___x_236_; 
v_value_235_ = lean_ctor_get(v_t_233_, 0);
lean_inc_ref(v_value_235_);
lean_dec_ref_known(v_t_233_, 1);
v___x_236_ = lean_apply_1(v_k_234_, v_value_235_);
return v___x_236_;
}
else
{
uint8_t v_value_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_value_237_ = lean_ctor_get_uint8(v_t_233_, 0);
lean_dec_ref_known(v_t_233_, 0);
v___x_238_ = lean_box(v_value_237_);
v___x_239_ = lean_apply_1(v_k_234_, v___x_238_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_240_, lean_object* v_ctorIdx_241_, lean_object* v_t_242_, lean_object* v_h_243_, lean_object* v_k_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_242_, v_k_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_246_, lean_object* v_ctorIdx_247_, lean_object* v_t_248_, lean_object* v_h_249_, lean_object* v_k_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(v_motive_246_, v_ctorIdx_247_, v_t_248_, v_h_249_, v_k_250_);
lean_dec(v_ctorIdx_247_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim___redArg(lean_object* v_t_252_, lean_object* v_addEventListenerOptions_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_252_, v_addEventListenerOptions_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim(lean_object* v_motive_255_, lean_object* v_t_256_, lean_object* v_h_257_, lean_object* v_addEventListenerOptions_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_256_, v_addEventListenerOptions_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_260_, lean_object* v_boolean_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_260_, v_boolean_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_boolean_266_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_264_, v_boolean_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_268_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_object* v_value_269_; lean_object* v_capture_270_; lean_object* v_passive_271_; lean_object* v_once_272_; lean_object* v_signal_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_value_269_ = lean_ctor_get(v_x_268_, 0);
lean_inc_ref(v_value_269_);
lean_dec_ref_known(v_x_268_, 1);
v_capture_270_ = lean_ctor_get(v_value_269_, 0);
lean_inc(v_capture_270_);
v_passive_271_ = lean_ctor_get(v_value_269_, 1);
lean_inc(v_passive_271_);
v_once_272_ = lean_ctor_get(v_value_269_, 2);
lean_inc(v_once_272_);
v_signal_273_ = lean_ctor_get(v_value_269_, 3);
lean_inc(v_signal_273_);
lean_dec_ref(v_value_269_);
v___f_274_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_275_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_276_ = lean_mk_string_unchecked("capture", 7, 7);
lean_inc_ref_n(v___f_274_, 2);
v___x_277_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_274_, v_capture_270_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_276_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = lean_mk_string_unchecked("passive", 7, 7);
v___x_280_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_274_, v_passive_271_);
v___x_281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_279_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lean_mk_string_unchecked("once", 4, 4);
v___x_283_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_274_, v_once_272_);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___x_285_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_286_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_275_, v_signal_273_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_unsigned_to_nat(4u);
v___x_289_ = lean_mk_empty_array_with_capacity(v___x_288_);
v___x_290_ = lean_array_push(v___x_289_, v___x_278_);
v___x_291_ = lean_array_push(v___x_290_, v___x_281_);
v___x_292_ = lean_array_push(v___x_291_, v___x_284_);
v___x_293_ = lean_array_push(v___x_292_, v___x_287_);
v___x_294_ = l_Lasm_JS_Web_Internal_fields(v___x_293_);
lean_dec_ref(v___x_293_);
return v___x_294_;
}
else
{
uint8_t v_value_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
v_value_295_ = lean_ctor_get_uint8(v_x_268_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v_x_268_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_dec(v_x_268_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
lean_ctor_set_tag(v___x_297_, 2);
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_301_, 0, v_value_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_value_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_308_, 0, v_value_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_309_){
_start:
{
uint8_t v_value_boxed_310_; lean_object* v_res_311_; 
v_value_boxed_310_ = lean_unbox(v_value_309_);
v_res_311_ = l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(v_value_boxed_310_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object* v___f_313_, lean_object* v_d_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_315_ = lean_mk_string_unchecked("capture", 7, 7);
v___x_316_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_313_, v_d_314_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_unsigned_to_nat(1u);
v___x_319_ = lean_mk_empty_array_with_capacity(v___x_318_);
v___x_320_ = lean_array_push(v___x_319_, v___x_317_);
v___x_321_ = l_Lasm_JS_Web_Internal_fields(v___x_320_);
lean_dec_ref(v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSEventListenerOptions(void){
_start:
{
lean_object* v___f_322_; lean_object* v___f_323_; 
v___f_322_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_323_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0), 2, 1);
lean_closure_set(v___f_323_, 0, v___f_322_);
return v___f_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_324_){
_start:
{
if (lean_obj_tag(v_x_324_) == 0)
{
lean_object* v___x_325_; 
v___x_325_ = lean_unsigned_to_nat(0u);
return v___x_325_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_unsigned_to_nat(1u);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(v_x_327_);
lean_dec_ref(v_x_327_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_329_, lean_object* v_k_330_){
_start:
{
if (lean_obj_tag(v_t_329_) == 0)
{
lean_object* v_value_331_; lean_object* v___x_332_; 
v_value_331_ = lean_ctor_get(v_t_329_, 0);
lean_inc(v_value_331_);
lean_dec_ref_known(v_t_329_, 1);
v___x_332_ = lean_apply_1(v_k_330_, v_value_331_);
return v___x_332_;
}
else
{
uint8_t v_value_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_value_333_ = lean_ctor_get_uint8(v_t_329_, 0);
lean_dec_ref_known(v_t_329_, 0);
v___x_334_ = lean_box(v_value_333_);
v___x_335_ = lean_apply_1(v_k_330_, v___x_334_);
return v___x_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_336_, lean_object* v_ctorIdx_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_k_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_338_, v_k_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_342_, lean_object* v_ctorIdx_343_, lean_object* v_t_344_, lean_object* v_h_345_, lean_object* v_k_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(v_motive_342_, v_ctorIdx_343_, v_t_344_, v_h_345_, v_k_346_);
lean_dec(v_ctorIdx_343_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim___redArg(lean_object* v_t_348_, lean_object* v_eventListenerOptions_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_348_, v_eventListenerOptions_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim(lean_object* v_motive_351_, lean_object* v_t_352_, lean_object* v_h_353_, lean_object* v_eventListenerOptions_354_){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_352_, v_eventListenerOptions_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_356_, lean_object* v_boolean_357_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_356_, v_boolean_357_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_359_, lean_object* v_t_360_, lean_object* v_h_361_, lean_object* v_boolean_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_360_, v_boolean_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_364_){
_start:
{
if (lean_obj_tag(v_x_364_) == 0)
{
lean_object* v_value_365_; lean_object* v___f_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v_value_365_ = lean_ctor_get(v_x_364_, 0);
lean_inc(v_value_365_);
lean_dec_ref_known(v_x_364_, 1);
v___f_366_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_367_ = lean_mk_string_unchecked("capture", 7, 7);
v___x_368_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_366_, v_value_365_);
v___x_369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_372_ = lean_array_push(v___x_371_, v___x_369_);
v___x_373_ = l_Lasm_JS_Web_Internal_fields(v___x_372_);
lean_dec_ref(v___x_372_);
return v___x_373_;
}
else
{
uint8_t v_value_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_381_; 
v_value_374_ = lean_ctor_get_uint8(v_x_364_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_381_ == 0)
{
v___x_376_ = v_x_364_;
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
else
{
lean_dec(v_x_364_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_381_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set_tag(v___x_376_, 2);
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_380_, 0, v_value_374_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_383_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v_value_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_387_, 0, v_value_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_388_){
_start:
{
uint8_t v_value_boxed_389_; lean_object* v_res_390_; 
v_value_boxed_389_ = lean_unbox(v_value_388_);
v_res_390_ = l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(v_value_boxed_389_);
return v_res_390_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSMutationCallback(void){
_start:
{
lean_object* v___f_393_; lean_object* v___x_394_; uint8_t v___x_395_; lean_object* v___x_396_; 
v___f_393_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_394_ = lean_mk_string_unchecked("Lasm.JS.Web.MutationCallback", 28, 28);
v___x_395_ = 0;
v___x_396_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_396_, 0, v___f_393_);
lean_ctor_set(v___x_396_, 1, v___x_394_);
lean_ctor_set_uint8(v___x_396_, sizeof(void*)*2, v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1(lean_object* v_f_397_, lean_object* v_a_398_, lean_object* v___f_399_, lean_object* v_x_400_){
_start:
{
if (lean_obj_tag(v_x_400_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_410_; 
lean_dec_ref(v___f_399_);
lean_dec_ref(v_a_398_);
lean_dec_ref(v_f_397_);
v_a_402_ = lean_ctor_get(v_x_400_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_410_ == 0)
{
v___x_404_ = v_x_400_;
v_isShared_405_ = v_isSharedCheck_410_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v_x_400_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_410_;
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
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_409_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
lean_object* v___x_408_; 
v___x_408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
return v___x_408_;
}
}
}
else
{
lean_object* v_a_411_; lean_object* v___x_412_; uint8_t v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_a_411_ = lean_ctor_get(v_x_400_, 0);
lean_inc(v_a_411_);
lean_dec_ref_known(v_x_400_, 1);
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = 0;
v___x_414_ = lean_apply_3(v_f_397_, v_a_398_, v_a_411_, lean_box(0));
v___x_415_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_412_, v___x_413_, v___x_414_, v___f_399_);
return v___x_415_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1___boxed(lean_object* v_f_416_, lean_object* v_a_417_, lean_object* v___f_418_, lean_object* v_x_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__1(v_f_416_, v_a_417_, v___f_418_, v_x_419_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(lean_object* v_context_422_, lean_object* v_d_423_){
_start:
{
lean_object* v___y_426_; lean_object* v___y_427_; 
if (lean_obj_tag(v_d_423_) == 9)
{
lean_object* v_value_431_; lean_object* v___x_432_; 
v_value_431_ = lean_ctor_get(v_d_423_, 0);
lean_inc(v_value_431_);
lean_dec_ref_known(v_d_423_, 2);
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v_value_431_);
return v___x_432_;
}
else
{
lean_object* v___x_433_; lean_object* v_received_435_; 
v___x_433_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_423_) == 9)
{
lean_object* v_value_451_; lean_object* v_description_452_; uint8_t v___x_453_; 
v_value_451_ = lean_ctor_get(v_d_423_, 0);
v_description_452_ = lean_ctor_get(v_d_423_, 1);
v___x_453_ = lean_string_dec_eq(v_description_452_, v___x_433_);
if (v___x_453_ == 0)
{
goto v___jp_449_;
}
else
{
uint32_t v___x_454_; uint64_t v___x_455_; lean_object* v___x_456_; uint32_t v___x_457_; lean_object* v___x_458_; 
lean_inc_n(v_value_451_, 2);
lean_dec_ref_known(v_d_423_, 2);
v___x_454_ = 206;
v___x_455_ = 0ULL;
lean_inc_ref(v___x_433_);
v___x_456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_456_, 0, v_value_451_);
lean_ctor_set(v___x_456_, 1, v___x_433_);
v___x_457_ = lasm_js_value_handle(v_value_451_);
lean_dec(v_value_451_);
v___x_458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_454_, v___x_455_, v___x_456_, v___x_457_);
lean_dec_ref_known(v___x_456_, 2);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; uint8_t v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = lean_string_validate_utf8(v_a_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
lean_dec(v_a_459_);
v___x_461_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_462_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_463_ = lean_unsigned_to_nat(193u);
v___x_464_ = lean_unsigned_to_nat(46u);
v___x_465_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_466_ = l_mkPanicMessageWithDecl(v___x_461_, v___x_462_, v___x_463_, v___x_464_, v___x_465_);
lean_dec_ref(v___x_465_);
lean_dec_ref(v___x_462_);
lean_dec_ref(v___x_461_);
v___x_467_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_466_);
v_received_435_ = v___x_467_;
goto v___jp_434_;
}
else
{
lean_object* v___x_468_; 
v___x_468_ = lean_string_from_utf8_unchecked(v_a_459_);
v_received_435_ = v___x_468_;
goto v___jp_434_;
}
}
else
{
lean_object* v___x_469_; 
lean_dec_ref_known(v___x_458_, 1);
v___x_469_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_435_ = v___x_469_;
goto v___jp_434_;
}
}
}
else
{
goto v___jp_449_;
}
v___jp_434_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_436_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_437_ = lean_string_append(v___x_436_, v_context_422_);
v___x_438_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_439_ = lean_string_append(v___x_437_, v___x_438_);
lean_dec_ref(v___x_438_);
v___x_440_ = lean_mk_string_unchecked("Lasm.JS.Web.MutationObserver", 28, 28);
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_444_ = lean_string_append(v___x_443_, v_received_435_);
lean_dec_ref(v_received_435_);
v___x_445_ = lean_string_utf8_byte_size(v___x_433_);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_nat_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; 
lean_dec_ref(v___x_433_);
v___x_448_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_426_ = v___x_444_;
v___y_427_ = v___x_448_;
goto v___jp_425_;
}
else
{
v___y_426_ = v___x_444_;
v___y_427_ = v___x_433_;
goto v___jp_425_;
}
}
v___jp_449_:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_JS_Data_describe(v_d_423_);
v_received_435_ = v___x_450_;
goto v___jp_434_;
}
}
v___jp_425_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_string_append(v___y_426_, v___y_427_);
v___x_429_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
v___x_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_470_, lean_object* v_d_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v_context_470_, v_d_471_);
lean_dec_ref(v_context_470_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(lean_object* v_args_474_, lean_object* v_i_475_){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_477_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_478_ = lean_unsigned_to_nat(1u);
v___x_479_ = lean_nat_add(v_i_475_, v___x_478_);
v___x_480_ = l_Nat_reprFast(v___x_479_);
v___x_481_ = lean_string_append(v___x_477_, v___x_480_);
lean_dec_ref(v___x_480_);
v___x_482_ = lean_array_get_size(v_args_474_);
v___x_483_ = lean_nat_dec_lt(v_i_475_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_box(0);
v___x_485_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v___x_481_, v___x_484_);
lean_dec_ref(v___x_481_);
return v___x_485_;
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_array_fget_borrowed(v_args_474_, v_i_475_);
lean_inc(v___x_486_);
v___x_487_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v___x_481_, v___x_486_);
lean_dec_ref(v___x_481_);
return v___x_487_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0___boxed(lean_object* v_args_488_, lean_object* v_i_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_488_, v_i_489_);
lean_dec(v_i_489_);
lean_dec_ref(v_args_488_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0(lean_object* v_f_492_, lean_object* v___f_493_, lean_object* v_args_494_, lean_object* v_x_495_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
lean_dec_ref(v___f_493_);
lean_dec_ref(v_f_492_);
v_a_497_ = lean_ctor_get(v_x_495_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v_x_495_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v_x_495_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_504_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_503_; 
v___x_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
return v___x_503_;
}
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_527_; 
v_a_506_ = lean_ctor_get(v_x_495_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_527_ == 0)
{
v___x_508_ = v_x_495_;
v_isShared_509_ = v_isSharedCheck_527_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v_x_495_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_527_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___f_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v_val_515_; lean_object* v___x_518_; 
v___f_510_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_510_, 0, v_f_492_);
lean_closure_set(v___f_510_, 1, v_a_506_);
lean_closure_set(v___f_510_, 2, v___f_493_);
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = 0;
v___x_518_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_494_, v___x_511_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_521_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v_a_519_);
v___x_521_ = v___x_508_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
v_val_515_ = v___x_521_;
goto v___jp_514_;
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; 
v_a_523_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v___x_518_, 1);
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 0);
lean_ctor_set(v___x_508_, 0, v_a_523_);
v___x_525_ = v___x_508_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
v_val_515_ = v___x_525_;
goto v___jp_514_;
}
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v_val_515_);
v___x_517_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_512_, v___x_513_, v___x_516_, v___f_510_);
return v___x_517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0___boxed(lean_object* v_f_528_, lean_object* v___f_529_, lean_object* v_args_530_, lean_object* v_x_531_, lean_object* v___y_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__0(v_f_528_, v___f_529_, v_args_530_, v_x_531_);
lean_dec_ref(v_args_530_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(size_t v_sz_534_, size_t v_i_535_, lean_object* v_bs_536_){
_start:
{
uint8_t v___x_537_; 
v___x_537_ = lean_usize_dec_lt(v_i_535_, v_sz_534_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; 
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v_bs_536_);
return v___x_538_;
}
else
{
lean_object* v_v_539_; 
v_v_539_ = lean_array_uget_borrowed(v_bs_536_, v_i_535_);
if (lean_obj_tag(v_v_539_) == 9)
{
lean_object* v_value_540_; lean_object* v___x_541_; lean_object* v_bs_x27_542_; size_t v___x_543_; size_t v___x_544_; lean_object* v___x_545_; 
v_value_540_ = lean_ctor_get(v_v_539_, 0);
lean_inc(v_value_540_);
v___x_541_ = lean_unsigned_to_nat(0u);
v_bs_x27_542_ = lean_array_uset(v_bs_536_, v_i_535_, v___x_541_);
v___x_543_ = ((size_t)1ULL);
v___x_544_ = lean_usize_add(v_i_535_, v___x_543_);
v___x_545_ = lean_array_uset(v_bs_x27_542_, v_i_535_, v_value_540_);
v_i_535_ = v___x_544_;
v_bs_536_ = v___x_545_;
goto _start;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; 
lean_dec_ref(v_bs_536_);
v___x_547_ = lean_mk_string_unchecked("", 0, 0);
v___x_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
return v___x_548_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_549_, lean_object* v_i_550_, lean_object* v_bs_551_){
_start:
{
size_t v_sz_boxed_552_; size_t v_i_boxed_553_; lean_object* v_res_554_; 
v_sz_boxed_552_ = lean_unbox_usize(v_sz_549_);
lean_dec(v_sz_549_);
v_i_boxed_553_ = lean_unbox_usize(v_i_550_);
lean_dec(v_i_550_);
v_res_554_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(v_sz_boxed_552_, v_i_boxed_553_, v_bs_551_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(lean_object* v_context_555_, lean_object* v_d_556_){
_start:
{
lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_565_; lean_object* v_received_566_; lean_object* v___y_585_; lean_object* v_a_588_; 
if (lean_obj_tag(v_d_556_) == 7)
{
lean_object* v_items_617_; size_t v_sz_618_; size_t v___x_619_; lean_object* v___x_620_; 
v_items_617_ = lean_ctor_get(v_d_556_, 0);
v_sz_618_ = lean_array_size(v_items_617_);
v___x_619_ = ((size_t)0ULL);
lean_inc_ref(v_items_617_);
v___x_620_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(v_sz_618_, v___x_619_, v_items_617_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = lean_mk_string_unchecked("an element is not Lasm.JS.Web.MutationRecord", 44, 44);
v___x_623_ = lean_string_utf8_byte_size(v_a_621_);
v___x_624_ = lean_unsigned_to_nat(0u);
v___x_625_ = lean_nat_dec_eq(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_627_ = lean_string_append(v___x_626_, v_a_621_);
lean_dec(v_a_621_);
v___x_628_ = lean_string_append(v___x_622_, v___x_627_);
lean_dec_ref(v___x_627_);
v_a_588_ = v___x_628_;
goto v___jp_587_;
}
else
{
lean_dec(v_a_621_);
v_a_588_ = v___x_622_;
goto v___jp_587_;
}
}
else
{
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_629_; 
v_a_629_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_620_, 1);
v_a_588_ = v_a_629_;
goto v___jp_587_;
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec_ref_known(v_d_556_, 1);
v_a_630_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_620_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_620_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
lean_ctor_set_tag(v___x_632_, 0);
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
else
{
lean_object* v___x_638_; 
v___x_638_ = lean_mk_string_unchecked("", 0, 0);
v_a_588_ = v___x_638_;
goto v___jp_587_;
}
v___jp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_string_append(v___y_559_, v___y_560_);
lean_dec_ref(v___y_560_);
v___x_562_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
v___x_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
v___jp_564_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v___x_567_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_568_ = lean_string_append(v___x_567_, v_context_555_);
v___x_569_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_570_ = lean_string_append(v___x_568_, v___x_569_);
lean_dec_ref(v___x_569_);
v___x_571_ = lean_mk_string_unchecked("Array (Lasm.JS.Web.MutationRecord)", 34, 34);
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_574_ = lean_string_append(v___x_572_, v___x_573_);
lean_dec_ref(v___x_573_);
v___x_575_ = lean_string_append(v___x_574_, v_received_566_);
lean_dec_ref(v_received_566_);
v___x_576_ = lean_string_utf8_byte_size(v___y_565_);
v___x_577_ = lean_unsigned_to_nat(0u);
v___x_578_ = lean_nat_dec_eq(v___x_576_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_580_ = lean_string_append(v___x_579_, v___y_565_);
lean_dec_ref(v___y_565_);
v___x_581_ = lean_mk_string_unchecked(")", 1, 1);
v___x_582_ = lean_string_append(v___x_580_, v___x_581_);
lean_dec_ref(v___x_581_);
v___y_559_ = v___x_575_;
v___y_560_ = v___x_582_;
goto v___jp_558_;
}
else
{
lean_object* v___x_583_; 
lean_dec_ref(v___y_565_);
v___x_583_ = lean_mk_string_unchecked("", 0, 0);
v___y_559_ = v___x_575_;
v___y_560_ = v___x_583_;
goto v___jp_558_;
}
}
v___jp_584_:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lasm_JS_Data_describe(v_d_556_);
v___y_565_ = v___y_585_;
v_received_566_ = v___x_586_;
goto v___jp_564_;
}
v___jp_587_:
{
if (lean_obj_tag(v_d_556_) == 9)
{
lean_object* v_value_589_; lean_object* v_description_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v_value_589_ = lean_ctor_get(v_d_556_, 0);
v_description_590_ = lean_ctor_get(v_d_556_, 1);
v___x_591_ = lean_mk_string_unchecked("", 0, 0);
v___x_592_ = lean_string_dec_eq(v_description_590_, v___x_591_);
if (v___x_592_ == 0)
{
lean_dec_ref(v___x_591_);
v___y_585_ = v_a_588_;
goto v___jp_584_;
}
else
{
lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_614_; 
lean_inc(v_value_589_);
v_isSharedCheck_614_ = !lean_is_exclusive(v_d_556_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; lean_object* v_unused_616_; 
v_unused_615_ = lean_ctor_get(v_d_556_, 1);
lean_dec(v_unused_615_);
v_unused_616_ = lean_ctor_get(v_d_556_, 0);
lean_dec(v_unused_616_);
v___x_594_ = v_d_556_;
v_isShared_595_ = v_isSharedCheck_614_;
goto v_resetjp_593_;
}
else
{
lean_dec(v_d_556_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_614_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
uint32_t v___x_596_; uint64_t v___x_597_; lean_object* v___x_599_; 
v___x_596_ = 206;
v___x_597_ = 0ULL;
lean_inc(v_value_589_);
if (v_isShared_595_ == 0)
{
lean_ctor_set(v___x_594_, 1, v___x_591_);
v___x_599_ = v___x_594_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_value_589_);
lean_ctor_set(v_reuseFailAlloc_613_, 1, v___x_591_);
v___x_599_ = v_reuseFailAlloc_613_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
uint32_t v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lasm_js_value_handle(v_value_589_);
lean_dec(v_value_589_);
v___x_601_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_596_, v___x_597_, v___x_599_, v___x_600_);
lean_dec_ref(v___x_599_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; uint8_t v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_string_validate_utf8(v_a_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec(v_a_602_);
v___x_604_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_605_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_606_ = lean_unsigned_to_nat(193u);
v___x_607_ = lean_unsigned_to_nat(46u);
v___x_608_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_609_ = l_mkPanicMessageWithDecl(v___x_604_, v___x_605_, v___x_606_, v___x_607_, v___x_608_);
lean_dec_ref(v___x_608_);
lean_dec_ref(v___x_605_);
lean_dec_ref(v___x_604_);
v___x_610_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_609_);
v___y_565_ = v_a_588_;
v_received_566_ = v___x_610_;
goto v___jp_564_;
}
else
{
lean_object* v___x_611_; 
v___x_611_ = lean_string_from_utf8_unchecked(v_a_602_);
v___y_565_ = v_a_588_;
v_received_566_ = v___x_611_;
goto v___jp_564_;
}
}
else
{
lean_object* v___x_612_; 
lean_dec_ref_known(v___x_601_, 1);
v___x_612_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_565_ = v_a_588_;
v_received_566_ = v___x_612_;
goto v___jp_564_;
}
}
}
}
}
else
{
v___y_585_ = v_a_588_;
goto v___jp_584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2___boxed(lean_object* v_context_639_, lean_object* v_d_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v_context_639_, v_d_640_);
lean_dec_ref(v_context_639_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(lean_object* v_args_643_, lean_object* v_i_644_){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_646_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_647_ = lean_unsigned_to_nat(1u);
v___x_648_ = lean_nat_add(v_i_644_, v___x_647_);
v___x_649_ = l_Nat_reprFast(v___x_648_);
v___x_650_ = lean_string_append(v___x_646_, v___x_649_);
lean_dec_ref(v___x_649_);
v___x_651_ = lean_array_get_size(v_args_643_);
v___x_652_ = lean_nat_dec_lt(v_i_644_, v___x_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_653_ = lean_box(0);
v___x_654_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v___x_650_, v___x_653_);
lean_dec_ref(v___x_650_);
return v___x_654_;
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_array_fget_borrowed(v_args_643_, v_i_644_);
lean_inc(v___x_655_);
v___x_656_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v___x_650_, v___x_655_);
lean_dec_ref(v___x_650_);
return v___x_656_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1___boxed(lean_object* v_args_657_, lean_object* v_i_658_, lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_657_, v_i_658_);
lean_dec(v_i_658_);
lean_dec_ref(v_args_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2(lean_object* v_f_661_, lean_object* v___f_662_, lean_object* v_args_663_){
_start:
{
lean_object* v___f_665_; lean_object* v___x_666_; uint8_t v___x_667_; lean_object* v_val_669_; lean_object* v___x_672_; 
lean_inc_ref(v_args_663_);
v___f_665_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_665_, 0, v_f_661_);
lean_closure_set(v___f_665_, 1, v___f_662_);
lean_closure_set(v___f_665_, 2, v_args_663_);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = 0;
v___x_672_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_663_, v___x_666_);
lean_dec_ref(v_args_663_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set_tag(v___x_675_, 1);
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
v_val_669_ = v___x_678_;
goto v___jp_668_;
}
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_a_681_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_672_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_672_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set_tag(v___x_683_, 0);
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
v_val_669_ = v___x_686_;
goto v___jp_668_;
}
}
}
v___jp_668_:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v_val_669_);
v___x_671_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_666_, v___x_667_, v___x_670_, v___f_665_);
return v___x_671_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2___boxed(lean_object* v_f_689_, lean_object* v___f_690_, lean_object* v_args_691_, lean_object* v___y_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__2(v_f_689_, v___f_690_, v_args_691_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn(lean_object* v_f_694_){
_start:
{
lean_object* v___f_696_; lean_object* v___f_697_; lean_object* v___x_698_; 
v___f_696_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed), 2, 0);
v___f_697_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_697_, 0, v_f_694_);
lean_closure_set(v___f_697_, 1, v___f_696_);
v___x_698_ = l_Lasm_JS_Function_ofFn(v___f_697_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
v_a_707_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_698_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_698_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___boxed(lean_object* v_f_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lasm_JS_Web_MutationCallback_ofFn(v_f_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0(lean_object* v_f_718_, lean_object* v_args_719_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_719_, v___x_721_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref_known(v___x_722_, 1);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_719_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = lean_apply_3(v_f_718_, v_a_723_, v_a_726_, lean_box(0));
if (lean_obj_tag(v___x_727_) == 0)
{
lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_735_; 
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_735_ == 0)
{
lean_object* v_unused_736_; 
v_unused_736_ = lean_ctor_get(v___x_727_, 0);
lean_dec(v_unused_736_);
v___x_729_ = v___x_727_;
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
else
{
lean_dec(v___x_727_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_735_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_731_ = lean_box(0);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_731_);
v___x_733_ = v___x_729_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
else
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_727_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_727_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
lean_dec(v_a_723_);
lean_dec_ref(v_f_718_);
v_a_745_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_725_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_725_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v_f_718_);
v_a_753_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_760_ == 0)
{
v___x_755_ = v___x_722_;
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_722_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_760_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
if (v_isShared_756_ == 0)
{
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_753_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_761_, lean_object* v_args_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0(v_f_761_, v_args_762_);
lean_dec_ref(v_args_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn(lean_object* v_f_765_){
_start:
{
lean_object* v___f_767_; lean_object* v___x_768_; 
v___f_767_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_767_, 0, v_f_765_);
v___x_768_ = l_Lasm_JS_Function_ofSyncFn(v___f_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
v_a_777_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_768_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_768_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___boxed(lean_object* v_f_785_, lean_object* v_a_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lasm_JS_Web_MutationCallback_ofSyncFn(v_f_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMutationObserverInit___lam__0(lean_object* v___f_788_, lean_object* v___x_789_, lean_object* v_d_790_){
_start:
{
lean_object* v_childList_791_; lean_object* v_attributes_792_; lean_object* v_characterData_793_; lean_object* v_subtree_794_; lean_object* v_attributeOldValue_795_; lean_object* v_characterDataOldValue_796_; lean_object* v_attributeFilter_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_childList_791_ = lean_ctor_get(v_d_790_, 0);
lean_inc(v_childList_791_);
v_attributes_792_ = lean_ctor_get(v_d_790_, 1);
lean_inc(v_attributes_792_);
v_characterData_793_ = lean_ctor_get(v_d_790_, 2);
lean_inc(v_characterData_793_);
v_subtree_794_ = lean_ctor_get(v_d_790_, 3);
lean_inc(v_subtree_794_);
v_attributeOldValue_795_ = lean_ctor_get(v_d_790_, 4);
lean_inc(v_attributeOldValue_795_);
v_characterDataOldValue_796_ = lean_ctor_get(v_d_790_, 5);
lean_inc(v_characterDataOldValue_796_);
v_attributeFilter_797_ = lean_ctor_get(v_d_790_, 6);
lean_inc(v_attributeFilter_797_);
lean_dec_ref(v_d_790_);
v___x_798_ = lean_mk_string_unchecked("childList", 9, 9);
lean_inc_ref_n(v___f_788_, 5);
v___x_799_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_childList_791_);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
v___x_801_ = lean_mk_string_unchecked("attributes", 10, 10);
v___x_802_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_attributes_792_);
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = lean_mk_string_unchecked("characterData", 13, 13);
v___x_805_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_characterData_793_);
v___x_806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = lean_mk_string_unchecked("subtree", 7, 7);
v___x_808_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_subtree_794_);
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = lean_mk_string_unchecked("attributeOldValue", 17, 17);
v___x_811_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_attributeOldValue_795_);
v___x_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_mk_string_unchecked("characterDataOldValue", 21, 21);
v___x_814_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_788_, v_characterDataOldValue_796_);
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set(v___x_815_, 1, v___x_814_);
v___x_816_ = lean_mk_string_unchecked("attributeFilter", 15, 15);
v___x_817_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_789_, v_attributeFilter_797_);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = lean_unsigned_to_nat(7u);
v___x_820_ = lean_mk_empty_array_with_capacity(v___x_819_);
v___x_821_ = lean_array_push(v___x_820_, v___x_800_);
v___x_822_ = lean_array_push(v___x_821_, v___x_803_);
v___x_823_ = lean_array_push(v___x_822_, v___x_806_);
v___x_824_ = lean_array_push(v___x_823_, v___x_809_);
v___x_825_ = lean_array_push(v___x_824_, v___x_812_);
v___x_826_ = lean_array_push(v___x_825_, v___x_815_);
v___x_827_ = lean_array_push(v___x_826_, v___x_818_);
v___x_828_ = l_Lasm_JS_Web_Internal_fields(v___x_827_);
lean_dec_ref(v___x_827_);
return v___x_828_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSMutationObserverInit(void){
_start:
{
lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___x_831_; lean_object* v___f_832_; 
v___f_829_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_830_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_831_ = l_Lasm_JS_instToJSArray___redArg(v___f_830_);
v___f_832_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSMutationObserverInit___lam__0), 3, 2);
lean_closure_set(v___f_832_, 0, v___f_829_);
lean_closure_set(v___f_832_, 1, v___x_831_);
return v___f_832_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSNodeFilter(void){
_start:
{
lean_object* v___f_834_; lean_object* v___x_835_; uint8_t v___x_836_; lean_object* v___x_837_; 
v___f_834_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_835_ = lean_mk_string_unchecked("Lasm.JS.Web.NodeFilter", 22, 22);
v___x_836_ = 0;
v___x_837_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_837_, 0, v___f_834_);
lean_ctor_set(v___x_837_, 1, v___x_835_);
lean_ctor_set_uint8(v___x_837_, sizeof(void*)*2, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0(lean_object* v_x_838_){
_start:
{
lean_object* v___y_841_; 
if (lean_obj_tag(v_x_838_) == 0)
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_852_; 
v_a_844_ = lean_ctor_get(v_x_838_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v_x_838_);
if (v_isSharedCheck_852_ == 0)
{
v___x_846_ = v_x_838_;
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v_x_838_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_852_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_851_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_850_; 
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_a_853_ = lean_ctor_get(v_x_838_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v_x_838_, 1);
v___x_854_ = lean_nat_to_int(v_a_853_);
v___x_855_ = lean_nat_abs(v___x_854_);
v___x_856_ = lean_cstr_to_nat("9007199254740991");
v___x_857_ = lean_nat_dec_le(v___x_855_, v___x_856_);
lean_dec(v___x_855_);
if (v___x_857_ == 0)
{
lean_object* v___x_858_; 
v___x_858_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_854_);
v___y_841_ = v___x_858_;
goto v___jp_840_;
}
else
{
double v___x_859_; lean_object* v___x_860_; 
v___x_859_ = l_Float_ofInt(v___x_854_);
lean_dec(v___x_854_);
v___x_860_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_860_, 0, v___x_859_);
v___y_841_ = v___x_860_;
goto v___jp_840_;
}
}
v___jp_840_:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v___y_841_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0___boxed(lean_object* v_x_861_, lean_object* v___y_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__0(v_x_861_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1(lean_object* v_f_864_, lean_object* v___f_865_, lean_object* v_x_866_){
_start:
{
if (lean_obj_tag(v_x_866_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_876_; 
lean_dec_ref(v___f_865_);
lean_dec_ref(v_f_864_);
v_a_868_ = lean_ctor_get(v_x_866_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_x_866_);
if (v_isSharedCheck_876_ == 0)
{
v___x_870_ = v_x_866_;
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v_x_866_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_875_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_874_; 
v___x_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_874_, 0, v___x_873_);
return v___x_874_;
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_a_877_ = lean_ctor_get(v_x_866_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v_x_866_, 1);
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = 0;
v___x_880_ = lean_apply_2(v_f_864_, v_a_877_, lean_box(0));
v___x_881_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_878_, v___x_879_, v___x_880_, v___f_865_);
return v___x_881_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1___boxed(lean_object* v_f_882_, lean_object* v___f_883_, lean_object* v_x_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__1(v_f_882_, v___f_883_, v_x_884_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(lean_object* v_context_887_, lean_object* v_d_888_){
_start:
{
lean_object* v___y_891_; lean_object* v___y_892_; 
if (lean_obj_tag(v_d_888_) == 9)
{
lean_object* v_value_896_; lean_object* v___x_897_; 
v_value_896_ = lean_ctor_get(v_d_888_, 0);
lean_inc(v_value_896_);
lean_dec_ref_known(v_d_888_, 2);
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v_value_896_);
return v___x_897_;
}
else
{
lean_object* v___x_898_; lean_object* v_received_900_; 
v___x_898_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_888_) == 9)
{
lean_object* v_value_916_; lean_object* v_description_917_; uint8_t v___x_918_; 
v_value_916_ = lean_ctor_get(v_d_888_, 0);
v_description_917_ = lean_ctor_get(v_d_888_, 1);
v___x_918_ = lean_string_dec_eq(v_description_917_, v___x_898_);
if (v___x_918_ == 0)
{
goto v___jp_914_;
}
else
{
uint32_t v___x_919_; uint64_t v___x_920_; lean_object* v___x_921_; uint32_t v___x_922_; lean_object* v___x_923_; 
lean_inc_n(v_value_916_, 2);
lean_dec_ref_known(v_d_888_, 2);
v___x_919_ = 206;
v___x_920_ = 0ULL;
lean_inc_ref(v___x_898_);
v___x_921_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_921_, 0, v_value_916_);
lean_ctor_set(v___x_921_, 1, v___x_898_);
v___x_922_ = lasm_js_value_handle(v_value_916_);
lean_dec(v_value_916_);
v___x_923_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_919_, v___x_920_, v___x_921_, v___x_922_);
lean_dec_ref_known(v___x_921_, 2);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; uint8_t v___x_925_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_923_, 1);
v___x_925_ = lean_string_validate_utf8(v_a_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
lean_dec(v_a_924_);
v___x_926_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_927_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_928_ = lean_unsigned_to_nat(193u);
v___x_929_ = lean_unsigned_to_nat(46u);
v___x_930_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_931_ = l_mkPanicMessageWithDecl(v___x_926_, v___x_927_, v___x_928_, v___x_929_, v___x_930_);
lean_dec_ref(v___x_930_);
lean_dec_ref(v___x_927_);
lean_dec_ref(v___x_926_);
v___x_932_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_931_);
v_received_900_ = v___x_932_;
goto v___jp_899_;
}
else
{
lean_object* v___x_933_; 
v___x_933_ = lean_string_from_utf8_unchecked(v_a_924_);
v_received_900_ = v___x_933_;
goto v___jp_899_;
}
}
else
{
lean_object* v___x_934_; 
lean_dec_ref_known(v___x_923_, 1);
v___x_934_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_900_ = v___x_934_;
goto v___jp_899_;
}
}
}
else
{
goto v___jp_914_;
}
v___jp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_901_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_902_ = lean_string_append(v___x_901_, v_context_887_);
v___x_903_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_904_ = lean_string_append(v___x_902_, v___x_903_);
lean_dec_ref(v___x_903_);
v___x_905_ = lean_mk_string_unchecked("Lasm.JS.Web.Node", 16, 16);
v___x_906_ = lean_string_append(v___x_904_, v___x_905_);
lean_dec_ref(v___x_905_);
v___x_907_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_908_ = lean_string_append(v___x_906_, v___x_907_);
lean_dec_ref(v___x_907_);
v___x_909_ = lean_string_append(v___x_908_, v_received_900_);
lean_dec_ref(v_received_900_);
v___x_910_ = lean_string_utf8_byte_size(v___x_898_);
v___x_911_ = lean_unsigned_to_nat(0u);
v___x_912_ = lean_nat_dec_eq(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec_ref(v___x_898_);
v___x_913_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_891_ = v___x_909_;
v___y_892_ = v___x_913_;
goto v___jp_890_;
}
else
{
v___y_891_ = v___x_909_;
v___y_892_ = v___x_898_;
goto v___jp_890_;
}
}
v___jp_914_:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lasm_JS_Data_describe(v_d_888_);
v_received_900_ = v___x_915_;
goto v___jp_899_;
}
}
v___jp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = lean_string_append(v___y_891_, v___y_892_);
v___x_894_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
v___x_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0___boxed(lean_object* v_context_935_, lean_object* v_d_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v_context_935_, v_d_936_);
lean_dec_ref(v_context_935_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(lean_object* v_args_939_, lean_object* v_i_940_){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_942_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_943_ = lean_unsigned_to_nat(1u);
v___x_944_ = lean_nat_add(v_i_940_, v___x_943_);
v___x_945_ = l_Nat_reprFast(v___x_944_);
v___x_946_ = lean_string_append(v___x_942_, v___x_945_);
lean_dec_ref(v___x_945_);
v___x_947_ = lean_array_get_size(v_args_939_);
v___x_948_ = lean_nat_dec_lt(v_i_940_, v___x_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_box(0);
v___x_950_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v___x_946_, v___x_949_);
lean_dec_ref(v___x_946_);
return v___x_950_;
}
else
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_array_fget_borrowed(v_args_939_, v_i_940_);
lean_inc(v___x_951_);
v___x_952_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v___x_946_, v___x_951_);
lean_dec_ref(v___x_946_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0___boxed(lean_object* v_args_953_, lean_object* v_i_954_, lean_object* v_a_955_){
_start:
{
lean_object* v_res_956_; 
v_res_956_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_953_, v_i_954_);
lean_dec(v_i_954_);
lean_dec_ref(v_args_953_);
return v_res_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2(lean_object* v___f_957_, lean_object* v_args_958_){
_start:
{
lean_object* v___x_960_; uint8_t v___x_961_; lean_object* v_val_963_; lean_object* v___x_966_; 
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = 0;
v___x_966_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_958_, v___x_960_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
lean_ctor_set_tag(v___x_969_, 1);
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v_val_963_ = v___x_972_;
goto v___jp_962_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
v_a_975_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_966_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_966_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 0);
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
v_val_963_ = v___x_980_;
goto v___jp_962_;
}
}
}
v___jp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v_val_963_);
v___x_965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_960_, v___x_961_, v___x_964_, v___f_957_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2___boxed(lean_object* v___f_983_, lean_object* v_args_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__2(v___f_983_, v_args_984_);
lean_dec_ref(v_args_984_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn(lean_object* v_f_987_){
_start:
{
lean_object* v___f_989_; lean_object* v___f_990_; lean_object* v___f_991_; lean_object* v___x_992_; 
v___f_989_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__0___boxed), 2, 0);
v___f_990_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_990_, 0, v_f_987_);
lean_closure_set(v___f_990_, 1, v___f_989_);
v___f_991_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_991_, 0, v___f_990_);
v___x_992_ = l_Lasm_JS_Function_ofFn(v___f_991_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_992_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_992_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
v_a_1001_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_992_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_992_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___boxed(lean_object* v_f_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lasm_JS_Web_NodeFilter_ofFn(v_f_1009_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0(lean_object* v_f_1012_, lean_object* v_args_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_1013_, v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1016_, 1);
v___x_1018_ = lean_apply_2(v_f_1012_, v_a_1017_, lean_box(0));
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1036_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1036_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1036_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v___x_1023_ = lean_nat_to_int(v_a_1019_);
v___x_1024_ = lean_nat_abs(v___x_1023_);
v___x_1025_ = lean_cstr_to_nat("9007199254740991");
v___x_1026_ = lean_nat_dec_le(v___x_1024_, v___x_1025_);
lean_dec(v___x_1024_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1027_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1023_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v___x_1027_);
v___x_1029_ = v___x_1021_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
else
{
double v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1031_ = l_Float_ofInt(v___x_1023_);
lean_dec(v___x_1023_);
v___x_1032_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1032_, 0, v___x_1031_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 0, v___x_1032_);
v___x_1034_ = v___x_1021_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_a_1037_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1018_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1018_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec_ref(v_f_1012_);
v_a_1045_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1016_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1016_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0___boxed(lean_object* v_f_1053_, lean_object* v_args_1054_, lean_object* v___y_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0(v_f_1053_, v_args_1054_);
lean_dec_ref(v_args_1054_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn(lean_object* v_f_1057_){
_start:
{
lean_object* v___f_1059_; lean_object* v___x_1060_; 
v___f_1059_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1059_, 0, v_f_1057_);
v___x_1060_ = l_Lasm_JS_Function_ofSyncFn(v___f_1059_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1060_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1060_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___boxed(lean_object* v_f_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Web_NodeFilter_ofSyncFn(v_f_1077_);
return v_res_1079_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSXPathNSResolver(void){
_start:
{
lean_object* v___f_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; lean_object* v___x_1084_; 
v___f_1081_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_1082_ = lean_mk_string_unchecked("Lasm.JS.Web.XPathNSResolver", 27, 27);
v___x_1083_ = 0;
v___x_1084_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1084_, 0, v___f_1081_);
lean_ctor_set(v___x_1084_, 1, v___x_1082_);
lean_ctor_set_uint8(v___x_1084_, sizeof(void*)*2, v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0(lean_object* v_x_1085_){
_start:
{
lean_object* v___y_1088_; 
if (lean_obj_tag(v_x_1085_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1099_; 
v_a_1091_ = lean_ctor_get(v_x_1085_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v_x_1085_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1093_ = v_x_1085_;
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v_x_1085_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1099_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
}
}
else
{
lean_object* v_a_1100_; 
v_a_1100_ = lean_ctor_get(v_x_1085_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v_x_1085_, 1);
if (lean_obj_tag(v_a_1100_) == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_box(1);
v___y_1088_ = v___x_1101_;
goto v___jp_1087_;
}
else
{
lean_object* v_val_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_val_1102_ = lean_ctor_get(v_a_1100_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_a_1100_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v_a_1100_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_val_1102_);
lean_dec(v_a_1100_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
lean_ctor_set_tag(v___x_1104_, 4);
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_val_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
v___y_1088_ = v___x_1107_;
goto v___jp_1087_;
}
}
}
}
v___jp_1087_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___y_1088_);
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0___boxed(lean_object* v_x_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0(v_x_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1(lean_object* v_f_1113_, lean_object* v___f_1114_, lean_object* v_x_1115_){
_start:
{
if (lean_obj_tag(v_x_1115_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref(v___f_1114_);
lean_dec_ref(v_f_1113_);
v_a_1117_ = lean_ctor_get(v_x_1115_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v_x_1115_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1119_ = v_x_1115_;
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v_x_1115_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1125_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
return v___x_1123_;
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v_a_1126_ = lean_ctor_get(v_x_1115_, 0);
lean_inc(v_a_1126_);
lean_dec_ref_known(v_x_1115_, 1);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = 0;
v___x_1129_ = lean_apply_2(v_f_1113_, v_a_1126_, lean_box(0));
v___x_1130_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1127_, v___x_1128_, v___x_1129_, v___f_1114_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1___boxed(lean_object* v_f_1131_, lean_object* v___f_1132_, lean_object* v_x_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1(v_f_1131_, v___f_1132_, v_x_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2(lean_object* v___f_1136_, lean_object* v_args_1137_){
_start:
{
lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v_val_1142_; lean_object* v___x_1145_; 
v___x_1139_ = lean_unsigned_to_nat(0u);
v___x_1140_ = 0;
v___x_1145_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_OnErrorEventHandlerNonNull_ofFn_spec__2(v_args_1137_, v___x_1139_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
lean_ctor_set_tag(v___x_1148_, 1);
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
v_val_1142_ = v___x_1151_;
goto v___jp_1141_;
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
v_a_1154_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1145_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1145_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
v_val_1142_ = v___x_1159_;
goto v___jp_1141_;
}
}
}
v___jp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_val_1142_);
v___x_1144_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1139_, v___x_1140_, v___x_1143_, v___f_1136_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2___boxed(lean_object* v___f_1162_, lean_object* v_args_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2(v___f_1162_, v_args_1163_);
lean_dec_ref(v_args_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn(lean_object* v_f_1166_){
_start:
{
lean_object* v___f_1168_; lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; 
v___f_1168_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0___boxed), 2, 0);
v___f_1169_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1169_, 0, v_f_1166_);
lean_closure_set(v___f_1169_, 1, v___f_1168_);
v___f_1170_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1170_, 0, v___f_1169_);
v___x_1171_ = l_Lasm_JS_Function_ofFn(v___f_1170_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
v_a_1180_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1171_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1171_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___boxed(lean_object* v_f_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lasm_JS_Web_XPathNSResolver_ofFn(v_f_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0(lean_object* v_f_1191_, lean_object* v_args_1192_){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_OnErrorEventHandlerNonNull_ofFn_spec__2(v_args_1192_, v___x_1194_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_a_1196_; lean_object* v___x_1197_; 
v_a_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = lean_apply_2(v_f_1191_, v_a_1196_, lean_box(0));
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1217_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1200_ = v___x_1197_;
v_isShared_1201_ = v_isSharedCheck_1217_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1197_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1217_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
if (lean_obj_tag(v_a_1198_) == 0)
{
lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1202_ = lean_box(1);
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 0, v___x_1202_);
v___x_1204_ = v___x_1200_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1202_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
else
{
lean_object* v_val_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1216_; 
v_val_1206_ = lean_ctor_get(v_a_1198_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_a_1198_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1208_ = v_a_1198_;
v_isShared_1209_ = v_isSharedCheck_1216_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_val_1206_);
lean_dec(v_a_1198_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1216_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1211_; 
if (v_isShared_1209_ == 0)
{
lean_ctor_set_tag(v___x_1208_, 4);
v___x_1211_ = v___x_1208_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_val_1206_);
v___x_1211_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1213_; 
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 0, v___x_1211_);
v___x_1213_ = v___x_1200_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
v_a_1218_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1197_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1197_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec_ref(v_f_1191_);
v_a_1226_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1195_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1195_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0___boxed(lean_object* v_f_1234_, lean_object* v_args_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0(v_f_1234_, v_args_1235_);
lean_dec_ref(v_args_1235_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn(lean_object* v_f_1238_){
_start:
{
lean_object* v___f_1240_; lean_object* v___x_1241_; 
v___f_1240_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1240_, 0, v_f_1238_);
v___x_1241_ = l_Lasm_JS_Function_ofSyncFn(v___f_1240_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_a_1250_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1241_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1241_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___boxed(lean_object* v_f_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lasm_JS_Web_XPathNSResolver_ofSyncFn(v_f_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object* v___f_1261_, lean_object* v_d_1262_){
_start:
{
lean_object* v_bubbles_1263_; lean_object* v_cancelable_1264_; lean_object* v_composed_1265_; lean_object* v_detail_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
v_bubbles_1263_ = lean_ctor_get(v_d_1262_, 0);
lean_inc(v_bubbles_1263_);
v_cancelable_1264_ = lean_ctor_get(v_d_1262_, 1);
lean_inc(v_cancelable_1264_);
v_composed_1265_ = lean_ctor_get(v_d_1262_, 2);
lean_inc(v_composed_1265_);
v_detail_1266_ = lean_ctor_get(v_d_1262_, 3);
lean_inc(v_detail_1266_);
lean_dec_ref(v_d_1262_);
v___x_1267_ = lean_mk_string_unchecked("bubbles", 7, 7);
lean_inc_ref_n(v___f_1261_, 2);
v___x_1268_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1261_, v_bubbles_1263_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___x_1270_ = lean_mk_string_unchecked("cancelable", 10, 10);
v___x_1271_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1261_, v_cancelable_1264_);
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
v___x_1273_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_1274_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1261_, v_composed_1265_);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1273_);
lean_ctor_set(v___x_1275_, 1, v___x_1274_);
v___x_1276_ = lean_mk_string_unchecked("detail", 6, 6);
v___x_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
lean_ctor_set(v___x_1277_, 1, v_detail_1266_);
v___x_1278_ = lean_unsigned_to_nat(4u);
v___x_1279_ = lean_mk_empty_array_with_capacity(v___x_1278_);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1269_);
v___x_1281_ = lean_array_push(v___x_1280_, v___x_1272_);
v___x_1282_ = lean_array_push(v___x_1281_, v___x_1275_);
v___x_1283_ = lean_array_push(v___x_1282_, v___x_1277_);
v___x_1284_ = l_Lasm_JS_Web_Internal_fields(v___x_1283_);
lean_dec_ref(v___x_1283_);
return v___x_1284_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSCustomEventInit(void){
_start:
{
lean_object* v___f_1285_; lean_object* v___f_1286_; 
v___f_1285_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1286_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0), 2, 1);
lean_closure_set(v___f_1286_, 0, v___f_1285_);
return v___f_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGetRootNodeOptions___lam__0(lean_object* v___f_1287_, lean_object* v_d_1288_){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1289_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_1290_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1287_, v_d_1288_);
v___x_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = lean_unsigned_to_nat(1u);
v___x_1293_ = lean_mk_empty_array_with_capacity(v___x_1292_);
v___x_1294_ = lean_array_push(v___x_1293_, v___x_1291_);
v___x_1295_ = l_Lasm_JS_Web_Internal_fields(v___x_1294_);
lean_dec_ref(v___x_1294_);
return v___x_1295_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSGetRootNodeOptions(void){
_start:
{
lean_object* v___f_1296_; lean_object* v___f_1297_; 
v___f_1296_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1297_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSGetRootNodeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1297_, 0, v___f_1296_);
return v___f_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStaticRangeInit___lam__0(lean_object* v_d_1298_){
_start:
{
lean_object* v_startContainer_1299_; lean_object* v_startOffset_1300_; lean_object* v_endContainer_1301_; lean_object* v_endOffset_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; lean_object* v___x_1320_; lean_object* v___y_1322_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; uint8_t v___x_1338_; 
v_startContainer_1299_ = lean_ctor_get(v_d_1298_, 0);
lean_inc(v_startContainer_1299_);
v_startOffset_1300_ = lean_ctor_get(v_d_1298_, 1);
lean_inc(v_startOffset_1300_);
v_endContainer_1301_ = lean_ctor_get(v_d_1298_, 2);
lean_inc(v_endContainer_1301_);
v_endOffset_1302_ = lean_ctor_get(v_d_1298_, 3);
lean_inc(v_endOffset_1302_);
lean_dec_ref(v_d_1298_);
v___x_1303_ = lean_mk_string_unchecked("startContainer", 14, 14);
v___x_1304_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref(v___x_1304_);
v___x_1305_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1305_, 0, v_startContainer_1299_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1303_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1320_ = lean_mk_string_unchecked("startOffset", 11, 11);
v___x_1335_ = lean_nat_to_int(v_startOffset_1300_);
v___x_1336_ = lean_nat_abs(v___x_1335_);
v___x_1337_ = lean_cstr_to_nat("9007199254740991");
v___x_1338_ = lean_nat_dec_le(v___x_1336_, v___x_1337_);
lean_dec(v___x_1336_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1335_);
v___y_1322_ = v___x_1339_;
goto v___jp_1321_;
}
else
{
double v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = l_Float_ofInt(v___x_1335_);
lean_dec(v___x_1335_);
v___x_1341_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1341_, 0, v___x_1340_);
v___y_1322_ = v___x_1341_;
goto v___jp_1321_;
}
v___jp_1307_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___y_1310_);
lean_ctor_set(v___x_1312_, 1, v___y_1311_);
v___x_1313_ = lean_unsigned_to_nat(4u);
v___x_1314_ = lean_mk_empty_array_with_capacity(v___x_1313_);
v___x_1315_ = lean_array_push(v___x_1314_, v___x_1306_);
v___x_1316_ = lean_array_push(v___x_1315_, v___y_1309_);
v___x_1317_ = lean_array_push(v___x_1316_, v___y_1308_);
v___x_1318_ = lean_array_push(v___x_1317_, v___x_1312_);
v___x_1319_ = l_Lasm_JS_Web_Internal_fields(v___x_1318_);
lean_dec_ref(v___x_1318_);
return v___x_1319_;
}
v___jp_1321_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1320_);
lean_ctor_set(v___x_1323_, 1, v___y_1322_);
v___x_1324_ = lean_mk_string_unchecked("endContainer", 12, 12);
v___x_1325_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1325_, 0, v_endContainer_1301_);
lean_ctor_set(v___x_1325_, 1, v___x_1304_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1324_);
lean_ctor_set(v___x_1326_, 1, v___x_1325_);
v___x_1327_ = lean_mk_string_unchecked("endOffset", 9, 9);
v___x_1328_ = lean_nat_to_int(v_endOffset_1302_);
v___x_1329_ = lean_nat_abs(v___x_1328_);
v___x_1330_ = lean_cstr_to_nat("9007199254740991");
v___x_1331_ = lean_nat_dec_le(v___x_1329_, v___x_1330_);
lean_dec(v___x_1329_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
v___x_1332_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1328_);
v___y_1308_ = v___x_1326_;
v___y_1309_ = v___x_1323_;
v___y_1310_ = v___x_1327_;
v___y_1311_ = v___x_1332_;
goto v___jp_1307_;
}
else
{
double v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = l_Float_ofInt(v___x_1328_);
lean_dec(v___x_1328_);
v___x_1334_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1334_, 0, v___x_1333_);
v___y_1308_ = v___x_1326_;
v___y_1309_ = v___x_1323_;
v___y_1310_ = v___x_1327_;
v___y_1311_ = v___x_1334_;
goto v___jp_1307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx(lean_object* v_x_1343_){
_start:
{
if (lean_obj_tag(v_x_1343_) == 0)
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_unsigned_to_nat(0u);
return v___x_1344_;
}
else
{
lean_object* v___x_1345_; 
v___x_1345_ = lean_unsigned_to_nat(1u);
return v___x_1345_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx___boxed(lean_object* v_x_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lasm_JS_Web_NodeOrDOMString_ctorIdx(v_x_1346_);
lean_dec_ref(v_x_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(lean_object* v_t_1348_, lean_object* v_k_1349_){
_start:
{
if (lean_obj_tag(v_t_1348_) == 0)
{
lean_object* v_value_1350_; lean_object* v___x_1351_; 
v_value_1350_ = lean_ctor_get(v_t_1348_, 0);
lean_inc(v_value_1350_);
lean_dec_ref_known(v_t_1348_, 1);
v___x_1351_ = lean_apply_1(v_k_1349_, v_value_1350_);
return v___x_1351_;
}
else
{
lean_object* v_value_1352_; lean_object* v___x_1353_; 
v_value_1352_ = lean_ctor_get(v_t_1348_, 0);
lean_inc_ref(v_value_1352_);
lean_dec_ref_known(v_t_1348_, 1);
v___x_1353_ = lean_apply_1(v_k_1349_, v_value_1352_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim(lean_object* v_motive_1354_, lean_object* v_ctorIdx_1355_, lean_object* v_t_1356_, lean_object* v_h_1357_, lean_object* v_k_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1356_, v_k_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___boxed(lean_object* v_motive_1360_, lean_object* v_ctorIdx_1361_, lean_object* v_t_1362_, lean_object* v_h_1363_, lean_object* v_k_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim(v_motive_1360_, v_ctorIdx_1361_, v_t_1362_, v_h_1363_, v_k_1364_);
lean_dec(v_ctorIdx_1361_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim___redArg(lean_object* v_t_1366_, lean_object* v_node_1367_){
_start:
{
lean_object* v___x_1368_; 
v___x_1368_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1366_, v_node_1367_);
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim(lean_object* v_motive_1369_, lean_object* v_t_1370_, lean_object* v_h_1371_, lean_object* v_node_1372_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1370_, v_node_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim___redArg(lean_object* v_t_1374_, lean_object* v_domString_1375_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1374_, v_domString_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim(lean_object* v_motive_1377_, lean_object* v_t_1378_, lean_object* v_h_1379_, lean_object* v_domString_1380_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1378_, v_domString_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSNodeOrDOMString___lam__0(lean_object* v_x_1382_){
_start:
{
if (lean_obj_tag(v_x_1382_) == 0)
{
lean_object* v_value_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v_value_1383_ = lean_ctor_get(v_x_1382_, 0);
lean_inc(v_value_1383_);
lean_dec_ref_known(v_x_1382_, 1);
v___x_1384_ = lean_mk_string_unchecked("", 0, 0);
v___x_1385_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1385_, 0, v_value_1383_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
return v___x_1385_;
}
else
{
lean_object* v_value_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
v_value_1386_ = lean_ctor_get(v_x_1382_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_x_1382_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v_x_1382_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_value_1386_);
lean_dec(v_x_1382_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set_tag(v___x_1388_, 4);
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_value_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeNodeNodeOrDOMString___lam__0(lean_object* v_value_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v_value_1395_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringNodeOrDOMString___lam__0(lean_object* v_value_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1399_, 0, v_value_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSElementCreationOptions___lam__0(lean_object* v___f_1401_, lean_object* v___f_1402_, lean_object* v_d_1403_){
_start:
{
lean_object* v_customElementRegistry_1404_; lean_object* v_is_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1422_; 
v_customElementRegistry_1404_ = lean_ctor_get(v_d_1403_, 0);
v_is_1405_ = lean_ctor_get(v_d_1403_, 1);
v_isSharedCheck_1422_ = !lean_is_exclusive(v_d_1403_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1407_ = v_d_1403_;
v_isShared_1408_ = v_isSharedCheck_1422_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_is_1405_);
lean_inc(v_customElementRegistry_1404_);
lean_dec(v_d_1403_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1422_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1409_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1410_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1401_, v_customElementRegistry_1404_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 1, v___x_1410_);
lean_ctor_set(v___x_1407_, 0, v___x_1409_);
v___x_1412_ = v___x_1407_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v___x_1413_ = lean_mk_string_unchecked("is", 2, 2);
v___x_1414_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1402_, v_is_1405_);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1413_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
v___x_1416_ = lean_unsigned_to_nat(2u);
v___x_1417_ = lean_mk_empty_array_with_capacity(v___x_1416_);
v___x_1418_ = lean_array_push(v___x_1417_, v___x_1412_);
v___x_1419_ = lean_array_push(v___x_1418_, v___x_1415_);
v___x_1420_ = l_Lasm_JS_Web_Internal_fields(v___x_1419_);
lean_dec_ref(v___x_1419_);
return v___x_1420_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSElementCreationOptions(void){
_start:
{
lean_object* v___f_1423_; lean_object* v___f_1424_; lean_object* v___f_1425_; 
v___f_1423_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1424_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1425_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSElementCreationOptions___lam__0), 3, 2);
lean_closure_set(v___f_1425_, 0, v___f_1423_);
lean_closure_set(v___f_1425_, 1, v___f_1424_);
return v___f_1425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx(lean_object* v_x_1426_){
_start:
{
if (lean_obj_tag(v_x_1426_) == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_unsigned_to_nat(0u);
return v___x_1427_;
}
else
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_unsigned_to_nat(1u);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx___boxed(lean_object* v_x_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx(v_x_1429_);
lean_dec_ref(v_x_1429_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(lean_object* v_t_1431_, lean_object* v_k_1432_){
_start:
{
lean_object* v_value_1433_; lean_object* v___x_1434_; 
v_value_1433_ = lean_ctor_get(v_t_1431_, 0);
lean_inc_ref(v_value_1433_);
lean_dec_ref(v_t_1431_);
v___x_1434_ = lean_apply_1(v_k_1432_, v_value_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim(lean_object* v_motive_1435_, lean_object* v_ctorIdx_1436_, lean_object* v_t_1437_, lean_object* v_h_1438_, lean_object* v_k_1439_){
_start:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1437_, v_k_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___boxed(lean_object* v_motive_1441_, lean_object* v_ctorIdx_1442_, lean_object* v_t_1443_, lean_object* v_h_1444_, lean_object* v_k_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim(v_motive_1441_, v_ctorIdx_1442_, v_t_1443_, v_h_1444_, v_k_1445_);
lean_dec(v_ctorIdx_1442_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim___redArg(lean_object* v_t_1447_, lean_object* v_domString_1448_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1447_, v_domString_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim(lean_object* v_motive_1450_, lean_object* v_t_1451_, lean_object* v_h_1452_, lean_object* v_domString_1453_){
_start:
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1451_, v_domString_1453_);
return v___x_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim___redArg(lean_object* v_t_1455_, lean_object* v_elementCreationOptions_1456_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1455_, v_elementCreationOptions_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim(lean_object* v_motive_1458_, lean_object* v_t_1459_, lean_object* v_h_1460_, lean_object* v_elementCreationOptions_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1459_, v_elementCreationOptions_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions___lam__0(lean_object* v_x_1463_){
_start:
{
if (lean_obj_tag(v_x_1463_) == 0)
{
lean_object* v_value_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
v_value_1464_ = lean_ctor_get(v_x_1463_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_x_1463_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v_x_1463_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_value_1464_);
lean_dec(v_x_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
lean_ctor_set_tag(v___x_1466_, 4);
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_value_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
else
{
lean_object* v_value_1472_; lean_object* v_customElementRegistry_1473_; lean_object* v_is_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1493_; 
v_value_1472_ = lean_ctor_get(v_x_1463_, 0);
lean_inc_ref(v_value_1472_);
lean_dec_ref_known(v_x_1463_, 1);
v_customElementRegistry_1473_ = lean_ctor_get(v_value_1472_, 0);
v_is_1474_ = lean_ctor_get(v_value_1472_, 1);
v_isSharedCheck_1493_ = !lean_is_exclusive(v_value_1472_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1476_ = v_value_1472_;
v_isShared_1477_ = v_isSharedCheck_1493_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_is_1474_);
lean_inc(v_customElementRegistry_1473_);
lean_dec(v_value_1472_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1493_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___f_1478_; lean_object* v___f_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1483_; 
v___f_1478_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1479_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1480_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1481_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1478_, v_customElementRegistry_1473_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 1, v___x_1481_);
lean_ctor_set(v___x_1476_, 0, v___x_1480_);
v___x_1483_ = v___x_1476_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1480_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v___x_1481_);
v___x_1483_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1484_ = lean_mk_string_unchecked("is", 2, 2);
v___x_1485_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1479_, v_is_1474_);
v___x_1486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1484_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
v___x_1487_ = lean_unsigned_to_nat(2u);
v___x_1488_ = lean_mk_empty_array_with_capacity(v___x_1487_);
v___x_1489_ = lean_array_push(v___x_1488_, v___x_1483_);
v___x_1490_ = lean_array_push(v___x_1489_, v___x_1486_);
v___x_1491_ = l_Lasm_JS_Web_Internal_fields(v___x_1490_);
lean_dec_ref(v___x_1490_);
return v___x_1491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions___lam__0(lean_object* v_value_1495_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_value_1495_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions___lam__0(lean_object* v_value_1498_){
_start:
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_value_1498_);
return v___x_1499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportNodeOptions___lam__0(lean_object* v___f_1501_, lean_object* v___f_1502_, lean_object* v_d_1503_){
_start:
{
lean_object* v_customElementRegistry_1504_; lean_object* v_selfOnly_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1522_; 
v_customElementRegistry_1504_ = lean_ctor_get(v_d_1503_, 0);
v_selfOnly_1505_ = lean_ctor_get(v_d_1503_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_d_1503_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1507_ = v_d_1503_;
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_selfOnly_1505_);
lean_inc(v_customElementRegistry_1504_);
lean_dec(v_d_1503_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1522_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1509_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1510_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1501_, v_customElementRegistry_1504_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 1, v___x_1510_);
lean_ctor_set(v___x_1507_, 0, v___x_1509_);
v___x_1512_ = v___x_1507_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1513_ = lean_mk_string_unchecked("selfOnly", 8, 8);
v___x_1514_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1502_, v_selfOnly_1505_);
v___x_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1513_);
lean_ctor_set(v___x_1515_, 1, v___x_1514_);
v___x_1516_ = lean_unsigned_to_nat(2u);
v___x_1517_ = lean_mk_empty_array_with_capacity(v___x_1516_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1512_);
v___x_1519_ = lean_array_push(v___x_1518_, v___x_1515_);
v___x_1520_ = l_Lasm_JS_Web_Internal_fields(v___x_1519_);
lean_dec_ref(v___x_1519_);
return v___x_1520_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSImportNodeOptions(void){
_start:
{
lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___f_1525_; 
v___f_1523_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1524_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1525_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSImportNodeOptions___lam__0), 3, 2);
lean_closure_set(v___f_1525_, 0, v___f_1523_);
lean_closure_set(v___f_1525_, 1, v___f_1524_);
return v___f_1525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx(lean_object* v_x_1526_){
_start:
{
if (lean_obj_tag(v_x_1526_) == 0)
{
lean_object* v___x_1527_; 
v___x_1527_ = lean_unsigned_to_nat(0u);
return v___x_1527_;
}
else
{
lean_object* v___x_1528_; 
v___x_1528_ = lean_unsigned_to_nat(1u);
return v___x_1528_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx___boxed(lean_object* v_x_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx(v_x_1529_);
lean_dec_ref(v_x_1529_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(lean_object* v_t_1531_, lean_object* v_k_1532_){
_start:
{
if (lean_obj_tag(v_t_1531_) == 0)
{
uint8_t v_value_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v_value_1533_ = lean_ctor_get_uint8(v_t_1531_, 0);
lean_dec_ref_known(v_t_1531_, 0);
v___x_1534_ = lean_box(v_value_1533_);
v___x_1535_ = lean_apply_1(v_k_1532_, v___x_1534_);
return v___x_1535_;
}
else
{
lean_object* v_value_1536_; lean_object* v___x_1537_; 
v_value_1536_ = lean_ctor_get(v_t_1531_, 0);
lean_inc_ref(v_value_1536_);
lean_dec_ref_known(v_t_1531_, 1);
v___x_1537_ = lean_apply_1(v_k_1532_, v_value_1536_);
return v___x_1537_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim(lean_object* v_motive_1538_, lean_object* v_ctorIdx_1539_, lean_object* v_t_1540_, lean_object* v_h_1541_, lean_object* v_k_1542_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1540_, v_k_1542_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___boxed(lean_object* v_motive_1544_, lean_object* v_ctorIdx_1545_, lean_object* v_t_1546_, lean_object* v_h_1547_, lean_object* v_k_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim(v_motive_1544_, v_ctorIdx_1545_, v_t_1546_, v_h_1547_, v_k_1548_);
lean_dec(v_ctorIdx_1545_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim___redArg(lean_object* v_t_1550_, lean_object* v_boolean_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1550_, v_boolean_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim(lean_object* v_motive_1553_, lean_object* v_t_1554_, lean_object* v_h_1555_, lean_object* v_boolean_1556_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1554_, v_boolean_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim___redArg(lean_object* v_t_1558_, lean_object* v_importNodeOptions_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1558_, v_importNodeOptions_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim(lean_object* v_motive_1561_, lean_object* v_t_1562_, lean_object* v_h_1563_, lean_object* v_importNodeOptions_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1562_, v_importNodeOptions_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions___lam__0(lean_object* v_x_1566_){
_start:
{
if (lean_obj_tag(v_x_1566_) == 0)
{
uint8_t v_value_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
v_value_1567_ = lean_ctor_get_uint8(v_x_1566_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_x_1566_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v_x_1566_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_dec(v_x_1566_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
lean_ctor_set_tag(v___x_1569_, 2);
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1573_, 0, v_value_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
else
{
lean_object* v_value_1575_; lean_object* v_customElementRegistry_1576_; lean_object* v_selfOnly_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1596_; 
v_value_1575_ = lean_ctor_get(v_x_1566_, 0);
lean_inc_ref(v_value_1575_);
lean_dec_ref_known(v_x_1566_, 1);
v_customElementRegistry_1576_ = lean_ctor_get(v_value_1575_, 0);
v_selfOnly_1577_ = lean_ctor_get(v_value_1575_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_value_1575_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1579_ = v_value_1575_;
v_isShared_1580_ = v_isSharedCheck_1596_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_selfOnly_1577_);
lean_inc(v_customElementRegistry_1576_);
lean_dec(v_value_1575_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1596_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___f_1581_; lean_object* v___f_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___f_1581_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1582_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_1583_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1584_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1581_, v_customElementRegistry_1576_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 1, v___x_1584_);
lean_ctor_set(v___x_1579_, 0, v___x_1583_);
v___x_1586_ = v___x_1579_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v___x_1587_ = lean_mk_string_unchecked("selfOnly", 8, 8);
v___x_1588_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1582_, v_selfOnly_1577_);
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_unsigned_to_nat(2u);
v___x_1591_ = lean_mk_empty_array_with_capacity(v___x_1590_);
v___x_1592_ = lean_array_push(v___x_1591_, v___x_1586_);
v___x_1593_ = lean_array_push(v___x_1592_, v___x_1589_);
v___x_1594_ = l_Lasm_JS_Web_Internal_fields(v___x_1593_);
lean_dec_ref(v___x_1593_);
return v___x_1594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0(uint8_t v_value_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1599_, 0, v_value_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0___boxed(lean_object* v_value_1600_){
_start:
{
uint8_t v_value_boxed_1601_; lean_object* v_res_1602_; 
v_value_boxed_1601_ = lean_unbox(v_value_1600_);
v_res_1602_ = l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0(v_value_boxed_1601_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions___lam__0(lean_object* v_value_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1605_, 0, v_value_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx(lean_object* v_x_1607_){
_start:
{
switch(lean_obj_tag(v_x_1607_))
{
case 0:
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_unsigned_to_nat(0u);
return v___x_1608_;
}
case 1:
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_unsigned_to_nat(1u);
return v___x_1609_;
}
case 2:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_unsigned_to_nat(2u);
return v___x_1610_;
}
default: 
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_unsigned_to_nat(3u);
return v___x_1611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx___boxed(lean_object* v_x_1612_){
_start:
{
lean_object* v_res_1613_; 
v_res_1613_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx(v_x_1612_);
lean_dec_ref(v_x_1612_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(lean_object* v_t_1614_, lean_object* v_k_1615_){
_start:
{
if (lean_obj_tag(v_t_1614_) == 3)
{
lean_object* v_value_1616_; lean_object* v___x_1617_; 
v_value_1616_ = lean_ctor_get(v_t_1614_, 0);
lean_inc_ref(v_value_1616_);
lean_dec_ref_known(v_t_1614_, 1);
v___x_1617_ = lean_apply_1(v_k_1615_, v_value_1616_);
return v___x_1617_;
}
else
{
lean_object* v_value_1618_; lean_object* v___x_1619_; 
v_value_1618_ = lean_ctor_get(v_t_1614_, 0);
lean_inc(v_value_1618_);
lean_dec_ref(v_t_1614_);
v___x_1619_ = lean_apply_1(v_k_1615_, v_value_1618_);
return v___x_1619_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim(lean_object* v_motive_1620_, lean_object* v_ctorIdx_1621_, lean_object* v_t_1622_, lean_object* v_h_1623_, lean_object* v_k_1624_){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1622_, v_k_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___boxed(lean_object* v_motive_1626_, lean_object* v_ctorIdx_1627_, lean_object* v_t_1628_, lean_object* v_h_1629_, lean_object* v_k_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim(v_motive_1626_, v_ctorIdx_1627_, v_t_1628_, v_h_1629_, v_k_1630_);
lean_dec(v_ctorIdx_1627_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim___redArg(lean_object* v_t_1632_, lean_object* v_trustedHTML_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1632_, v_trustedHTML_1633_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim(lean_object* v_motive_1635_, lean_object* v_t_1636_, lean_object* v_h_1637_, lean_object* v_trustedHTML_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1636_, v_trustedHTML_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim___redArg(lean_object* v_t_1640_, lean_object* v_trustedScript_1641_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1640_, v_trustedScript_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim(lean_object* v_motive_1643_, lean_object* v_t_1644_, lean_object* v_h_1645_, lean_object* v_trustedScript_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1644_, v_trustedScript_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim___redArg(lean_object* v_t_1648_, lean_object* v_trustedScriptURL_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1648_, v_trustedScriptURL_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim(lean_object* v_motive_1651_, lean_object* v_t_1652_, lean_object* v_h_1653_, lean_object* v_trustedScriptURL_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1652_, v_trustedScriptURL_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim___redArg(lean_object* v_t_1656_, lean_object* v_domString_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1656_, v_domString_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim(lean_object* v_motive_1659_, lean_object* v_t_1660_, lean_object* v_h_1661_, lean_object* v_domString_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1660_, v_domString_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_x_1664_){
_start:
{
if (lean_obj_tag(v_x_1664_) == 3)
{
lean_object* v_value_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1672_; 
v_value_1665_ = lean_ctor_get(v_x_1664_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_x_1664_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1667_ = v_x_1664_;
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_value_1665_);
lean_dec(v_x_1664_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1672_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
lean_object* v___x_1670_; 
if (v_isShared_1668_ == 0)
{
lean_ctor_set_tag(v___x_1667_, 4);
v___x_1670_ = v___x_1667_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_value_1665_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
else
{
lean_object* v_value_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v_value_1673_ = lean_ctor_get(v_x_1664_, 0);
lean_inc(v_value_1673_);
lean_dec_ref(v_x_1664_);
v___x_1674_ = lean_mk_string_unchecked("", 0, 0);
v___x_1675_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_value_1673_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
return v___x_1675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1678_, 0, v_value_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1681_, 0, v_value_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1683_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1684_, 0, v_value_1683_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1686_){
_start:
{
lean_object* v___x_1687_; 
v___x_1687_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_value_1686_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSShadowRootInit___lam__0(lean_object* v___f_1689_, lean_object* v___f_1690_, lean_object* v___f_1691_, lean_object* v_d_1692_){
_start:
{
lean_object* v_mode_1693_; lean_object* v_delegatesFocus_1694_; lean_object* v_serializable_1695_; lean_object* v_slotAssignment_1696_; lean_object* v_clonable_1697_; lean_object* v_customElementRegistry_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v_mode_1693_ = lean_ctor_get(v_d_1692_, 0);
lean_inc_ref(v_mode_1693_);
v_delegatesFocus_1694_ = lean_ctor_get(v_d_1692_, 1);
lean_inc(v_delegatesFocus_1694_);
v_serializable_1695_ = lean_ctor_get(v_d_1692_, 2);
lean_inc(v_serializable_1695_);
v_slotAssignment_1696_ = lean_ctor_get(v_d_1692_, 3);
lean_inc(v_slotAssignment_1696_);
v_clonable_1697_ = lean_ctor_get(v_d_1692_, 4);
lean_inc(v_clonable_1697_);
v_customElementRegistry_1698_ = lean_ctor_get(v_d_1692_, 5);
lean_inc(v_customElementRegistry_1698_);
lean_dec_ref(v_d_1692_);
v___x_1699_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1700_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_mode_1693_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = lean_mk_string_unchecked("delegatesFocus", 14, 14);
lean_inc_ref_n(v___f_1689_, 2);
v___x_1703_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_delegatesFocus_1694_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_mk_string_unchecked("serializable", 12, 12);
v___x_1706_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_serializable_1695_);
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v___x_1705_);
lean_ctor_set(v___x_1707_, 1, v___x_1706_);
v___x_1708_ = lean_mk_string_unchecked("slotAssignment", 14, 14);
v___x_1709_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1690_, v_slotAssignment_1696_);
v___x_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1708_);
lean_ctor_set(v___x_1710_, 1, v___x_1709_);
v___x_1711_ = lean_mk_string_unchecked("clonable", 8, 8);
v___x_1712_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1689_, v_clonable_1697_);
v___x_1713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1711_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1715_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1691_, v_customElementRegistry_1698_);
v___x_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1714_);
lean_ctor_set(v___x_1716_, 1, v___x_1715_);
v___x_1717_ = lean_unsigned_to_nat(6u);
v___x_1718_ = lean_mk_empty_array_with_capacity(v___x_1717_);
v___x_1719_ = lean_array_push(v___x_1718_, v___x_1701_);
v___x_1720_ = lean_array_push(v___x_1719_, v___x_1704_);
v___x_1721_ = lean_array_push(v___x_1720_, v___x_1707_);
v___x_1722_ = lean_array_push(v___x_1721_, v___x_1710_);
v___x_1723_ = lean_array_push(v___x_1722_, v___x_1713_);
v___x_1724_ = lean_array_push(v___x_1723_, v___x_1716_);
v___x_1725_ = l_Lasm_JS_Web_Internal_fields(v___x_1724_);
lean_dec_ref(v___x_1724_);
return v___x_1725_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSShadowRootInit(void){
_start:
{
lean_object* v___f_1726_; lean_object* v___f_1727_; lean_object* v___f_1728_; lean_object* v___f_1729_; 
v___f_1726_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1727_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSShadowRootMode___lam__0), 1, 0);
v___f_1728_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1729_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSShadowRootInit___lam__0), 4, 3);
lean_closure_set(v___f_1729_, 0, v___f_1726_);
lean_closure_set(v___f_1729_, 1, v___f_1727_);
lean_closure_set(v___f_1729_, 2, v___f_1728_);
return v___f_1729_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_NONE(void){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_unsigned_to_nat(0u);
return v___x_1730_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE(void){
_start:
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_unsigned_to_nat(1u);
return v___x_1731_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_AT__TARGET(void){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_unsigned_to_nat(2u);
return v___x_1732_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE(void){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_unsigned_to_nat(3u);
return v___x_1733_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ANY__TYPE(void){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = lean_unsigned_to_nat(0u);
return v___x_1734_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_NUMBER__TYPE(void){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_unsigned_to_nat(1u);
return v___x_1735_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_STRING__TYPE(void){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_unsigned_to_nat(2u);
return v___x_1736_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE(void){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_unsigned_to_nat(3u);
return v___x_1737_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE(void){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_unsigned_to_nat(4u);
return v___x_1738_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE(void){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_unsigned_to_nat(5u);
return v___x_1739_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE(void){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_unsigned_to_nat(6u);
return v___x_1740_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE(void){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_unsigned_to_nat(7u);
return v___x_1741_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE(void){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_unsigned_to_nat(8u);
return v___x_1742_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE(void){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_unsigned_to_nat(9u);
return v___x_1743_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ELEMENT__NODE(void){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_unsigned_to_nat(1u);
return v___x_1744_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ATTRIBUTE__NODE(void){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_unsigned_to_nat(2u);
return v___x_1745_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_TEXT__NODE(void){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_unsigned_to_nat(3u);
return v___x_1746_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_CDATA__SECTION__NODE(void){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_unsigned_to_nat(4u);
return v___x_1747_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE(void){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_unsigned_to_nat(5u);
return v___x_1748_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ENTITY__NODE(void){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_unsigned_to_nat(6u);
return v___x_1749_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE(void){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_unsigned_to_nat(7u);
return v___x_1750_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_COMMENT__NODE(void){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_unsigned_to_nat(8u);
return v___x_1751_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__NODE(void){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_unsigned_to_nat(9u);
return v___x_1752_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE(void){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_unsigned_to_nat(10u);
return v___x_1753_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_unsigned_to_nat(11u);
return v___x_1754_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_NOTATION__NODE(void){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_unsigned_to_nat(12u);
return v___x_1755_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED(void){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_unsigned_to_nat(1u);
return v___x_1756_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING(void){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_unsigned_to_nat(2u);
return v___x_1757_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING(void){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_unsigned_to_nat(4u);
return v___x_1758_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS(void){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_unsigned_to_nat(8u);
return v___x_1759_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY(void){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_unsigned_to_nat(16u);
return v___x_1760_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC(void){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_unsigned_to_nat(32u);
return v___x_1761_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_START__TO__START(void){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_unsigned_to_nat(0u);
return v___x_1762_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_START__TO__END(void){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_unsigned_to_nat(1u);
return v___x_1763_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_END__TO__END(void){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_unsigned_to_nat(2u);
return v___x_1764_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_END__TO__START(void){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_unsigned_to_nat(3u);
return v___x_1765_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Html(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_TrustedTypes(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Html(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_TrustedTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Html(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instToJSEventInit = _init_l_Lasm_JS_Web_instToJSEventInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSEventInit);
l_Lasm_JS_Web_instFromJSEventListener = _init_l_Lasm_JS_Web_instFromJSEventListener();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSEventListener);
l_Lasm_JS_Web_instToJSAddEventListenerOptions = _init_l_Lasm_JS_Web_instToJSAddEventListenerOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSAddEventListenerOptions);
l_Lasm_JS_Web_instToJSEventListenerOptions = _init_l_Lasm_JS_Web_instToJSEventListenerOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSEventListenerOptions);
l_Lasm_JS_Web_instFromJSMutationCallback = _init_l_Lasm_JS_Web_instFromJSMutationCallback();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSMutationCallback);
l_Lasm_JS_Web_instToJSMutationObserverInit = _init_l_Lasm_JS_Web_instToJSMutationObserverInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSMutationObserverInit);
l_Lasm_JS_Web_instFromJSNodeFilter = _init_l_Lasm_JS_Web_instFromJSNodeFilter();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSNodeFilter);
l_Lasm_JS_Web_instFromJSXPathNSResolver = _init_l_Lasm_JS_Web_instFromJSXPathNSResolver();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSXPathNSResolver);
l_Lasm_JS_Web_instToJSCustomEventInit = _init_l_Lasm_JS_Web_instToJSCustomEventInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSCustomEventInit);
l_Lasm_JS_Web_instToJSGetRootNodeOptions = _init_l_Lasm_JS_Web_instToJSGetRootNodeOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSGetRootNodeOptions);
l_Lasm_JS_Web_instToJSElementCreationOptions = _init_l_Lasm_JS_Web_instToJSElementCreationOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSElementCreationOptions);
l_Lasm_JS_Web_instToJSImportNodeOptions = _init_l_Lasm_JS_Web_instToJSImportNodeOptions();
lean_mark_persistent(l_Lasm_JS_Web_instToJSImportNodeOptions);
l_Lasm_JS_Web_instToJSShadowRootInit = _init_l_Lasm_JS_Web_instToJSShadowRootInit();
lean_mark_persistent(l_Lasm_JS_Web_instToJSShadowRootInit);
l_Lasm_JS_Web_Event_NONE = _init_l_Lasm_JS_Web_Event_NONE();
lean_mark_persistent(l_Lasm_JS_Web_Event_NONE);
l_Lasm_JS_Web_Event_CAPTURING__PHASE = _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE();
lean_mark_persistent(l_Lasm_JS_Web_Event_CAPTURING__PHASE);
l_Lasm_JS_Web_Event_AT__TARGET = _init_l_Lasm_JS_Web_Event_AT__TARGET();
lean_mark_persistent(l_Lasm_JS_Web_Event_AT__TARGET);
l_Lasm_JS_Web_Event_BUBBLING__PHASE = _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE();
lean_mark_persistent(l_Lasm_JS_Web_Event_BUBBLING__PHASE);
l_Lasm_JS_Web_XPathResult_ANY__TYPE = _init_l_Lasm_JS_Web_XPathResult_ANY__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_ANY__TYPE);
l_Lasm_JS_Web_XPathResult_NUMBER__TYPE = _init_l_Lasm_JS_Web_XPathResult_NUMBER__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_NUMBER__TYPE);
l_Lasm_JS_Web_XPathResult_STRING__TYPE = _init_l_Lasm_JS_Web_XPathResult_STRING__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_STRING__TYPE);
l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE = _init_l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE);
l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE = _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE);
l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE = _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE);
l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE = _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE);
l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE = _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE);
l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE = _init_l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE);
l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE = _init_l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE();
lean_mark_persistent(l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE);
l_Lasm_JS_Web_Node_ELEMENT__NODE = _init_l_Lasm_JS_Web_Node_ELEMENT__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_ELEMENT__NODE);
l_Lasm_JS_Web_Node_ATTRIBUTE__NODE = _init_l_Lasm_JS_Web_Node_ATTRIBUTE__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_ATTRIBUTE__NODE);
l_Lasm_JS_Web_Node_TEXT__NODE = _init_l_Lasm_JS_Web_Node_TEXT__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_TEXT__NODE);
l_Lasm_JS_Web_Node_CDATA__SECTION__NODE = _init_l_Lasm_JS_Web_Node_CDATA__SECTION__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_CDATA__SECTION__NODE);
l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE = _init_l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE);
l_Lasm_JS_Web_Node_ENTITY__NODE = _init_l_Lasm_JS_Web_Node_ENTITY__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_ENTITY__NODE);
l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE = _init_l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE);
l_Lasm_JS_Web_Node_COMMENT__NODE = _init_l_Lasm_JS_Web_Node_COMMENT__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_COMMENT__NODE);
l_Lasm_JS_Web_Node_DOCUMENT__NODE = _init_l_Lasm_JS_Web_Node_DOCUMENT__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__NODE);
l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE = _init_l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE);
l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE = _init_l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE);
l_Lasm_JS_Web_Node_NOTATION__NODE = _init_l_Lasm_JS_Web_Node_NOTATION__NODE();
lean_mark_persistent(l_Lasm_JS_Web_Node_NOTATION__NODE);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY);
l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC = _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC();
lean_mark_persistent(l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC);
l_Lasm_JS_Web_Range_START__TO__START = _init_l_Lasm_JS_Web_Range_START__TO__START();
lean_mark_persistent(l_Lasm_JS_Web_Range_START__TO__START);
l_Lasm_JS_Web_Range_START__TO__END = _init_l_Lasm_JS_Web_Range_START__TO__END();
lean_mark_persistent(l_Lasm_JS_Web_Range_START__TO__END);
l_Lasm_JS_Web_Range_END__TO__END = _init_l_Lasm_JS_Web_Range_END__TO__END();
lean_mark_persistent(l_Lasm_JS_Web_Range_END__TO__END);
l_Lasm_JS_Web_Range_END__TO__START = _init_l_Lasm_JS_Web_Range_END__TO__START();
lean_mark_persistent(l_Lasm_JS_Web_Range_END__TO__START);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
