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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* v___f_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___f_117_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed), 2, 0);
v___f_118_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_118_, 0, v_f_115_);
lean_closure_set(v___f_118_, 1, v___f_117_);
v___f_119_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_119_, 0, v___f_118_);
v___x_120_ = lean_unsigned_to_nat(0u);
v___x_121_ = l_Lasm_JS_Function_ofFn(v___f_119_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_121_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_121_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object* v_f_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_JS_Web_EventListener_ofFn(v_f_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object* v_f_141_, lean_object* v_args_142_){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_EventHandlerNonNull_ofFn_spec__0(v_args_142_, v___x_144_);
if (lean_obj_tag(v___x_145_) == 0)
{
lean_object* v_a_146_; lean_object* v___x_147_; 
v_a_146_ = lean_ctor_get(v___x_145_, 0);
lean_inc(v_a_146_);
lean_dec_ref_known(v___x_145_, 1);
v___x_147_ = lean_apply_2(v_f_141_, v_a_146_, lean_box(0));
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v___x_147_, 0);
lean_dec(v_unused_156_);
v___x_149_ = v___x_147_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_dec(v___x_147_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_box(0);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_151_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_a_157_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_147_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_147_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec_ref(v_f_141_);
v_a_165_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_145_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_145_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object* v_f_173_, lean_object* v_args_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(v_f_173_, v_args_174_);
lean_dec_ref(v_args_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object* v_f_177_){
_start:
{
lean_object* v___f_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___f_179_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_179_, 0, v_f_177_);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = l_Lasm_JS_Function_ofSyncFn(v___f_179_, v___x_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_a_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_197_; 
v_a_190_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_197_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_197_ == 0)
{
v___x_192_ = v___x_181_;
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_181_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_197_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_195_; 
if (v_isShared_193_ == 0)
{
v___x_195_ = v___x_192_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_a_190_);
v___x_195_ = v_reuseFailAlloc_196_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
return v___x_195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object* v_f_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lasm_JS_Web_EventListener_ofSyncFn(v_f_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object* v___f_201_, lean_object* v___f_202_, lean_object* v_d_203_){
_start:
{
lean_object* v_capture_204_; lean_object* v_passive_205_; lean_object* v_once_206_; lean_object* v_signal_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_capture_204_ = lean_ctor_get(v_d_203_, 0);
lean_inc(v_capture_204_);
v_passive_205_ = lean_ctor_get(v_d_203_, 1);
lean_inc(v_passive_205_);
v_once_206_ = lean_ctor_get(v_d_203_, 2);
lean_inc(v_once_206_);
v_signal_207_ = lean_ctor_get(v_d_203_, 3);
lean_inc(v_signal_207_);
lean_dec_ref(v_d_203_);
v___x_208_ = lean_mk_string_unchecked("capture", 7, 7);
lean_inc_ref_n(v___f_201_, 2);
v___x_209_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_201_, v_capture_204_);
v___x_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_210_, 0, v___x_208_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = lean_mk_string_unchecked("passive", 7, 7);
v___x_212_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_201_, v_passive_205_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = lean_mk_string_unchecked("once", 4, 4);
v___x_215_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_201_, v_once_206_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_218_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_202_, v_signal_207_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = lean_unsigned_to_nat(4u);
v___x_221_ = lean_mk_empty_array_with_capacity(v___x_220_);
v___x_222_ = lean_array_push(v___x_221_, v___x_210_);
v___x_223_ = lean_array_push(v___x_222_, v___x_213_);
v___x_224_ = lean_array_push(v___x_223_, v___x_216_);
v___x_225_ = lean_array_push(v___x_224_, v___x_219_);
v___x_226_ = l_Lasm_JS_Web_Internal_fields(v___x_225_);
lean_dec_ref(v___x_225_);
return v___x_226_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSAddEventListenerOptions(void){
_start:
{
lean_object* v___f_227_; lean_object* v___f_228_; lean_object* v___f_229_; 
v___f_227_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_228_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_229_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0), 3, 2);
lean_closure_set(v___f_229_, 0, v___f_227_);
lean_closure_set(v___f_229_, 1, v___f_228_);
return v___f_229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_230_) == 0)
{
lean_object* v___x_231_; 
v___x_231_ = lean_unsigned_to_nat(0u);
return v___x_231_;
}
else
{
lean_object* v___x_232_; 
v___x_232_ = lean_unsigned_to_nat(1u);
return v___x_232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(v_x_233_);
lean_dec_ref(v_x_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_235_, lean_object* v_k_236_){
_start:
{
if (lean_obj_tag(v_t_235_) == 0)
{
lean_object* v_value_237_; lean_object* v___x_238_; 
v_value_237_ = lean_ctor_get(v_t_235_, 0);
lean_inc_ref(v_value_237_);
lean_dec_ref_known(v_t_235_, 1);
v___x_238_ = lean_apply_1(v_k_236_, v_value_237_);
return v___x_238_;
}
else
{
uint8_t v_value_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_value_239_ = lean_ctor_get_uint8(v_t_235_, 0);
lean_dec_ref_known(v_t_235_, 0);
v___x_240_ = lean_box(v_value_239_);
v___x_241_ = lean_apply_1(v_k_236_, v___x_240_);
return v___x_241_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_242_, lean_object* v_ctorIdx_243_, lean_object* v_t_244_, lean_object* v_h_245_, lean_object* v_k_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_244_, v_k_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_248_, lean_object* v_ctorIdx_249_, lean_object* v_t_250_, lean_object* v_h_251_, lean_object* v_k_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(v_motive_248_, v_ctorIdx_249_, v_t_250_, v_h_251_, v_k_252_);
lean_dec(v_ctorIdx_249_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim___redArg(lean_object* v_t_254_, lean_object* v_addEventListenerOptions_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_254_, v_addEventListenerOptions_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim(lean_object* v_motive_257_, lean_object* v_t_258_, lean_object* v_h_259_, lean_object* v_addEventListenerOptions_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_258_, v_addEventListenerOptions_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_262_, lean_object* v_boolean_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_262_, v_boolean_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_265_, lean_object* v_t_266_, lean_object* v_h_267_, lean_object* v_boolean_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_266_, v_boolean_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_270_) == 0)
{
lean_object* v_value_271_; lean_object* v_capture_272_; lean_object* v_passive_273_; lean_object* v_once_274_; lean_object* v_signal_275_; lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v_value_271_ = lean_ctor_get(v_x_270_, 0);
lean_inc_ref(v_value_271_);
lean_dec_ref_known(v_x_270_, 1);
v_capture_272_ = lean_ctor_get(v_value_271_, 0);
lean_inc(v_capture_272_);
v_passive_273_ = lean_ctor_get(v_value_271_, 1);
lean_inc(v_passive_273_);
v_once_274_ = lean_ctor_get(v_value_271_, 2);
lean_inc(v_once_274_);
v_signal_275_ = lean_ctor_get(v_value_271_, 3);
lean_inc(v_signal_275_);
lean_dec_ref(v_value_271_);
v___f_276_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_277_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___x_278_ = lean_mk_string_unchecked("capture", 7, 7);
lean_inc_ref_n(v___f_276_, 2);
v___x_279_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_276_, v_capture_272_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_mk_string_unchecked("passive", 7, 7);
v___x_282_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_276_, v_passive_273_);
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_281_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_mk_string_unchecked("once", 4, 4);
v___x_285_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_276_, v_once_274_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
v___x_287_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_288_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_277_, v_signal_275_);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_287_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_unsigned_to_nat(4u);
v___x_291_ = lean_mk_empty_array_with_capacity(v___x_290_);
v___x_292_ = lean_array_push(v___x_291_, v___x_280_);
v___x_293_ = lean_array_push(v___x_292_, v___x_283_);
v___x_294_ = lean_array_push(v___x_293_, v___x_286_);
v___x_295_ = lean_array_push(v___x_294_, v___x_289_);
v___x_296_ = l_Lasm_JS_Web_Internal_fields(v___x_295_);
lean_dec_ref(v___x_295_);
return v___x_296_;
}
else
{
uint8_t v_value_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
v_value_297_ = lean_ctor_get_uint8(v_x_270_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_270_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v_x_270_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_dec(v_x_270_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set_tag(v___x_299_, 2);
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_303_, 0, v_value_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v_value_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_310_, 0, v_value_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_311_){
_start:
{
uint8_t v_value_boxed_312_; lean_object* v_res_313_; 
v_value_boxed_312_ = lean_unbox(v_value_311_);
v_res_313_ = l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(v_value_boxed_312_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object* v___f_315_, lean_object* v_d_316_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_317_ = lean_mk_string_unchecked("capture", 7, 7);
v___x_318_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_315_, v_d_316_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_mk_empty_array_with_capacity(v___x_320_);
v___x_322_ = lean_array_push(v___x_321_, v___x_319_);
v___x_323_ = l_Lasm_JS_Web_Internal_fields(v___x_322_);
lean_dec_ref(v___x_322_);
return v___x_323_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSEventListenerOptions(void){
_start:
{
lean_object* v___f_324_; lean_object* v___f_325_; 
v___f_324_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_325_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0), 2, 1);
lean_closure_set(v___f_325_, 0, v___f_324_);
return v___f_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_326_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v___x_327_; 
v___x_327_ = lean_unsigned_to_nat(0u);
return v___x_327_;
}
else
{
lean_object* v___x_328_; 
v___x_328_ = lean_unsigned_to_nat(1u);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(v_x_329_);
lean_dec_ref(v_x_329_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_331_, lean_object* v_k_332_){
_start:
{
if (lean_obj_tag(v_t_331_) == 0)
{
lean_object* v_value_333_; lean_object* v___x_334_; 
v_value_333_ = lean_ctor_get(v_t_331_, 0);
lean_inc(v_value_333_);
lean_dec_ref_known(v_t_331_, 1);
v___x_334_ = lean_apply_1(v_k_332_, v_value_333_);
return v___x_334_;
}
else
{
uint8_t v_value_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_value_335_ = lean_ctor_get_uint8(v_t_331_, 0);
lean_dec_ref_known(v_t_331_, 0);
v___x_336_ = lean_box(v_value_335_);
v___x_337_ = lean_apply_1(v_k_332_, v___x_336_);
return v___x_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_338_, lean_object* v_ctorIdx_339_, lean_object* v_t_340_, lean_object* v_h_341_, lean_object* v_k_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_340_, v_k_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_344_, lean_object* v_ctorIdx_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_k_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(v_motive_344_, v_ctorIdx_345_, v_t_346_, v_h_347_, v_k_348_);
lean_dec(v_ctorIdx_345_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim___redArg(lean_object* v_t_350_, lean_object* v_eventListenerOptions_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_350_, v_eventListenerOptions_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_eventListenerOptions_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_354_, v_eventListenerOptions_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_358_, lean_object* v_boolean_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_358_, v_boolean_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_boolean_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_362_, v_boolean_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_366_){
_start:
{
if (lean_obj_tag(v_x_366_) == 0)
{
lean_object* v_value_367_; lean_object* v___f_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_value_367_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_value_367_);
lean_dec_ref_known(v_x_366_, 1);
v___f_368_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_369_ = lean_mk_string_unchecked("capture", 7, 7);
v___x_370_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_368_, v_value_367_);
v___x_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set(v___x_371_, 1, v___x_370_);
v___x_372_ = lean_unsigned_to_nat(1u);
v___x_373_ = lean_mk_empty_array_with_capacity(v___x_372_);
v___x_374_ = lean_array_push(v___x_373_, v___x_371_);
v___x_375_ = l_Lasm_JS_Web_Internal_fields(v___x_374_);
lean_dec_ref(v___x_374_);
return v___x_375_;
}
else
{
uint8_t v_value_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
v_value_376_ = lean_ctor_get_uint8(v_x_366_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_366_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v_x_366_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_dec(v_x_366_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 2);
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_382_, 0, v_value_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v_value_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_389_, 0, v_value_388_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_390_){
_start:
{
uint8_t v_value_boxed_391_; lean_object* v_res_392_; 
v_value_boxed_391_ = lean_unbox(v_value_390_);
v_res_392_ = l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(v_value_boxed_391_);
return v_res_392_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSMutationCallback(void){
_start:
{
lean_object* v___f_395_; lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; 
v___f_395_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_396_ = lean_mk_string_unchecked("Lasm.JS.Web.MutationCallback", 28, 28);
v___x_397_ = 0;
v___x_398_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_398_, 0, v___f_395_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*2, v___x_397_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1(lean_object* v_f_399_, lean_object* v_a_400_, lean_object* v___f_401_, lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_412_; 
lean_dec_ref(v___f_401_);
lean_dec_ref(v_a_400_);
lean_dec_ref(v_f_399_);
v_a_404_ = lean_ctor_get(v_x_402_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v_x_402_);
if (v_isSharedCheck_412_ == 0)
{
v___x_406_ = v_x_402_;
v_isShared_407_ = v_isSharedCheck_412_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_dec(v_x_402_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_412_;
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
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_404_);
v___x_409_ = v_reuseFailAlloc_411_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
lean_object* v___x_410_; 
v___x_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
return v___x_410_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_414_; uint8_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v_a_413_ = lean_ctor_get(v_x_402_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v_x_402_, 1);
v___x_414_ = lean_unsigned_to_nat(0u);
v___x_415_ = 0;
v___x_416_ = lean_apply_3(v_f_399_, v_a_400_, v_a_413_, lean_box(0));
v___x_417_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_414_, v___x_415_, v___x_416_, v___f_401_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__1___boxed(lean_object* v_f_418_, lean_object* v_a_419_, lean_object* v___f_420_, lean_object* v_x_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__1(v_f_418_, v_a_419_, v___f_420_, v_x_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(lean_object* v_context_424_, lean_object* v_d_425_){
_start:
{
lean_object* v___y_428_; lean_object* v___y_429_; 
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_433_; lean_object* v___x_434_; 
v_value_433_ = lean_ctor_get(v_d_425_, 0);
lean_inc(v_value_433_);
lean_dec_ref_known(v_d_425_, 2);
v___x_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_434_, 0, v_value_433_);
return v___x_434_;
}
else
{
lean_object* v___x_435_; lean_object* v_received_437_; 
v___x_435_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_425_) == 9)
{
lean_object* v_value_453_; lean_object* v_description_454_; uint8_t v___x_455_; 
v_value_453_ = lean_ctor_get(v_d_425_, 0);
v_description_454_ = lean_ctor_get(v_d_425_, 1);
v___x_455_ = lean_string_dec_eq(v_description_454_, v___x_435_);
if (v___x_455_ == 0)
{
goto v___jp_451_;
}
else
{
uint32_t v___x_456_; uint64_t v___x_457_; lean_object* v___x_458_; uint32_t v___x_459_; lean_object* v___x_460_; 
lean_inc_n(v_value_453_, 2);
lean_dec_ref_known(v_d_425_, 2);
v___x_456_ = 206;
v___x_457_ = 0ULL;
lean_inc_ref(v___x_435_);
v___x_458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_458_, 0, v_value_453_);
lean_ctor_set(v___x_458_, 1, v___x_435_);
v___x_459_ = lasm_js_value_handle(v_value_453_);
lean_dec(v_value_453_);
v___x_460_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_456_, v___x_457_, v___x_458_, v___x_459_);
lean_dec_ref_known(v___x_458_, 2);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; uint8_t v___x_462_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = lean_string_validate_utf8(v_a_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec(v_a_461_);
v___x_463_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_464_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_465_ = lean_unsigned_to_nat(193u);
v___x_466_ = lean_unsigned_to_nat(46u);
v___x_467_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_468_ = l_mkPanicMessageWithDecl(v___x_463_, v___x_464_, v___x_465_, v___x_466_, v___x_467_);
lean_dec_ref(v___x_467_);
lean_dec_ref(v___x_464_);
lean_dec_ref(v___x_463_);
v___x_469_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_468_);
v_received_437_ = v___x_469_;
goto v___jp_436_;
}
else
{
lean_object* v___x_470_; 
v___x_470_ = lean_string_from_utf8_unchecked(v_a_461_);
v_received_437_ = v___x_470_;
goto v___jp_436_;
}
}
else
{
lean_object* v___x_471_; 
lean_dec_ref_known(v___x_460_, 1);
v___x_471_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_437_ = v___x_471_;
goto v___jp_436_;
}
}
}
else
{
goto v___jp_451_;
}
v___jp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_438_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_439_ = lean_string_append(v___x_438_, v_context_424_);
v___x_440_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
lean_dec_ref(v___x_440_);
v___x_442_ = lean_mk_string_unchecked("Lasm.JS.Web.MutationObserver", 28, 28);
v___x_443_ = lean_string_append(v___x_441_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_444_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_445_ = lean_string_append(v___x_443_, v___x_444_);
lean_dec_ref(v___x_444_);
v___x_446_ = lean_string_append(v___x_445_, v_received_437_);
lean_dec_ref(v_received_437_);
v___x_447_ = lean_string_utf8_byte_size(v___x_435_);
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = lean_nat_dec_eq(v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; 
lean_dec_ref(v___x_435_);
v___x_450_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_428_ = v___x_446_;
v___y_429_ = v___x_450_;
goto v___jp_427_;
}
else
{
v___y_428_ = v___x_446_;
v___y_429_ = v___x_435_;
goto v___jp_427_;
}
}
v___jp_451_:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lasm_JS_Data_describe(v_d_425_);
v_received_437_ = v___x_452_;
goto v___jp_436_;
}
}
v___jp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_430_ = lean_string_append(v___y_428_, v___y_429_);
v___x_431_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_431_, 0, v___x_430_);
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
return v___x_432_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_472_, lean_object* v_d_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v_context_472_, v_d_473_);
lean_dec_ref(v_context_472_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(lean_object* v_args_476_, lean_object* v_i_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_479_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_480_ = lean_unsigned_to_nat(1u);
v___x_481_ = lean_nat_add(v_i_477_, v___x_480_);
v___x_482_ = l_Nat_reprFast(v___x_481_);
v___x_483_ = lean_string_append(v___x_479_, v___x_482_);
lean_dec_ref(v___x_482_);
v___x_484_ = lean_array_get_size(v_args_476_);
v___x_485_ = lean_nat_dec_lt(v_i_477_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_box(0);
v___x_487_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v___x_483_, v___x_486_);
lean_dec_ref(v___x_483_);
return v___x_487_;
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = lean_array_fget_borrowed(v_args_476_, v_i_477_);
lean_inc(v___x_488_);
v___x_489_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0_spec__0(v___x_483_, v___x_488_);
lean_dec_ref(v___x_483_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0___boxed(lean_object* v_args_490_, lean_object* v_i_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_490_, v_i_491_);
lean_dec(v_i_491_);
lean_dec_ref(v_args_490_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0(lean_object* v_f_494_, lean_object* v___f_495_, lean_object* v_args_496_, lean_object* v_x_497_){
_start:
{
if (lean_obj_tag(v_x_497_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_507_; 
lean_dec_ref(v___f_495_);
lean_dec_ref(v_f_494_);
v_a_499_ = lean_ctor_get(v_x_497_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v_x_497_);
if (v_isSharedCheck_507_ == 0)
{
v___x_501_ = v_x_497_;
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
else
{
lean_inc(v_a_499_);
lean_dec(v_x_497_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_507_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
lean_object* v___x_504_; 
if (v_isShared_502_ == 0)
{
v___x_504_ = v___x_501_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_499_);
v___x_504_ = v_reuseFailAlloc_506_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_505_; 
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v___x_504_);
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_529_; 
v_a_508_ = lean_ctor_get(v_x_497_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_497_);
if (v_isSharedCheck_529_ == 0)
{
v___x_510_ = v_x_497_;
v_isShared_511_ = v_isSharedCheck_529_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v_x_497_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_529_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___f_512_; lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; lean_object* v_val_517_; lean_object* v___x_520_; 
v___f_512_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_512_, 0, v_f_494_);
lean_closure_set(v___f_512_, 1, v_a_508_);
lean_closure_set(v___f_512_, 2, v___f_495_);
v___x_513_ = lean_unsigned_to_nat(1u);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = 0;
v___x_520_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_496_, v___x_513_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v_a_521_);
v___x_523_ = v___x_510_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
v_val_517_ = v___x_523_;
goto v___jp_516_;
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_520_, 1);
if (v_isShared_511_ == 0)
{
lean_ctor_set_tag(v___x_510_, 0);
lean_ctor_set(v___x_510_, 0, v_a_525_);
v___x_527_ = v___x_510_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
v_val_517_ = v___x_527_;
goto v___jp_516_;
}
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v_val_517_);
v___x_519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_514_, v___x_515_, v___x_518_, v___f_512_);
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__0___boxed(lean_object* v_f_530_, lean_object* v___f_531_, lean_object* v_args_532_, lean_object* v_x_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__0(v_f_530_, v___f_531_, v_args_532_, v_x_533_);
lean_dec_ref(v_args_532_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(size_t v_sz_536_, size_t v_i_537_, lean_object* v_bs_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_537_, v_sz_536_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; 
v___x_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_540_, 0, v_bs_538_);
return v___x_540_;
}
else
{
lean_object* v_v_541_; 
v_v_541_ = lean_array_uget_borrowed(v_bs_538_, v_i_537_);
if (lean_obj_tag(v_v_541_) == 9)
{
lean_object* v_value_542_; lean_object* v___x_543_; lean_object* v_bs_x27_544_; size_t v___x_545_; size_t v___x_546_; lean_object* v___x_547_; 
v_value_542_ = lean_ctor_get(v_v_541_, 0);
lean_inc(v_value_542_);
v___x_543_ = lean_unsigned_to_nat(0u);
v_bs_x27_544_ = lean_array_uset(v_bs_538_, v_i_537_, v___x_543_);
v___x_545_ = ((size_t)1ULL);
v___x_546_ = lean_usize_add(v_i_537_, v___x_545_);
v___x_547_ = lean_array_uset(v_bs_x27_544_, v_i_537_, v_value_542_);
v_i_537_ = v___x_546_;
v_bs_538_ = v___x_547_;
goto _start;
}
else
{
lean_object* v___x_549_; lean_object* v___x_550_; 
lean_dec_ref(v_bs_538_);
v___x_549_ = lean_mk_string_unchecked("", 0, 0);
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_551_, lean_object* v_i_552_, lean_object* v_bs_553_){
_start:
{
size_t v_sz_boxed_554_; size_t v_i_boxed_555_; lean_object* v_res_556_; 
v_sz_boxed_554_ = lean_unbox_usize(v_sz_551_);
lean_dec(v_sz_551_);
v_i_boxed_555_ = lean_unbox_usize(v_i_552_);
lean_dec(v_i_552_);
v_res_556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(v_sz_boxed_554_, v_i_boxed_555_, v_bs_553_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(lean_object* v_context_557_, lean_object* v_d_558_){
_start:
{
lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_567_; lean_object* v_received_568_; lean_object* v___y_587_; lean_object* v_a_590_; 
if (lean_obj_tag(v_d_558_) == 7)
{
lean_object* v_items_619_; size_t v_sz_620_; size_t v___x_621_; lean_object* v___x_622_; 
v_items_619_ = lean_ctor_get(v_d_558_, 0);
v_sz_620_ = lean_array_size(v_items_619_);
v___x_621_ = ((size_t)0ULL);
lean_inc_ref(v_items_619_);
v___x_622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2_spec__3(v_sz_620_, v___x_621_, v_items_619_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_622_, 1);
v___x_624_ = lean_mk_string_unchecked("an element is not Lasm.JS.Web.MutationRecord", 44, 44);
v___x_625_ = lean_string_utf8_byte_size(v_a_623_);
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_nat_dec_eq(v___x_625_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_mk_string_unchecked(": ", 2, 2);
v___x_629_ = lean_string_append(v___x_628_, v_a_623_);
lean_dec(v_a_623_);
v___x_630_ = lean_string_append(v___x_624_, v___x_629_);
lean_dec_ref(v___x_629_);
v_a_590_ = v___x_630_;
goto v___jp_589_;
}
else
{
lean_dec(v_a_623_);
v_a_590_ = v___x_624_;
goto v___jp_589_;
}
}
else
{
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_631_; 
v_a_631_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_631_);
lean_dec_ref_known(v___x_622_, 1);
v_a_590_ = v_a_631_;
goto v___jp_589_;
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
lean_dec_ref_known(v_d_558_, 1);
v_a_632_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_622_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_622_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
lean_ctor_set_tag(v___x_634_, 0);
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
else
{
lean_object* v___x_640_; 
v___x_640_ = lean_mk_string_unchecked("", 0, 0);
v_a_590_ = v___x_640_;
goto v___jp_589_;
}
v___jp_560_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_string_append(v___y_561_, v___y_562_);
lean_dec_ref(v___y_562_);
v___x_564_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
v___jp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_569_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_570_ = lean_string_append(v___x_569_, v_context_557_);
v___x_571_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = lean_mk_string_unchecked("Array (Lasm.JS.Web.MutationRecord)", 34, 34);
v___x_574_ = lean_string_append(v___x_572_, v___x_573_);
lean_dec_ref(v___x_573_);
v___x_575_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_576_ = lean_string_append(v___x_574_, v___x_575_);
lean_dec_ref(v___x_575_);
v___x_577_ = lean_string_append(v___x_576_, v_received_568_);
lean_dec_ref(v_received_568_);
v___x_578_ = lean_string_utf8_byte_size(v___y_567_);
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_nat_dec_eq(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_581_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_582_ = lean_string_append(v___x_581_, v___y_567_);
lean_dec_ref(v___y_567_);
v___x_583_ = lean_mk_string_unchecked(")", 1, 1);
v___x_584_ = lean_string_append(v___x_582_, v___x_583_);
lean_dec_ref(v___x_583_);
v___y_561_ = v___x_577_;
v___y_562_ = v___x_584_;
goto v___jp_560_;
}
else
{
lean_object* v___x_585_; 
lean_dec_ref(v___y_567_);
v___x_585_ = lean_mk_string_unchecked("", 0, 0);
v___y_561_ = v___x_577_;
v___y_562_ = v___x_585_;
goto v___jp_560_;
}
}
v___jp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lasm_JS_Data_describe(v_d_558_);
v___y_567_ = v___y_587_;
v_received_568_ = v___x_588_;
goto v___jp_566_;
}
v___jp_589_:
{
if (lean_obj_tag(v_d_558_) == 9)
{
lean_object* v_value_591_; lean_object* v_description_592_; lean_object* v___x_593_; uint8_t v___x_594_; 
v_value_591_ = lean_ctor_get(v_d_558_, 0);
v_description_592_ = lean_ctor_get(v_d_558_, 1);
v___x_593_ = lean_mk_string_unchecked("", 0, 0);
v___x_594_ = lean_string_dec_eq(v_description_592_, v___x_593_);
if (v___x_594_ == 0)
{
lean_dec_ref(v___x_593_);
v___y_587_ = v_a_590_;
goto v___jp_586_;
}
else
{
lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_616_; 
lean_inc(v_value_591_);
v_isSharedCheck_616_ = !lean_is_exclusive(v_d_558_);
if (v_isSharedCheck_616_ == 0)
{
lean_object* v_unused_617_; lean_object* v_unused_618_; 
v_unused_617_ = lean_ctor_get(v_d_558_, 1);
lean_dec(v_unused_617_);
v_unused_618_ = lean_ctor_get(v_d_558_, 0);
lean_dec(v_unused_618_);
v___x_596_ = v_d_558_;
v_isShared_597_ = v_isSharedCheck_616_;
goto v_resetjp_595_;
}
else
{
lean_dec(v_d_558_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_616_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint32_t v___x_598_; uint64_t v___x_599_; lean_object* v___x_601_; 
v___x_598_ = 206;
v___x_599_ = 0ULL;
lean_inc(v_value_591_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v___x_593_);
v___x_601_ = v___x_596_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_value_591_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v___x_593_);
v___x_601_ = v_reuseFailAlloc_615_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
uint32_t v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lasm_js_value_handle(v_value_591_);
lean_dec(v_value_591_);
v___x_603_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_598_, v___x_599_, v___x_601_, v___x_602_);
lean_dec_ref(v___x_601_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; uint8_t v___x_605_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_string_validate_utf8(v_a_604_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
lean_dec(v_a_604_);
v___x_606_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_607_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_608_ = lean_unsigned_to_nat(193u);
v___x_609_ = lean_unsigned_to_nat(46u);
v___x_610_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_611_ = l_mkPanicMessageWithDecl(v___x_606_, v___x_607_, v___x_608_, v___x_609_, v___x_610_);
lean_dec_ref(v___x_610_);
lean_dec_ref(v___x_607_);
lean_dec_ref(v___x_606_);
v___x_612_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_611_);
v___y_567_ = v_a_590_;
v_received_568_ = v___x_612_;
goto v___jp_566_;
}
else
{
lean_object* v___x_613_; 
v___x_613_ = lean_string_from_utf8_unchecked(v_a_604_);
v___y_567_ = v_a_590_;
v_received_568_ = v___x_613_;
goto v___jp_566_;
}
}
else
{
lean_object* v___x_614_; 
lean_dec_ref_known(v___x_603_, 1);
v___x_614_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_567_ = v_a_590_;
v_received_568_ = v___x_614_;
goto v___jp_566_;
}
}
}
}
}
else
{
v___y_587_ = v_a_590_;
goto v___jp_586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2___boxed(lean_object* v_context_641_, lean_object* v_d_642_, lean_object* v_a_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v_context_641_, v_d_642_);
lean_dec_ref(v_context_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(lean_object* v_args_645_, lean_object* v_i_646_){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_648_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_649_ = lean_unsigned_to_nat(1u);
v___x_650_ = lean_nat_add(v_i_646_, v___x_649_);
v___x_651_ = l_Nat_reprFast(v___x_650_);
v___x_652_ = lean_string_append(v___x_648_, v___x_651_);
lean_dec_ref(v___x_651_);
v___x_653_ = lean_array_get_size(v_args_645_);
v___x_654_ = lean_nat_dec_lt(v_i_646_, v___x_653_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_box(0);
v___x_656_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v___x_652_, v___x_655_);
lean_dec_ref(v___x_652_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_array_fget_borrowed(v_args_645_, v_i_646_);
lean_inc(v___x_657_);
v___x_658_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1_spec__2(v___x_652_, v___x_657_);
lean_dec_ref(v___x_652_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1___boxed(lean_object* v_args_659_, lean_object* v_i_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_659_, v_i_660_);
lean_dec(v_i_660_);
lean_dec_ref(v_args_659_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2(lean_object* v_f_663_, lean_object* v___f_664_, lean_object* v_args_665_){
_start:
{
lean_object* v___f_667_; lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v_val_671_; lean_object* v___x_674_; 
lean_inc_ref(v_args_665_);
v___f_667_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_667_, 0, v_f_663_);
lean_closure_set(v___f_667_, 1, v___f_664_);
lean_closure_set(v___f_667_, 2, v_args_665_);
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = 0;
v___x_674_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_665_, v___x_668_);
lean_dec_ref(v_args_665_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 1);
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
v_val_671_ = v___x_680_;
goto v___jp_670_;
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_a_683_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_674_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_674_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set_tag(v___x_685_, 0);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_val_671_ = v___x_688_;
goto v___jp_670_;
}
}
}
v___jp_670_:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v_val_671_);
v___x_673_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_668_, v___x_669_, v___x_672_, v___f_667_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___lam__2___boxed(lean_object* v_f_691_, lean_object* v___f_692_, lean_object* v_args_693_, lean_object* v___y_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lasm_JS_Web_MutationCallback_ofFn___lam__2(v_f_691_, v___f_692_, v_args_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn(lean_object* v_f_696_){
_start:
{
lean_object* v___f_698_; lean_object* v___f_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___f_698_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed), 2, 0);
v___f_699_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_699_, 0, v_f_696_);
lean_closure_set(v___f_699_, 1, v___f_698_);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = l_Lasm_JS_Function_ofFn(v___f_699_, v___x_700_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_709_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_709_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_709_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_705_ == 0)
{
v___x_707_ = v___x_704_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_a_702_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
v_a_710_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_701_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_701_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofFn___boxed(lean_object* v_f_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lasm_JS_Web_MutationCallback_ofFn(v_f_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0(lean_object* v_f_721_, lean_object* v_args_722_){
_start:
{
lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_724_ = lean_unsigned_to_nat(0u);
v___x_725_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__1(v_args_722_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_725_, 1);
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_MutationCallback_ofFn_spec__0(v_args_722_, v___x_727_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_730_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v___x_730_ = lean_apply_3(v_f_721_, v_a_726_, v_a_729_, lean_box(0));
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_738_; 
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v___x_730_, 0);
lean_dec(v_unused_739_);
v___x_732_ = v___x_730_;
v_isShared_733_ = v_isSharedCheck_738_;
goto v_resetjp_731_;
}
else
{
lean_dec(v___x_730_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_738_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_734_ = lean_box(0);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v___x_734_);
v___x_736_ = v___x_732_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_730_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_730_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
lean_dec(v_a_726_);
lean_dec_ref(v_f_721_);
v_a_748_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v___x_728_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_728_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_a_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref(v_f_721_);
v_a_756_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_725_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_725_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_764_, lean_object* v_args_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0(v_f_764_, v_args_765_);
lean_dec_ref(v_args_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn(lean_object* v_f_768_){
_start:
{
lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___f_770_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_MutationCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_770_, 0, v_f_768_);
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = l_Lasm_JS_Function_ofSyncFn(v___f_770_, v___x_771_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_780_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_780_ == 0)
{
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_780_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_a_781_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_772_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_772_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_MutationCallback_ofSyncFn___boxed(lean_object* v_f_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_JS_Web_MutationCallback_ofSyncFn(v_f_789_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSMutationObserverInit___lam__0(lean_object* v___f_792_, lean_object* v___x_793_, lean_object* v_d_794_){
_start:
{
lean_object* v_childList_795_; lean_object* v_attributes_796_; lean_object* v_characterData_797_; lean_object* v_subtree_798_; lean_object* v_attributeOldValue_799_; lean_object* v_characterDataOldValue_800_; lean_object* v_attributeFilter_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_childList_795_ = lean_ctor_get(v_d_794_, 0);
lean_inc(v_childList_795_);
v_attributes_796_ = lean_ctor_get(v_d_794_, 1);
lean_inc(v_attributes_796_);
v_characterData_797_ = lean_ctor_get(v_d_794_, 2);
lean_inc(v_characterData_797_);
v_subtree_798_ = lean_ctor_get(v_d_794_, 3);
lean_inc(v_subtree_798_);
v_attributeOldValue_799_ = lean_ctor_get(v_d_794_, 4);
lean_inc(v_attributeOldValue_799_);
v_characterDataOldValue_800_ = lean_ctor_get(v_d_794_, 5);
lean_inc(v_characterDataOldValue_800_);
v_attributeFilter_801_ = lean_ctor_get(v_d_794_, 6);
lean_inc(v_attributeFilter_801_);
lean_dec_ref(v_d_794_);
v___x_802_ = lean_mk_string_unchecked("childList", 9, 9);
lean_inc_ref_n(v___f_792_, 5);
v___x_803_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_childList_795_);
v___x_804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = lean_mk_string_unchecked("attributes", 10, 10);
v___x_806_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_attributes_796_);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_mk_string_unchecked("characterData", 13, 13);
v___x_809_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_characterData_797_);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = lean_mk_string_unchecked("subtree", 7, 7);
v___x_812_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_subtree_798_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = lean_mk_string_unchecked("attributeOldValue", 17, 17);
v___x_815_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_attributeOldValue_799_);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_814_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_mk_string_unchecked("characterDataOldValue", 21, 21);
v___x_818_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_792_, v_characterDataOldValue_800_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = lean_mk_string_unchecked("attributeFilter", 15, 15);
v___x_821_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_793_, v_attributeFilter_801_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v___x_823_ = lean_unsigned_to_nat(7u);
v___x_824_ = lean_mk_empty_array_with_capacity(v___x_823_);
v___x_825_ = lean_array_push(v___x_824_, v___x_804_);
v___x_826_ = lean_array_push(v___x_825_, v___x_807_);
v___x_827_ = lean_array_push(v___x_826_, v___x_810_);
v___x_828_ = lean_array_push(v___x_827_, v___x_813_);
v___x_829_ = lean_array_push(v___x_828_, v___x_816_);
v___x_830_ = lean_array_push(v___x_829_, v___x_819_);
v___x_831_ = lean_array_push(v___x_830_, v___x_822_);
v___x_832_ = l_Lasm_JS_Web_Internal_fields(v___x_831_);
lean_dec_ref(v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSMutationObserverInit(void){
_start:
{
lean_object* v___f_833_; lean_object* v___f_834_; lean_object* v___x_835_; lean_object* v___f_836_; 
v___f_833_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_834_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_835_ = l_Lasm_JS_instToJSArray___redArg(v___f_834_);
v___f_836_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSMutationObserverInit___lam__0), 3, 2);
lean_closure_set(v___f_836_, 0, v___f_833_);
lean_closure_set(v___f_836_, 1, v___x_835_);
return v___f_836_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSNodeFilter(void){
_start:
{
lean_object* v___f_838_; lean_object* v___x_839_; uint8_t v___x_840_; lean_object* v___x_841_; 
v___f_838_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_839_ = lean_mk_string_unchecked("Lasm.JS.Web.NodeFilter", 22, 22);
v___x_840_ = 0;
v___x_841_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_841_, 0, v___f_838_);
lean_ctor_set(v___x_841_, 1, v___x_839_);
lean_ctor_set_uint8(v___x_841_, sizeof(void*)*2, v___x_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0(lean_object* v_x_842_){
_start:
{
lean_object* v___y_845_; 
if (lean_obj_tag(v_x_842_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
v_a_848_ = lean_ctor_get(v_x_842_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_842_);
if (v_isSharedCheck_856_ == 0)
{
v___x_850_ = v_x_842_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v_x_842_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_a_857_ = lean_ctor_get(v_x_842_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v_x_842_, 1);
v___x_858_ = lean_nat_to_int(v_a_857_);
v___x_859_ = lean_nat_abs(v___x_858_);
v___x_860_ = lean_cstr_to_nat("9007199254740991");
v___x_861_ = lean_nat_dec_le(v___x_859_, v___x_860_);
lean_dec(v___x_859_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
v___x_862_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_858_);
v___y_845_ = v___x_862_;
goto v___jp_844_;
}
else
{
double v___x_863_; lean_object* v___x_864_; 
v___x_863_ = l_Float_ofInt(v___x_858_);
lean_dec(v___x_858_);
v___x_864_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_864_, 0, v___x_863_);
v___y_845_ = v___x_864_;
goto v___jp_844_;
}
}
v___jp_844_:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_846_, 0, v___y_845_);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__0___boxed(lean_object* v_x_865_, lean_object* v___y_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__0(v_x_865_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1(lean_object* v_f_868_, lean_object* v___f_869_, lean_object* v_x_870_){
_start:
{
if (lean_obj_tag(v_x_870_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_880_; 
lean_dec_ref(v___f_869_);
lean_dec_ref(v_f_868_);
v_a_872_ = lean_ctor_get(v_x_870_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v_x_870_);
if (v_isSharedCheck_880_ == 0)
{
v___x_874_ = v_x_870_;
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v_x_870_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_880_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_879_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
lean_object* v___x_878_; 
v___x_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
return v___x_878_;
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_882_; uint8_t v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v_a_881_ = lean_ctor_get(v_x_870_, 0);
lean_inc(v_a_881_);
lean_dec_ref_known(v_x_870_, 1);
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = 0;
v___x_884_ = lean_apply_2(v_f_868_, v_a_881_, lean_box(0));
v___x_885_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_882_, v___x_883_, v___x_884_, v___f_869_);
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__1___boxed(lean_object* v_f_886_, lean_object* v___f_887_, lean_object* v_x_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__1(v_f_886_, v___f_887_, v_x_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(lean_object* v_context_891_, lean_object* v_d_892_){
_start:
{
lean_object* v___y_895_; lean_object* v___y_896_; 
if (lean_obj_tag(v_d_892_) == 9)
{
lean_object* v_value_900_; lean_object* v___x_901_; 
v_value_900_ = lean_ctor_get(v_d_892_, 0);
lean_inc(v_value_900_);
lean_dec_ref_known(v_d_892_, 2);
v___x_901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_901_, 0, v_value_900_);
return v___x_901_;
}
else
{
lean_object* v___x_902_; lean_object* v_received_904_; 
v___x_902_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_892_) == 9)
{
lean_object* v_value_920_; lean_object* v_description_921_; uint8_t v___x_922_; 
v_value_920_ = lean_ctor_get(v_d_892_, 0);
v_description_921_ = lean_ctor_get(v_d_892_, 1);
v___x_922_ = lean_string_dec_eq(v_description_921_, v___x_902_);
if (v___x_922_ == 0)
{
goto v___jp_918_;
}
else
{
uint32_t v___x_923_; uint64_t v___x_924_; lean_object* v___x_925_; uint32_t v___x_926_; lean_object* v___x_927_; 
lean_inc_n(v_value_920_, 2);
lean_dec_ref_known(v_d_892_, 2);
v___x_923_ = 206;
v___x_924_ = 0ULL;
lean_inc_ref(v___x_902_);
v___x_925_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_925_, 0, v_value_920_);
lean_ctor_set(v___x_925_, 1, v___x_902_);
v___x_926_ = lasm_js_value_handle(v_value_920_);
lean_dec(v_value_920_);
v___x_927_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_923_, v___x_924_, v___x_925_, v___x_926_);
lean_dec_ref_known(v___x_925_, 2);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; uint8_t v___x_929_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
v___x_929_ = lean_string_validate_utf8(v_a_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
lean_dec(v_a_928_);
v___x_930_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_931_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_932_ = lean_unsigned_to_nat(193u);
v___x_933_ = lean_unsigned_to_nat(46u);
v___x_934_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_935_ = l_mkPanicMessageWithDecl(v___x_930_, v___x_931_, v___x_932_, v___x_933_, v___x_934_);
lean_dec_ref(v___x_934_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_936_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_935_);
v_received_904_ = v___x_936_;
goto v___jp_903_;
}
else
{
lean_object* v___x_937_; 
v___x_937_ = lean_string_from_utf8_unchecked(v_a_928_);
v_received_904_ = v___x_937_;
goto v___jp_903_;
}
}
else
{
lean_object* v___x_938_; 
lean_dec_ref_known(v___x_927_, 1);
v___x_938_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_904_ = v___x_938_;
goto v___jp_903_;
}
}
}
else
{
goto v___jp_918_;
}
v___jp_903_:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_905_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_906_ = lean_string_append(v___x_905_, v_context_891_);
v___x_907_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_908_ = lean_string_append(v___x_906_, v___x_907_);
lean_dec_ref(v___x_907_);
v___x_909_ = lean_mk_string_unchecked("Lasm.JS.Web.Node", 16, 16);
v___x_910_ = lean_string_append(v___x_908_, v___x_909_);
lean_dec_ref(v___x_909_);
v___x_911_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_912_ = lean_string_append(v___x_910_, v___x_911_);
lean_dec_ref(v___x_911_);
v___x_913_ = lean_string_append(v___x_912_, v_received_904_);
lean_dec_ref(v_received_904_);
v___x_914_ = lean_string_utf8_byte_size(v___x_902_);
v___x_915_ = lean_unsigned_to_nat(0u);
v___x_916_ = lean_nat_dec_eq(v___x_914_, v___x_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; 
lean_dec_ref(v___x_902_);
v___x_917_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_895_ = v___x_913_;
v___y_896_ = v___x_917_;
goto v___jp_894_;
}
else
{
v___y_895_ = v___x_913_;
v___y_896_ = v___x_902_;
goto v___jp_894_;
}
}
v___jp_918_:
{
lean_object* v___x_919_; 
v___x_919_ = l_Lasm_JS_Data_describe(v_d_892_);
v_received_904_ = v___x_919_;
goto v___jp_903_;
}
}
v___jp_894_:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = lean_string_append(v___y_895_, v___y_896_);
v___x_898_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
v___x_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0___boxed(lean_object* v_context_939_, lean_object* v_d_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v_context_939_, v_d_940_);
lean_dec_ref(v_context_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(lean_object* v_args_943_, lean_object* v_i_944_){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_946_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = lean_nat_add(v_i_944_, v___x_947_);
v___x_949_ = l_Nat_reprFast(v___x_948_);
v___x_950_ = lean_string_append(v___x_946_, v___x_949_);
lean_dec_ref(v___x_949_);
v___x_951_ = lean_array_get_size(v_args_943_);
v___x_952_ = lean_nat_dec_lt(v_i_944_, v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_box(0);
v___x_954_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v___x_950_, v___x_953_);
lean_dec_ref(v___x_950_);
return v___x_954_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = lean_array_fget_borrowed(v_args_943_, v_i_944_);
lean_inc(v___x_955_);
v___x_956_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0_spec__0(v___x_950_, v___x_955_);
lean_dec_ref(v___x_950_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0___boxed(lean_object* v_args_957_, lean_object* v_i_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_957_, v_i_958_);
lean_dec(v_i_958_);
lean_dec_ref(v_args_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2(lean_object* v___f_961_, lean_object* v_args_962_){
_start:
{
lean_object* v___x_964_; uint8_t v___x_965_; lean_object* v_val_967_; lean_object* v___x_970_; 
v___x_964_ = lean_unsigned_to_nat(0u);
v___x_965_ = 0;
v___x_970_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_962_, v___x_964_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set_tag(v___x_973_, 1);
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
v_val_967_ = v___x_976_;
goto v___jp_966_;
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_970_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_970_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 0);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v_val_967_ = v___x_984_;
goto v___jp_966_;
}
}
}
v___jp_966_:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v_val_967_);
v___x_969_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_964_, v___x_965_, v___x_968_, v___f_961_);
return v___x_969_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___lam__2___boxed(lean_object* v___f_987_, lean_object* v_args_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_JS_Web_NodeFilter_ofFn___lam__2(v___f_987_, v_args_988_);
lean_dec_ref(v_args_988_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn(lean_object* v_f_991_){
_start:
{
lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___f_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___f_993_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__0___boxed), 2, 0);
v___f_994_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_994_, 0, v_f_991_);
lean_closure_set(v___f_994_, 1, v___f_993_);
v___f_995_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_995_, 0, v___f_994_);
v___x_996_ = lean_unsigned_to_nat(0u);
v___x_997_ = l_Lasm_JS_Function_ofFn(v___f_995_, v___x_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
v_a_1006_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_997_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_997_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofFn___boxed(lean_object* v_f_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lasm_JS_Web_NodeFilter_ofFn(v_f_1014_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0(lean_object* v_f_1017_, lean_object* v_args_1018_){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_NodeFilter_ofFn_spec__0(v_args_1018_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1023_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1023_ = lean_apply_2(v_f_1017_, v_a_1022_, lean_box(0));
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1041_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1041_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1041_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1028_ = lean_nat_to_int(v_a_1024_);
v___x_1029_ = lean_nat_abs(v___x_1028_);
v___x_1030_ = lean_cstr_to_nat("9007199254740991");
v___x_1031_ = lean_nat_dec_le(v___x_1029_, v___x_1030_);
lean_dec(v___x_1029_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1032_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1028_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1032_);
v___x_1034_ = v___x_1026_;
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
else
{
double v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1036_ = l_Float_ofInt(v___x_1028_);
lean_dec(v___x_1028_);
v___x_1037_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1037_, 0, v___x_1036_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1037_);
v___x_1039_ = v___x_1026_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_a_1042_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1023_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1023_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
lean_dec_ref(v_f_1017_);
v_a_1050_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1021_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1021_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0___boxed(lean_object* v_f_1058_, lean_object* v_args_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0(v_f_1058_, v_args_1059_);
lean_dec_ref(v_args_1059_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn(lean_object* v_f_1062_){
_start:
{
lean_object* v___f_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___f_1064_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_NodeFilter_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1064_, 0, v_f_1062_);
v___x_1065_ = lean_unsigned_to_nat(0u);
v___x_1066_ = l_Lasm_JS_Function_ofSyncFn(v___f_1064_, v___x_1065_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1066_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1066_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_a_1075_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1082_ == 0)
{
v___x_1077_ = v___x_1066_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1066_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1075_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeFilter_ofSyncFn___boxed(lean_object* v_f_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_JS_Web_NodeFilter_ofSyncFn(v_f_1083_);
return v_res_1085_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSXPathNSResolver(void){
_start:
{
lean_object* v___f_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; 
v___f_1087_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSEventListener___lam__0___boxed), 1, 0);
v___x_1088_ = lean_mk_string_unchecked("Lasm.JS.Web.XPathNSResolver", 27, 27);
v___x_1089_ = 0;
v___x_1090_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1090_, 0, v___f_1087_);
lean_ctor_set(v___x_1090_, 1, v___x_1088_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*2, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0(lean_object* v_x_1091_){
_start:
{
lean_object* v___y_1094_; 
if (lean_obj_tag(v_x_1091_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1105_; 
v_a_1097_ = lean_ctor_get(v_x_1091_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v_x_1091_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1099_ = v_x_1091_;
v_isShared_1100_ = v_isSharedCheck_1105_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v_x_1091_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1105_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1102_; 
if (v_isShared_1100_ == 0)
{
v___x_1102_ = v___x_1099_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1097_);
v___x_1102_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
return v___x_1103_;
}
}
}
else
{
lean_object* v_a_1106_; 
v_a_1106_ = lean_ctor_get(v_x_1091_, 0);
lean_inc(v_a_1106_);
lean_dec_ref_known(v_x_1091_, 1);
if (lean_obj_tag(v_a_1106_) == 0)
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_box(1);
v___y_1094_ = v___x_1107_;
goto v___jp_1093_;
}
else
{
lean_object* v_val_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
v_val_1108_ = lean_ctor_get(v_a_1106_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_a_1106_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v_a_1106_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_val_1108_);
lean_dec(v_a_1106_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
lean_ctor_set_tag(v___x_1110_, 4);
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_val_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
v___y_1094_ = v___x_1113_;
goto v___jp_1093_;
}
}
}
}
v___jp_1093_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1095_, 0, v___y_1094_);
v___x_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0___boxed(lean_object* v_x_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0(v_x_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1(lean_object* v_f_1119_, lean_object* v___f_1120_, lean_object* v_x_1121_){
_start:
{
if (lean_obj_tag(v_x_1121_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v___f_1120_);
lean_dec_ref(v_f_1119_);
v_a_1123_ = lean_ctor_get(v_x_1121_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1125_ = v_x_1121_;
v_isShared_1126_ = v_isSharedCheck_1131_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v_x_1121_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1131_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
return v___x_1129_;
}
}
}
else
{
lean_object* v_a_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; 
v_a_1132_ = lean_ctor_get(v_x_1121_, 0);
lean_inc(v_a_1132_);
lean_dec_ref_known(v_x_1121_, 1);
v___x_1133_ = lean_unsigned_to_nat(0u);
v___x_1134_ = 0;
v___x_1135_ = lean_apply_2(v_f_1119_, v_a_1132_, lean_box(0));
v___x_1136_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1133_, v___x_1134_, v___x_1135_, v___f_1120_);
return v___x_1136_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1___boxed(lean_object* v_f_1137_, lean_object* v___f_1138_, lean_object* v_x_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1(v_f_1137_, v___f_1138_, v_x_1139_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2(lean_object* v___f_1142_, lean_object* v_args_1143_){
_start:
{
lean_object* v___x_1145_; uint8_t v___x_1146_; lean_object* v_val_1148_; lean_object* v___x_1151_; 
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = 0;
v___x_1151_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_OnErrorEventHandlerNonNull_ofFn_spec__2(v_args_1143_, v___x_1145_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 1);
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
v_val_1148_ = v___x_1157_;
goto v___jp_1147_;
}
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1160_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1151_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1151_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
lean_ctor_set_tag(v___x_1162_, 0);
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
v_val_1148_ = v___x_1165_;
goto v___jp_1147_;
}
}
}
v___jp_1147_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1149_, 0, v_val_1148_);
v___x_1150_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1145_, v___x_1146_, v___x_1149_, v___f_1142_);
return v___x_1150_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2___boxed(lean_object* v___f_1168_, lean_object* v_args_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2(v___f_1168_, v_args_1169_);
lean_dec_ref(v_args_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn(lean_object* v_f_1172_){
_start:
{
lean_object* v___f_1174_; lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___f_1174_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__0___boxed), 2, 0);
v___f_1175_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1175_, 0, v_f_1172_);
lean_closure_set(v___f_1175_, 1, v___f_1174_);
v___f_1176_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1176_, 0, v___f_1175_);
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = l_Lasm_JS_Function_ofFn(v___f_1176_, v___x_1177_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
v_a_1187_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1178_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1178_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofFn___boxed(lean_object* v_f_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_Web_XPathNSResolver_ofFn(v_f_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0(lean_object* v_f_1198_, lean_object* v_args_1199_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_unsigned_to_nat(0u);
v___x_1202_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Web_OnErrorEventHandlerNonNull_ofFn_spec__2(v_args_1199_, v___x_1201_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1204_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1204_ = lean_apply_2(v_f_1198_, v_a_1203_, lean_box(0));
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1224_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1224_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1224_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
if (lean_obj_tag(v_a_1205_) == 0)
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1209_ = lean_box(1);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1209_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
else
{
lean_object* v_val_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1223_; 
v_val_1213_ = lean_ctor_get(v_a_1205_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v_a_1205_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1215_ = v_a_1205_;
v_isShared_1216_ = v_isSharedCheck_1223_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_val_1213_);
lean_dec(v_a_1205_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1223_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 4);
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_val_1213_);
v___x_1218_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
lean_object* v___x_1220_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1218_);
v___x_1220_ = v___x_1207_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
v_a_1225_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1204_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1204_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref(v_f_1198_);
v_a_1233_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1202_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1202_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0___boxed(lean_object* v_f_1241_, lean_object* v_args_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0(v_f_1241_, v_args_1242_);
lean_dec_ref(v_args_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn(lean_object* v_f_1245_){
_start:
{
lean_object* v___f_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___f_1247_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1247_, 0, v_f_1245_);
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = l_Lasm_JS_Function_ofSyncFn(v___f_1247_, v___x_1248_);
if (lean_obj_tag(v___x_1249_) == 0)
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
v_a_1250_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1249_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1249_);
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
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
v_a_1258_ = lean_ctor_get(v___x_1249_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1249_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1249_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1249_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_XPathNSResolver_ofSyncFn___boxed(lean_object* v_f_1266_, lean_object* v_a_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lasm_JS_Web_XPathNSResolver_ofSyncFn(v_f_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object* v___f_1269_, lean_object* v_d_1270_){
_start:
{
lean_object* v_bubbles_1271_; lean_object* v_cancelable_1272_; lean_object* v_composed_1273_; lean_object* v_detail_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v_bubbles_1271_ = lean_ctor_get(v_d_1270_, 0);
lean_inc(v_bubbles_1271_);
v_cancelable_1272_ = lean_ctor_get(v_d_1270_, 1);
lean_inc(v_cancelable_1272_);
v_composed_1273_ = lean_ctor_get(v_d_1270_, 2);
lean_inc(v_composed_1273_);
v_detail_1274_ = lean_ctor_get(v_d_1270_, 3);
lean_inc(v_detail_1274_);
lean_dec_ref(v_d_1270_);
v___x_1275_ = lean_mk_string_unchecked("bubbles", 7, 7);
lean_inc_ref_n(v___f_1269_, 2);
v___x_1276_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1269_, v_bubbles_1271_);
v___x_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1275_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
v___x_1278_ = lean_mk_string_unchecked("cancelable", 10, 10);
v___x_1279_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1269_, v_cancelable_1272_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
v___x_1281_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_1282_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1269_, v_composed_1273_);
v___x_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1283_, 0, v___x_1281_);
lean_ctor_set(v___x_1283_, 1, v___x_1282_);
v___x_1284_ = lean_mk_string_unchecked("detail", 6, 6);
v___x_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
lean_ctor_set(v___x_1285_, 1, v_detail_1274_);
v___x_1286_ = lean_unsigned_to_nat(4u);
v___x_1287_ = lean_mk_empty_array_with_capacity(v___x_1286_);
v___x_1288_ = lean_array_push(v___x_1287_, v___x_1277_);
v___x_1289_ = lean_array_push(v___x_1288_, v___x_1280_);
v___x_1290_ = lean_array_push(v___x_1289_, v___x_1283_);
v___x_1291_ = lean_array_push(v___x_1290_, v___x_1285_);
v___x_1292_ = l_Lasm_JS_Web_Internal_fields(v___x_1291_);
lean_dec_ref(v___x_1291_);
return v___x_1292_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSCustomEventInit(void){
_start:
{
lean_object* v___f_1293_; lean_object* v___f_1294_; 
v___f_1293_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1294_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0), 2, 1);
lean_closure_set(v___f_1294_, 0, v___f_1293_);
return v___f_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSGetRootNodeOptions___lam__0(lean_object* v___f_1295_, lean_object* v_d_1296_){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1297_ = lean_mk_string_unchecked("composed", 8, 8);
v___x_1298_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1295_, v_d_1296_);
v___x_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1297_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = lean_unsigned_to_nat(1u);
v___x_1301_ = lean_mk_empty_array_with_capacity(v___x_1300_);
v___x_1302_ = lean_array_push(v___x_1301_, v___x_1299_);
v___x_1303_ = l_Lasm_JS_Web_Internal_fields(v___x_1302_);
lean_dec_ref(v___x_1302_);
return v___x_1303_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSGetRootNodeOptions(void){
_start:
{
lean_object* v___f_1304_; lean_object* v___f_1305_; 
v___f_1304_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1305_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSGetRootNodeOptions___lam__0), 2, 1);
lean_closure_set(v___f_1305_, 0, v___f_1304_);
return v___f_1305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStaticRangeInit___lam__0(lean_object* v_d_1306_){
_start:
{
lean_object* v_startContainer_1307_; lean_object* v_startOffset_1308_; lean_object* v_endContainer_1309_; lean_object* v_endOffset_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; lean_object* v___x_1328_; lean_object* v___y_1330_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v_startContainer_1307_ = lean_ctor_get(v_d_1306_, 0);
lean_inc(v_startContainer_1307_);
v_startOffset_1308_ = lean_ctor_get(v_d_1306_, 1);
lean_inc(v_startOffset_1308_);
v_endContainer_1309_ = lean_ctor_get(v_d_1306_, 2);
lean_inc(v_endContainer_1309_);
v_endOffset_1310_ = lean_ctor_get(v_d_1306_, 3);
lean_inc(v_endOffset_1310_);
lean_dec_ref(v_d_1306_);
v___x_1311_ = lean_mk_string_unchecked("startContainer", 14, 14);
v___x_1312_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref(v___x_1312_);
v___x_1313_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1313_, 0, v_startContainer_1307_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1311_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1328_ = lean_mk_string_unchecked("startOffset", 11, 11);
v___x_1343_ = lean_nat_to_int(v_startOffset_1308_);
v___x_1344_ = lean_nat_abs(v___x_1343_);
v___x_1345_ = lean_cstr_to_nat("9007199254740991");
v___x_1346_ = lean_nat_dec_le(v___x_1344_, v___x_1345_);
lean_dec(v___x_1344_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; 
v___x_1347_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1343_);
v___y_1330_ = v___x_1347_;
goto v___jp_1329_;
}
else
{
double v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = l_Float_ofInt(v___x_1343_);
lean_dec(v___x_1343_);
v___x_1349_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1349_, 0, v___x_1348_);
v___y_1330_ = v___x_1349_;
goto v___jp_1329_;
}
v___jp_1315_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___y_1318_);
lean_ctor_set(v___x_1320_, 1, v___y_1319_);
v___x_1321_ = lean_unsigned_to_nat(4u);
v___x_1322_ = lean_mk_empty_array_with_capacity(v___x_1321_);
v___x_1323_ = lean_array_push(v___x_1322_, v___x_1314_);
v___x_1324_ = lean_array_push(v___x_1323_, v___y_1317_);
v___x_1325_ = lean_array_push(v___x_1324_, v___y_1316_);
v___x_1326_ = lean_array_push(v___x_1325_, v___x_1320_);
v___x_1327_ = l_Lasm_JS_Web_Internal_fields(v___x_1326_);
lean_dec_ref(v___x_1326_);
return v___x_1327_;
}
v___jp_1329_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v___x_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1328_);
lean_ctor_set(v___x_1331_, 1, v___y_1330_);
v___x_1332_ = lean_mk_string_unchecked("endContainer", 12, 12);
v___x_1333_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1333_, 0, v_endContainer_1309_);
lean_ctor_set(v___x_1333_, 1, v___x_1312_);
v___x_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1334_, 0, v___x_1332_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = lean_mk_string_unchecked("endOffset", 9, 9);
v___x_1336_ = lean_nat_to_int(v_endOffset_1310_);
v___x_1337_ = lean_nat_abs(v___x_1336_);
v___x_1338_ = lean_cstr_to_nat("9007199254740991");
v___x_1339_ = lean_nat_dec_le(v___x_1337_, v___x_1338_);
lean_dec(v___x_1337_);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1336_);
v___y_1316_ = v___x_1334_;
v___y_1317_ = v___x_1331_;
v___y_1318_ = v___x_1335_;
v___y_1319_ = v___x_1340_;
goto v___jp_1315_;
}
else
{
double v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = l_Float_ofInt(v___x_1336_);
lean_dec(v___x_1336_);
v___x_1342_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1342_, 0, v___x_1341_);
v___y_1316_ = v___x_1334_;
v___y_1317_ = v___x_1331_;
v___y_1318_ = v___x_1335_;
v___y_1319_ = v___x_1342_;
goto v___jp_1315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx(lean_object* v_x_1351_){
_start:
{
if (lean_obj_tag(v_x_1351_) == 0)
{
lean_object* v___x_1352_; 
v___x_1352_ = lean_unsigned_to_nat(0u);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_unsigned_to_nat(1u);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorIdx___boxed(lean_object* v_x_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lasm_JS_Web_NodeOrDOMString_ctorIdx(v_x_1354_);
lean_dec_ref(v_x_1354_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(lean_object* v_t_1356_, lean_object* v_k_1357_){
_start:
{
if (lean_obj_tag(v_t_1356_) == 0)
{
lean_object* v_value_1358_; lean_object* v___x_1359_; 
v_value_1358_ = lean_ctor_get(v_t_1356_, 0);
lean_inc(v_value_1358_);
lean_dec_ref_known(v_t_1356_, 1);
v___x_1359_ = lean_apply_1(v_k_1357_, v_value_1358_);
return v___x_1359_;
}
else
{
lean_object* v_value_1360_; lean_object* v___x_1361_; 
v_value_1360_ = lean_ctor_get(v_t_1356_, 0);
lean_inc_ref(v_value_1360_);
lean_dec_ref_known(v_t_1356_, 1);
v___x_1361_ = lean_apply_1(v_k_1357_, v_value_1360_);
return v___x_1361_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim(lean_object* v_motive_1362_, lean_object* v_ctorIdx_1363_, lean_object* v_t_1364_, lean_object* v_h_1365_, lean_object* v_k_1366_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1364_, v_k_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_ctorElim___boxed(lean_object* v_motive_1368_, lean_object* v_ctorIdx_1369_, lean_object* v_t_1370_, lean_object* v_h_1371_, lean_object* v_k_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim(v_motive_1368_, v_ctorIdx_1369_, v_t_1370_, v_h_1371_, v_k_1372_);
lean_dec(v_ctorIdx_1369_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim___redArg(lean_object* v_t_1374_, lean_object* v_node_1375_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1374_, v_node_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_node_elim(lean_object* v_motive_1377_, lean_object* v_t_1378_, lean_object* v_h_1379_, lean_object* v_node_1380_){
_start:
{
lean_object* v___x_1381_; 
v___x_1381_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1378_, v_node_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim___redArg(lean_object* v_t_1382_, lean_object* v_domString_1383_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1382_, v_domString_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_NodeOrDOMString_domString_elim(lean_object* v_motive_1385_, lean_object* v_t_1386_, lean_object* v_h_1387_, lean_object* v_domString_1388_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = l_Lasm_JS_Web_NodeOrDOMString_ctorElim___redArg(v_t_1386_, v_domString_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSNodeOrDOMString___lam__0(lean_object* v_x_1390_){
_start:
{
if (lean_obj_tag(v_x_1390_) == 0)
{
lean_object* v_value_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v_value_1391_ = lean_ctor_get(v_x_1390_, 0);
lean_inc(v_value_1391_);
lean_dec_ref_known(v_x_1390_, 1);
v___x_1392_ = lean_mk_string_unchecked("", 0, 0);
v___x_1393_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1393_, 0, v_value_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
return v___x_1393_;
}
else
{
lean_object* v_value_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
v_value_1394_ = lean_ctor_get(v_x_1390_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_x_1390_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1396_ = v_x_1390_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_value_1394_);
lean_dec(v_x_1390_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set_tag(v___x_1396_, 4);
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_value_1394_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeNodeNodeOrDOMString___lam__0(lean_object* v_value_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_value_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringNodeOrDOMString___lam__0(lean_object* v_value_1406_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1407_, 0, v_value_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSElementCreationOptions___lam__0(lean_object* v___f_1409_, lean_object* v___f_1410_, lean_object* v_d_1411_){
_start:
{
lean_object* v_customElementRegistry_1412_; lean_object* v_is_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1430_; 
v_customElementRegistry_1412_ = lean_ctor_get(v_d_1411_, 0);
v_is_1413_ = lean_ctor_get(v_d_1411_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_d_1411_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1415_ = v_d_1411_;
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_is_1413_);
lean_inc(v_customElementRegistry_1412_);
lean_dec(v_d_1411_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1417_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1418_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1409_, v_customElementRegistry_1412_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v___x_1418_);
lean_ctor_set(v___x_1415_, 0, v___x_1417_);
v___x_1420_ = v___x_1415_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1417_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1421_ = lean_mk_string_unchecked("is", 2, 2);
v___x_1422_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1410_, v_is_1413_);
v___x_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
v___x_1424_ = lean_unsigned_to_nat(2u);
v___x_1425_ = lean_mk_empty_array_with_capacity(v___x_1424_);
v___x_1426_ = lean_array_push(v___x_1425_, v___x_1420_);
v___x_1427_ = lean_array_push(v___x_1426_, v___x_1423_);
v___x_1428_ = l_Lasm_JS_Web_Internal_fields(v___x_1427_);
lean_dec_ref(v___x_1427_);
return v___x_1428_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSElementCreationOptions(void){
_start:
{
lean_object* v___f_1431_; lean_object* v___f_1432_; lean_object* v___f_1433_; 
v___f_1431_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1432_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1433_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSElementCreationOptions___lam__0), 3, 2);
lean_closure_set(v___f_1433_, 0, v___f_1431_);
lean_closure_set(v___f_1433_, 1, v___f_1432_);
return v___f_1433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx(lean_object* v_x_1434_){
_start:
{
if (lean_obj_tag(v_x_1434_) == 0)
{
lean_object* v___x_1435_; 
v___x_1435_ = lean_unsigned_to_nat(0u);
return v___x_1435_;
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_unsigned_to_nat(1u);
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx___boxed(lean_object* v_x_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorIdx(v_x_1437_);
lean_dec_ref(v_x_1437_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(lean_object* v_t_1439_, lean_object* v_k_1440_){
_start:
{
lean_object* v_value_1441_; lean_object* v___x_1442_; 
v_value_1441_ = lean_ctor_get(v_t_1439_, 0);
lean_inc_ref(v_value_1441_);
lean_dec_ref(v_t_1439_);
v___x_1442_ = lean_apply_1(v_k_1440_, v_value_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim(lean_object* v_motive_1443_, lean_object* v_ctorIdx_1444_, lean_object* v_t_1445_, lean_object* v_h_1446_, lean_object* v_k_1447_){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1445_, v_k_1447_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___boxed(lean_object* v_motive_1449_, lean_object* v_ctorIdx_1450_, lean_object* v_t_1451_, lean_object* v_h_1452_, lean_object* v_k_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim(v_motive_1449_, v_ctorIdx_1450_, v_t_1451_, v_h_1452_, v_k_1453_);
lean_dec(v_ctorIdx_1450_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim___redArg(lean_object* v_t_1455_, lean_object* v_domString_1456_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1455_, v_domString_1456_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_domString_elim(lean_object* v_motive_1458_, lean_object* v_t_1459_, lean_object* v_h_1460_, lean_object* v_domString_1461_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1459_, v_domString_1461_);
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim___redArg(lean_object* v_t_1463_, lean_object* v_elementCreationOptions_1464_){
_start:
{
lean_object* v___x_1465_; 
v___x_1465_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1463_, v_elementCreationOptions_1464_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMStringOrElementCreationOptions_elementCreationOptions_elim(lean_object* v_motive_1466_, lean_object* v_t_1467_, lean_object* v_h_1468_, lean_object* v_elementCreationOptions_1469_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lasm_JS_Web_DOMStringOrElementCreationOptions_ctorElim___redArg(v_t_1467_, v_elementCreationOptions_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMStringOrElementCreationOptions___lam__0(lean_object* v_x_1471_){
_start:
{
if (lean_obj_tag(v_x_1471_) == 0)
{
lean_object* v_value_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_value_1472_ = lean_ctor_get(v_x_1471_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_x_1471_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v_x_1471_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_value_1472_);
lean_dec(v_x_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
lean_ctor_set_tag(v___x_1474_, 4);
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_value_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
else
{
lean_object* v_value_1480_; lean_object* v_customElementRegistry_1481_; lean_object* v_is_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1501_; 
v_value_1480_ = lean_ctor_get(v_x_1471_, 0);
lean_inc_ref(v_value_1480_);
lean_dec_ref_known(v_x_1471_, 1);
v_customElementRegistry_1481_ = lean_ctor_get(v_value_1480_, 0);
v_is_1482_ = lean_ctor_get(v_value_1480_, 1);
v_isSharedCheck_1501_ = !lean_is_exclusive(v_value_1480_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1484_ = v_value_1480_;
v_isShared_1485_ = v_isSharedCheck_1501_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_is_1482_);
lean_inc(v_customElementRegistry_1481_);
lean_dec(v_value_1480_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1501_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___f_1486_; lean_object* v___f_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___f_1486_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1487_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1488_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1489_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1486_, v_customElementRegistry_1481_);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 1, v___x_1489_);
lean_ctor_set(v___x_1484_, 0, v___x_1488_);
v___x_1491_ = v___x_1484_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v___x_1488_);
lean_ctor_set(v_reuseFailAlloc_1500_, 1, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; 
v___x_1492_ = lean_mk_string_unchecked("is", 2, 2);
v___x_1493_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1487_, v_is_1482_);
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = lean_unsigned_to_nat(2u);
v___x_1496_ = lean_mk_empty_array_with_capacity(v___x_1495_);
v___x_1497_ = lean_array_push(v___x_1496_, v___x_1491_);
v___x_1498_ = lean_array_push(v___x_1497_, v___x_1494_);
v___x_1499_ = l_Lasm_JS_Web_Internal_fields(v___x_1498_);
lean_dec_ref(v___x_1498_);
return v___x_1499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringDOMStringOrElementCreationOptions___lam__0(lean_object* v_value_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1504_, 0, v_value_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeElementCreationOptionsDOMStringOrElementCreationOptions___lam__0(lean_object* v_value_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v_value_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSImportNodeOptions___lam__0(lean_object* v___f_1509_, lean_object* v___f_1510_, lean_object* v_d_1511_){
_start:
{
lean_object* v_customElementRegistry_1512_; lean_object* v_selfOnly_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1530_; 
v_customElementRegistry_1512_ = lean_ctor_get(v_d_1511_, 0);
v_selfOnly_1513_ = lean_ctor_get(v_d_1511_, 1);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_d_1511_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1515_ = v_d_1511_;
v_isShared_1516_ = v_isSharedCheck_1530_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_selfOnly_1513_);
lean_inc(v_customElementRegistry_1512_);
lean_dec(v_d_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1530_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1517_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1518_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1509_, v_customElementRegistry_1512_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v___x_1518_);
lean_ctor_set(v___x_1515_, 0, v___x_1517_);
v___x_1520_ = v___x_1515_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1517_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1521_ = lean_mk_string_unchecked("selfOnly", 8, 8);
v___x_1522_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1510_, v_selfOnly_1513_);
v___x_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = lean_unsigned_to_nat(2u);
v___x_1525_ = lean_mk_empty_array_with_capacity(v___x_1524_);
v___x_1526_ = lean_array_push(v___x_1525_, v___x_1520_);
v___x_1527_ = lean_array_push(v___x_1526_, v___x_1523_);
v___x_1528_ = l_Lasm_JS_Web_Internal_fields(v___x_1527_);
lean_dec_ref(v___x_1527_);
return v___x_1528_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSImportNodeOptions(void){
_start:
{
lean_object* v___f_1531_; lean_object* v___f_1532_; lean_object* v___f_1533_; 
v___f_1531_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1532_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1533_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSImportNodeOptions___lam__0), 3, 2);
lean_closure_set(v___f_1533_, 0, v___f_1531_);
lean_closure_set(v___f_1533_, 1, v___f_1532_);
return v___f_1533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx(lean_object* v_x_1534_){
_start:
{
if (lean_obj_tag(v_x_1534_) == 0)
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_unsigned_to_nat(0u);
return v___x_1535_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_unsigned_to_nat(1u);
return v___x_1536_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx___boxed(lean_object* v_x_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorIdx(v_x_1537_);
lean_dec_ref(v_x_1537_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(lean_object* v_t_1539_, lean_object* v_k_1540_){
_start:
{
if (lean_obj_tag(v_t_1539_) == 0)
{
uint8_t v_value_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v_value_1541_ = lean_ctor_get_uint8(v_t_1539_, 0);
lean_dec_ref_known(v_t_1539_, 0);
v___x_1542_ = lean_box(v_value_1541_);
v___x_1543_ = lean_apply_1(v_k_1540_, v___x_1542_);
return v___x_1543_;
}
else
{
lean_object* v_value_1544_; lean_object* v___x_1545_; 
v_value_1544_ = lean_ctor_get(v_t_1539_, 0);
lean_inc_ref(v_value_1544_);
lean_dec_ref_known(v_t_1539_, 1);
v___x_1545_ = lean_apply_1(v_k_1540_, v_value_1544_);
return v___x_1545_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim(lean_object* v_motive_1546_, lean_object* v_ctorIdx_1547_, lean_object* v_t_1548_, lean_object* v_h_1549_, lean_object* v_k_1550_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1548_, v_k_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___boxed(lean_object* v_motive_1552_, lean_object* v_ctorIdx_1553_, lean_object* v_t_1554_, lean_object* v_h_1555_, lean_object* v_k_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim(v_motive_1552_, v_ctorIdx_1553_, v_t_1554_, v_h_1555_, v_k_1556_);
lean_dec(v_ctorIdx_1553_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim___redArg(lean_object* v_t_1558_, lean_object* v_boolean_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1558_, v_boolean_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_boolean_elim(lean_object* v_motive_1561_, lean_object* v_t_1562_, lean_object* v_h_1563_, lean_object* v_boolean_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1562_, v_boolean_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim___redArg(lean_object* v_t_1566_, lean_object* v_importNodeOptions_1567_){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1566_, v_importNodeOptions_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_BooleanOrImportNodeOptions_importNodeOptions_elim(lean_object* v_motive_1569_, lean_object* v_t_1570_, lean_object* v_h_1571_, lean_object* v_importNodeOptions_1572_){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lasm_JS_Web_BooleanOrImportNodeOptions_ctorElim___redArg(v_t_1570_, v_importNodeOptions_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSBooleanOrImportNodeOptions___lam__0(lean_object* v_x_1574_){
_start:
{
if (lean_obj_tag(v_x_1574_) == 0)
{
uint8_t v_value_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v_value_1575_ = lean_ctor_get_uint8(v_x_1574_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v_x_1574_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v_x_1574_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v_x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set_tag(v___x_1577_, 2);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1581_, 0, v_value_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
else
{
lean_object* v_value_1583_; lean_object* v_customElementRegistry_1584_; lean_object* v_selfOnly_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1604_; 
v_value_1583_ = lean_ctor_get(v_x_1574_, 0);
lean_inc_ref(v_value_1583_);
lean_dec_ref_known(v_x_1574_, 1);
v_customElementRegistry_1584_ = lean_ctor_get(v_value_1583_, 0);
v_selfOnly_1585_ = lean_ctor_get(v_value_1583_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_value_1583_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1587_ = v_value_1583_;
v_isShared_1588_ = v_isSharedCheck_1604_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_selfOnly_1585_);
lean_inc(v_customElementRegistry_1584_);
lean_dec(v_value_1583_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1604_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___f_1589_; lean_object* v___f_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
v___f_1589_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1590_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___x_1591_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1592_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1589_, v_customElementRegistry_1584_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 1, v___x_1592_);
lean_ctor_set(v___x_1587_, 0, v___x_1591_);
v___x_1594_ = v___x_1587_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1595_ = lean_mk_string_unchecked("selfOnly", 8, 8);
v___x_1596_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1590_, v_selfOnly_1585_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = lean_unsigned_to_nat(2u);
v___x_1599_ = lean_mk_empty_array_with_capacity(v___x_1598_);
v___x_1600_ = lean_array_push(v___x_1599_, v___x_1594_);
v___x_1601_ = lean_array_push(v___x_1600_, v___x_1597_);
v___x_1602_ = l_Lasm_JS_Web_Internal_fields(v___x_1601_);
lean_dec_ref(v___x_1601_);
return v___x_1602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0(uint8_t v_value_1606_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1607_, 0, v_value_1606_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0___boxed(lean_object* v_value_1608_){
_start:
{
uint8_t v_value_boxed_1609_; lean_object* v_res_1610_; 
v_value_boxed_1609_ = lean_unbox(v_value_1608_);
v_res_1610_ = l_Lasm_JS_Web_instCoeBoolBooleanOrImportNodeOptions___lam__0(v_value_boxed_1609_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeImportNodeOptionsBooleanOrImportNodeOptions___lam__0(lean_object* v_value_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1613_, 0, v_value_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx(lean_object* v_x_1615_){
_start:
{
switch(lean_obj_tag(v_x_1615_))
{
case 0:
{
lean_object* v___x_1616_; 
v___x_1616_ = lean_unsigned_to_nat(0u);
return v___x_1616_;
}
case 1:
{
lean_object* v___x_1617_; 
v___x_1617_ = lean_unsigned_to_nat(1u);
return v___x_1617_;
}
case 2:
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_unsigned_to_nat(2u);
return v___x_1618_;
}
default: 
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_unsigned_to_nat(3u);
return v___x_1619_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx___boxed(lean_object* v_x_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorIdx(v_x_1620_);
lean_dec_ref(v_x_1620_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(lean_object* v_t_1622_, lean_object* v_k_1623_){
_start:
{
if (lean_obj_tag(v_t_1622_) == 3)
{
lean_object* v_value_1624_; lean_object* v___x_1625_; 
v_value_1624_ = lean_ctor_get(v_t_1622_, 0);
lean_inc_ref(v_value_1624_);
lean_dec_ref_known(v_t_1622_, 1);
v___x_1625_ = lean_apply_1(v_k_1623_, v_value_1624_);
return v___x_1625_;
}
else
{
lean_object* v_value_1626_; lean_object* v___x_1627_; 
v_value_1626_ = lean_ctor_get(v_t_1622_, 0);
lean_inc(v_value_1626_);
lean_dec_ref(v_t_1622_);
v___x_1627_ = lean_apply_1(v_k_1623_, v_value_1626_);
return v___x_1627_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim(lean_object* v_motive_1628_, lean_object* v_ctorIdx_1629_, lean_object* v_t_1630_, lean_object* v_h_1631_, lean_object* v_k_1632_){
_start:
{
lean_object* v___x_1633_; 
v___x_1633_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1630_, v_k_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___boxed(lean_object* v_motive_1634_, lean_object* v_ctorIdx_1635_, lean_object* v_t_1636_, lean_object* v_h_1637_, lean_object* v_k_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim(v_motive_1634_, v_ctorIdx_1635_, v_t_1636_, v_h_1637_, v_k_1638_);
lean_dec(v_ctorIdx_1635_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim___redArg(lean_object* v_t_1640_, lean_object* v_trustedHTML_1641_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1640_, v_trustedHTML_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedHTML_elim(lean_object* v_motive_1643_, lean_object* v_t_1644_, lean_object* v_h_1645_, lean_object* v_trustedHTML_1646_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1644_, v_trustedHTML_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim___redArg(lean_object* v_t_1648_, lean_object* v_trustedScript_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1648_, v_trustedScript_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScript_elim(lean_object* v_motive_1651_, lean_object* v_t_1652_, lean_object* v_h_1653_, lean_object* v_trustedScript_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1652_, v_trustedScript_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim___redArg(lean_object* v_t_1656_, lean_object* v_trustedScriptURL_1657_){
_start:
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1656_, v_trustedScriptURL_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_trustedScriptURL_elim(lean_object* v_motive_1659_, lean_object* v_t_1660_, lean_object* v_h_1661_, lean_object* v_trustedScriptURL_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1660_, v_trustedScriptURL_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim___redArg(lean_object* v_t_1664_, lean_object* v_domString_1665_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1664_, v_domString_1665_);
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_domString_elim(lean_object* v_motive_1667_, lean_object* v_t_1668_, lean_object* v_h_1669_, lean_object* v_domString_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lasm_JS_Web_TrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString_ctorElim___redArg(v_t_1668_, v_domString_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_x_1672_){
_start:
{
if (lean_obj_tag(v_x_1672_) == 3)
{
lean_object* v_value_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
v_value_1673_ = lean_ctor_get(v_x_1672_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_x_1672_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v_x_1672_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_value_1673_);
lean_dec(v_x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 4);
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_value_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
else
{
lean_object* v_value_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v_value_1681_ = lean_ctor_get(v_x_1672_, 0);
lean_inc(v_value_1681_);
lean_dec_ref(v_x_1672_);
v___x_1682_ = lean_mk_string_unchecked("", 0, 0);
v___x_1683_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_value_1681_);
lean_ctor_set(v___x_1683_, 1, v___x_1682_);
return v___x_1683_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedHTMLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1685_){
_start:
{
lean_object* v___x_1686_; 
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_value_1685_);
return v___x_1686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1688_){
_start:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1689_, 0, v_value_1688_);
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeTrustedScriptURLTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1691_){
_start:
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_value_1691_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTrustedHTMLOrTrustedScriptOrTrustedScriptURLOrDOMString___lam__0(lean_object* v_value_1694_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1695_, 0, v_value_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSShadowRootInit___lam__0(lean_object* v___f_1697_, lean_object* v___f_1698_, lean_object* v___f_1699_, lean_object* v_d_1700_){
_start:
{
lean_object* v_mode_1701_; lean_object* v_delegatesFocus_1702_; lean_object* v_serializable_1703_; lean_object* v_slotAssignment_1704_; lean_object* v_clonable_1705_; lean_object* v_customElementRegistry_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v_mode_1701_ = lean_ctor_get(v_d_1700_, 0);
lean_inc_ref(v_mode_1701_);
v_delegatesFocus_1702_ = lean_ctor_get(v_d_1700_, 1);
lean_inc(v_delegatesFocus_1702_);
v_serializable_1703_ = lean_ctor_get(v_d_1700_, 2);
lean_inc(v_serializable_1703_);
v_slotAssignment_1704_ = lean_ctor_get(v_d_1700_, 3);
lean_inc(v_slotAssignment_1704_);
v_clonable_1705_ = lean_ctor_get(v_d_1700_, 4);
lean_inc(v_clonable_1705_);
v_customElementRegistry_1706_ = lean_ctor_get(v_d_1700_, 5);
lean_inc(v_customElementRegistry_1706_);
lean_dec_ref(v_d_1700_);
v___x_1707_ = lean_mk_string_unchecked("mode", 4, 4);
v___x_1708_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1708_, 0, v_mode_1701_);
v___x_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1707_);
lean_ctor_set(v___x_1709_, 1, v___x_1708_);
v___x_1710_ = lean_mk_string_unchecked("delegatesFocus", 14, 14);
lean_inc_ref_n(v___f_1697_, 2);
v___x_1711_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1697_, v_delegatesFocus_1702_);
v___x_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1710_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
v___x_1713_ = lean_mk_string_unchecked("serializable", 12, 12);
v___x_1714_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1697_, v_serializable_1703_);
v___x_1715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1713_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
v___x_1716_ = lean_mk_string_unchecked("slotAssignment", 14, 14);
v___x_1717_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1698_, v_slotAssignment_1704_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1716_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
v___x_1719_ = lean_mk_string_unchecked("clonable", 8, 8);
v___x_1720_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1697_, v_clonable_1705_);
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
v___x_1722_ = lean_mk_string_unchecked("customElementRegistry", 21, 21);
v___x_1723_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1699_, v_customElementRegistry_1706_);
v___x_1724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1722_);
lean_ctor_set(v___x_1724_, 1, v___x_1723_);
v___x_1725_ = lean_unsigned_to_nat(6u);
v___x_1726_ = lean_mk_empty_array_with_capacity(v___x_1725_);
v___x_1727_ = lean_array_push(v___x_1726_, v___x_1709_);
v___x_1728_ = lean_array_push(v___x_1727_, v___x_1712_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1715_);
v___x_1730_ = lean_array_push(v___x_1729_, v___x_1718_);
v___x_1731_ = lean_array_push(v___x_1730_, v___x_1721_);
v___x_1732_ = lean_array_push(v___x_1731_, v___x_1724_);
v___x_1733_ = l_Lasm_JS_Web_Internal_fields(v___x_1732_);
lean_dec_ref(v___x_1732_);
return v___x_1733_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instToJSShadowRootInit(void){
_start:
{
lean_object* v___f_1734_; lean_object* v___f_1735_; lean_object* v___f_1736_; lean_object* v___f_1737_; 
v___f_1734_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1735_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSShadowRootMode___lam__0), 1, 0);
v___f_1736_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAudioTrack___lam__0), 1, 0);
v___f_1737_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSShadowRootInit___lam__0), 4, 3);
lean_closure_set(v___f_1737_, 0, v___f_1734_);
lean_closure_set(v___f_1737_, 1, v___f_1735_);
lean_closure_set(v___f_1737_, 2, v___f_1736_);
return v___f_1737_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_NONE(void){
_start:
{
lean_object* v___x_1738_; 
v___x_1738_ = lean_unsigned_to_nat(0u);
return v___x_1738_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE(void){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = lean_unsigned_to_nat(1u);
return v___x_1739_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_AT__TARGET(void){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_unsigned_to_nat(2u);
return v___x_1740_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE(void){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_unsigned_to_nat(3u);
return v___x_1741_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ANY__TYPE(void){
_start:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
return v___x_1742_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_NUMBER__TYPE(void){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_unsigned_to_nat(1u);
return v___x_1743_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_STRING__TYPE(void){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_unsigned_to_nat(2u);
return v___x_1744_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_BOOLEAN__TYPE(void){
_start:
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_unsigned_to_nat(3u);
return v___x_1745_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__ITERATOR__TYPE(void){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_unsigned_to_nat(4u);
return v___x_1746_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__ITERATOR__TYPE(void){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_unsigned_to_nat(5u);
return v___x_1747_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_UNORDERED__NODE__SNAPSHOT__TYPE(void){
_start:
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_unsigned_to_nat(6u);
return v___x_1748_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ORDERED__NODE__SNAPSHOT__TYPE(void){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_unsigned_to_nat(7u);
return v___x_1749_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_ANY__UNORDERED__NODE__TYPE(void){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_unsigned_to_nat(8u);
return v___x_1750_;
}
}
static lean_object* _init_l_Lasm_JS_Web_XPathResult_FIRST__ORDERED__NODE__TYPE(void){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_unsigned_to_nat(9u);
return v___x_1751_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ELEMENT__NODE(void){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_unsigned_to_nat(1u);
return v___x_1752_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ATTRIBUTE__NODE(void){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_unsigned_to_nat(2u);
return v___x_1753_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_TEXT__NODE(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_unsigned_to_nat(3u);
return v___x_1754_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_CDATA__SECTION__NODE(void){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_unsigned_to_nat(4u);
return v___x_1755_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ENTITY__REFERENCE__NODE(void){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_unsigned_to_nat(5u);
return v___x_1756_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_ENTITY__NODE(void){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_unsigned_to_nat(6u);
return v___x_1757_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_PROCESSING__INSTRUCTION__NODE(void){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_unsigned_to_nat(7u);
return v___x_1758_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_COMMENT__NODE(void){
_start:
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_unsigned_to_nat(8u);
return v___x_1759_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__NODE(void){
_start:
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_unsigned_to_nat(9u);
return v___x_1760_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__TYPE__NODE(void){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_unsigned_to_nat(10u);
return v___x_1761_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__FRAGMENT__NODE(void){
_start:
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_unsigned_to_nat(11u);
return v___x_1762_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_NOTATION__NODE(void){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_unsigned_to_nat(12u);
return v___x_1763_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__DISCONNECTED(void){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_unsigned_to_nat(1u);
return v___x_1764_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__PRECEDING(void){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_unsigned_to_nat(2u);
return v___x_1765_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__FOLLOWING(void){
_start:
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_unsigned_to_nat(4u);
return v___x_1766_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINS(void){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_unsigned_to_nat(8u);
return v___x_1767_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__CONTAINED__BY(void){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_unsigned_to_nat(16u);
return v___x_1768_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Node_DOCUMENT__POSITION__IMPLEMENTATION__SPECIFIC(void){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_unsigned_to_nat(32u);
return v___x_1769_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_START__TO__START(void){
_start:
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_unsigned_to_nat(0u);
return v___x_1770_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_START__TO__END(void){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_unsigned_to_nat(1u);
return v___x_1771_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_END__TO__END(void){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = lean_unsigned_to_nat(2u);
return v___x_1772_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Range_END__TO__START(void){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = lean_unsigned_to_nat(3u);
return v___x_1773_;
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
