// Lean compiler output
// Module: Lasm.JS.Web.Dom
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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventTarget = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEventTarget___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEventTarget___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventTarget___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventTarget___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSEventTarget___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSEventTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEventTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.EventTarget"};
static const lean_object* l_Lasm_JS_Web_instFromJSEventTarget___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEventTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEventTarget___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSEventTarget = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Web.Event"};
static const lean_object* l_Lasm_JS_Web_instFromJSEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCustomEvent = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCustomEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.CustomEvent"};
static const lean_object* l_Lasm_JS_Web_instFromJSCustomEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCustomEvent___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCustomEvent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCustomEvent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCustomEvent___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCustomEvent___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCustomEvent = (const lean_object*)&l_Lasm_JS_Web_instFromJSCustomEvent___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeCustomEventEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeCustomEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent = (const lean_object*)&l_Lasm_JS_Web_instCoeCustomEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAbortController = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSAbortController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.AbortController"};
static const lean_object* l_Lasm_JS_Web_instFromJSAbortController___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAbortController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSAbortController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSAbortController___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSAbortController = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAbortSignal = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSAbortSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.AbortSignal"};
static const lean_object* l_Lasm_JS_Web_instFromJSAbortSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortSignal___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSAbortSignal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSAbortSignal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSAbortSignal___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortSignal___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSAbortSignal = (const lean_object*)&l_Lasm_JS_Web_instFromJSAbortSignal___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeAbortSignalEventTarget = (const lean_object*)&l_Lasm_JS_Web_instCoeCustomEventEvent___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMException = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSDOMException___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.DOMException"};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMException___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMException___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDOMException___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSDOMException___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMException___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMException___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSDOMException = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMException___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventListener = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEventListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.EventListener"};
static const lean_object* l_Lasm_JS_Web_instFromJSEventListener___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventListener___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEventListener___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSEventListener___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEventListener___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventListener___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSEventListener = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventListener___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_EventListener_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_EventListener_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventListener_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "capture"};
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "passive"};
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "once"};
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__1_value;
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
static const lean_closure_object l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEventListenerOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListenerOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListenerOptions___closed__0_value;
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
static const lean_closure_object l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean = (const lean_object*)&l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bubbles"};
static const lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "cancelable"};
static const lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "composed"};
static const lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventInit___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSEventInit___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSCustomEventInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSCustomEventInit___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSCustomEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCustomEventInit = (const lean_object*)&l_Lasm_JS_Web_instToJSCustomEventInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSEventHandlerNonNull = (const lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.EventHandlerNonNull"};
static const lean_object* l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSEventTarget___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSEventHandlerNonNull = (const lean_object*)&l_Lasm_JS_Web_instFromJSEventHandlerNonNull___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_EventHandlerNonNull_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventHandlerNonNull_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_EventTarget_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.EventTarget.new"};
static const lean_object* l_Lasm_JS_Web_EventTarget_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_EventTarget_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_EventTarget_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_EventTarget_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "EventTarget"};
static const lean_object* l_Lasm_JS_Web_EventTarget_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_EventTarget_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_EventTarget_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__3_value;
static const lean_array_object l_Lasm_JS_Web_EventTarget_new___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_EventTarget_new___closed__4 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Web_EventTarget_new___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_EventTarget_new___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0(lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_EventTarget_addEventListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "addEventListener"};
static const lean_object* l_Lasm_JS_Web_EventTarget_addEventListener___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_addEventListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_removeEventListener_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_EventTarget_removeEventListener___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "removeEventListener"};
static const lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_removeEventListener___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_EventTarget_dispatchEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "dispatchEvent"};
static const lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_EventTarget_dispatchEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Web.Event.new"};
static const lean_object* l_Lasm_JS_Web_Event_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Event_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Event"};
static const lean_object* l_Lasm_JS_Web_Event_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Event_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_Event_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Event_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Event_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Event_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Event_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_NONE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_CAPTURING__PHASE;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_AT__TARGET;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_BUBBLING__PHASE;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_type___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Web_Event_type___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_type___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Option (Lasm.JS.Web.EventTarget)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_target___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_JS_Web_Event_target___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_target___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_srcElement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "srcElement"};
static const lean_object* l_Lasm_JS_Web_Event_srcElement___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_srcElement___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_currentTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "currentTarget"};
static const lean_object* l_Lasm_JS_Web_Event_currentTarget___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_currentTarget___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_eventPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eventPhase"};
static const lean_object* l_Lasm_JS_Web_Event_eventPhase___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_eventPhase___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_cancelBubble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "cancelBubble"};
static const lean_object* l_Lasm_JS_Web_Event_cancelBubble___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_cancelBubble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_returnValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "returnValue"};
static const lean_object* l_Lasm_JS_Web_Event_returnValue___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_returnValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_defaultPrevented___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "defaultPrevented"};
static const lean_object* l_Lasm_JS_Web_Event_defaultPrevented___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_defaultPrevented___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_isTrusted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "isTrusted"};
static const lean_object* l_Lasm_JS_Web_Event_isTrusted___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_isTrusted___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_timeStamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "timeStamp"};
static const lean_object* l_Lasm_JS_Web_Event_timeStamp___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_timeStamp___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Array (Lasm.JS.Web.EventTarget)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "an element is not Lasm.JS.Web.EventTarget"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_composedPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "composedPath"};
static const lean_object* l_Lasm_JS_Web_Event_composedPath___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_composedPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_stopPropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stopPropagation"};
static const lean_object* l_Lasm_JS_Web_Event_stopPropagation___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_stopPropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_stopImmediatePropagation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "stopImmediatePropagation"};
static const lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_stopImmediatePropagation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_preventDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "preventDefault"};
static const lean_object* l_Lasm_JS_Web_Event_preventDefault___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_preventDefault___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Event_initEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "initEvent"};
static const lean_object* l_Lasm_JS_Web_Event_initEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Event_initEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CustomEvent_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.CustomEvent.new"};
static const lean_object* l_Lasm_JS_Web_CustomEvent_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CustomEvent_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_CustomEvent_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CustomEvent"};
static const lean_object* l_Lasm_JS_Web_CustomEvent_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CustomEvent_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_CustomEvent_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CustomEvent_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CustomEvent_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CustomEvent_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CustomEvent_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CustomEvent_initCustomEvent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "initCustomEvent"};
static const lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CustomEvent_initCustomEvent___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortController_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.AbortController.new"};
static const lean_object* l_Lasm_JS_Web_AbortController_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortController_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_AbortController_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "AbortController"};
static const lean_object* l_Lasm_JS_Web_AbortController_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_AbortController_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_AbortController_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_AbortController_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_AbortController_new___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_AbortController_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_AbortController_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortController_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Web_AbortController_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortController_abort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_aborted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "aborted"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_aborted___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_aborted___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_reason___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reason"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_reason___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_reason___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Option (Lasm.JS.Web.EventHandlerNonNull)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_onabort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onabort"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_onabort___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_onabort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.AbortSignal.abort"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_abort___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_AbortSignal_abort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "AbortSignal.abort"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_abort___closed__1 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_abort___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_AbortSignal_abort___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_AbortSignal_abort___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_AbortSignal_abort___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_AbortSignal_abort___closed__2 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_abort___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_timeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.AbortSignal.timeout"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_timeout___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_timeout___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_AbortSignal_timeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "AbortSignal.timeout"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_timeout___closed__1 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_timeout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_AbortSignal_timeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_AbortSignal_timeout___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_AbortSignal_timeout___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_AbortSignal_timeout___closed__2 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_timeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_any___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.AbortSignal.any"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_any___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_any___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_AbortSignal_any___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "AbortSignal.any"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_any___closed__1 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_any___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_AbortSignal_any___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_AbortSignal_any___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_AbortSignal_any___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_AbortSignal_any___closed__2 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_any___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_AbortSignal_throwIfAborted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "throwIfAborted"};
static const lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted___closed__0 = (const lean_object*)&l_Lasm_JS_Web_AbortSignal_throwIfAborted___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMException_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.DOMException.new"};
static const lean_object* l_Lasm_JS_Web_DOMException_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMException_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DOMException_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "DOMException"};
static const lean_object* l_Lasm_JS_Web_DOMException_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMException_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_DOMException_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DOMException_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_EventTarget_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DOMException_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DOMException_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DOMException_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_SYNTAX__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NAMESPACE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_VALIDATION__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_SECURITY__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_NETWORK__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_ABORT__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_TIMEOUT__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR;
static const lean_string_object l_Lasm_JS_Web_DOMException_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Web_DOMException_name___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMException_name___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMException_message___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_JS_Web_DOMException_message___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMException_message___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMException_code___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Web_DOMException_code___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMException_code___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventTarget___lam__0(lean_object* v_x_9_){
_start:
{
if (lean_obj_tag(v_x_9_) == 9)
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_x_9_, 0);
lean_inc(v_value_10_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_10_);
return v___x_11_;
}
else
{
lean_object* v___x_12_; 
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEventTarget___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSEventTarget___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSEventTarget___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0(lean_object* v_self_36_){
_start:
{
lean_inc(v_self_36_);
return v_self_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0___boxed(lean_object* v_self_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lasm_JS_Web_instCoeCustomEventEvent___lam__0(v_self_37_);
lean_dec(v_self_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0(lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_84_; 
v_a_76_ = lean_ctor_get(v_x_74_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_74_);
if (v_isSharedCheck_84_ == 0)
{
v___x_78_ = v_x_74_;
v_isShared_79_ = v_isSharedCheck_84_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v_x_74_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_84_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_83_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
}
}
else
{
lean_object* v___x_85_; 
lean_dec_ref_known(v_x_74_, 1);
v___x_85_ = ((lean_object*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__1));
return v___x_85_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed(lean_object* v_x_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lasm_JS_Web_EventListener_ofFn___lam__0(v_x_86_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1(lean_object* v_f_89_, lean_object* v___f_90_, lean_object* v_x_91_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_101_; 
lean_dec_ref(v___f_90_);
lean_dec_ref(v_f_89_);
v_a_93_ = lean_ctor_get(v_x_91_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_91_);
if (v_isSharedCheck_101_ == 0)
{
v___x_95_ = v_x_91_;
v_isShared_96_ = v_isSharedCheck_101_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v_x_91_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_101_;
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
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_100_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
return v___x_99_;
}
}
}
else
{
lean_object* v_a_102_; lean_object* v___x_103_; uint8_t v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v_a_102_ = lean_ctor_get(v_x_91_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v_x_91_, 1);
v___x_103_ = lean_unsigned_to_nat(0u);
v___x_104_ = 0;
v___x_105_ = lean_apply_2(v_f_89_, v_a_102_, lean_box(0));
v___x_106_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_103_, v___x_104_, v___x_105_, v___f_90_);
return v___x_106_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed(lean_object* v_f_107_, lean_object* v___f_108_, lean_object* v_x_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lasm_JS_Web_EventListener_ofFn___lam__1(v_f_107_, v___f_108_, v_x_109_);
return v_res_111_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_116_ = lean_string_utf8_byte_size(v___x_115_);
return v___x_116_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3);
v___x_119_ = lean_nat_dec_eq(v___x_118_, v___x_117_);
return v___x_119_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_124_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__8));
v___x_125_ = lean_unsigned_to_nat(46u);
v___x_126_ = lean_unsigned_to_nat(193u);
v___x_127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__7));
v___x_128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__6));
v___x_129_ = l_mkPanicMessageWithDecl(v___x_128_, v___x_127_, v___x_126_, v___x_125_, v___x_124_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(lean_object* v_context_131_, lean_object* v_d_132_){
_start:
{
lean_object* v___y_135_; lean_object* v___y_136_; 
if (lean_obj_tag(v_d_132_) == 9)
{
lean_object* v_value_140_; lean_object* v___x_141_; 
v_value_140_ = lean_ctor_get(v_d_132_, 0);
lean_inc(v_value_140_);
lean_dec_ref_known(v_d_132_, 2);
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v_value_140_);
return v___x_141_;
}
else
{
lean_object* v___x_142_; lean_object* v_received_144_; 
v___x_142_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_132_) == 9)
{
lean_object* v_value_158_; lean_object* v_description_159_; uint8_t v___x_160_; 
v_value_158_ = lean_ctor_get(v_d_132_, 0);
v_description_159_ = lean_ctor_get(v_d_132_, 1);
v___x_160_ = lean_string_dec_eq(v_description_159_, v___x_142_);
if (v___x_160_ == 0)
{
goto v___jp_156_;
}
else
{
uint32_t v___x_161_; uint64_t v___x_162_; lean_object* v___x_163_; uint32_t v___x_164_; lean_object* v___x_165_; 
lean_inc_n(v_value_158_, 2);
lean_dec_ref_known(v_d_132_, 2);
v___x_161_ = 206;
v___x_162_ = 0ULL;
v___x_163_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_163_, 0, v_value_158_);
lean_ctor_set(v___x_163_, 1, v___x_142_);
v___x_164_ = lasm_js_value_handle(v_value_158_);
lean_dec(v_value_158_);
v___x_165_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_161_, v___x_162_, v___x_163_, v___x_164_);
lean_dec_ref_known(v___x_163_, 2);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v_a_166_; uint8_t v___x_167_; 
v_a_166_ = lean_ctor_get(v___x_165_, 0);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_165_, 1);
v___x_167_ = lean_string_validate_utf8(v_a_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v_a_166_);
v___x_168_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_169_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_168_);
v_received_144_ = v___x_169_;
goto v___jp_143_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_string_from_utf8_unchecked(v_a_166_);
v_received_144_ = v___x_170_;
goto v___jp_143_;
}
}
else
{
lean_object* v___x_171_; 
lean_dec_ref_known(v___x_165_, 1);
v___x_171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_144_ = v___x_171_;
goto v___jp_143_;
}
}
}
else
{
goto v___jp_156_;
}
v___jp_143_:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_146_ = lean_string_append(v___x_145_, v_context_131_);
v___x_147_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_148_ = lean_string_append(v___x_146_, v___x_147_);
v___x_149_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEvent___closed__0));
v___x_150_ = lean_string_append(v___x_148_, v___x_149_);
v___x_151_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_152_ = lean_string_append(v___x_150_, v___x_151_);
v___x_153_ = lean_string_append(v___x_152_, v_received_144_);
lean_dec_ref(v_received_144_);
v___x_154_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_135_ = v___x_153_;
v___y_136_ = v___x_155_;
goto v___jp_134_;
}
else
{
v___y_135_ = v___x_153_;
v___y_136_ = v___x_142_;
goto v___jp_134_;
}
}
v___jp_156_:
{
lean_object* v___x_157_; 
v___x_157_ = l_Lasm_JS_Data_describe(v_d_132_);
v_received_144_ = v___x_157_;
goto v___jp_143_;
}
}
v___jp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_137_ = lean_string_append(v___y_135_, v___y_136_);
v___x_138_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_138_, 0, v___x_137_);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_172_, lean_object* v_d_173_, lean_object* v_a_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v_context_172_, v_d_173_);
lean_dec_ref(v_context_172_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(lean_object* v_args_177_, lean_object* v_i_178_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_180_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___closed__0));
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v_i_178_, v___x_181_);
v___x_183_ = l_Nat_reprFast(v___x_182_);
v___x_184_ = lean_string_append(v___x_180_, v___x_183_);
lean_dec_ref(v___x_183_);
v___x_185_ = lean_array_get_size(v_args_177_);
v___x_186_ = lean_nat_dec_lt(v_i_178_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_box(0);
v___x_188_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_184_, v___x_187_);
lean_dec_ref(v___x_184_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_189_ = lean_array_fget_borrowed(v_args_177_, v_i_178_);
lean_inc(v___x_189_);
v___x_190_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_184_, v___x_189_);
lean_dec_ref(v___x_184_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___boxed(lean_object* v_args_191_, lean_object* v_i_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_191_, v_i_192_);
lean_dec(v_i_192_);
lean_dec_ref(v_args_191_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2(lean_object* v___f_195_, lean_object* v_args_196_){
_start:
{
lean_object* v___x_198_; uint8_t v___x_199_; lean_object* v_val_201_; lean_object* v___x_204_; 
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = 0;
v___x_204_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_196_, v___x_198_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set_tag(v___x_207_, 1);
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
v_val_201_ = v___x_210_;
goto v___jp_200_;
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_204_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_204_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
lean_ctor_set_tag(v___x_215_, 0);
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_val_201_ = v___x_218_;
goto v___jp_200_;
}
}
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v_val_201_);
v___x_203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_198_, v___x_199_, v___x_202_, v___f_195_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed(lean_object* v___f_221_, lean_object* v_args_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lasm_JS_Web_EventListener_ofFn___lam__2(v___f_221_, v_args_222_);
lean_dec_ref(v_args_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn(lean_object* v_f_226_){
_start:
{
lean_object* v___f_228_; lean_object* v___f_229_; lean_object* v___f_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___f_228_ = ((lean_object*)(l_Lasm_JS_Web_EventListener_ofFn___closed__0));
v___f_229_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_229_, 0, v_f_226_);
lean_closure_set(v___f_229_, 1, v___f_228_);
v___f_230_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_230_, 0, v___f_229_);
v___x_231_ = lean_unsigned_to_nat(0u);
v___x_232_ = l_Lasm_JS_Function_ofFn(v___f_230_, v___x_231_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_232_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_232_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
v_a_241_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_232_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_232_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object* v_f_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lasm_JS_Web_EventListener_ofFn(v_f_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object* v_f_252_, lean_object* v_args_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_253_, v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v___x_258_ = lean_apply_2(v_f_252_, v_a_257_, lean_box(0));
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_266_; 
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_266_ == 0)
{
lean_object* v_unused_267_; 
v_unused_267_ = lean_ctor_get(v___x_258_, 0);
lean_dec(v_unused_267_);
v___x_260_ = v___x_258_;
v_isShared_261_ = v_isSharedCheck_266_;
goto v_resetjp_259_;
}
else
{
lean_dec(v___x_258_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_266_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = lean_box(0);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_262_);
v___x_264_ = v___x_260_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_258_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_258_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
lean_dec_ref(v_f_252_);
v_a_276_ = lean_ctor_get(v___x_256_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_256_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_256_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_256_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object* v_f_284_, lean_object* v_args_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(v_f_284_, v_args_285_);
lean_dec_ref(v_args_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object* v_f_288_){
_start:
{
lean_object* v___f_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___f_290_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_290_, 0, v_f_288_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = l_Lasm_JS_Function_ofSyncFn(v___f_290_, v___x_291_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
else
{
lean_object* v_a_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_308_; 
v_a_301_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_308_ == 0)
{
v___x_303_ = v___x_292_;
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_a_301_);
lean_dec(v___x_292_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_308_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_306_; 
if (v_isShared_304_ == 0)
{
v___x_306_ = v___x_303_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_301_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object* v_f_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lasm_JS_Web_EventListener_ofSyncFn(v_f_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object* v___f_316_, lean_object* v___f_317_, lean_object* v_d_318_){
_start:
{
lean_object* v_capture_319_; lean_object* v_passive_320_; lean_object* v_once_321_; lean_object* v_signal_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_capture_319_ = lean_ctor_get(v_d_318_, 0);
lean_inc(v_capture_319_);
v_passive_320_ = lean_ctor_get(v_d_318_, 1);
lean_inc(v_passive_320_);
v_once_321_ = lean_ctor_get(v_d_318_, 2);
lean_inc(v_once_321_);
v_signal_322_ = lean_ctor_get(v_d_318_, 3);
lean_inc(v_signal_322_);
lean_dec_ref(v_d_318_);
v___x_323_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_316_, 2);
v___x_324_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_316_, v_capture_319_);
v___x_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_325_, 0, v___x_323_);
lean_ctor_set(v___x_325_, 1, v___x_324_);
v___x_326_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_327_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_316_, v_passive_320_);
v___x_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_330_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_316_, v_once_321_);
v___x_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_331_, 0, v___x_329_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_333_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_317_, v_signal_322_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(4u);
v___x_336_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_337_ = lean_array_push(v___x_336_, v___x_325_);
v___x_338_ = lean_array_push(v___x_337_, v___x_328_);
v___x_339_ = lean_array_push(v___x_338_, v___x_331_);
v___x_340_ = lean_array_push(v___x_339_, v___x_334_);
v___x_341_ = l_Lasm_JS_Web_Support_fields(v___x_340_);
lean_dec_ref(v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_347_) == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_unsigned_to_nat(0u);
return v___x_348_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_unsigned_to_nat(1u);
return v___x_349_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(v_x_350_);
lean_dec_ref(v_x_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_352_, lean_object* v_k_353_){
_start:
{
if (lean_obj_tag(v_t_352_) == 0)
{
lean_object* v_value_354_; lean_object* v___x_355_; 
v_value_354_ = lean_ctor_get(v_t_352_, 0);
lean_inc_ref(v_value_354_);
lean_dec_ref_known(v_t_352_, 1);
v___x_355_ = lean_apply_1(v_k_353_, v_value_354_);
return v___x_355_;
}
else
{
uint8_t v_value_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_value_356_ = lean_ctor_get_uint8(v_t_352_, 0);
lean_dec_ref_known(v_t_352_, 0);
v___x_357_ = lean_box(v_value_356_);
v___x_358_ = lean_apply_1(v_k_353_, v___x_357_);
return v___x_358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_359_, lean_object* v_ctorIdx_360_, lean_object* v_t_361_, lean_object* v_h_362_, lean_object* v_k_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_361_, v_k_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_365_, lean_object* v_ctorIdx_366_, lean_object* v_t_367_, lean_object* v_h_368_, lean_object* v_k_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(v_motive_365_, v_ctorIdx_366_, v_t_367_, v_h_368_, v_k_369_);
lean_dec(v_ctorIdx_366_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim___redArg(lean_object* v_t_371_, lean_object* v_addEventListenerOptions_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_371_, v_addEventListenerOptions_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim(lean_object* v_motive_374_, lean_object* v_t_375_, lean_object* v_h_376_, lean_object* v_addEventListenerOptions_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_375_, v_addEventListenerOptions_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_379_, lean_object* v_boolean_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_379_, v_boolean_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_382_, lean_object* v_t_383_, lean_object* v_h_384_, lean_object* v_boolean_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_383_, v_boolean_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_387_){
_start:
{
if (lean_obj_tag(v_x_387_) == 0)
{
lean_object* v_value_388_; lean_object* v_capture_389_; lean_object* v_passive_390_; lean_object* v_once_391_; lean_object* v_signal_392_; lean_object* v___f_393_; lean_object* v___f_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_value_388_ = lean_ctor_get(v_x_387_, 0);
lean_inc_ref(v_value_388_);
lean_dec_ref_known(v_x_387_, 1);
v_capture_389_ = lean_ctor_get(v_value_388_, 0);
lean_inc(v_capture_389_);
v_passive_390_ = lean_ctor_get(v_value_388_, 1);
lean_inc(v_passive_390_);
v_once_391_ = lean_ctor_get(v_value_388_, 2);
lean_inc(v_once_391_);
v_signal_392_ = lean_ctor_get(v_value_388_, 3);
lean_inc(v_signal_392_);
lean_dec_ref(v_value_388_);
v___f_393_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0));
v___f_394_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___closed__0));
v___x_395_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_396_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_393_, v_capture_389_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_399_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_393_, v_passive_390_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_402_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_393_, v_once_391_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_405_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_394_, v_signal_392_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_unsigned_to_nat(4u);
v___x_408_ = lean_mk_empty_array_with_capacity(v___x_407_);
v___x_409_ = lean_array_push(v___x_408_, v___x_397_);
v___x_410_ = lean_array_push(v___x_409_, v___x_400_);
v___x_411_ = lean_array_push(v___x_410_, v___x_403_);
v___x_412_ = lean_array_push(v___x_411_, v___x_406_);
v___x_413_ = l_Lasm_JS_Web_Support_fields(v___x_412_);
lean_dec_ref(v___x_412_);
return v___x_413_;
}
else
{
uint8_t v_value_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
v_value_414_ = lean_ctor_get_uint8(v_x_387_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v_x_387_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v_x_387_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_dec(v_x_387_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
lean_ctor_set_tag(v___x_416_, 2);
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_420_, 0, v_value_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeAddEventListenerOptionsAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_424_){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v_value_424_);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_429_, 0, v_value_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_430_){
_start:
{
uint8_t v_value_boxed_431_; lean_object* v_res_432_; 
v_value_boxed_431_ = lean_unbox(v_value_430_);
v_res_432_ = l_Lasm_JS_Web_instCoeBoolAddEventListenerOptionsOrBoolean___lam__0(v_value_boxed_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object* v___f_435_, lean_object* v_d_436_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_437_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_438_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_435_, v_d_436_);
v___x_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_mk_empty_array_with_capacity(v___x_440_);
v___x_442_ = lean_array_push(v___x_441_, v___x_439_);
v___x_443_ = l_Lasm_JS_Web_Support_fields(v___x_442_);
lean_dec_ref(v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_447_){
_start:
{
if (lean_obj_tag(v_x_447_) == 0)
{
lean_object* v___x_448_; 
v___x_448_ = lean_unsigned_to_nat(0u);
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
v___x_449_ = lean_unsigned_to_nat(1u);
return v___x_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(v_x_450_);
lean_dec_ref(v_x_450_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_452_, lean_object* v_k_453_){
_start:
{
if (lean_obj_tag(v_t_452_) == 0)
{
lean_object* v_value_454_; lean_object* v___x_455_; 
v_value_454_ = lean_ctor_get(v_t_452_, 0);
lean_inc(v_value_454_);
lean_dec_ref_known(v_t_452_, 1);
v___x_455_ = lean_apply_1(v_k_453_, v_value_454_);
return v___x_455_;
}
else
{
uint8_t v_value_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_value_456_ = lean_ctor_get_uint8(v_t_452_, 0);
lean_dec_ref_known(v_t_452_, 0);
v___x_457_ = lean_box(v_value_456_);
v___x_458_ = lean_apply_1(v_k_453_, v___x_457_);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_459_, lean_object* v_ctorIdx_460_, lean_object* v_t_461_, lean_object* v_h_462_, lean_object* v_k_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_461_, v_k_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_465_, lean_object* v_ctorIdx_466_, lean_object* v_t_467_, lean_object* v_h_468_, lean_object* v_k_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(v_motive_465_, v_ctorIdx_466_, v_t_467_, v_h_468_, v_k_469_);
lean_dec(v_ctorIdx_466_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim___redArg(lean_object* v_t_471_, lean_object* v_eventListenerOptions_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_471_, v_eventListenerOptions_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim(lean_object* v_motive_474_, lean_object* v_t_475_, lean_object* v_h_476_, lean_object* v_eventListenerOptions_477_){
_start:
{
lean_object* v___x_478_; 
v___x_478_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_475_, v_eventListenerOptions_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_479_, lean_object* v_boolean_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_479_, v_boolean_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_482_, lean_object* v_t_483_, lean_object* v_h_484_, lean_object* v_boolean_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_483_, v_boolean_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_487_) == 0)
{
lean_object* v_value_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_value_488_ = lean_ctor_get(v_x_487_, 0);
lean_inc(v_value_488_);
lean_dec_ref_known(v_x_487_, 1);
v___f_489_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0));
v___x_490_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_491_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_489_, v_value_488_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = lean_unsigned_to_nat(1u);
v___x_494_ = lean_mk_empty_array_with_capacity(v___x_493_);
v___x_495_ = lean_array_push(v___x_494_, v___x_492_);
v___x_496_ = l_Lasm_JS_Web_Support_fields(v___x_495_);
lean_dec_ref(v___x_495_);
return v___x_496_;
}
else
{
uint8_t v_value_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
v_value_497_ = lean_ctor_get_uint8(v_x_487_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v_x_487_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v_x_487_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_dec(v_x_487_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 2);
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_503_, 0, v_value_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeEventListenerOptionsEventListenerOptionsOrBoolean___lam__0(lean_object* v_value_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v_value_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(uint8_t v_value_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_512_, 0, v_value_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0___boxed(lean_object* v_value_513_){
_start:
{
uint8_t v_value_boxed_514_; lean_object* v_res_515_; 
v_value_boxed_514_ = lean_unbox(v_value_513_);
v_res_515_ = l_Lasm_JS_Web_instCoeBoolEventListenerOptionsOrBoolean___lam__0(v_value_boxed_514_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0(lean_object* v___f_521_, lean_object* v_d_522_){
_start:
{
lean_object* v_bubbles_523_; lean_object* v_cancelable_524_; lean_object* v_composed_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_bubbles_523_ = lean_ctor_get(v_d_522_, 0);
lean_inc(v_bubbles_523_);
v_cancelable_524_ = lean_ctor_get(v_d_522_, 1);
lean_inc(v_cancelable_524_);
v_composed_525_ = lean_ctor_get(v_d_522_, 2);
lean_inc(v_composed_525_);
lean_dec_ref(v_d_522_);
v___x_526_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_521_, 2);
v___x_527_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_521_, v_bubbles_523_);
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set(v___x_528_, 1, v___x_527_);
v___x_529_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_530_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_521_, v_cancelable_524_);
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_533_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_521_, v_composed_525_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = lean_unsigned_to_nat(3u);
v___x_536_ = lean_mk_empty_array_with_capacity(v___x_535_);
v___x_537_ = lean_array_push(v___x_536_, v___x_528_);
v___x_538_ = lean_array_push(v___x_537_, v___x_531_);
v___x_539_ = lean_array_push(v___x_538_, v___x_534_);
v___x_540_ = l_Lasm_JS_Web_Support_fields(v___x_539_);
lean_dec_ref(v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object* v___f_545_, lean_object* v_d_546_){
_start:
{
lean_object* v_bubbles_547_; lean_object* v_cancelable_548_; lean_object* v_composed_549_; lean_object* v_detail_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v_bubbles_547_ = lean_ctor_get(v_d_546_, 0);
lean_inc(v_bubbles_547_);
v_cancelable_548_ = lean_ctor_get(v_d_546_, 1);
lean_inc(v_cancelable_548_);
v_composed_549_ = lean_ctor_get(v_d_546_, 2);
lean_inc(v_composed_549_);
v_detail_550_ = lean_ctor_get(v_d_546_, 3);
lean_inc(v_detail_550_);
lean_dec_ref(v_d_546_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_545_, 2);
v___x_552_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_545_, v_bubbles_547_);
v___x_553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set(v___x_553_, 1, v___x_552_);
v___x_554_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_555_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_545_, v_cancelable_548_);
v___x_556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_558_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_545_, v_composed_549_);
v___x_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v_detail_550_);
v___x_562_ = lean_unsigned_to_nat(4u);
v___x_563_ = lean_mk_empty_array_with_capacity(v___x_562_);
v___x_564_ = lean_array_push(v___x_563_, v___x_553_);
v___x_565_ = lean_array_push(v___x_564_, v___x_556_);
v___x_566_ = lean_array_push(v___x_565_, v___x_559_);
v___x_567_ = lean_array_push(v___x_566_, v___x_561_);
v___x_568_ = l_Lasm_JS_Web_Support_fields(v___x_567_);
lean_dec_ref(v___x_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0(lean_object* v_x_579_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_581_, 0, v_x_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0___boxed(lean_object* v_x_582_, lean_object* v___y_583_){
_start:
{
lean_object* v_res_584_; 
v_res_584_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0(v_x_582_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1(lean_object* v_f_585_, lean_object* v___f_586_, lean_object* v_x_587_){
_start:
{
if (lean_obj_tag(v_x_587_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v___f_586_);
lean_dec_ref(v_f_585_);
v_a_589_ = lean_ctor_get(v_x_587_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v_x_587_);
if (v_isSharedCheck_597_ == 0)
{
v___x_591_ = v_x_587_;
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v_x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_597_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
}
else
{
lean_object* v_a_598_; lean_object* v___x_599_; uint8_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v_a_598_ = lean_ctor_get(v_x_587_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v_x_587_, 1);
v___x_599_ = lean_unsigned_to_nat(0u);
v___x_600_ = 0;
v___x_601_ = lean_apply_2(v_f_585_, v_a_598_, lean_box(0));
v___x_602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_599_, v___x_600_, v___x_601_, v___f_586_);
return v___x_602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1___boxed(lean_object* v_f_603_, lean_object* v___f_604_, lean_object* v_x_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1(v_f_603_, v___f_604_, v_x_605_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn(lean_object* v_f_609_){
_start:
{
lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___f_611_ = ((lean_object*)(l_Lasm_JS_Web_EventHandlerNonNull_ofFn___closed__0));
v___f_612_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_612_, 0, v_f_609_);
lean_closure_set(v___f_612_, 1, v___f_611_);
v___f_613_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_613_, 0, v___f_612_);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = l_Lasm_JS_Function_ofFn(v___f_613_, v___x_614_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
v_a_624_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_615_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_615_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___boxed(lean_object* v_f_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn(v_f_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0(lean_object* v_f_635_, lean_object* v_args_636_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_636_, v___x_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_639_, 1);
v___x_641_ = lean_apply_2(v_f_635_, v_a_640_, lean_box(0));
return v___x_641_;
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec_ref(v_f_635_);
v_a_642_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_639_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_639_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0___boxed(lean_object* v_f_650_, lean_object* v_args_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0(v_f_650_, v_args_651_);
lean_dec_ref(v_args_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn(lean_object* v_f_654_){
_start:
{
lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___f_656_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_656_, 0, v_f_654_);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = l_Lasm_JS_Function_ofSyncFn(v___f_656_, v___x_657_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
else
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_674_; 
v_a_667_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_674_ == 0)
{
v___x_669_ = v___x_658_;
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_658_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_674_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_672_; 
if (v_isShared_670_ == 0)
{
v___x_672_ = v___x_669_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_667_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___boxed(lean_object* v_f_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn(v_f_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(lean_object* v_context_678_, lean_object* v_d_679_){
_start:
{
lean_object* v___y_682_; lean_object* v___y_683_; 
if (lean_obj_tag(v_d_679_) == 9)
{
lean_object* v_value_687_; lean_object* v___x_688_; 
v_value_687_ = lean_ctor_get(v_d_679_, 0);
lean_inc(v_value_687_);
lean_dec_ref_known(v_d_679_, 2);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v_value_687_);
return v___x_688_;
}
else
{
lean_object* v___x_689_; lean_object* v_received_691_; 
v___x_689_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_679_) == 9)
{
lean_object* v_value_705_; lean_object* v_description_706_; uint8_t v___x_707_; 
v_value_705_ = lean_ctor_get(v_d_679_, 0);
v_description_706_ = lean_ctor_get(v_d_679_, 1);
v___x_707_ = lean_string_dec_eq(v_description_706_, v___x_689_);
if (v___x_707_ == 0)
{
goto v___jp_703_;
}
else
{
uint32_t v___x_708_; uint64_t v___x_709_; lean_object* v___x_710_; uint32_t v___x_711_; lean_object* v___x_712_; 
lean_inc_n(v_value_705_, 2);
lean_dec_ref_known(v_d_679_, 2);
v___x_708_ = 206;
v___x_709_ = 0ULL;
v___x_710_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_710_, 0, v_value_705_);
lean_ctor_set(v___x_710_, 1, v___x_689_);
v___x_711_ = lasm_js_value_handle(v_value_705_);
lean_dec(v_value_705_);
v___x_712_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_708_, v___x_709_, v___x_710_, v___x_711_);
lean_dec_ref_known(v___x_710_, 2);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; uint8_t v___x_714_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref_known(v___x_712_, 1);
v___x_714_ = lean_string_validate_utf8(v_a_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec(v_a_713_);
v___x_715_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_716_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_715_);
v_received_691_ = v___x_716_;
goto v___jp_690_;
}
else
{
lean_object* v___x_717_; 
v___x_717_ = lean_string_from_utf8_unchecked(v_a_713_);
v_received_691_ = v___x_717_;
goto v___jp_690_;
}
}
else
{
lean_object* v___x_718_; 
lean_dec_ref_known(v___x_712_, 1);
v___x_718_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_691_ = v___x_718_;
goto v___jp_690_;
}
}
}
else
{
goto v___jp_703_;
}
v___jp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_693_ = lean_string_append(v___x_692_, v_context_678_);
v___x_694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_695_ = lean_string_append(v___x_693_, v___x_694_);
v___x_696_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEventTarget___closed__1));
v___x_697_ = lean_string_append(v___x_695_, v___x_696_);
v___x_698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_699_ = lean_string_append(v___x_697_, v___x_698_);
v___x_700_ = lean_string_append(v___x_699_, v_received_691_);
lean_dec_ref(v_received_691_);
v___x_701_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_682_ = v___x_700_;
v___y_683_ = v___x_702_;
goto v___jp_681_;
}
else
{
v___y_682_ = v___x_700_;
v___y_683_ = v___x_689_;
goto v___jp_681_;
}
}
v___jp_703_:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lasm_JS_Data_describe(v_d_679_);
v_received_691_ = v___x_704_;
goto v___jp_690_;
}
}
v___jp_681_:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_string_append(v___y_682_, v___y_683_);
v___x_685_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
v___x_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0___boxed(lean_object* v_context_719_, lean_object* v_d_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(v_context_719_, v_d_720_);
lean_dec_ref(v_context_719_);
return v_res_722_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_724_; uint64_t v___x_725_; 
v___x_724_ = 0;
v___x_725_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(lean_object* v_b_726_, lean_object* v_args_727_, uint8_t v_await_728_){
_start:
{
uint64_t v___y_731_; uint64_t v___y_732_; uint64_t v___x_775_; uint64_t v___y_777_; 
v___x_775_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_728_ == 0)
{
uint64_t v___x_782_; 
v___x_782_ = 0ULL;
v___y_777_ = v___x_782_;
goto v___jp_776_;
}
else
{
uint64_t v___x_783_; 
v___x_783_ = 2ULL;
v___y_777_ = v___x_783_;
goto v___jp_776_;
}
v___jp_730_:
{
uint64_t v_flags_733_; uint32_t v___x_734_; lean_object* v___x_735_; uint32_t v___x_736_; lean_object* v___x_737_; 
v_flags_733_ = lean_uint64_lor(v___y_731_, v___y_732_);
v___x_734_ = 214;
v___x_735_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_726_, v_args_727_);
v___x_736_ = 0;
v___x_737_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_734_, v_flags_733_, v___x_735_, v___x_736_);
lean_dec(v___x_735_);
if (lean_obj_tag(v___x_737_) == 0)
{
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_739_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_738_);
lean_dec(v_a_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_726_);
v___x_742_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(v___x_741_, v_a_740_);
lean_dec_ref(v___x_741_);
return v___x_742_;
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
v_a_743_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_739_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_739_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_737_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_737_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
lean_ctor_set_tag(v___x_753_, 1);
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_774_; 
v_a_759_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_774_ == 0)
{
v___x_761_ = v___x_737_;
v_isShared_762_ = v_isSharedCheck_774_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_737_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_774_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_763_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_764_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_726_);
v___x_765_ = lean_string_append(v___x_763_, v___x_764_);
lean_dec_ref(v___x_764_);
v___x_766_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_767_ = lean_string_append(v___x_765_, v___x_766_);
v___x_768_ = lean_io_error_to_string(v_a_759_);
v___x_769_ = lean_string_append(v___x_767_, v___x_768_);
lean_dec_ref(v___x_768_);
v___x_770_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_770_);
v___x_772_ = v___x_761_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
v___jp_776_:
{
uint8_t v_construct_778_; uint64_t v___x_779_; 
v_construct_778_ = lean_ctor_get_uint8(v_b_726_, sizeof(void*)*4);
v___x_779_ = lean_uint64_lor(v___x_775_, v___y_777_);
if (v_construct_778_ == 0)
{
uint64_t v___x_780_; 
v___x_780_ = 0ULL;
v___y_731_ = v___x_779_;
v___y_732_ = v___x_780_;
goto v___jp_730_;
}
else
{
uint64_t v___x_781_; 
v___x_781_ = 4ULL;
v___y_731_ = v___x_779_;
v___y_732_ = v___x_781_;
goto v___jp_730_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___boxed(lean_object* v_b_784_, lean_object* v_args_785_, lean_object* v_await_786_, lean_object* v_a_787_){
_start:
{
uint8_t v_await_boxed_788_; lean_object* v_res_789_; 
v_await_boxed_788_ = lean_unbox(v_await_786_);
v_res_789_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(v_b_784_, v_args_785_, v_await_boxed_788_);
lean_dec_ref(v_b_784_);
return v_res_789_;
}
}
static lean_object* _init_l_Lasm_JS_Web_EventTarget_new___closed__5(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_new___closed__4));
v___x_802_ = l_Lasm_JS_Web_Support_args(v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new(){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; lean_object* v___x_807_; 
v___x_804_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_new___closed__3));
v___x_805_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_806_ = 0;
v___x_807_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(v___x_804_, v___x_805_, v___x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new___boxed(lean_object* v_a_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Lasm_JS_Web_EventTarget_new();
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object* v_x_810_){
_start:
{
if (lean_obj_tag(v_x_810_) == 0)
{
lean_object* v___x_811_; 
v___x_811_ = lean_box(0);
return v___x_811_;
}
else
{
lean_object* v_val_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v_val_812_ = lean_ctor_get(v_x_810_, 0);
v___x_813_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_812_);
v___x_814_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_814_, 0, v_val_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
return v___x_814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1___boxed(lean_object* v_x_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_x_815_);
lean_dec(v_x_815_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v___x_818_; 
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
lean_object* v_val_819_; lean_object* v___x_820_; uint8_t v___x_821_; 
v_val_819_ = lean_ctor_get(v_x_817_, 0);
v___x_820_ = lean_alloc_ctor(2, 0, 1);
v___x_821_ = lean_unbox(v_val_819_);
lean_ctor_set_uint8(v___x_820_, 0, v___x_821_);
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0___boxed(lean_object* v_x_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_x_822_);
lean_dec(v_x_822_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0(lean_object* v_x_824_){
_start:
{
if (lean_obj_tag(v_x_824_) == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_box(0);
return v___x_825_;
}
else
{
lean_object* v_val_826_; 
v_val_826_ = lean_ctor_get(v_x_824_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v_x_824_, 1);
if (lean_obj_tag(v_val_826_) == 0)
{
lean_object* v_value_827_; lean_object* v_capture_828_; lean_object* v_passive_829_; lean_object* v_once_830_; lean_object* v_signal_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_value_827_ = lean_ctor_get(v_val_826_, 0);
lean_inc_ref(v_value_827_);
lean_dec_ref_known(v_val_826_, 1);
v_capture_828_ = lean_ctor_get(v_value_827_, 0);
lean_inc(v_capture_828_);
v_passive_829_ = lean_ctor_get(v_value_827_, 1);
lean_inc(v_passive_829_);
v_once_830_ = lean_ctor_get(v_value_827_, 2);
lean_inc(v_once_830_);
v_signal_831_ = lean_ctor_get(v_value_827_, 3);
lean_inc(v_signal_831_);
lean_dec_ref(v_value_827_);
v___x_832_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_833_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_capture_828_);
lean_dec(v_capture_828_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_832_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_passive_829_);
lean_dec(v_passive_829_);
v___x_837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_835_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_839_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_once_830_);
lean_dec(v_once_830_);
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v___x_838_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
v___x_841_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_842_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_831_);
lean_dec(v_signal_831_);
v___x_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_841_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_unsigned_to_nat(4u);
v___x_845_ = lean_mk_empty_array_with_capacity(v___x_844_);
v___x_846_ = lean_array_push(v___x_845_, v___x_834_);
v___x_847_ = lean_array_push(v___x_846_, v___x_837_);
v___x_848_ = lean_array_push(v___x_847_, v___x_840_);
v___x_849_ = lean_array_push(v___x_848_, v___x_843_);
v___x_850_ = l_Lasm_JS_Web_Support_fields(v___x_849_);
lean_dec_ref(v___x_849_);
return v___x_850_;
}
else
{
uint8_t v_value_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
v_value_851_ = lean_ctor_get_uint8(v_val_826_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v_val_826_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v_val_826_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_dec(v_val_826_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
lean_ctor_set_tag(v___x_853_, 2);
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_857_, 0, v_value_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(uint8_t v_await_859_, uint64_t v_extra_860_){
_start:
{
uint64_t v___x_861_; uint64_t v___y_863_; 
v___x_861_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_859_ == 0)
{
uint64_t v___x_866_; 
v___x_866_ = 0ULL;
v___y_863_ = v___x_866_;
goto v___jp_862_;
}
else
{
uint64_t v___x_867_; 
v___x_867_ = 2ULL;
v___y_863_ = v___x_867_;
goto v___jp_862_;
}
v___jp_862_:
{
uint64_t v___x_864_; uint64_t v___x_865_; 
v___x_864_ = lean_uint64_lor(v___x_861_, v___y_863_);
v___x_865_ = lean_uint64_lor(v___x_864_, v_extra_860_);
return v___x_865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3___boxed(lean_object* v_await_868_, lean_object* v_extra_869_){
_start:
{
uint8_t v_await_boxed_870_; uint64_t v_extra_boxed_871_; uint64_t v_res_872_; lean_object* v_r_873_; 
v_await_boxed_870_ = lean_unbox(v_await_868_);
v_extra_boxed_871_ = lean_unbox_uint64(v_extra_869_);
lean_dec_ref(v_extra_869_);
v_res_872_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v_await_boxed_870_, v_extra_boxed_871_);
v_r_873_ = lean_box_uint64(v_res_872_);
return v_r_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg(){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg___boxed(lean_object* v_a_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(lean_object* v_context_879_, lean_object* v_bytes_880_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_880_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v___x_883_; 
lean_dec_ref_known(v___x_882_, 1);
v___x_883_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_883_;
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
v_a_884_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_882_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_882_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4___boxed(lean_object* v_context_892_, lean_object* v_bytes_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(v_context_892_, v_bytes_893_);
lean_dec_ref(v_bytes_893_);
lean_dec_ref(v_context_892_);
return v_res_895_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0(void){
_start:
{
uint64_t v___x_896_; uint8_t v___x_897_; uint64_t v___x_898_; 
v___x_896_ = 8ULL;
v___x_897_ = 0;
v___x_898_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_897_, v___x_896_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object* v_o_900_, lean_object* v_name_901_, lean_object* v_args_902_){
_start:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; uint64_t v___x_907_; lean_object* v___x_908_; 
v___x_904_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_905_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_905_, 0, v_o_900_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
lean_inc_ref(v_name_901_);
v___x_906_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_906_, 0, v_name_901_);
v___x_907_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0);
v___x_908_ = l_Lasm_JS_Value_invokeRaw(v___x_905_, v___x_906_, v_args_902_, v___x_907_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_908_, 1);
v___x_910_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_911_ = lean_string_append(v___x_910_, v_name_901_);
lean_dec_ref(v_name_901_);
v___x_912_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(v___x_911_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v___x_911_);
return v___x_912_;
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v_name_901_);
v_a_913_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_908_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_908_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___boxed(lean_object* v_o_921_, lean_object* v_name_922_, lean_object* v_args_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_o_921_, v_name_922_, v_args_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener(lean_object* v_self_927_, lean_object* v_type_928_, lean_object* v_callback_929_, lean_object* v_options_930_){
_start:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___y_935_; 
v___x_932_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_addEventListener___closed__0));
v___x_933_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_933_, 0, v_type_928_);
if (lean_obj_tag(v_callback_929_) == 0)
{
lean_object* v___x_944_; 
v___x_944_ = lean_box(1);
v___y_935_ = v___x_944_;
goto v___jp_934_;
}
else
{
lean_object* v_val_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_val_945_ = lean_ctor_get(v_callback_929_, 0);
v___x_946_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_945_);
v___x_947_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_947_, 0, v_val_945_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___y_935_ = v___x_947_;
goto v___jp_934_;
}
v___jp_934_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_936_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0(v_options_930_);
v___x_937_ = lean_unsigned_to_nat(3u);
v___x_938_ = lean_mk_empty_array_with_capacity(v___x_937_);
v___x_939_ = lean_array_push(v___x_938_, v___x_933_);
v___x_940_ = lean_array_push(v___x_939_, v___y_935_);
v___x_941_ = lean_array_push(v___x_940_, v___x_936_);
v___x_942_ = l_Lasm_JS_Web_Support_args(v___x_941_);
v___x_943_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_927_, v___x_932_, v___x_942_);
return v___x_943_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener___boxed(lean_object* v_self_948_, lean_object* v_type_949_, lean_object* v_callback_950_, lean_object* v_options_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lasm_JS_Web_EventTarget_addEventListener(v_self_948_, v_type_949_, v_callback_950_, v_options_951_);
lean_dec(v_callback_950_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5(lean_object* v_context_954_, lean_object* v_d_955_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___boxed(lean_object* v_context_958_, lean_object* v_d_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5(v_context_958_, v_d_959_);
lean_dec(v_d_959_);
lean_dec_ref(v_context_958_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_removeEventListener_spec__0(lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_962_) == 0)
{
lean_object* v___x_963_; 
v___x_963_ = lean_box(0);
return v___x_963_;
}
else
{
lean_object* v_val_964_; 
v_val_964_ = lean_ctor_get(v_x_962_, 0);
lean_inc(v_val_964_);
lean_dec_ref_known(v_x_962_, 1);
if (lean_obj_tag(v_val_964_) == 0)
{
lean_object* v_value_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_value_965_ = lean_ctor_get(v_val_964_, 0);
lean_inc(v_value_965_);
lean_dec_ref_known(v_val_964_, 1);
v___x_966_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_967_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_value_965_);
lean_dec(v_value_965_);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = lean_unsigned_to_nat(1u);
v___x_970_ = lean_mk_empty_array_with_capacity(v___x_969_);
v___x_971_ = lean_array_push(v___x_970_, v___x_968_);
v___x_972_ = l_Lasm_JS_Web_Support_fields(v___x_971_);
lean_dec_ref(v___x_971_);
return v___x_972_;
}
else
{
uint8_t v_value_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_value_973_ = lean_ctor_get_uint8(v_val_964_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v_val_964_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v_val_964_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_dec(v_val_964_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set_tag(v___x_975_, 2);
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_979_, 0, v_value_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener(lean_object* v_self_982_, lean_object* v_type_983_, lean_object* v_callback_984_, lean_object* v_options_985_){
_start:
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___y_990_; 
v___x_987_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_removeEventListener___closed__0));
v___x_988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_988_, 0, v_type_983_);
if (lean_obj_tag(v_callback_984_) == 0)
{
lean_object* v___x_999_; 
v___x_999_ = lean_box(1);
v___y_990_ = v___x_999_;
goto v___jp_989_;
}
else
{
lean_object* v_val_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_val_1000_ = lean_ctor_get(v_callback_984_, 0);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_1000_);
v___x_1002_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1002_, 0, v_val_1000_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
v___y_990_ = v___x_1002_;
goto v___jp_989_;
}
v___jp_989_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_991_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_removeEventListener_spec__0(v_options_985_);
v___x_992_ = lean_unsigned_to_nat(3u);
v___x_993_ = lean_mk_empty_array_with_capacity(v___x_992_);
v___x_994_ = lean_array_push(v___x_993_, v___x_988_);
v___x_995_ = lean_array_push(v___x_994_, v___y_990_);
v___x_996_ = lean_array_push(v___x_995_, v___x_991_);
v___x_997_ = l_Lasm_JS_Web_Support_args(v___x_996_);
v___x_998_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_982_, v___x_987_, v___x_997_);
return v___x_998_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener___boxed(lean_object* v_self_1003_, lean_object* v_type_1004_, lean_object* v_callback_1005_, lean_object* v_options_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_JS_Web_EventTarget_removeEventListener(v_self_1003_, v_type_1004_, v_callback_1005_, v_options_1006_);
lean_dec(v_callback_1005_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object* v_context_1010_, lean_object* v_d_1011_){
_start:
{
lean_object* v___y_1014_; lean_object* v___y_1015_; 
if (lean_obj_tag(v_d_1011_) == 2)
{
uint8_t v_b_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_b_1019_ = lean_ctor_get_uint8(v_d_1011_, 0);
lean_dec_ref_known(v_d_1011_, 0);
v___x_1020_ = lean_box(v_b_1019_);
v___x_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
return v___x_1021_;
}
else
{
lean_object* v___x_1022_; lean_object* v_received_1024_; 
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1011_) == 9)
{
lean_object* v_value_1038_; lean_object* v_description_1039_; uint8_t v___x_1040_; 
v_value_1038_ = lean_ctor_get(v_d_1011_, 0);
v_description_1039_ = lean_ctor_get(v_d_1011_, 1);
v___x_1040_ = lean_string_dec_eq(v_description_1039_, v___x_1022_);
if (v___x_1040_ == 0)
{
goto v___jp_1036_;
}
else
{
uint32_t v___x_1041_; uint64_t v___x_1042_; lean_object* v___x_1043_; uint32_t v___x_1044_; lean_object* v___x_1045_; 
lean_inc_n(v_value_1038_, 2);
lean_dec_ref_known(v_d_1011_, 2);
v___x_1041_ = 206;
v___x_1042_ = 0ULL;
v___x_1043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1043_, 0, v_value_1038_);
lean_ctor_set(v___x_1043_, 1, v___x_1022_);
v___x_1044_ = lasm_js_value_handle(v_value_1038_);
lean_dec(v_value_1038_);
v___x_1045_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1041_, v___x_1042_, v___x_1043_, v___x_1044_);
lean_dec_ref_known(v___x_1043_, 2);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; uint8_t v___x_1047_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
lean_inc(v_a_1046_);
lean_dec_ref_known(v___x_1045_, 1);
v___x_1047_ = lean_string_validate_utf8(v_a_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec(v_a_1046_);
v___x_1048_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1049_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1048_);
v_received_1024_ = v___x_1049_;
goto v___jp_1023_;
}
else
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_string_from_utf8_unchecked(v_a_1046_);
v_received_1024_ = v___x_1050_;
goto v___jp_1023_;
}
}
else
{
lean_object* v___x_1051_; 
lean_dec_ref_known(v___x_1045_, 1);
v___x_1051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1024_ = v___x_1051_;
goto v___jp_1023_;
}
}
}
else
{
goto v___jp_1036_;
}
v___jp_1023_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v___x_1025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1026_ = lean_string_append(v___x_1025_, v_context_1010_);
v___x_1027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1028_ = lean_string_append(v___x_1026_, v___x_1027_);
v___x_1029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___closed__0));
v___x_1030_ = lean_string_append(v___x_1028_, v___x_1029_);
v___x_1031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1032_ = lean_string_append(v___x_1030_, v___x_1031_);
v___x_1033_ = lean_string_append(v___x_1032_, v_received_1024_);
lean_dec_ref(v_received_1024_);
v___x_1034_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1014_ = v___x_1033_;
v___y_1015_ = v___x_1035_;
goto v___jp_1013_;
}
else
{
v___y_1014_ = v___x_1033_;
v___y_1015_ = v___x_1022_;
goto v___jp_1013_;
}
}
v___jp_1036_:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lasm_JS_Data_describe(v_d_1011_);
v_received_1024_ = v___x_1037_;
goto v___jp_1023_;
}
}
v___jp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lean_string_append(v___y_1014_, v___y_1015_);
v___x_1017_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
v___x_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1052_, lean_object* v_d_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_1052_, v_d_1053_);
lean_dec_ref(v_context_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(lean_object* v_context_1056_, lean_object* v_bytes_1057_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1057_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1061_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v___x_1061_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_1056_, v_a_1060_);
return v___x_1061_;
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
v_a_1062_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1059_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1059_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1___boxed(lean_object* v_context_1070_, lean_object* v_bytes_1071_, lean_object* v_a_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v_context_1070_, v_bytes_1071_);
lean_dec_ref(v_bytes_1071_);
lean_dec_ref(v_context_1070_);
return v_res_1073_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(uint8_t v_await_1074_, uint64_t v_extra_1075_){
_start:
{
uint64_t v___x_1076_; uint64_t v___y_1078_; 
v___x_1076_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1074_ == 0)
{
uint64_t v___x_1081_; 
v___x_1081_ = 0ULL;
v___y_1078_ = v___x_1081_;
goto v___jp_1077_;
}
else
{
uint64_t v___x_1082_; 
v___x_1082_ = 2ULL;
v___y_1078_ = v___x_1082_;
goto v___jp_1077_;
}
v___jp_1077_:
{
uint64_t v___x_1079_; uint64_t v___x_1080_; 
v___x_1079_ = lean_uint64_lor(v___x_1076_, v___y_1078_);
v___x_1080_ = lean_uint64_lor(v___x_1079_, v_extra_1075_);
return v___x_1080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0___boxed(lean_object* v_await_1083_, lean_object* v_extra_1084_){
_start:
{
uint8_t v_await_boxed_1085_; uint64_t v_extra_boxed_1086_; uint64_t v_res_1087_; lean_object* v_r_1088_; 
v_await_boxed_1085_ = lean_unbox(v_await_1083_);
v_extra_boxed_1086_ = lean_unbox_uint64(v_extra_1084_);
lean_dec_ref(v_extra_1084_);
v_res_1087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v_await_boxed_1085_, v_extra_boxed_1086_);
v_r_1088_ = lean_box_uint64(v_res_1087_);
return v_r_1088_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1089_; uint8_t v___x_1090_; uint64_t v___x_1091_; 
v___x_1089_ = 8ULL;
v___x_1090_ = 0;
v___x_1091_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_1090_, v___x_1089_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object* v_o_1092_, lean_object* v_name_1093_, lean_object* v_args_1094_){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint64_t v___x_1099_; lean_object* v___x_1100_; 
v___x_1096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1097_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1097_, 0, v_o_1092_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
lean_inc_ref(v_name_1093_);
v___x_1098_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_name_1093_);
v___x_1099_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0);
v___x_1100_ = l_Lasm_JS_Value_invokeRaw(v___x_1097_, v___x_1098_, v_args_1094_, v___x_1099_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_1103_ = lean_string_append(v___x_1102_, v_name_1093_);
lean_dec_ref(v_name_1093_);
v___x_1104_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v___x_1103_, v_a_1101_);
lean_dec(v_a_1101_);
lean_dec_ref(v___x_1103_);
return v___x_1104_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec_ref(v_name_1093_);
v_a_1105_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1100_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1100_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___boxed(lean_object* v_o_1113_, lean_object* v_name_1114_, lean_object* v_args_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_o_1113_, v_name_1114_, v_args_1115_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent(lean_object* v_self_1119_, lean_object* v_event_1120_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_dispatchEvent___closed__0));
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1124_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1124_, 0, v_event_1120_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_unsigned_to_nat(1u);
v___x_1126_ = lean_mk_empty_array_with_capacity(v___x_1125_);
v___x_1127_ = lean_array_push(v___x_1126_, v___x_1124_);
v___x_1128_ = l_Lasm_JS_Web_Support_args(v___x_1127_);
v___x_1129_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1119_, v___x_1122_, v___x_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent___boxed(lean_object* v_self_1130_, lean_object* v_event_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lasm_JS_Web_EventTarget_dispatchEvent(v_self_1130_, v_event_1131_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(lean_object* v_x_1134_){
_start:
{
if (lean_obj_tag(v_x_1134_) == 0)
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_box(0);
return v___x_1135_;
}
else
{
lean_object* v_val_1136_; lean_object* v_bubbles_1137_; lean_object* v_cancelable_1138_; lean_object* v_composed_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_val_1136_ = lean_ctor_get(v_x_1134_, 0);
v_bubbles_1137_ = lean_ctor_get(v_val_1136_, 0);
v_cancelable_1138_ = lean_ctor_get(v_val_1136_, 1);
v_composed_1139_ = lean_ctor_get(v_val_1136_, 2);
v___x_1140_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_1141_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1137_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_1144_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1138_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_1147_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1139_);
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
v___x_1149_ = lean_unsigned_to_nat(3u);
v___x_1150_ = lean_mk_empty_array_with_capacity(v___x_1149_);
v___x_1151_ = lean_array_push(v___x_1150_, v___x_1142_);
v___x_1152_ = lean_array_push(v___x_1151_, v___x_1145_);
v___x_1153_ = lean_array_push(v___x_1152_, v___x_1148_);
v___x_1154_ = l_Lasm_JS_Web_Support_fields(v___x_1153_);
lean_dec_ref(v___x_1153_);
return v___x_1154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0___boxed(lean_object* v_x_1155_){
_start:
{
lean_object* v_res_1156_; 
v_res_1156_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(v_x_1155_);
lean_dec(v_x_1155_);
return v_res_1156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(lean_object* v_b_1157_, lean_object* v_args_1158_, uint8_t v_await_1159_){
_start:
{
uint64_t v___y_1162_; uint64_t v___y_1163_; uint64_t v___x_1206_; uint64_t v___y_1208_; 
v___x_1206_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1159_ == 0)
{
uint64_t v___x_1213_; 
v___x_1213_ = 0ULL;
v___y_1208_ = v___x_1213_;
goto v___jp_1207_;
}
else
{
uint64_t v___x_1214_; 
v___x_1214_ = 2ULL;
v___y_1208_ = v___x_1214_;
goto v___jp_1207_;
}
v___jp_1161_:
{
uint64_t v_flags_1164_; uint32_t v___x_1165_; lean_object* v___x_1166_; uint32_t v___x_1167_; lean_object* v___x_1168_; 
v_flags_1164_ = lean_uint64_lor(v___y_1162_, v___y_1163_);
v___x_1165_ = 214;
v___x_1166_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1157_, v_args_1158_);
v___x_1167_ = 0;
v___x_1168_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1165_, v_flags_1164_, v___x_1166_, v___x_1167_);
lean_dec(v___x_1166_);
if (lean_obj_tag(v___x_1168_) == 0)
{
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1170_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref_known(v___x_1168_, 1);
v___x_1170_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1169_);
lean_dec(v_a_1169_);
if (lean_obj_tag(v___x_1170_) == 0)
{
lean_object* v_a_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v_a_1171_ = lean_ctor_get(v___x_1170_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v___x_1170_, 1);
v___x_1172_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1157_);
v___x_1173_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_1172_, v_a_1171_);
lean_dec_ref(v___x_1172_);
return v___x_1173_;
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
v_a_1174_ = lean_ctor_get(v___x_1170_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1170_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1170_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1170_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
v_a_1182_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1168_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1168_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
lean_ctor_set_tag(v___x_1184_, 1);
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1205_; 
v_a_1190_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1192_ = v___x_1168_;
v_isShared_1193_ = v_isSharedCheck_1205_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1168_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1205_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1195_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1157_);
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
lean_dec_ref(v___x_1195_);
v___x_1197_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_1198_ = lean_string_append(v___x_1196_, v___x_1197_);
v___x_1199_ = lean_io_error_to_string(v_a_1190_);
v___x_1200_ = lean_string_append(v___x_1198_, v___x_1199_);
lean_dec_ref(v___x_1199_);
v___x_1201_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1201_);
v___x_1203_ = v___x_1192_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1201_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
v___jp_1207_:
{
uint8_t v_construct_1209_; uint64_t v___x_1210_; 
v_construct_1209_ = lean_ctor_get_uint8(v_b_1157_, sizeof(void*)*4);
v___x_1210_ = lean_uint64_lor(v___x_1206_, v___y_1208_);
if (v_construct_1209_ == 0)
{
uint64_t v___x_1211_; 
v___x_1211_ = 0ULL;
v___y_1162_ = v___x_1210_;
v___y_1163_ = v___x_1211_;
goto v___jp_1161_;
}
else
{
uint64_t v___x_1212_; 
v___x_1212_ = 4ULL;
v___y_1162_ = v___x_1210_;
v___y_1163_ = v___x_1212_;
goto v___jp_1161_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1___boxed(lean_object* v_b_1215_, lean_object* v_args_1216_, lean_object* v_await_1217_, lean_object* v_a_1218_){
_start:
{
uint8_t v_await_boxed_1219_; lean_object* v_res_1220_; 
v_await_boxed_1219_ = lean_unbox(v_await_1217_);
v_res_1220_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(v_b_1215_, v_args_1216_, v_await_boxed_1219_);
lean_dec_ref(v_b_1215_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new(lean_object* v_type_1229_, lean_object* v_eventInitDict_1230_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; lean_object* v___x_1241_; 
v___x_1232_ = lean_unsigned_to_nat(2u);
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Web_Event_new___closed__2));
v___x_1234_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1234_, 0, v_type_1229_);
v___x_1235_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(v_eventInitDict_1230_);
v___x_1236_ = lean_mk_empty_array_with_capacity(v___x_1232_);
v___x_1237_ = lean_array_push(v___x_1236_, v___x_1234_);
v___x_1238_ = lean_array_push(v___x_1237_, v___x_1235_);
v___x_1239_ = l_Lasm_JS_Web_Support_args(v___x_1238_);
v___x_1240_ = 0;
v___x_1241_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(v___x_1233_, v___x_1239_, v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new___boxed(lean_object* v_type_1242_, lean_object* v_eventInitDict_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lasm_JS_Web_Event_new(v_type_1242_, v_eventInitDict_1243_);
lean_dec(v_eventInitDict_1243_);
return v_res_1245_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_NONE(void){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_unsigned_to_nat(0u);
return v___x_1246_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE(void){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_unsigned_to_nat(1u);
return v___x_1247_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_AT__TARGET(void){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = lean_unsigned_to_nat(2u);
return v___x_1248_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE(void){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_unsigned_to_nat(3u);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object* v_context_1251_, lean_object* v_d_1252_){
_start:
{
lean_object* v___y_1255_; lean_object* v___y_1256_; 
if (lean_obj_tag(v_d_1252_) == 4)
{
lean_object* v_s_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
v_s_1260_ = lean_ctor_get(v_d_1252_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_d_1252_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v_d_1252_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_s_1260_);
lean_dec(v_d_1252_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set_tag(v___x_1262_, 0);
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_s_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
else
{
lean_object* v___x_1268_; lean_object* v_received_1270_; 
v___x_1268_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1252_) == 9)
{
lean_object* v_value_1284_; lean_object* v_description_1285_; uint8_t v___x_1286_; 
v_value_1284_ = lean_ctor_get(v_d_1252_, 0);
v_description_1285_ = lean_ctor_get(v_d_1252_, 1);
v___x_1286_ = lean_string_dec_eq(v_description_1285_, v___x_1268_);
if (v___x_1286_ == 0)
{
goto v___jp_1282_;
}
else
{
uint32_t v___x_1287_; uint64_t v___x_1288_; lean_object* v___x_1289_; uint32_t v___x_1290_; lean_object* v___x_1291_; 
lean_inc_n(v_value_1284_, 2);
lean_dec_ref_known(v_d_1252_, 2);
v___x_1287_ = 206;
v___x_1288_ = 0ULL;
v___x_1289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1289_, 0, v_value_1284_);
lean_ctor_set(v___x_1289_, 1, v___x_1268_);
v___x_1290_ = lasm_js_value_handle(v_value_1284_);
lean_dec(v_value_1284_);
v___x_1291_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1287_, v___x_1288_, v___x_1289_, v___x_1290_);
lean_dec_ref_known(v___x_1289_, 2);
if (lean_obj_tag(v___x_1291_) == 0)
{
lean_object* v_a_1292_; uint8_t v___x_1293_; 
v_a_1292_ = lean_ctor_get(v___x_1291_, 0);
lean_inc(v_a_1292_);
lean_dec_ref_known(v___x_1291_, 1);
v___x_1293_ = lean_string_validate_utf8(v_a_1292_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
lean_dec(v_a_1292_);
v___x_1294_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1295_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1294_);
v_received_1270_ = v___x_1295_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_string_from_utf8_unchecked(v_a_1292_);
v_received_1270_ = v___x_1296_;
goto v___jp_1269_;
}
}
else
{
lean_object* v___x_1297_; 
lean_dec_ref_known(v___x_1291_, 1);
v___x_1297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1270_ = v___x_1297_;
goto v___jp_1269_;
}
}
}
else
{
goto v___jp_1282_;
}
v___jp_1269_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1271_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1272_ = lean_string_append(v___x_1271_, v_context_1251_);
v___x_1273_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1274_ = lean_string_append(v___x_1272_, v___x_1273_);
v___x_1275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___closed__0));
v___x_1276_ = lean_string_append(v___x_1274_, v___x_1275_);
v___x_1277_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1278_ = lean_string_append(v___x_1276_, v___x_1277_);
v___x_1279_ = lean_string_append(v___x_1278_, v_received_1270_);
lean_dec_ref(v_received_1270_);
v___x_1280_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1255_ = v___x_1279_;
v___y_1256_ = v___x_1281_;
goto v___jp_1254_;
}
else
{
v___y_1255_ = v___x_1279_;
v___y_1256_ = v___x_1268_;
goto v___jp_1254_;
}
}
v___jp_1282_:
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Lasm_JS_Data_describe(v_d_1252_);
v_received_1270_ = v___x_1283_;
goto v___jp_1269_;
}
}
v___jp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = lean_string_append(v___y_1255_, v___y_1256_);
v___x_1258_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
return v___x_1259_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1298_, lean_object* v_d_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_1298_, v_d_1299_);
lean_dec_ref(v_context_1298_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object* v_context_1302_, lean_object* v_bytes_1303_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1303_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1307_; 
v_a_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v___x_1307_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_1302_, v_a_1306_);
return v___x_1307_;
}
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
v_a_1308_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1305_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1305_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0___boxed(lean_object* v_context_1316_, lean_object* v_bytes_1317_, lean_object* v_a_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v_context_1316_, v_bytes_1317_);
lean_dec_ref(v_bytes_1317_);
lean_dec_ref(v_context_1316_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object* v_o_1321_, lean_object* v_key_1322_){
_start:
{
lean_object* v_k_1324_; lean_object* v___x_1325_; 
v_k_1324_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1324_, 0, v_key_1322_);
v___x_1325_ = l_Lasm_JS_Wire_encodeIO(v_k_1324_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; uint32_t v___x_1327_; uint32_t v___x_1328_; uint64_t v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = 203;
v___x_1328_ = lasm_js_value_handle(v_o_1321_);
v___x_1329_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1331_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1331_, 0, v_o_1321_);
lean_ctor_set(v___x_1331_, 1, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(2u);
v___x_1333_ = lean_mk_empty_array_with_capacity(v___x_1332_);
lean_inc_ref(v_k_1324_);
v___x_1334_ = lean_array_push(v___x_1333_, v_k_1324_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1331_);
v___x_1336_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
v___x_1337_ = lasm_js_call(v___x_1327_, v___x_1328_, v___x_1329_, v_a_1326_, v___x_1336_);
lean_dec_ref_known(v___x_1336_, 1);
lean_dec(v_a_1326_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1340_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1324_);
v___x_1341_ = lean_string_append(v___x_1339_, v___x_1340_);
lean_dec_ref(v___x_1340_);
v___x_1342_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1341_, v_a_1338_);
lean_dec(v_a_1338_);
lean_dec_ref(v___x_1341_);
return v___x_1342_;
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec_ref_known(v_k_1324_, 1);
v_a_1343_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1337_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1337_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
lean_dec_ref_known(v_k_1324_, 1);
lean_dec(v_o_1321_);
v_a_1351_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1325_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1325_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___boxed(lean_object* v_o_1359_, lean_object* v_key_1360_, lean_object* v_a_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_o_1359_, v_key_1360_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type(lean_object* v_self_1364_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(l_Lasm_JS_Web_Event_type___closed__0));
v___x_1367_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1364_, v___x_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type___boxed(lean_object* v_self_1368_, lean_object* v_a_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lasm_JS_Web_Event_type(v_self_1368_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(lean_object* v_context_1372_, lean_object* v_d_1373_){
_start:
{
lean_object* v___y_1379_; lean_object* v___y_1380_; 
switch(lean_obj_tag(v_d_1373_))
{
case 1:
{
goto v___jp_1375_;
}
case 0:
{
goto v___jp_1375_;
}
default: 
{
if (lean_obj_tag(v_d_1373_) == 9)
{
lean_object* v_value_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v_value_1384_ = lean_ctor_get(v_d_1373_, 0);
lean_inc(v_value_1384_);
lean_dec_ref_known(v_d_1373_, 2);
v___x_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1385_, 0, v_value_1384_);
v___x_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1385_);
return v___x_1386_;
}
else
{
lean_object* v___x_1387_; lean_object* v_received_1389_; 
v___x_1387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1373_) == 9)
{
lean_object* v_value_1403_; lean_object* v_description_1404_; uint8_t v___x_1405_; 
v_value_1403_ = lean_ctor_get(v_d_1373_, 0);
v_description_1404_ = lean_ctor_get(v_d_1373_, 1);
v___x_1405_ = lean_string_dec_eq(v_description_1404_, v___x_1387_);
if (v___x_1405_ == 0)
{
goto v___jp_1401_;
}
else
{
uint32_t v___x_1406_; uint64_t v___x_1407_; lean_object* v___x_1408_; uint32_t v___x_1409_; lean_object* v___x_1410_; 
lean_inc_n(v_value_1403_, 2);
lean_dec_ref_known(v_d_1373_, 2);
v___x_1406_ = 206;
v___x_1407_ = 0ULL;
v___x_1408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1408_, 0, v_value_1403_);
lean_ctor_set(v___x_1408_, 1, v___x_1387_);
v___x_1409_ = lasm_js_value_handle(v_value_1403_);
lean_dec(v_value_1403_);
v___x_1410_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1406_, v___x_1407_, v___x_1408_, v___x_1409_);
lean_dec_ref_known(v___x_1408_, 2);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; uint8_t v___x_1412_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = lean_string_validate_utf8(v_a_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_dec(v_a_1411_);
v___x_1413_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1414_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1413_);
v_received_1389_ = v___x_1414_;
goto v___jp_1388_;
}
else
{
lean_object* v___x_1415_; 
v___x_1415_ = lean_string_from_utf8_unchecked(v_a_1411_);
v_received_1389_ = v___x_1415_;
goto v___jp_1388_;
}
}
else
{
lean_object* v___x_1416_; 
lean_dec_ref_known(v___x_1410_, 1);
v___x_1416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1389_ = v___x_1416_;
goto v___jp_1388_;
}
}
}
else
{
goto v___jp_1401_;
}
v___jp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v___x_1390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1391_ = lean_string_append(v___x_1390_, v_context_1372_);
v___x_1392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1393_ = lean_string_append(v___x_1391_, v___x_1392_);
v___x_1394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___closed__0));
v___x_1395_ = lean_string_append(v___x_1393_, v___x_1394_);
v___x_1396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1397_ = lean_string_append(v___x_1395_, v___x_1396_);
v___x_1398_ = lean_string_append(v___x_1397_, v_received_1389_);
lean_dec_ref(v_received_1389_);
v___x_1399_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
v___x_1400_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1379_ = v___x_1398_;
v___y_1380_ = v___x_1400_;
goto v___jp_1378_;
}
else
{
v___y_1379_ = v___x_1398_;
v___y_1380_ = v___x_1387_;
goto v___jp_1378_;
}
}
v___jp_1401_:
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lasm_JS_Data_describe(v_d_1373_);
v_received_1389_ = v___x_1402_;
goto v___jp_1388_;
}
}
}
}
v___jp_1375_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_box(0);
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
v___jp_1378_:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1381_ = lean_string_append(v___y_1379_, v___y_1380_);
v___x_1382_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1381_);
v___x_1383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
return v___x_1383_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1417_, lean_object* v_d_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(v_context_1417_, v_d_1418_);
lean_dec_ref(v_context_1417_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(lean_object* v_context_1421_, lean_object* v_bytes_1422_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1422_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1426_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1424_, 1);
v___x_1426_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(v_context_1421_, v_a_1425_);
return v___x_1426_;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1424_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1424_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0___boxed(lean_object* v_context_1435_, lean_object* v_bytes_1436_, lean_object* v_a_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(v_context_1435_, v_bytes_1436_);
lean_dec_ref(v_bytes_1436_);
lean_dec_ref(v_context_1435_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(lean_object* v_o_1439_, lean_object* v_key_1440_){
_start:
{
lean_object* v_k_1442_; lean_object* v___x_1443_; 
v_k_1442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1442_, 0, v_key_1440_);
v___x_1443_ = l_Lasm_JS_Wire_encodeIO(v_k_1442_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; uint32_t v___x_1445_; uint32_t v___x_1446_; uint64_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = 203;
v___x_1446_ = lasm_js_value_handle(v_o_1439_);
v___x_1447_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1449_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1449_, 0, v_o_1439_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_unsigned_to_nat(2u);
v___x_1451_ = lean_mk_empty_array_with_capacity(v___x_1450_);
lean_inc_ref(v_k_1442_);
v___x_1452_ = lean_array_push(v___x_1451_, v_k_1442_);
v___x_1453_ = lean_array_push(v___x_1452_, v___x_1449_);
v___x_1454_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1453_);
v___x_1455_ = lasm_js_call(v___x_1445_, v___x_1446_, v___x_1447_, v_a_1444_, v___x_1454_);
lean_dec_ref_known(v___x_1454_, 1);
lean_dec(v_a_1444_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
v___x_1457_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1458_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1442_);
v___x_1459_ = lean_string_append(v___x_1457_, v___x_1458_);
lean_dec_ref(v___x_1458_);
v___x_1460_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(v___x_1459_, v_a_1456_);
lean_dec(v_a_1456_);
lean_dec_ref(v___x_1459_);
return v___x_1460_;
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec_ref_known(v_k_1442_, 1);
v_a_1461_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1455_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1455_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref_known(v_k_1442_, 1);
lean_dec(v_o_1439_);
v_a_1469_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1443_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1443_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0___boxed(lean_object* v_o_1477_, lean_object* v_key_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_o_1477_, v_key_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target(lean_object* v_self_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = ((lean_object*)(l_Lasm_JS_Web_Event_target___closed__0));
v___x_1485_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1482_, v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target___boxed(lean_object* v_self_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lasm_JS_Web_Event_target(v_self_1486_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement(lean_object* v_self_1490_){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = ((lean_object*)(l_Lasm_JS_Web_Event_srcElement___closed__0));
v___x_1493_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1490_, v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement___boxed(lean_object* v_self_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lasm_JS_Web_Event_srcElement(v_self_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget(lean_object* v_self_1498_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Web_Event_currentTarget___closed__0));
v___x_1501_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1498_, v___x_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget___boxed(lean_object* v_self_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lasm_JS_Web_Event_currentTarget(v_self_1502_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase(lean_object* v_self_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = ((lean_object*)(l_Lasm_JS_Web_Event_eventPhase___closed__0));
v___x_1509_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1506_, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase___boxed(lean_object* v_self_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lasm_JS_Web_Event_eventPhase(v_self_1510_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object* v_o_1513_, lean_object* v_key_1514_){
_start:
{
lean_object* v_k_1516_; lean_object* v___x_1517_; 
v_k_1516_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1516_, 0, v_key_1514_);
v___x_1517_ = l_Lasm_JS_Wire_encodeIO(v_k_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; uint32_t v___x_1519_; uint32_t v___x_1520_; uint64_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = 203;
v___x_1520_ = lasm_js_value_handle(v_o_1513_);
v___x_1521_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1522_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1523_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1523_, 0, v_o_1513_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___x_1524_ = lean_unsigned_to_nat(2u);
v___x_1525_ = lean_mk_empty_array_with_capacity(v___x_1524_);
lean_inc_ref(v_k_1516_);
v___x_1526_ = lean_array_push(v___x_1525_, v_k_1516_);
v___x_1527_ = lean_array_push(v___x_1526_, v___x_1523_);
v___x_1528_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
v___x_1529_ = lasm_js_call(v___x_1519_, v___x_1520_, v___x_1521_, v_a_1518_, v___x_1528_);
lean_dec_ref_known(v___x_1528_, 1);
lean_dec(v_a_1518_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref_known(v___x_1529_, 1);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1532_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1516_);
v___x_1533_ = lean_string_append(v___x_1531_, v___x_1532_);
lean_dec_ref(v___x_1532_);
v___x_1534_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v___x_1533_, v_a_1530_);
lean_dec(v_a_1530_);
lean_dec_ref(v___x_1533_);
return v___x_1534_;
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec_ref_known(v_k_1516_, 1);
v_a_1535_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1529_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1529_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref_known(v_k_1516_, 1);
lean_dec(v_o_1513_);
v_a_1543_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1517_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1517_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0___boxed(lean_object* v_o_1551_, lean_object* v_key_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_o_1551_, v_key_1552_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble(lean_object* v_self_1556_){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = ((lean_object*)(l_Lasm_JS_Web_Event_cancelBubble___closed__0));
v___x_1559_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1556_, v___x_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble___boxed(lean_object* v_self_1560_, lean_object* v_a_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lasm_JS_Web_Event_cancelBubble(v_self_1560_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object* v_o_1563_, lean_object* v_key_1564_, lean_object* v_x_1565_){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v_payload_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1567_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_key_1564_);
v___x_1568_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_o_1563_);
v___x_1569_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_o_1563_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = lean_unsigned_to_nat(3u);
v___x_1571_ = lean_mk_empty_array_with_capacity(v___x_1570_);
lean_inc_ref(v___x_1567_);
v___x_1572_ = lean_array_push(v___x_1571_, v___x_1567_);
lean_inc(v_x_1565_);
v___x_1573_ = lean_array_push(v___x_1572_, v_x_1565_);
v___x_1574_ = lean_array_push(v___x_1573_, v___x_1569_);
v_payload_1575_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_1575_, 0, v___x_1574_);
v___x_1576_ = lean_unsigned_to_nat(2u);
v___x_1577_ = lean_mk_empty_array_with_capacity(v___x_1576_);
v___x_1578_ = lean_array_push(v___x_1577_, v___x_1567_);
v___x_1579_ = lean_array_push(v___x_1578_, v_x_1565_);
v___x_1580_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
v___x_1581_ = l_Lasm_JS_Wire_encodeIO(v___x_1580_);
lean_dec_ref_known(v___x_1580_, 1);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; uint32_t v___x_1583_; uint32_t v___x_1584_; uint64_t v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1583_ = 204;
v___x_1584_ = lasm_js_value_handle(v_o_1563_);
lean_dec(v_o_1563_);
v___x_1585_ = 0ULL;
v___x_1586_ = lean_box(0);
v___x_1587_ = lasm_js_call(v___x_1583_, v___x_1584_, v___x_1585_, v_a_1582_, v_payload_1575_);
lean_dec_ref_known(v_payload_1575_, 1);
lean_dec(v_a_1582_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1594_ == 0)
{
lean_object* v_unused_1595_; 
v_unused_1595_ = lean_ctor_get(v___x_1587_, 0);
lean_dec(v_unused_1595_);
v___x_1589_ = v___x_1587_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_dec(v___x_1587_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 0, v___x_1586_);
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v___x_1586_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_a_1596_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1587_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1587_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
lean_dec_ref_known(v_payload_1575_, 1);
lean_dec(v_o_1563_);
v_a_1604_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1581_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1581_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0___boxed(lean_object* v_o_1612_, lean_object* v_key_1613_, lean_object* v_x_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_o_1612_, v_key_1613_, v_x_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble(lean_object* v_self_1617_, uint8_t v_value_1618_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1620_ = ((lean_object*)(l_Lasm_JS_Web_Event_cancelBubble___closed__0));
v___x_1621_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1621_, 0, v_value_1618_);
v___x_1622_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1617_, v___x_1620_, v___x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble___boxed(lean_object* v_self_1623_, lean_object* v_value_1624_, lean_object* v_a_1625_){
_start:
{
uint8_t v_value_boxed_1626_; lean_object* v_res_1627_; 
v_value_boxed_1626_ = lean_unbox(v_value_1624_);
v_res_1627_ = l_Lasm_JS_Web_Event_setCancelBubble(v_self_1623_, v_value_boxed_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles(lean_object* v_self_1628_){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_1631_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1628_, v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles___boxed(lean_object* v_self_1632_, lean_object* v_a_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lasm_JS_Web_Event_bubbles(v_self_1632_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable(lean_object* v_self_1635_){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_1638_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1635_, v___x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable___boxed(lean_object* v_self_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lasm_JS_Web_Event_cancelable(v_self_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue(lean_object* v_self_1643_){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = ((lean_object*)(l_Lasm_JS_Web_Event_returnValue___closed__0));
v___x_1646_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1643_, v___x_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue___boxed(lean_object* v_self_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lasm_JS_Web_Event_returnValue(v_self_1647_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue(lean_object* v_self_1650_, uint8_t v_value_1651_){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((lean_object*)(l_Lasm_JS_Web_Event_returnValue___closed__0));
v___x_1654_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1654_, 0, v_value_1651_);
v___x_1655_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1650_, v___x_1653_, v___x_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue___boxed(lean_object* v_self_1656_, lean_object* v_value_1657_, lean_object* v_a_1658_){
_start:
{
uint8_t v_value_boxed_1659_; lean_object* v_res_1660_; 
v_value_boxed_1659_ = lean_unbox(v_value_1657_);
v_res_1660_ = l_Lasm_JS_Web_Event_setReturnValue(v_self_1656_, v_value_boxed_1659_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented(lean_object* v_self_1662_){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = ((lean_object*)(l_Lasm_JS_Web_Event_defaultPrevented___closed__0));
v___x_1665_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1662_, v___x_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented___boxed(lean_object* v_self_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lasm_JS_Web_Event_defaultPrevented(v_self_1666_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed(lean_object* v_self_1669_){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_1672_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1669_, v___x_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed___boxed(lean_object* v_self_1673_, lean_object* v_a_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lasm_JS_Web_Event_composed(v_self_1673_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted(lean_object* v_self_1677_){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lasm_JS_Web_Event_isTrusted___closed__0));
v___x_1680_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1677_, v___x_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted___boxed(lean_object* v_self_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lasm_JS_Web_Event_isTrusted(v_self_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object* v_context_1685_, lean_object* v_d_1686_){
_start:
{
lean_object* v___y_1689_; lean_object* v___y_1690_; 
if (lean_obj_tag(v_d_1686_) == 3)
{
double v_n_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v_n_1694_ = lean_ctor_get_float(v_d_1686_, 0);
lean_dec_ref_known(v_d_1686_, 0);
v___x_1695_ = lean_box_float(v_n_1694_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
return v___x_1696_;
}
else
{
lean_object* v___x_1697_; lean_object* v_received_1699_; 
v___x_1697_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1686_) == 9)
{
lean_object* v_value_1713_; lean_object* v_description_1714_; uint8_t v___x_1715_; 
v_value_1713_ = lean_ctor_get(v_d_1686_, 0);
v_description_1714_ = lean_ctor_get(v_d_1686_, 1);
v___x_1715_ = lean_string_dec_eq(v_description_1714_, v___x_1697_);
if (v___x_1715_ == 0)
{
goto v___jp_1711_;
}
else
{
uint32_t v___x_1716_; uint64_t v___x_1717_; lean_object* v___x_1718_; uint32_t v___x_1719_; lean_object* v___x_1720_; 
lean_inc_n(v_value_1713_, 2);
lean_dec_ref_known(v_d_1686_, 2);
v___x_1716_ = 206;
v___x_1717_ = 0ULL;
v___x_1718_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_value_1713_);
lean_ctor_set(v___x_1718_, 1, v___x_1697_);
v___x_1719_ = lasm_js_value_handle(v_value_1713_);
lean_dec(v_value_1713_);
v___x_1720_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1716_, v___x_1717_, v___x_1718_, v___x_1719_);
lean_dec_ref_known(v___x_1718_, 2);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; uint8_t v___x_1722_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_a_1721_);
lean_dec_ref_known(v___x_1720_, 1);
v___x_1722_ = lean_string_validate_utf8(v_a_1721_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
lean_dec(v_a_1721_);
v___x_1723_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1724_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1723_);
v_received_1699_ = v___x_1724_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_string_from_utf8_unchecked(v_a_1721_);
v_received_1699_ = v___x_1725_;
goto v___jp_1698_;
}
}
else
{
lean_object* v___x_1726_; 
lean_dec_ref_known(v___x_1720_, 1);
v___x_1726_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1699_ = v___x_1726_;
goto v___jp_1698_;
}
}
}
else
{
goto v___jp_1711_;
}
v___jp_1698_:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v___x_1700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1701_ = lean_string_append(v___x_1700_, v_context_1685_);
v___x_1702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1703_ = lean_string_append(v___x_1701_, v___x_1702_);
v___x_1704_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___closed__0));
v___x_1705_ = lean_string_append(v___x_1703_, v___x_1704_);
v___x_1706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1707_ = lean_string_append(v___x_1705_, v___x_1706_);
v___x_1708_ = lean_string_append(v___x_1707_, v_received_1699_);
lean_dec_ref(v_received_1699_);
v___x_1709_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
v___x_1710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1689_ = v___x_1708_;
v___y_1690_ = v___x_1710_;
goto v___jp_1688_;
}
else
{
v___y_1689_ = v___x_1708_;
v___y_1690_ = v___x_1697_;
goto v___jp_1688_;
}
}
v___jp_1711_:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lasm_JS_Data_describe(v_d_1686_);
v_received_1699_ = v___x_1712_;
goto v___jp_1698_;
}
}
v___jp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_string_append(v___y_1689_, v___y_1690_);
v___x_1692_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
v___x_1693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
return v___x_1693_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1727_, lean_object* v_d_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1727_, v_d_1728_);
lean_dec_ref(v_context_1727_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object* v_context_1731_, lean_object* v_bytes_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1732_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1736_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1736_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1731_, v_a_1735_);
return v___x_1736_;
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
v_a_1737_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1734_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1734_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0___boxed(lean_object* v_context_1745_, lean_object* v_bytes_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v_context_1745_, v_bytes_1746_);
lean_dec_ref(v_bytes_1746_);
lean_dec_ref(v_context_1745_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object* v_o_1749_, lean_object* v_key_1750_){
_start:
{
lean_object* v_k_1752_; lean_object* v___x_1753_; 
v_k_1752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1752_, 0, v_key_1750_);
v___x_1753_ = l_Lasm_JS_Wire_encodeIO(v_k_1752_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; uint32_t v___x_1755_; uint32_t v___x_1756_; uint64_t v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1755_ = 203;
v___x_1756_ = lasm_js_value_handle(v_o_1749_);
v___x_1757_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1759_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1759_, 0, v_o_1749_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = lean_unsigned_to_nat(2u);
v___x_1761_ = lean_mk_empty_array_with_capacity(v___x_1760_);
lean_inc_ref(v_k_1752_);
v___x_1762_ = lean_array_push(v___x_1761_, v_k_1752_);
v___x_1763_ = lean_array_push(v___x_1762_, v___x_1759_);
v___x_1764_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1763_);
v___x_1765_ = lasm_js_call(v___x_1755_, v___x_1756_, v___x_1757_, v_a_1754_, v___x_1764_);
lean_dec_ref_known(v___x_1764_, 1);
lean_dec(v_a_1754_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_a_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1765_, 1);
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1768_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1752_);
v___x_1769_ = lean_string_append(v___x_1767_, v___x_1768_);
lean_dec_ref(v___x_1768_);
v___x_1770_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_1769_, v_a_1766_);
lean_dec(v_a_1766_);
lean_dec_ref(v___x_1769_);
return v___x_1770_;
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref_known(v_k_1752_, 1);
v_a_1771_ = lean_ctor_get(v___x_1765_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1765_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1765_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref_known(v_k_1752_, 1);
lean_dec(v_o_1749_);
v_a_1779_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1753_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1753_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0___boxed(lean_object* v_o_1787_, lean_object* v_key_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_1787_, v_key_1788_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp(lean_object* v_self_1792_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1794_ = ((lean_object*)(l_Lasm_JS_Web_Event_timeStamp___closed__0));
v___x_1795_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_1792_, v___x_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp___boxed(lean_object* v_self_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Lasm_JS_Web_Event_timeStamp(v_self_1796_);
return v_res_1798_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(uint8_t v_await_1799_, uint64_t v_extra_1800_){
_start:
{
uint64_t v___x_1801_; uint64_t v___y_1803_; 
v___x_1801_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1799_ == 0)
{
uint64_t v___x_1806_; 
v___x_1806_ = 0ULL;
v___y_1803_ = v___x_1806_;
goto v___jp_1802_;
}
else
{
uint64_t v___x_1807_; 
v___x_1807_ = 2ULL;
v___y_1803_ = v___x_1807_;
goto v___jp_1802_;
}
v___jp_1802_:
{
uint64_t v___x_1804_; uint64_t v___x_1805_; 
v___x_1804_ = lean_uint64_lor(v___x_1801_, v___y_1803_);
v___x_1805_ = lean_uint64_lor(v___x_1804_, v_extra_1800_);
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0___boxed(lean_object* v_await_1808_, lean_object* v_extra_1809_){
_start:
{
uint8_t v_await_boxed_1810_; uint64_t v_extra_boxed_1811_; uint64_t v_res_1812_; lean_object* v_r_1813_; 
v_await_boxed_1810_ = lean_unbox(v_await_1808_);
v_extra_boxed_1811_ = lean_unbox_uint64(v_extra_1809_);
lean_dec_ref(v_extra_1809_);
v_res_1812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(v_await_boxed_1810_, v_extra_boxed_1811_);
v_r_1813_ = lean_box_uint64(v_res_1812_);
return v_r_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(size_t v_sz_1816_, size_t v_i_1817_, lean_object* v_bs_1818_){
_start:
{
uint8_t v___x_1819_; 
v___x_1819_ = lean_usize_dec_lt(v_i_1817_, v_sz_1816_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_bs_1818_);
return v___x_1820_;
}
else
{
lean_object* v_v_1821_; 
v_v_1821_ = lean_array_uget_borrowed(v_bs_1818_, v_i_1817_);
if (lean_obj_tag(v_v_1821_) == 9)
{
lean_object* v_value_1822_; lean_object* v___x_1823_; lean_object* v_bs_x27_1824_; size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
v_value_1822_ = lean_ctor_get(v_v_1821_, 0);
lean_inc(v_value_1822_);
v___x_1823_ = lean_unsigned_to_nat(0u);
v_bs_x27_1824_ = lean_array_uset(v_bs_1818_, v_i_1817_, v___x_1823_);
v___x_1825_ = ((size_t)1ULL);
v___x_1826_ = lean_usize_add(v_i_1817_, v___x_1825_);
v___x_1827_ = lean_array_uset(v_bs_x27_1824_, v_i_1817_, v_value_1822_);
v_i_1817_ = v___x_1826_;
v_bs_1818_ = v___x_1827_;
goto _start;
}
else
{
lean_object* v___x_1829_; 
lean_dec_ref(v_bs_1818_);
v___x_1829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_1829_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1830_, lean_object* v_i_1831_, lean_object* v_bs_1832_){
_start:
{
size_t v_sz_boxed_1833_; size_t v_i_boxed_1834_; lean_object* v_res_1835_; 
v_sz_boxed_1833_ = lean_unbox_usize(v_sz_1830_);
lean_dec(v_sz_1830_);
v_i_boxed_1834_ = lean_unbox_usize(v_i_1831_);
lean_dec(v_i_1831_);
v_res_1835_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_1833_, v_i_boxed_1834_, v_bs_1832_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(lean_object* v_context_1840_, lean_object* v_d_1841_){
_start:
{
lean_object* v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1850_; lean_object* v_received_1851_; lean_object* v___y_1870_; lean_object* v_a_1873_; 
if (lean_obj_tag(v_d_1841_) == 7)
{
lean_object* v_items_1897_; size_t v_sz_1898_; size_t v___x_1899_; lean_object* v___x_1900_; 
v_items_1897_ = lean_ctor_get(v_d_1841_, 0);
v_sz_1898_ = lean_array_size(v_items_1897_);
v___x_1899_ = ((size_t)0ULL);
lean_inc_ref(v_items_1897_);
v___x_1900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(v_sz_1898_, v___x_1899_, v_items_1897_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; uint8_t v___x_1905_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v___x_1902_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__3));
v___x_1903_ = lean_string_utf8_byte_size(v_a_1901_);
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = lean_nat_dec_eq(v___x_1903_, v___x_1904_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_1907_ = lean_string_append(v___x_1906_, v_a_1901_);
lean_dec(v_a_1901_);
v___x_1908_ = lean_string_append(v___x_1902_, v___x_1907_);
lean_dec_ref(v___x_1907_);
v_a_1873_ = v___x_1908_;
goto v___jp_1872_;
}
else
{
lean_dec(v_a_1901_);
v_a_1873_ = v___x_1902_;
goto v___jp_1872_;
}
}
else
{
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1909_; 
v_a_1909_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1900_, 1);
v_a_1873_ = v_a_1909_;
goto v___jp_1872_;
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref_known(v_d_1841_, 1);
v_a_1910_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1900_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1900_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
lean_ctor_set_tag(v___x_1912_, 0);
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
else
{
lean_object* v___x_1918_; 
v___x_1918_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v_a_1873_ = v___x_1918_;
goto v___jp_1872_;
}
v___jp_1843_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = lean_string_append(v___y_1844_, v___y_1845_);
lean_dec_ref(v___y_1845_);
v___x_1847_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
v___x_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
v___jp_1849_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1853_ = lean_string_append(v___x_1852_, v_context_1840_);
v___x_1854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1855_ = lean_string_append(v___x_1853_, v___x_1854_);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__0));
v___x_1857_ = lean_string_append(v___x_1855_, v___x_1856_);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1859_ = lean_string_append(v___x_1857_, v___x_1858_);
v___x_1860_ = lean_string_append(v___x_1859_, v_received_1851_);
lean_dec_ref(v_received_1851_);
v___x_1861_ = lean_string_utf8_byte_size(v___y_1850_);
v___x_1862_ = lean_unsigned_to_nat(0u);
v___x_1863_ = lean_nat_dec_eq(v___x_1861_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1864_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1));
v___x_1865_ = lean_string_append(v___x_1864_, v___y_1850_);
lean_dec_ref(v___y_1850_);
v___x_1866_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__2));
v___x_1867_ = lean_string_append(v___x_1865_, v___x_1866_);
v___y_1844_ = v___x_1860_;
v___y_1845_ = v___x_1867_;
goto v___jp_1843_;
}
else
{
lean_object* v___x_1868_; 
lean_dec_ref(v___y_1850_);
v___x_1868_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___y_1844_ = v___x_1860_;
v___y_1845_ = v___x_1868_;
goto v___jp_1843_;
}
}
v___jp_1869_:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lasm_JS_Data_describe(v_d_1841_);
v___y_1850_ = v___y_1870_;
v_received_1851_ = v___x_1871_;
goto v___jp_1849_;
}
v___jp_1872_:
{
if (lean_obj_tag(v_d_1841_) == 9)
{
lean_object* v_value_1874_; lean_object* v_description_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v_value_1874_ = lean_ctor_get(v_d_1841_, 0);
v_description_1875_ = lean_ctor_get(v_d_1841_, 1);
v___x_1876_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1877_ = lean_string_dec_eq(v_description_1875_, v___x_1876_);
if (v___x_1877_ == 0)
{
v___y_1870_ = v_a_1873_;
goto v___jp_1869_;
}
else
{
lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1894_; 
lean_inc(v_value_1874_);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_d_1841_);
if (v_isSharedCheck_1894_ == 0)
{
lean_object* v_unused_1895_; lean_object* v_unused_1896_; 
v_unused_1895_ = lean_ctor_get(v_d_1841_, 1);
lean_dec(v_unused_1895_);
v_unused_1896_ = lean_ctor_get(v_d_1841_, 0);
lean_dec(v_unused_1896_);
v___x_1879_ = v_d_1841_;
v_isShared_1880_ = v_isSharedCheck_1894_;
goto v_resetjp_1878_;
}
else
{
lean_dec(v_d_1841_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1894_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
uint32_t v___x_1881_; uint64_t v___x_1882_; lean_object* v___x_1884_; 
v___x_1881_ = 206;
v___x_1882_ = 0ULL;
lean_inc(v_value_1874_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1876_);
v___x_1884_ = v___x_1879_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_value_1874_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___x_1876_);
v___x_1884_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
uint32_t v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lasm_js_value_handle(v_value_1874_);
lean_dec(v_value_1874_);
v___x_1886_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1881_, v___x_1882_, v___x_1884_, v___x_1885_);
lean_dec_ref(v___x_1884_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; uint8_t v___x_1888_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1886_, 1);
v___x_1888_ = lean_string_validate_utf8(v_a_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_dec(v_a_1887_);
v___x_1889_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1890_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1889_);
v___y_1850_ = v_a_1873_;
v_received_1851_ = v___x_1890_;
goto v___jp_1849_;
}
else
{
lean_object* v___x_1891_; 
v___x_1891_ = lean_string_from_utf8_unchecked(v_a_1887_);
v___y_1850_ = v_a_1873_;
v_received_1851_ = v___x_1891_;
goto v___jp_1849_;
}
}
else
{
lean_object* v___x_1892_; 
lean_dec_ref_known(v___x_1886_, 1);
v___x_1892_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v___y_1850_ = v_a_1873_;
v_received_1851_ = v___x_1892_;
goto v___jp_1849_;
}
}
}
}
}
else
{
v___y_1870_ = v_a_1873_;
goto v___jp_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1919_, lean_object* v_d_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(v_context_1919_, v_d_1920_);
lean_dec_ref(v_context_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(lean_object* v_context_1923_, lean_object* v_bytes_1924_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1924_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(v_context_1923_, v_a_1927_);
return v___x_1928_;
}
else
{
lean_object* v_a_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1936_; 
v_a_1929_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1931_ = v___x_1926_;
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_a_1929_);
lean_dec(v___x_1926_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1936_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1934_; 
if (v_isShared_1932_ == 0)
{
v___x_1934_ = v___x_1931_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v_a_1929_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1___boxed(lean_object* v_context_1937_, lean_object* v_bytes_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v_res_1940_; 
v_res_1940_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(v_context_1937_, v_bytes_1938_);
lean_dec_ref(v_bytes_1938_);
lean_dec_ref(v_context_1937_);
return v_res_1940_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1941_; uint8_t v___x_1942_; uint64_t v___x_1943_; 
v___x_1941_ = 8ULL;
v___x_1942_ = 0;
v___x_1943_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(v___x_1942_, v___x_1941_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(lean_object* v_o_1944_, lean_object* v_name_1945_, lean_object* v_args_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; uint64_t v___x_1951_; lean_object* v___x_1952_; 
v___x_1948_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1949_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1949_, 0, v_o_1944_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
lean_inc_ref(v_name_1945_);
v___x_1950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1950_, 0, v_name_1945_);
v___x_1951_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0);
v___x_1952_ = l_Lasm_JS_Value_invokeRaw(v___x_1949_, v___x_1950_, v_args_1946_, v___x_1951_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
v___x_1954_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_1955_ = lean_string_append(v___x_1954_, v_name_1945_);
lean_dec_ref(v_name_1945_);
v___x_1956_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(v___x_1955_, v_a_1953_);
lean_dec(v_a_1953_);
lean_dec_ref(v___x_1955_);
return v___x_1956_;
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec_ref(v_name_1945_);
v_a_1957_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1952_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1952_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___boxed(lean_object* v_o_1965_, lean_object* v_name_1966_, lean_object* v_args_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(v_o_1965_, v_name_1966_, v_args_1967_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath(lean_object* v_self_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1973_ = ((lean_object*)(l_Lasm_JS_Web_Event_composedPath___closed__0));
v___x_1974_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_1975_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(v_self_1971_, v___x_1973_, v___x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath___boxed(lean_object* v_self_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lasm_JS_Web_Event_composedPath(v_self_1976_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation(lean_object* v_self_1980_){
_start:
{
lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1982_ = ((lean_object*)(l_Lasm_JS_Web_Event_stopPropagation___closed__0));
v___x_1983_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_1984_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1980_, v___x_1982_, v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation___boxed(lean_object* v_self_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v_res_1987_; 
v_res_1987_ = l_Lasm_JS_Web_Event_stopPropagation(v_self_1985_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation(lean_object* v_self_1989_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1991_ = ((lean_object*)(l_Lasm_JS_Web_Event_stopImmediatePropagation___closed__0));
v___x_1992_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_1993_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1989_, v___x_1991_, v___x_1992_);
return v___x_1993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation___boxed(lean_object* v_self_1994_, lean_object* v_a_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lasm_JS_Web_Event_stopImmediatePropagation(v_self_1994_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault(lean_object* v_self_1998_){
_start:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2000_ = ((lean_object*)(l_Lasm_JS_Web_Event_preventDefault___closed__0));
v___x_2001_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2002_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1998_, v___x_2000_, v___x_2001_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault___boxed(lean_object* v_self_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lasm_JS_Web_Event_preventDefault(v_self_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent(lean_object* v_self_2007_, lean_object* v_type_2008_, lean_object* v_bubbles_2009_, lean_object* v_cancelable_2010_){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2012_ = ((lean_object*)(l_Lasm_JS_Web_Event_initEvent___closed__0));
v___x_2013_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2013_, 0, v_type_2008_);
v___x_2014_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2009_);
v___x_2015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2010_);
v___x_2016_ = lean_unsigned_to_nat(3u);
v___x_2017_ = lean_mk_empty_array_with_capacity(v___x_2016_);
v___x_2018_ = lean_array_push(v___x_2017_, v___x_2013_);
v___x_2019_ = lean_array_push(v___x_2018_, v___x_2014_);
v___x_2020_ = lean_array_push(v___x_2019_, v___x_2015_);
v___x_2021_ = l_Lasm_JS_Web_Support_args(v___x_2020_);
v___x_2022_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2007_, v___x_2012_, v___x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent___boxed(lean_object* v_self_2023_, lean_object* v_type_2024_, lean_object* v_bubbles_2025_, lean_object* v_cancelable_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lasm_JS_Web_Event_initEvent(v_self_2023_, v_type_2024_, v_bubbles_2025_, v_cancelable_2026_);
lean_dec(v_cancelable_2026_);
lean_dec(v_bubbles_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(lean_object* v_x_2029_){
_start:
{
if (lean_obj_tag(v_x_2029_) == 0)
{
lean_object* v___x_2030_; 
v___x_2030_ = lean_box(0);
return v___x_2030_;
}
else
{
lean_object* v_val_2031_; lean_object* v_bubbles_2032_; lean_object* v_cancelable_2033_; lean_object* v_composed_2034_; lean_object* v_detail_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v_val_2031_ = lean_ctor_get(v_x_2029_, 0);
v_bubbles_2032_ = lean_ctor_get(v_val_2031_, 0);
v_cancelable_2033_ = lean_ctor_get(v_val_2031_, 1);
v_composed_2034_ = lean_ctor_get(v_val_2031_, 2);
v_detail_2035_ = lean_ctor_get(v_val_2031_, 3);
v___x_2036_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_2037_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2032_);
v___x_2038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2036_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_2040_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2033_);
v___x_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2039_);
lean_ctor_set(v___x_2041_, 1, v___x_2040_);
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_2043_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2034_);
v___x_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2042_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
lean_inc(v_detail_2035_);
v___x_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
lean_ctor_set(v___x_2046_, 1, v_detail_2035_);
v___x_2047_ = lean_unsigned_to_nat(4u);
v___x_2048_ = lean_mk_empty_array_with_capacity(v___x_2047_);
v___x_2049_ = lean_array_push(v___x_2048_, v___x_2038_);
v___x_2050_ = lean_array_push(v___x_2049_, v___x_2041_);
v___x_2051_ = lean_array_push(v___x_2050_, v___x_2044_);
v___x_2052_ = lean_array_push(v___x_2051_, v___x_2046_);
v___x_2053_ = l_Lasm_JS_Web_Support_fields(v___x_2052_);
lean_dec_ref(v___x_2052_);
return v___x_2053_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0___boxed(lean_object* v_x_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(v_x_2054_);
lean_dec(v_x_2054_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(lean_object* v_context_2056_, lean_object* v_d_2057_){
_start:
{
lean_object* v___y_2060_; lean_object* v___y_2061_; 
if (lean_obj_tag(v_d_2057_) == 9)
{
lean_object* v_value_2065_; lean_object* v___x_2066_; 
v_value_2065_ = lean_ctor_get(v_d_2057_, 0);
lean_inc(v_value_2065_);
lean_dec_ref_known(v_d_2057_, 2);
v___x_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2066_, 0, v_value_2065_);
return v___x_2066_;
}
else
{
lean_object* v___x_2067_; lean_object* v_received_2069_; 
v___x_2067_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2057_) == 9)
{
lean_object* v_value_2083_; lean_object* v_description_2084_; uint8_t v___x_2085_; 
v_value_2083_ = lean_ctor_get(v_d_2057_, 0);
v_description_2084_ = lean_ctor_get(v_d_2057_, 1);
v___x_2085_ = lean_string_dec_eq(v_description_2084_, v___x_2067_);
if (v___x_2085_ == 0)
{
goto v___jp_2081_;
}
else
{
uint32_t v___x_2086_; uint64_t v___x_2087_; lean_object* v___x_2088_; uint32_t v___x_2089_; lean_object* v___x_2090_; 
lean_inc_n(v_value_2083_, 2);
lean_dec_ref_known(v_d_2057_, 2);
v___x_2086_ = 206;
v___x_2087_ = 0ULL;
v___x_2088_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2088_, 0, v_value_2083_);
lean_ctor_set(v___x_2088_, 1, v___x_2067_);
v___x_2089_ = lasm_js_value_handle(v_value_2083_);
lean_dec(v_value_2083_);
v___x_2090_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2086_, v___x_2087_, v___x_2088_, v___x_2089_);
lean_dec_ref_known(v___x_2088_, 2);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; uint8_t v___x_2092_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2090_, 1);
v___x_2092_ = lean_string_validate_utf8(v_a_2091_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec(v_a_2091_);
v___x_2093_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2094_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2093_);
v_received_2069_ = v___x_2094_;
goto v___jp_2068_;
}
else
{
lean_object* v___x_2095_; 
v___x_2095_ = lean_string_from_utf8_unchecked(v_a_2091_);
v_received_2069_ = v___x_2095_;
goto v___jp_2068_;
}
}
else
{
lean_object* v___x_2096_; 
lean_dec_ref_known(v___x_2090_, 1);
v___x_2096_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2069_ = v___x_2096_;
goto v___jp_2068_;
}
}
}
else
{
goto v___jp_2081_;
}
v___jp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; 
v___x_2070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2071_ = lean_string_append(v___x_2070_, v_context_2056_);
v___x_2072_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2073_ = lean_string_append(v___x_2071_, v___x_2072_);
v___x_2074_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCustomEvent___closed__0));
v___x_2075_ = lean_string_append(v___x_2073_, v___x_2074_);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
v___x_2078_ = lean_string_append(v___x_2077_, v_received_2069_);
lean_dec_ref(v_received_2069_);
v___x_2079_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2079_ == 0)
{
lean_object* v___x_2080_; 
v___x_2080_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2060_ = v___x_2078_;
v___y_2061_ = v___x_2080_;
goto v___jp_2059_;
}
else
{
v___y_2060_ = v___x_2078_;
v___y_2061_ = v___x_2067_;
goto v___jp_2059_;
}
}
v___jp_2081_:
{
lean_object* v___x_2082_; 
v___x_2082_ = l_Lasm_JS_Data_describe(v_d_2057_);
v_received_2069_ = v___x_2082_;
goto v___jp_2068_;
}
}
v___jp_2059_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2062_ = lean_string_append(v___y_2060_, v___y_2061_);
v___x_2063_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
v___x_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
return v___x_2064_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2097_, lean_object* v_d_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(v_context_2097_, v_d_2098_);
lean_dec_ref(v_context_2097_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(lean_object* v_b_2101_, lean_object* v_args_2102_, uint8_t v_await_2103_){
_start:
{
uint64_t v___y_2106_; uint64_t v___y_2107_; uint64_t v___x_2150_; uint64_t v___y_2152_; 
v___x_2150_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2103_ == 0)
{
uint64_t v___x_2157_; 
v___x_2157_ = 0ULL;
v___y_2152_ = v___x_2157_;
goto v___jp_2151_;
}
else
{
uint64_t v___x_2158_; 
v___x_2158_ = 2ULL;
v___y_2152_ = v___x_2158_;
goto v___jp_2151_;
}
v___jp_2105_:
{
uint64_t v_flags_2108_; uint32_t v___x_2109_; lean_object* v___x_2110_; uint32_t v___x_2111_; lean_object* v___x_2112_; 
v_flags_2108_ = lean_uint64_lor(v___y_2106_, v___y_2107_);
v___x_2109_ = 214;
v___x_2110_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2101_, v_args_2102_);
v___x_2111_ = 0;
v___x_2112_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2109_, v_flags_2108_, v___x_2110_, v___x_2111_);
lean_dec(v___x_2110_);
if (lean_obj_tag(v___x_2112_) == 0)
{
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2114_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2114_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2113_);
lean_dec(v_a_2113_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
lean_dec_ref_known(v___x_2114_, 1);
v___x_2116_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2101_);
v___x_2117_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(v___x_2116_, v_a_2115_);
lean_dec_ref(v___x_2116_);
return v___x_2117_;
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
v_a_2118_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2114_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2114_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
v_a_2126_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2112_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2112_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set_tag(v___x_2128_, 1);
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2149_; 
v_a_2134_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2136_ = v___x_2112_;
v_isShared_2137_ = v_isSharedCheck_2149_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2112_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2149_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2139_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2101_);
v___x_2140_ = lean_string_append(v___x_2138_, v___x_2139_);
lean_dec_ref(v___x_2139_);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2142_ = lean_string_append(v___x_2140_, v___x_2141_);
v___x_2143_ = lean_io_error_to_string(v_a_2134_);
v___x_2144_ = lean_string_append(v___x_2142_, v___x_2143_);
lean_dec_ref(v___x_2143_);
v___x_2145_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v___x_2145_);
v___x_2147_ = v___x_2136_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
v___jp_2151_:
{
uint8_t v_construct_2153_; uint64_t v___x_2154_; 
v_construct_2153_ = lean_ctor_get_uint8(v_b_2101_, sizeof(void*)*4);
v___x_2154_ = lean_uint64_lor(v___x_2150_, v___y_2152_);
if (v_construct_2153_ == 0)
{
uint64_t v___x_2155_; 
v___x_2155_ = 0ULL;
v___y_2106_ = v___x_2154_;
v___y_2107_ = v___x_2155_;
goto v___jp_2105_;
}
else
{
uint64_t v___x_2156_; 
v___x_2156_ = 4ULL;
v___y_2106_ = v___x_2154_;
v___y_2107_ = v___x_2156_;
goto v___jp_2105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1___boxed(lean_object* v_b_2159_, lean_object* v_args_2160_, lean_object* v_await_2161_, lean_object* v_a_2162_){
_start:
{
uint8_t v_await_boxed_2163_; lean_object* v_res_2164_; 
v_await_boxed_2163_ = lean_unbox(v_await_2161_);
v_res_2164_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(v_b_2159_, v_args_2160_, v_await_boxed_2163_);
lean_dec_ref(v_b_2159_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new(lean_object* v_type_2173_, lean_object* v_eventInitDict_2174_){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; 
v___x_2176_ = lean_unsigned_to_nat(2u);
v___x_2177_ = ((lean_object*)(l_Lasm_JS_Web_CustomEvent_new___closed__2));
v___x_2178_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2178_, 0, v_type_2173_);
v___x_2179_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(v_eventInitDict_2174_);
v___x_2180_ = lean_mk_empty_array_with_capacity(v___x_2176_);
v___x_2181_ = lean_array_push(v___x_2180_, v___x_2178_);
v___x_2182_ = lean_array_push(v___x_2181_, v___x_2179_);
v___x_2183_ = l_Lasm_JS_Web_Support_args(v___x_2182_);
v___x_2184_ = 0;
v___x_2185_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(v___x_2177_, v___x_2183_, v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new___boxed(lean_object* v_type_2186_, lean_object* v_eventInitDict_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_Lasm_JS_Web_CustomEvent_new(v_type_2186_, v_eventInitDict_2187_);
lean_dec(v_eventInitDict_2187_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object* v_bytes_2190_){
_start:
{
lean_object* v___x_2192_; 
v___x_2192_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2190_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2192_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2192_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
else
{
return v___x_2192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_bytes_2201_);
lean_dec_ref(v_bytes_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object* v_o_2204_, lean_object* v_key_2205_){
_start:
{
lean_object* v_k_2207_; lean_object* v___x_2208_; 
v_k_2207_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2207_, 0, v_key_2205_);
v___x_2208_ = l_Lasm_JS_Wire_encodeIO(v_k_2207_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; uint32_t v___x_2210_; uint32_t v___x_2211_; uint64_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_a_2209_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2210_ = 203;
v___x_2211_ = lasm_js_value_handle(v_o_2204_);
v___x_2212_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_2213_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2214_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2214_, 0, v_o_2204_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = lean_unsigned_to_nat(2u);
v___x_2216_ = lean_mk_empty_array_with_capacity(v___x_2215_);
v___x_2217_ = lean_array_push(v___x_2216_, v_k_2207_);
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2214_);
v___x_2219_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
v___x_2220_ = lasm_js_call(v___x_2210_, v___x_2211_, v___x_2212_, v_a_2209_, v___x_2219_);
lean_dec_ref_known(v___x_2219_, 1);
lean_dec(v_a_2209_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v___x_2222_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
lean_dec_ref_known(v___x_2220_, 1);
v___x_2222_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_2221_);
lean_dec(v_a_2221_);
return v___x_2222_;
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2223_ = lean_ctor_get(v___x_2220_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2220_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2220_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2220_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec_ref_known(v_k_2207_, 1);
lean_dec(v_o_2204_);
v_a_2231_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2208_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2208_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0___boxed(lean_object* v_o_2239_, lean_object* v_key_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_o_2239_, v_key_2240_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail(lean_object* v_self_2243_){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2245_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
v___x_2246_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2243_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail___boxed(lean_object* v_self_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lasm_JS_Web_CustomEvent_detail(v_self_2247_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2250_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2252_, 0, v_d_2250_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2253_, lean_object* v_a_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg(v_d_2253_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1(lean_object* v_context_2256_, lean_object* v_d_2257_){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v_d_2257_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2260_, lean_object* v_d_2261_, lean_object* v_a_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1(v_context_2260_, v_d_2261_);
lean_dec_ref(v_context_2260_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0(lean_object* v_context_2264_, lean_object* v_bytes_2265_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_bytes_2265_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___boxed(lean_object* v_context_2268_, lean_object* v_bytes_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0(v_context_2268_, v_bytes_2269_);
lean_dec_ref(v_bytes_2269_);
lean_dec_ref(v_context_2268_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent(lean_object* v_self_2273_, lean_object* v_type_2274_, lean_object* v_bubbles_2275_, lean_object* v_cancelable_2276_, lean_object* v_detail_2277_){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2279_ = ((lean_object*)(l_Lasm_JS_Web_CustomEvent_initCustomEvent___closed__0));
v___x_2280_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2280_, 0, v_type_2274_);
v___x_2281_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2275_);
v___x_2282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2276_);
v___x_2283_ = lean_unsigned_to_nat(4u);
v___x_2284_ = lean_mk_empty_array_with_capacity(v___x_2283_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2280_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2281_);
v___x_2287_ = lean_array_push(v___x_2286_, v___x_2282_);
v___x_2288_ = lean_array_push(v___x_2287_, v_detail_2277_);
v___x_2289_ = l_Lasm_JS_Web_Support_args(v___x_2288_);
v___x_2290_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2273_, v___x_2279_, v___x_2289_);
return v___x_2290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent___boxed(lean_object* v_self_2291_, lean_object* v_type_2292_, lean_object* v_bubbles_2293_, lean_object* v_cancelable_2294_, lean_object* v_detail_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lasm_JS_Web_CustomEvent_initCustomEvent(v_self_2291_, v_type_2292_, v_bubbles_2293_, v_cancelable_2294_, v_detail_2295_);
lean_dec(v_cancelable_2294_);
lean_dec(v_bubbles_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(lean_object* v_context_2298_, lean_object* v_d_2299_){
_start:
{
lean_object* v___y_2302_; lean_object* v___y_2303_; 
if (lean_obj_tag(v_d_2299_) == 9)
{
lean_object* v_value_2307_; lean_object* v___x_2308_; 
v_value_2307_ = lean_ctor_get(v_d_2299_, 0);
lean_inc(v_value_2307_);
lean_dec_ref_known(v_d_2299_, 2);
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v_value_2307_);
return v___x_2308_;
}
else
{
lean_object* v___x_2309_; lean_object* v_received_2311_; 
v___x_2309_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2299_) == 9)
{
lean_object* v_value_2325_; lean_object* v_description_2326_; uint8_t v___x_2327_; 
v_value_2325_ = lean_ctor_get(v_d_2299_, 0);
v_description_2326_ = lean_ctor_get(v_d_2299_, 1);
v___x_2327_ = lean_string_dec_eq(v_description_2326_, v___x_2309_);
if (v___x_2327_ == 0)
{
goto v___jp_2323_;
}
else
{
uint32_t v___x_2328_; uint64_t v___x_2329_; lean_object* v___x_2330_; uint32_t v___x_2331_; lean_object* v___x_2332_; 
lean_inc_n(v_value_2325_, 2);
lean_dec_ref_known(v_d_2299_, 2);
v___x_2328_ = 206;
v___x_2329_ = 0ULL;
v___x_2330_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2330_, 0, v_value_2325_);
lean_ctor_set(v___x_2330_, 1, v___x_2309_);
v___x_2331_ = lasm_js_value_handle(v_value_2325_);
lean_dec(v_value_2325_);
v___x_2332_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2328_, v___x_2329_, v___x_2330_, v___x_2331_);
lean_dec_ref_known(v___x_2330_, 2);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; uint8_t v___x_2334_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v___x_2334_ = lean_string_validate_utf8(v_a_2333_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
lean_dec(v_a_2333_);
v___x_2335_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2336_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2335_);
v_received_2311_ = v___x_2336_;
goto v___jp_2310_;
}
else
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_string_from_utf8_unchecked(v_a_2333_);
v_received_2311_ = v___x_2337_;
goto v___jp_2310_;
}
}
else
{
lean_object* v___x_2338_; 
lean_dec_ref_known(v___x_2332_, 1);
v___x_2338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2311_ = v___x_2338_;
goto v___jp_2310_;
}
}
}
else
{
goto v___jp_2323_;
}
v___jp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2313_ = lean_string_append(v___x_2312_, v_context_2298_);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2315_ = lean_string_append(v___x_2313_, v___x_2314_);
v___x_2316_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAbortController___closed__0));
v___x_2317_ = lean_string_append(v___x_2315_, v___x_2316_);
v___x_2318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2319_ = lean_string_append(v___x_2317_, v___x_2318_);
v___x_2320_ = lean_string_append(v___x_2319_, v_received_2311_);
lean_dec_ref(v_received_2311_);
v___x_2321_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; 
v___x_2322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2302_ = v___x_2320_;
v___y_2303_ = v___x_2322_;
goto v___jp_2301_;
}
else
{
v___y_2302_ = v___x_2320_;
v___y_2303_ = v___x_2309_;
goto v___jp_2301_;
}
}
v___jp_2323_:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lasm_JS_Data_describe(v_d_2299_);
v_received_2311_ = v___x_2324_;
goto v___jp_2310_;
}
}
v___jp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2304_ = lean_string_append(v___y_2302_, v___y_2303_);
v___x_2305_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
v___x_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
return v___x_2306_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0___boxed(lean_object* v_context_2339_, lean_object* v_d_2340_, lean_object* v_a_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(v_context_2339_, v_d_2340_);
lean_dec_ref(v_context_2339_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(lean_object* v_b_2343_, lean_object* v_args_2344_, uint8_t v_await_2345_){
_start:
{
uint64_t v___y_2348_; uint64_t v___y_2349_; uint64_t v___x_2392_; uint64_t v___y_2394_; 
v___x_2392_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2345_ == 0)
{
uint64_t v___x_2399_; 
v___x_2399_ = 0ULL;
v___y_2394_ = v___x_2399_;
goto v___jp_2393_;
}
else
{
uint64_t v___x_2400_; 
v___x_2400_ = 2ULL;
v___y_2394_ = v___x_2400_;
goto v___jp_2393_;
}
v___jp_2347_:
{
uint64_t v_flags_2350_; uint32_t v___x_2351_; lean_object* v___x_2352_; uint32_t v___x_2353_; lean_object* v___x_2354_; 
v_flags_2350_ = lean_uint64_lor(v___y_2348_, v___y_2349_);
v___x_2351_ = 214;
v___x_2352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2343_, v_args_2344_);
v___x_2353_ = 0;
v___x_2354_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2351_, v_flags_2350_, v___x_2352_, v___x_2353_);
lean_dec(v___x_2352_);
if (lean_obj_tag(v___x_2354_) == 0)
{
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2356_; 
v_a_2355_ = lean_ctor_get(v___x_2354_, 0);
lean_inc(v_a_2355_);
lean_dec_ref_known(v___x_2354_, 1);
v___x_2356_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2355_);
lean_dec(v_a_2355_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2356_, 1);
v___x_2358_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2343_);
v___x_2359_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(v___x_2358_, v_a_2357_);
lean_dec_ref(v___x_2358_);
return v___x_2359_;
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
v_a_2360_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2356_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2356_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
v_a_2368_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2354_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2354_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 1);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2391_; 
v_a_2376_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2378_ = v___x_2354_;
v_isShared_2379_ = v_isSharedCheck_2391_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2354_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2391_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2389_; 
v___x_2380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2381_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2343_);
v___x_2382_ = lean_string_append(v___x_2380_, v___x_2381_);
lean_dec_ref(v___x_2381_);
v___x_2383_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2384_ = lean_string_append(v___x_2382_, v___x_2383_);
v___x_2385_ = lean_io_error_to_string(v_a_2376_);
v___x_2386_ = lean_string_append(v___x_2384_, v___x_2385_);
lean_dec_ref(v___x_2385_);
v___x_2387_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2387_);
v___x_2389_ = v___x_2378_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2387_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
v___jp_2393_:
{
uint8_t v_construct_2395_; uint64_t v___x_2396_; 
v_construct_2395_ = lean_ctor_get_uint8(v_b_2343_, sizeof(void*)*4);
v___x_2396_ = lean_uint64_lor(v___x_2392_, v___y_2394_);
if (v_construct_2395_ == 0)
{
uint64_t v___x_2397_; 
v___x_2397_ = 0ULL;
v___y_2348_ = v___x_2396_;
v___y_2349_ = v___x_2397_;
goto v___jp_2347_;
}
else
{
uint64_t v___x_2398_; 
v___x_2398_ = 4ULL;
v___y_2348_ = v___x_2396_;
v___y_2349_ = v___x_2398_;
goto v___jp_2347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0___boxed(lean_object* v_b_2401_, lean_object* v_args_2402_, lean_object* v_await_2403_, lean_object* v_a_2404_){
_start:
{
uint8_t v_await_boxed_2405_; lean_object* v_res_2406_; 
v_await_boxed_2405_ = lean_unbox(v_await_2403_);
v_res_2406_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(v_b_2401_, v_args_2402_, v_await_boxed_2405_);
lean_dec_ref(v_b_2401_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new(){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; lean_object* v___x_2419_; 
v___x_2416_ = ((lean_object*)(l_Lasm_JS_Web_AbortController_new___closed__2));
v___x_2417_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2418_ = 0;
v___x_2419_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(v___x_2416_, v___x_2417_, v___x_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new___boxed(lean_object* v_a_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lasm_JS_Web_AbortController_new();
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal(lean_object* v_self_2422_){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_2425_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2422_, v___x_2424_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2425_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2425_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
v_a_2434_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2425_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2425_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal___boxed(lean_object* v_self_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_JS_Web_AbortController_signal(v_self_2442_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort(lean_object* v_self_2446_, lean_object* v_reason_2447_){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2449_ = ((lean_object*)(l_Lasm_JS_Web_AbortController_abort___closed__0));
v___x_2450_ = lean_unsigned_to_nat(1u);
v___x_2451_ = lean_mk_empty_array_with_capacity(v___x_2450_);
v___x_2452_ = lean_array_push(v___x_2451_, v_reason_2447_);
v___x_2453_ = l_Lasm_JS_Web_Support_args(v___x_2452_);
v___x_2454_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2446_, v___x_2449_, v___x_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort___boxed(lean_object* v_self_2455_, lean_object* v_reason_2456_, lean_object* v_a_2457_){
_start:
{
lean_object* v_res_2458_; 
v_res_2458_ = l_Lasm_JS_Web_AbortController_abort(v_self_2455_, v_reason_2456_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted(lean_object* v_self_2460_){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_aborted___closed__0));
v___x_2463_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2460_, v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted___boxed(lean_object* v_self_2464_, lean_object* v_a_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Lasm_JS_Web_AbortSignal_aborted(v_self_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason(lean_object* v_self_2468_){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_reason___closed__0));
v___x_2471_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2468_, v___x_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason___boxed(lean_object* v_self_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Lasm_JS_Web_AbortSignal_reason(v_self_2472_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(lean_object* v_context_2476_, lean_object* v_d_2477_){
_start:
{
lean_object* v___y_2483_; lean_object* v___y_2484_; 
switch(lean_obj_tag(v_d_2477_))
{
case 1:
{
goto v___jp_2479_;
}
case 0:
{
goto v___jp_2479_;
}
default: 
{
if (lean_obj_tag(v_d_2477_) == 9)
{
lean_object* v_value_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_value_2488_ = lean_ctor_get(v_d_2477_, 0);
lean_inc(v_value_2488_);
lean_dec_ref_known(v_d_2477_, 2);
v___x_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2489_, 0, v_value_2488_);
v___x_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2490_, 0, v___x_2489_);
return v___x_2490_;
}
else
{
lean_object* v___x_2491_; lean_object* v_received_2493_; 
v___x_2491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2477_) == 9)
{
lean_object* v_value_2507_; lean_object* v_description_2508_; uint8_t v___x_2509_; 
v_value_2507_ = lean_ctor_get(v_d_2477_, 0);
v_description_2508_ = lean_ctor_get(v_d_2477_, 1);
v___x_2509_ = lean_string_dec_eq(v_description_2508_, v___x_2491_);
if (v___x_2509_ == 0)
{
goto v___jp_2505_;
}
else
{
uint32_t v___x_2510_; uint64_t v___x_2511_; lean_object* v___x_2512_; uint32_t v___x_2513_; lean_object* v___x_2514_; 
lean_inc_n(v_value_2507_, 2);
lean_dec_ref_known(v_d_2477_, 2);
v___x_2510_ = 206;
v___x_2511_ = 0ULL;
v___x_2512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2512_, 0, v_value_2507_);
lean_ctor_set(v___x_2512_, 1, v___x_2491_);
v___x_2513_ = lasm_js_value_handle(v_value_2507_);
lean_dec(v_value_2507_);
v___x_2514_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2510_, v___x_2511_, v___x_2512_, v___x_2513_);
lean_dec_ref_known(v___x_2512_, 2);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; uint8_t v___x_2516_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
v___x_2516_ = lean_string_validate_utf8(v_a_2515_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec(v_a_2515_);
v___x_2517_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2518_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2517_);
v_received_2493_ = v___x_2518_;
goto v___jp_2492_;
}
else
{
lean_object* v___x_2519_; 
v___x_2519_ = lean_string_from_utf8_unchecked(v_a_2515_);
v_received_2493_ = v___x_2519_;
goto v___jp_2492_;
}
}
else
{
lean_object* v___x_2520_; 
lean_dec_ref_known(v___x_2514_, 1);
v___x_2520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2493_ = v___x_2520_;
goto v___jp_2492_;
}
}
}
else
{
goto v___jp_2505_;
}
v___jp_2492_:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; uint8_t v___x_2503_; 
v___x_2494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2495_ = lean_string_append(v___x_2494_, v_context_2476_);
v___x_2496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2497_ = lean_string_append(v___x_2495_, v___x_2496_);
v___x_2498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___closed__0));
v___x_2499_ = lean_string_append(v___x_2497_, v___x_2498_);
v___x_2500_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2501_ = lean_string_append(v___x_2499_, v___x_2500_);
v___x_2502_ = lean_string_append(v___x_2501_, v_received_2493_);
lean_dec_ref(v_received_2493_);
v___x_2503_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2503_ == 0)
{
lean_object* v___x_2504_; 
v___x_2504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2483_ = v___x_2502_;
v___y_2484_ = v___x_2504_;
goto v___jp_2482_;
}
else
{
v___y_2483_ = v___x_2502_;
v___y_2484_ = v___x_2491_;
goto v___jp_2482_;
}
}
v___jp_2505_:
{
lean_object* v___x_2506_; 
v___x_2506_ = l_Lasm_JS_Data_describe(v_d_2477_);
v_received_2493_ = v___x_2506_;
goto v___jp_2492_;
}
}
}
}
v___jp_2479_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = lean_box(0);
v___x_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2480_);
return v___x_2481_;
}
v___jp_2482_:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = lean_string_append(v___y_2483_, v___y_2484_);
v___x_2486_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
v___x_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2486_);
return v___x_2487_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2521_, lean_object* v_d_2522_, lean_object* v_a_2523_){
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(v_context_2521_, v_d_2522_);
lean_dec_ref(v_context_2521_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(lean_object* v_context_2525_, lean_object* v_bytes_2526_){
_start:
{
lean_object* v___x_2528_; 
v___x_2528_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2526_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2530_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2530_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(v_context_2525_, v_a_2529_);
return v___x_2530_;
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
v_a_2531_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2528_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2528_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0___boxed(lean_object* v_context_2539_, lean_object* v_bytes_2540_, lean_object* v_a_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(v_context_2539_, v_bytes_2540_);
lean_dec_ref(v_bytes_2540_);
lean_dec_ref(v_context_2539_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(lean_object* v_o_2543_, lean_object* v_key_2544_){
_start:
{
lean_object* v_k_2546_; lean_object* v___x_2547_; 
v_k_2546_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_2546_, 0, v_key_2544_);
v___x_2547_ = l_Lasm_JS_Wire_encodeIO(v_k_2546_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; uint32_t v___x_2549_; uint32_t v___x_2550_; uint64_t v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v___x_2549_ = 203;
v___x_2550_ = lasm_js_value_handle(v_o_2543_);
v___x_2551_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_2552_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2553_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2553_, 0, v_o_2543_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
v___x_2554_ = lean_unsigned_to_nat(2u);
v___x_2555_ = lean_mk_empty_array_with_capacity(v___x_2554_);
lean_inc_ref(v_k_2546_);
v___x_2556_ = lean_array_push(v___x_2555_, v_k_2546_);
v___x_2557_ = lean_array_push(v___x_2556_, v___x_2553_);
v___x_2558_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
v___x_2559_ = lasm_js_call(v___x_2549_, v___x_2550_, v___x_2551_, v_a_2548_, v___x_2558_);
lean_dec_ref_known(v___x_2558_, 1);
lean_dec(v_a_2548_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_2562_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_2546_);
v___x_2563_ = lean_string_append(v___x_2561_, v___x_2562_);
lean_dec_ref(v___x_2562_);
v___x_2564_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(v___x_2563_, v_a_2560_);
lean_dec(v_a_2560_);
lean_dec_ref(v___x_2563_);
return v___x_2564_;
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2572_; 
lean_dec_ref_known(v_k_2546_, 1);
v_a_2565_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2567_ = v___x_2559_;
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v___x_2559_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2572_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2570_; 
if (v_isShared_2568_ == 0)
{
v___x_2570_ = v___x_2567_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2565_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2580_; 
lean_dec_ref_known(v_k_2546_, 1);
lean_dec(v_o_2543_);
v_a_2573_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2575_ = v___x_2547_;
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v___x_2547_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2578_; 
if (v_isShared_2576_ == 0)
{
v___x_2578_ = v___x_2575_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v_a_2573_);
v___x_2578_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
return v___x_2578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0___boxed(lean_object* v_o_2581_, lean_object* v_key_2582_, lean_object* v_a_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(v_o_2581_, v_key_2582_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort(lean_object* v_self_2586_){
_start:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_onabort___closed__0));
v___x_2589_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(v_self_2586_, v___x_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort___boxed(lean_object* v_self_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l_Lasm_JS_Web_AbortSignal_onabort(v_self_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort(lean_object* v_self_2593_, lean_object* v_value_2594_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_onabort___closed__0));
if (lean_obj_tag(v_value_2594_) == 0)
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2597_ = lean_box(1);
v___x_2598_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2593_, v___x_2596_, v___x_2597_);
return v___x_2598_;
}
else
{
lean_object* v_val_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_val_2599_ = lean_ctor_get(v_value_2594_, 0);
v___x_2600_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_2599_);
v___x_2601_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2601_, 0, v_val_2599_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2593_, v___x_2596_, v___x_2601_);
return v___x_2602_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort___boxed(lean_object* v_self_2603_, lean_object* v_value_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lasm_JS_Web_AbortSignal_setOnabort(v_self_2603_, v_value_2604_);
lean_dec(v_value_2604_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort(lean_object* v_reason_2615_){
_start:
{
uint8_t v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2617_ = 0;
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_abort___closed__2));
v___x_2620_ = lean_mk_empty_array_with_capacity(v___x_2618_);
v___x_2621_ = lean_array_push(v___x_2620_, v_reason_2615_);
v___x_2622_ = l_Lasm_JS_Web_Support_args(v___x_2621_);
v___x_2623_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2619_, v___x_2622_, v___x_2617_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
v_a_2632_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2623_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2623_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort___boxed(lean_object* v_reason_2640_, lean_object* v_a_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lasm_JS_Web_AbortSignal_abort(v_reason_2640_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout(lean_object* v_milliseconds_2651_){
_start:
{
uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___y_2657_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2653_ = 0;
v___x_2654_ = lean_unsigned_to_nat(1u);
v___x_2655_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_timeout___closed__2));
v___x_2678_ = lean_nat_to_int(v_milliseconds_2651_);
v___x_2679_ = lean_nat_abs(v___x_2678_);
v___x_2680_ = lean_cstr_to_nat("9007199254740991");
v___x_2681_ = lean_nat_dec_le(v___x_2679_, v___x_2680_);
lean_dec(v___x_2679_);
if (v___x_2681_ == 0)
{
lean_object* v___x_2682_; 
v___x_2682_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2678_);
v___y_2657_ = v___x_2682_;
goto v___jp_2656_;
}
else
{
double v___x_2683_; lean_object* v___x_2684_; 
v___x_2683_ = l_Float_ofInt(v___x_2678_);
lean_dec(v___x_2678_);
v___x_2684_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2684_, 0, v___x_2683_);
v___y_2657_ = v___x_2684_;
goto v___jp_2656_;
}
v___jp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2658_ = lean_mk_empty_array_with_capacity(v___x_2654_);
v___x_2659_ = lean_array_push(v___x_2658_, v___y_2657_);
v___x_2660_ = l_Lasm_JS_Web_Support_args(v___x_2659_);
v___x_2661_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2655_, v___x_2660_, v___x_2653_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
v_a_2662_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2661_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2661_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
v_a_2670_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2661_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2661_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout___boxed(lean_object* v_milliseconds_2685_, lean_object* v_a_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lasm_JS_Web_AbortSignal_timeout(v_milliseconds_2685_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(size_t v_sz_2688_, size_t v_i_2689_, lean_object* v_bs_2690_){
_start:
{
uint8_t v___x_2691_; 
v___x_2691_ = lean_usize_dec_lt(v_i_2689_, v_sz_2688_);
if (v___x_2691_ == 0)
{
return v_bs_2690_;
}
else
{
lean_object* v_v_2692_; lean_object* v___x_2693_; lean_object* v_bs_x27_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; lean_object* v___x_2699_; 
v_v_2692_ = lean_array_uget(v_bs_2690_, v_i_2689_);
v___x_2693_ = lean_unsigned_to_nat(0u);
v_bs_x27_2694_ = lean_array_uset(v_bs_2690_, v_i_2689_, v___x_2693_);
v___x_2695_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2696_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2696_, 0, v_v_2692_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2689_, v___x_2697_);
v___x_2699_ = lean_array_uset(v_bs_x27_2694_, v_i_2689_, v___x_2696_);
v_i_2689_ = v___x_2698_;
v_bs_2690_ = v___x_2699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0___boxed(lean_object* v_sz_2701_, lean_object* v_i_2702_, lean_object* v_bs_2703_){
_start:
{
size_t v_sz_boxed_2704_; size_t v_i_boxed_2705_; lean_object* v_res_2706_; 
v_sz_boxed_2704_ = lean_unbox_usize(v_sz_2701_);
lean_dec(v_sz_2701_);
v_i_boxed_2705_ = lean_unbox_usize(v_i_2702_);
lean_dec(v_i_2702_);
v_res_2706_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(v_sz_boxed_2704_, v_i_boxed_2705_, v_bs_2703_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any(lean_object* v_signals_2715_){
_start:
{
uint8_t v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; size_t v_sz_2720_; size_t v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2717_ = 0;
v___x_2718_ = lean_unsigned_to_nat(1u);
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_any___closed__2));
v_sz_2720_ = lean_array_size(v_signals_2715_);
v___x_2721_ = ((size_t)0ULL);
v___x_2722_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(v_sz_2720_, v___x_2721_, v_signals_2715_);
v___x_2723_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
v___x_2724_ = lean_mk_empty_array_with_capacity(v___x_2718_);
v___x_2725_ = lean_array_push(v___x_2724_, v___x_2723_);
v___x_2726_ = l_Lasm_JS_Web_Support_args(v___x_2725_);
v___x_2727_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2719_, v___x_2726_, v___x_2717_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2727_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2727_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2727_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2727_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any___boxed(lean_object* v_signals_2744_, lean_object* v_a_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lasm_JS_Web_AbortSignal_any(v_signals_2744_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted(lean_object* v_self_2748_){
_start:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_throwIfAborted___closed__0));
v___x_2751_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2752_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2748_, v___x_2750_, v___x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted___boxed(lean_object* v_self_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lasm_JS_Web_AbortSignal_throwIfAborted(v_self_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object* v_x_2756_){
_start:
{
if (lean_obj_tag(v_x_2756_) == 0)
{
lean_object* v___x_2757_; 
v___x_2757_ = lean_box(0);
return v___x_2757_;
}
else
{
lean_object* v_val_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
v_val_2758_ = lean_ctor_get(v_x_2756_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v_x_2756_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v_x_2756_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_val_2758_);
lean_dec(v_x_2756_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
lean_ctor_set_tag(v___x_2760_, 4);
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_val_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(lean_object* v_context_2766_, lean_object* v_d_2767_){
_start:
{
lean_object* v___y_2770_; lean_object* v___y_2771_; 
if (lean_obj_tag(v_d_2767_) == 9)
{
lean_object* v_value_2775_; lean_object* v___x_2776_; 
v_value_2775_ = lean_ctor_get(v_d_2767_, 0);
lean_inc(v_value_2775_);
lean_dec_ref_known(v_d_2767_, 2);
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_value_2775_);
return v___x_2776_;
}
else
{
lean_object* v___x_2777_; lean_object* v_received_2779_; 
v___x_2777_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2767_) == 9)
{
lean_object* v_value_2793_; lean_object* v_description_2794_; uint8_t v___x_2795_; 
v_value_2793_ = lean_ctor_get(v_d_2767_, 0);
v_description_2794_ = lean_ctor_get(v_d_2767_, 1);
v___x_2795_ = lean_string_dec_eq(v_description_2794_, v___x_2777_);
if (v___x_2795_ == 0)
{
goto v___jp_2791_;
}
else
{
uint32_t v___x_2796_; uint64_t v___x_2797_; lean_object* v___x_2798_; uint32_t v___x_2799_; lean_object* v___x_2800_; 
lean_inc_n(v_value_2793_, 2);
lean_dec_ref_known(v_d_2767_, 2);
v___x_2796_ = 206;
v___x_2797_ = 0ULL;
v___x_2798_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2798_, 0, v_value_2793_);
lean_ctor_set(v___x_2798_, 1, v___x_2777_);
v___x_2799_ = lasm_js_value_handle(v_value_2793_);
lean_dec(v_value_2793_);
v___x_2800_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2796_, v___x_2797_, v___x_2798_, v___x_2799_);
lean_dec_ref_known(v___x_2798_, 2);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; uint8_t v___x_2802_; 
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2801_);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2802_ = lean_string_validate_utf8(v_a_2801_);
if (v___x_2802_ == 0)
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
lean_dec(v_a_2801_);
v___x_2803_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2804_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2803_);
v_received_2779_ = v___x_2804_;
goto v___jp_2778_;
}
else
{
lean_object* v___x_2805_; 
v___x_2805_ = lean_string_from_utf8_unchecked(v_a_2801_);
v_received_2779_ = v___x_2805_;
goto v___jp_2778_;
}
}
else
{
lean_object* v___x_2806_; 
lean_dec_ref_known(v___x_2800_, 1);
v___x_2806_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2779_ = v___x_2806_;
goto v___jp_2778_;
}
}
}
else
{
goto v___jp_2791_;
}
v___jp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; 
v___x_2780_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2781_ = lean_string_append(v___x_2780_, v_context_2766_);
v___x_2782_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2783_ = lean_string_append(v___x_2781_, v___x_2782_);
v___x_2784_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMException___closed__0));
v___x_2785_ = lean_string_append(v___x_2783_, v___x_2784_);
v___x_2786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2787_ = lean_string_append(v___x_2785_, v___x_2786_);
v___x_2788_ = lean_string_append(v___x_2787_, v_received_2779_);
lean_dec_ref(v_received_2779_);
v___x_2789_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2789_ == 0)
{
lean_object* v___x_2790_; 
v___x_2790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2770_ = v___x_2788_;
v___y_2771_ = v___x_2790_;
goto v___jp_2769_;
}
else
{
v___y_2770_ = v___x_2788_;
v___y_2771_ = v___x_2777_;
goto v___jp_2769_;
}
}
v___jp_2791_:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_Lasm_JS_Data_describe(v_d_2767_);
v_received_2779_ = v___x_2792_;
goto v___jp_2778_;
}
}
v___jp_2769_:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = lean_string_append(v___y_2770_, v___y_2771_);
v___x_2773_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2772_);
v___x_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
return v___x_2774_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1___boxed(lean_object* v_context_2807_, lean_object* v_d_2808_, lean_object* v_a_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(v_context_2807_, v_d_2808_);
lean_dec_ref(v_context_2807_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(lean_object* v_b_2811_, lean_object* v_args_2812_, uint8_t v_await_2813_){
_start:
{
uint64_t v___y_2816_; uint64_t v___y_2817_; uint64_t v___x_2860_; uint64_t v___y_2862_; 
v___x_2860_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2813_ == 0)
{
uint64_t v___x_2867_; 
v___x_2867_ = 0ULL;
v___y_2862_ = v___x_2867_;
goto v___jp_2861_;
}
else
{
uint64_t v___x_2868_; 
v___x_2868_ = 2ULL;
v___y_2862_ = v___x_2868_;
goto v___jp_2861_;
}
v___jp_2815_:
{
uint64_t v_flags_2818_; uint32_t v___x_2819_; lean_object* v___x_2820_; uint32_t v___x_2821_; lean_object* v___x_2822_; 
v_flags_2818_ = lean_uint64_lor(v___y_2816_, v___y_2817_);
v___x_2819_ = 214;
v___x_2820_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2811_, v_args_2812_);
v___x_2821_ = 0;
v___x_2822_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2819_, v_flags_2818_, v___x_2820_, v___x_2821_);
lean_dec(v___x_2820_);
if (lean_obj_tag(v___x_2822_) == 0)
{
if (lean_obj_tag(v___x_2822_) == 0)
{
lean_object* v_a_2823_; lean_object* v___x_2824_; 
v_a_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_a_2823_);
lean_dec_ref_known(v___x_2822_, 1);
v___x_2824_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2823_);
lean_dec(v_a_2823_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2811_);
v___x_2827_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(v___x_2826_, v_a_2825_);
lean_dec_ref(v___x_2826_);
return v___x_2827_;
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
v_a_2828_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2824_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2824_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
v_a_2836_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2822_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2822_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
lean_ctor_set_tag(v___x_2838_, 1);
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2859_; 
v_a_2844_ = lean_ctor_get(v___x_2822_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2822_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2846_ = v___x_2822_;
v_isShared_2847_ = v_isSharedCheck_2859_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2822_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2859_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2857_; 
v___x_2848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2849_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2811_);
v___x_2850_ = lean_string_append(v___x_2848_, v___x_2849_);
lean_dec_ref(v___x_2849_);
v___x_2851_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2852_ = lean_string_append(v___x_2850_, v___x_2851_);
v___x_2853_ = lean_io_error_to_string(v_a_2844_);
v___x_2854_ = lean_string_append(v___x_2852_, v___x_2853_);
lean_dec_ref(v___x_2853_);
v___x_2855_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v___x_2855_);
v___x_2857_ = v___x_2846_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
v___jp_2861_:
{
uint8_t v_construct_2863_; uint64_t v___x_2864_; 
v_construct_2863_ = lean_ctor_get_uint8(v_b_2811_, sizeof(void*)*4);
v___x_2864_ = lean_uint64_lor(v___x_2860_, v___y_2862_);
if (v_construct_2863_ == 0)
{
uint64_t v___x_2865_; 
v___x_2865_ = 0ULL;
v___y_2816_ = v___x_2864_;
v___y_2817_ = v___x_2865_;
goto v___jp_2815_;
}
else
{
uint64_t v___x_2866_; 
v___x_2866_ = 4ULL;
v___y_2816_ = v___x_2864_;
v___y_2817_ = v___x_2866_;
goto v___jp_2815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1___boxed(lean_object* v_b_2869_, lean_object* v_args_2870_, lean_object* v_await_2871_, lean_object* v_a_2872_){
_start:
{
uint8_t v_await_boxed_2873_; lean_object* v_res_2874_; 
v_await_boxed_2873_ = lean_unbox(v_await_2871_);
v_res_2874_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(v_b_2869_, v_args_2870_, v_await_boxed_2873_);
lean_dec_ref(v_b_2869_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new(lean_object* v_message_2883_, lean_object* v_name_2884_){
_start:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; lean_object* v___x_2895_; 
v___x_2886_ = lean_unsigned_to_nat(2u);
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_new___closed__2));
v___x_2888_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_2883_);
v___x_2889_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_name_2884_);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2886_);
v___x_2891_ = lean_array_push(v___x_2890_, v___x_2888_);
v___x_2892_ = lean_array_push(v___x_2891_, v___x_2889_);
v___x_2893_ = l_Lasm_JS_Web_Support_args(v___x_2892_);
v___x_2894_ = 0;
v___x_2895_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(v___x_2887_, v___x_2893_, v___x_2894_);
return v___x_2895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new___boxed(lean_object* v_message_2896_, lean_object* v_name_2897_, lean_object* v_a_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lasm_JS_Web_DOMException_new(v_message_2896_, v_name_2897_);
return v_res_2899_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR(void){
_start:
{
lean_object* v___x_2900_; 
v___x_2900_ = lean_unsigned_to_nat(1u);
return v___x_2900_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR(void){
_start:
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_unsigned_to_nat(2u);
return v___x_2901_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR(void){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = lean_unsigned_to_nat(3u);
return v___x_2902_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR(void){
_start:
{
lean_object* v___x_2903_; 
v___x_2903_ = lean_unsigned_to_nat(4u);
return v___x_2903_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR(void){
_start:
{
lean_object* v___x_2904_; 
v___x_2904_ = lean_unsigned_to_nat(5u);
return v___x_2904_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR(void){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = lean_unsigned_to_nat(6u);
return v___x_2905_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR(void){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_unsigned_to_nat(7u);
return v___x_2906_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR(void){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = lean_unsigned_to_nat(8u);
return v___x_2907_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR(void){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = lean_unsigned_to_nat(9u);
return v___x_2908_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR(void){
_start:
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_unsigned_to_nat(10u);
return v___x_2909_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR(void){
_start:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_unsigned_to_nat(11u);
return v___x_2910_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_SYNTAX__ERR(void){
_start:
{
lean_object* v___x_2911_; 
v___x_2911_ = lean_unsigned_to_nat(12u);
return v___x_2911_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR(void){
_start:
{
lean_object* v___x_2912_; 
v___x_2912_ = lean_unsigned_to_nat(13u);
return v___x_2912_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NAMESPACE__ERR(void){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_unsigned_to_nat(14u);
return v___x_2913_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR(void){
_start:
{
lean_object* v___x_2914_; 
v___x_2914_ = lean_unsigned_to_nat(15u);
return v___x_2914_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_VALIDATION__ERR(void){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = lean_unsigned_to_nat(16u);
return v___x_2915_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR(void){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = lean_unsigned_to_nat(17u);
return v___x_2916_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_SECURITY__ERR(void){
_start:
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_unsigned_to_nat(18u);
return v___x_2917_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NETWORK__ERR(void){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = lean_unsigned_to_nat(19u);
return v___x_2918_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_ABORT__ERR(void){
_start:
{
lean_object* v___x_2919_; 
v___x_2919_ = lean_unsigned_to_nat(20u);
return v___x_2919_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR(void){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = lean_unsigned_to_nat(21u);
return v___x_2920_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR(void){
_start:
{
lean_object* v___x_2921_; 
v___x_2921_ = lean_unsigned_to_nat(22u);
return v___x_2921_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_TIMEOUT__ERR(void){
_start:
{
lean_object* v___x_2922_; 
v___x_2922_ = lean_unsigned_to_nat(23u);
return v___x_2922_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR(void){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_unsigned_to_nat(24u);
return v___x_2923_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR(void){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = lean_unsigned_to_nat(25u);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name(lean_object* v_self_2926_){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_name___closed__0));
v___x_2929_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2926_, v___x_2928_);
return v___x_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name___boxed(lean_object* v_self_2930_, lean_object* v_a_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l_Lasm_JS_Web_DOMException_name(v_self_2930_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message(lean_object* v_self_2934_){
_start:
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_message___closed__0));
v___x_2937_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_2934_, v___x_2936_);
return v___x_2937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message___boxed(lean_object* v_self_2938_, lean_object* v_a_2939_){
_start:
{
lean_object* v_res_2940_; 
v_res_2940_ = l_Lasm_JS_Web_DOMException_message(v_self_2938_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code(lean_object* v_self_2942_){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_code___closed__0));
v___x_2945_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_2942_, v___x_2944_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code___boxed(lean_object* v_self_2946_, lean_object* v_a_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = l_Lasm_JS_Web_DOMException_code(v_self_2946_);
return v_res_2948_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
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
l_Lasm_JS_Web_Event_NONE = _init_l_Lasm_JS_Web_Event_NONE();
lean_mark_persistent(l_Lasm_JS_Web_Event_NONE);
l_Lasm_JS_Web_Event_CAPTURING__PHASE = _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE();
lean_mark_persistent(l_Lasm_JS_Web_Event_CAPTURING__PHASE);
l_Lasm_JS_Web_Event_AT__TARGET = _init_l_Lasm_JS_Web_Event_AT__TARGET();
lean_mark_persistent(l_Lasm_JS_Web_Event_AT__TARGET);
l_Lasm_JS_Web_Event_BUBBLING__PHASE = _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE();
lean_mark_persistent(l_Lasm_JS_Web_Event_BUBBLING__PHASE);
l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR = _init_l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR);
l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR = _init_l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR);
l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR = _init_l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR);
l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR = _init_l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR);
l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR = _init_l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR);
l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR = _init_l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR);
l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR = _init_l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR);
l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR = _init_l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR);
l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR = _init_l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR);
l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR = _init_l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR);
l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR = _init_l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR);
l_Lasm_JS_Web_DOMException_SYNTAX__ERR = _init_l_Lasm_JS_Web_DOMException_SYNTAX__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_SYNTAX__ERR);
l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR = _init_l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR);
l_Lasm_JS_Web_DOMException_NAMESPACE__ERR = _init_l_Lasm_JS_Web_DOMException_NAMESPACE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NAMESPACE__ERR);
l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR = _init_l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR);
l_Lasm_JS_Web_DOMException_VALIDATION__ERR = _init_l_Lasm_JS_Web_DOMException_VALIDATION__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_VALIDATION__ERR);
l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR = _init_l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR);
l_Lasm_JS_Web_DOMException_SECURITY__ERR = _init_l_Lasm_JS_Web_DOMException_SECURITY__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_SECURITY__ERR);
l_Lasm_JS_Web_DOMException_NETWORK__ERR = _init_l_Lasm_JS_Web_DOMException_NETWORK__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_NETWORK__ERR);
l_Lasm_JS_Web_DOMException_ABORT__ERR = _init_l_Lasm_JS_Web_DOMException_ABORT__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_ABORT__ERR);
l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR = _init_l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR);
l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR = _init_l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR);
l_Lasm_JS_Web_DOMException_TIMEOUT__ERR = _init_l_Lasm_JS_Web_DOMException_TIMEOUT__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_TIMEOUT__ERR);
l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR = _init_l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR);
l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR = _init_l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR();
lean_mark_persistent(l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
