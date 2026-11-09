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
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
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
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "an element is not Lasm.JS.Web.EventTarget"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0(lean_object* v_x_68_){
_start:
{
if (lean_obj_tag(v_x_68_) == 0)
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_78_; 
v_a_70_ = lean_ctor_get(v_x_68_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v_x_68_);
if (v_isSharedCheck_78_ == 0)
{
v___x_72_ = v_x_68_;
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v_x_68_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
}
else
{
lean_object* v___x_79_; 
lean_dec_ref_known(v_x_68_, 1);
v___x_79_ = ((lean_object*)(l_Lasm_JS_Web_EventListener_ofFn___lam__0___closed__1));
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__0___boxed(lean_object* v_x_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lasm_JS_Web_EventListener_ofFn___lam__0(v_x_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1(lean_object* v_f_83_, lean_object* v___f_84_, lean_object* v_x_85_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_95_; 
lean_dec_ref(v___f_84_);
lean_dec_ref(v_f_83_);
v_a_87_ = lean_ctor_get(v_x_85_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v_x_85_);
if (v_isSharedCheck_95_ == 0)
{
v___x_89_ = v_x_85_;
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_a_87_);
lean_dec(v_x_85_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_92_; 
if (v_isShared_90_ == 0)
{
v___x_92_ = v___x_89_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_87_);
v___x_92_ = v_reuseFailAlloc_94_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_97_; uint8_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v_a_96_ = lean_ctor_get(v_x_85_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v_x_85_, 1);
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = 0;
v___x_99_ = lean_apply_2(v_f_83_, v_a_96_, lean_box(0));
v___x_100_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_97_, v___x_98_, v___x_99_, v___f_84_);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed(lean_object* v_f_101_, lean_object* v___f_102_, lean_object* v_x_103_, lean_object* v___y_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lasm_JS_Web_EventListener_ofFn___lam__1(v_f_101_, v___f_102_, v_x_103_);
return v_res_105_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_110_ = lean_string_utf8_byte_size(v___x_109_);
return v___x_110_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__3);
v___x_113_ = lean_nat_dec_eq(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_118_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__8));
v___x_119_ = lean_unsigned_to_nat(46u);
v___x_120_ = lean_unsigned_to_nat(193u);
v___x_121_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__7));
v___x_122_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__6));
v___x_123_ = l_mkPanicMessageWithDecl(v___x_122_, v___x_121_, v___x_120_, v___x_119_, v___x_118_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(lean_object* v_context_125_, lean_object* v_d_126_){
_start:
{
lean_object* v___y_129_; lean_object* v___y_130_; 
if (lean_obj_tag(v_d_126_) == 9)
{
lean_object* v_value_134_; lean_object* v___x_135_; 
v_value_134_ = lean_ctor_get(v_d_126_, 0);
lean_inc(v_value_134_);
lean_dec_ref_known(v_d_126_, 2);
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v_value_134_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v_received_138_; 
v___x_136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_126_) == 9)
{
lean_object* v_value_152_; lean_object* v_description_153_; uint8_t v___x_154_; 
v_value_152_ = lean_ctor_get(v_d_126_, 0);
v_description_153_ = lean_ctor_get(v_d_126_, 1);
v___x_154_ = lean_string_dec_eq(v_description_153_, v___x_136_);
if (v___x_154_ == 0)
{
goto v___jp_150_;
}
else
{
uint32_t v___x_155_; uint64_t v___x_156_; lean_object* v___x_157_; uint32_t v___x_158_; lean_object* v___x_159_; 
lean_inc_n(v_value_152_, 2);
lean_dec_ref_known(v_d_126_, 2);
v___x_155_ = 206;
v___x_156_ = 0ULL;
v___x_157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_157_, 0, v_value_152_);
lean_ctor_set(v___x_157_, 1, v___x_136_);
v___x_158_ = lasm_js_value_handle(v_value_152_);
lean_dec(v_value_152_);
v___x_159_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_155_, v___x_156_, v___x_157_, v___x_158_);
lean_dec_ref_known(v___x_157_, 2);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; uint8_t v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
v___x_161_ = lean_string_validate_utf8(v_a_160_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v_a_160_);
v___x_162_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_163_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_162_);
v_received_138_ = v___x_163_;
goto v___jp_137_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = lean_string_from_utf8_unchecked(v_a_160_);
v_received_138_ = v___x_164_;
goto v___jp_137_;
}
}
else
{
lean_object* v___x_165_; 
lean_dec_ref_known(v___x_159_, 1);
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_138_ = v___x_165_;
goto v___jp_137_;
}
}
}
else
{
goto v___jp_150_;
}
v___jp_137_:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_139_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_140_ = lean_string_append(v___x_139_, v_context_125_);
v___x_141_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_142_ = lean_string_append(v___x_140_, v___x_141_);
v___x_143_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEvent___closed__0));
v___x_144_ = lean_string_append(v___x_142_, v___x_143_);
v___x_145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_146_ = lean_string_append(v___x_144_, v___x_145_);
v___x_147_ = lean_string_append(v___x_146_, v_received_138_);
lean_dec_ref(v_received_138_);
v___x_148_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_129_ = v___x_147_;
v___y_130_ = v___x_149_;
goto v___jp_128_;
}
else
{
v___y_129_ = v___x_147_;
v___y_130_ = v___x_136_;
goto v___jp_128_;
}
}
v___jp_150_:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lasm_JS_Data_describe(v_d_126_);
v_received_138_ = v___x_151_;
goto v___jp_137_;
}
}
v___jp_128_:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_string_append(v___y_129_, v___y_130_);
v___x_132_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___boxed(lean_object* v_context_166_, lean_object* v_d_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v_context_166_, v_d_167_);
lean_dec_ref(v_context_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(lean_object* v_args_171_, lean_object* v_i_172_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_174_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___closed__0));
v___x_175_ = lean_unsigned_to_nat(1u);
v___x_176_ = lean_nat_add(v_i_172_, v___x_175_);
v___x_177_ = l_Nat_reprFast(v___x_176_);
v___x_178_ = lean_string_append(v___x_174_, v___x_177_);
lean_dec_ref(v___x_177_);
v___x_179_ = lean_array_get_size(v_args_171_);
v___x_180_ = lean_nat_dec_lt(v_i_172_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_box(0);
v___x_182_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_178_, v___x_181_);
lean_dec_ref(v___x_178_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_array_fget_borrowed(v_args_171_, v_i_172_);
lean_inc(v___x_183_);
v___x_184_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_178_, v___x_183_);
lean_dec_ref(v___x_178_);
return v___x_184_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0___boxed(lean_object* v_args_185_, lean_object* v_i_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_185_, v_i_186_);
lean_dec(v_i_186_);
lean_dec_ref(v_args_185_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2(lean_object* v___f_189_, lean_object* v_args_190_){
_start:
{
lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v_val_195_; lean_object* v___x_198_; 
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = 0;
v___x_198_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_190_, v___x_192_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 1);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v_val_195_ = v___x_204_;
goto v___jp_194_;
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
v_a_207_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_198_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_198_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 0);
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
v_val_195_ = v___x_212_;
goto v___jp_194_;
}
}
}
v___jp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v_val_195_);
v___x_197_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_192_, v___x_193_, v___x_196_, v___f_189_);
return v___x_197_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed(lean_object* v___f_215_, lean_object* v_args_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lasm_JS_Web_EventListener_ofFn___lam__2(v___f_215_, v_args_216_);
lean_dec_ref(v_args_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn(lean_object* v_f_220_){
_start:
{
lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___x_225_; 
v___f_222_ = ((lean_object*)(l_Lasm_JS_Web_EventListener_ofFn___closed__0));
v___f_223_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_223_, 0, v_f_220_);
lean_closure_set(v___f_223_, 1, v___f_222_);
v___f_224_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_224_, 0, v___f_223_);
v___x_225_ = l_Lasm_JS_Function_ofFn(v___f_224_);
if (lean_obj_tag(v___x_225_) == 0)
{
lean_object* v_a_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_233_; 
v_a_226_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_233_ == 0)
{
v___x_228_ = v___x_225_;
v_isShared_229_ = v_isSharedCheck_233_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_a_226_);
lean_dec(v___x_225_);
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
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
v_a_234_ = lean_ctor_get(v___x_225_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_225_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_225_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_225_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofFn___boxed(lean_object* v_f_242_, lean_object* v_a_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lasm_JS_Web_EventListener_ofFn(v_f_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(lean_object* v_f_245_, lean_object* v_args_246_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(0u);
v___x_249_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_246_, v___x_248_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; lean_object* v___x_251_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v___x_251_ = lean_apply_2(v_f_245_, v_a_250_, lean_box(0));
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_259_; 
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; 
v_unused_260_ = lean_ctor_get(v___x_251_, 0);
lean_dec(v_unused_260_);
v___x_253_ = v___x_251_;
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
else
{
lean_dec(v___x_251_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_259_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = lean_box(0);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_255_);
v___x_257_ = v___x_253_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_a_261_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_251_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_251_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec_ref(v_f_245_);
v_a_269_ = lean_ctor_get(v___x_249_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_249_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_249_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed(lean_object* v_f_277_, lean_object* v_args_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0(v_f_277_, v_args_278_);
lean_dec_ref(v_args_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn(lean_object* v_f_281_){
_start:
{
lean_object* v___f_283_; lean_object* v___x_284_; 
v___f_283_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_283_, 0, v_f_281_);
v___x_284_ = l_Lasm_JS_Function_ofSyncFn(v___f_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_292_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_292_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_292_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
lean_object* v___x_290_; 
if (v_isShared_288_ == 0)
{
v___x_290_ = v___x_287_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_285_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
v_a_293_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_284_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_284_);
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
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListener_ofSyncFn___boxed(lean_object* v_f_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lasm_JS_Web_EventListener_ofSyncFn(v_f_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0(lean_object* v___f_308_, lean_object* v___f_309_, lean_object* v_d_310_){
_start:
{
lean_object* v_capture_311_; lean_object* v_passive_312_; lean_object* v_once_313_; lean_object* v_signal_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_capture_311_ = lean_ctor_get(v_d_310_, 0);
lean_inc(v_capture_311_);
v_passive_312_ = lean_ctor_get(v_d_310_, 1);
lean_inc(v_passive_312_);
v_once_313_ = lean_ctor_get(v_d_310_, 2);
lean_inc(v_once_313_);
v_signal_314_ = lean_ctor_get(v_d_310_, 3);
lean_inc(v_signal_314_);
lean_dec_ref(v_d_310_);
v___x_315_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_308_, 2);
v___x_316_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_308_, v_capture_311_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_315_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_319_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_308_, v_passive_312_);
v___x_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_318_);
lean_ctor_set(v___x_320_, 1, v___x_319_);
v___x_321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_322_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_308_, v_once_313_);
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_325_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_309_, v_signal_314_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_unsigned_to_nat(4u);
v___x_328_ = lean_mk_empty_array_with_capacity(v___x_327_);
v___x_329_ = lean_array_push(v___x_328_, v___x_317_);
v___x_330_ = lean_array_push(v___x_329_, v___x_320_);
v___x_331_ = lean_array_push(v___x_330_, v___x_323_);
v___x_332_ = lean_array_push(v___x_331_, v___x_326_);
v___x_333_ = l_Lasm_JS_Web_Support_fields(v___x_332_);
lean_dec_ref(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_339_) == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_unsigned_to_nat(0u);
return v___x_340_;
}
else
{
lean_object* v___x_341_; 
v___x_341_ = lean_unsigned_to_nat(1u);
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorIdx(v_x_342_);
lean_dec_ref(v_x_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_344_, lean_object* v_k_345_){
_start:
{
if (lean_obj_tag(v_t_344_) == 0)
{
lean_object* v_value_346_; lean_object* v___x_347_; 
v_value_346_ = lean_ctor_get(v_t_344_, 0);
lean_inc_ref(v_value_346_);
lean_dec_ref_known(v_t_344_, 1);
v___x_347_ = lean_apply_1(v_k_345_, v_value_346_);
return v___x_347_;
}
else
{
uint8_t v_value_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_value_348_ = lean_ctor_get_uint8(v_t_344_, 0);
lean_dec_ref_known(v_t_344_, 0);
v___x_349_ = lean_box(v_value_348_);
v___x_350_ = lean_apply_1(v_k_345_, v___x_349_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_351_, lean_object* v_ctorIdx_352_, lean_object* v_t_353_, lean_object* v_h_354_, lean_object* v_k_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_353_, v_k_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_357_, lean_object* v_ctorIdx_358_, lean_object* v_t_359_, lean_object* v_h_360_, lean_object* v_k_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim(v_motive_357_, v_ctorIdx_358_, v_t_359_, v_h_360_, v_k_361_);
lean_dec(v_ctorIdx_358_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim___redArg(lean_object* v_t_363_, lean_object* v_addEventListenerOptions_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_363_, v_addEventListenerOptions_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_addEventListenerOptions_elim(lean_object* v_motive_366_, lean_object* v_t_367_, lean_object* v_h_368_, lean_object* v_addEventListenerOptions_369_){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_367_, v_addEventListenerOptions_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_371_, lean_object* v_boolean_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_371_, v_boolean_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_374_, lean_object* v_t_375_, lean_object* v_h_376_, lean_object* v_boolean_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lasm_JS_Web_AddEventListenerOptionsOrBoolean_ctorElim___redArg(v_t_375_, v_boolean_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSAddEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 0)
{
lean_object* v_value_380_; lean_object* v_capture_381_; lean_object* v_passive_382_; lean_object* v_once_383_; lean_object* v_signal_384_; lean_object* v___f_385_; lean_object* v___f_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v_value_380_ = lean_ctor_get(v_x_379_, 0);
lean_inc_ref(v_value_380_);
lean_dec_ref_known(v_x_379_, 1);
v_capture_381_ = lean_ctor_get(v_value_380_, 0);
lean_inc(v_capture_381_);
v_passive_382_ = lean_ctor_get(v_value_380_, 1);
lean_inc(v_passive_382_);
v_once_383_ = lean_ctor_get(v_value_380_, 2);
lean_inc(v_once_383_);
v_signal_384_ = lean_ctor_get(v_value_380_, 3);
lean_inc(v_signal_384_);
lean_dec_ref(v_value_380_);
v___f_385_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0));
v___f_386_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___closed__0));
v___x_387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_388_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_385_, v_capture_381_);
v___x_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_391_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_385_, v_passive_382_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___x_391_);
v___x_393_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_394_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_385_, v_once_383_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_393_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_397_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_386_, v_signal_384_);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_396_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_unsigned_to_nat(4u);
v___x_400_ = lean_mk_empty_array_with_capacity(v___x_399_);
v___x_401_ = lean_array_push(v___x_400_, v___x_389_);
v___x_402_ = lean_array_push(v___x_401_, v___x_392_);
v___x_403_ = lean_array_push(v___x_402_, v___x_395_);
v___x_404_ = lean_array_push(v___x_403_, v___x_398_);
v___x_405_ = l_Lasm_JS_Web_Support_fields(v___x_404_);
lean_dec_ref(v___x_404_);
return v___x_405_;
}
else
{
uint8_t v_value_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_413_; 
v_value_406_ = lean_ctor_get_uint8(v_x_379_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v_x_379_);
if (v_isSharedCheck_413_ == 0)
{
v___x_408_ = v_x_379_;
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
else
{
lean_dec(v_x_379_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 2);
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_412_, 0, v_value_406_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptions___lam__0(lean_object* v___f_416_, lean_object* v_d_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_418_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_419_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_416_, v_d_417_);
v___x_420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_mk_empty_array_with_capacity(v___x_421_);
v___x_423_ = lean_array_push(v___x_422_, v___x_420_);
v___x_424_ = l_Lasm_JS_Web_Support_fields(v___x_423_);
lean_dec_ref(v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(lean_object* v_x_428_){
_start:
{
if (lean_obj_tag(v_x_428_) == 0)
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(0u);
return v___x_429_;
}
else
{
lean_object* v___x_430_; 
v___x_430_ = lean_unsigned_to_nat(1u);
return v___x_430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx___boxed(lean_object* v_x_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorIdx(v_x_431_);
lean_dec_ref(v_x_431_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(lean_object* v_t_433_, lean_object* v_k_434_){
_start:
{
if (lean_obj_tag(v_t_433_) == 0)
{
lean_object* v_value_435_; lean_object* v___x_436_; 
v_value_435_ = lean_ctor_get(v_t_433_, 0);
lean_inc(v_value_435_);
lean_dec_ref_known(v_t_433_, 1);
v___x_436_ = lean_apply_1(v_k_434_, v_value_435_);
return v___x_436_;
}
else
{
uint8_t v_value_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_value_437_ = lean_ctor_get_uint8(v_t_433_, 0);
lean_dec_ref_known(v_t_433_, 0);
v___x_438_ = lean_box(v_value_437_);
v___x_439_ = lean_apply_1(v_k_434_, v___x_438_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(lean_object* v_motive_440_, lean_object* v_ctorIdx_441_, lean_object* v_t_442_, lean_object* v_h_443_, lean_object* v_k_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_442_, v_k_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___boxed(lean_object* v_motive_446_, lean_object* v_ctorIdx_447_, lean_object* v_t_448_, lean_object* v_h_449_, lean_object* v_k_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim(v_motive_446_, v_ctorIdx_447_, v_t_448_, v_h_449_, v_k_450_);
lean_dec(v_ctorIdx_447_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim___redArg(lean_object* v_t_452_, lean_object* v_eventListenerOptions_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_452_, v_eventListenerOptions_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_eventListenerOptions_elim(lean_object* v_motive_455_, lean_object* v_t_456_, lean_object* v_h_457_, lean_object* v_eventListenerOptions_458_){
_start:
{
lean_object* v___x_459_; 
v___x_459_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_456_, v_eventListenerOptions_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim___redArg(lean_object* v_t_460_, lean_object* v_boolean_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_460_, v_boolean_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventListenerOptionsOrBoolean_boolean_elim(lean_object* v_motive_463_, lean_object* v_t_464_, lean_object* v_h_465_, lean_object* v_boolean_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lasm_JS_Web_EventListenerOptionsOrBoolean_ctorElim___redArg(v_t_464_, v_boolean_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventListenerOptionsOrBoolean___lam__0(lean_object* v_x_468_){
_start:
{
if (lean_obj_tag(v_x_468_) == 0)
{
lean_object* v_value_469_; lean_object* v___f_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_value_469_ = lean_ctor_get(v_x_468_, 0);
lean_inc(v_value_469_);
lean_dec_ref_known(v_x_468_, 1);
v___f_470_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___closed__0));
v___x_471_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_472_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_470_, v_value_469_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = lean_unsigned_to_nat(1u);
v___x_475_ = lean_mk_empty_array_with_capacity(v___x_474_);
v___x_476_ = lean_array_push(v___x_475_, v___x_473_);
v___x_477_ = l_Lasm_JS_Web_Support_fields(v___x_476_);
lean_dec_ref(v___x_476_);
return v___x_477_;
}
else
{
uint8_t v_value_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
v_value_478_ = lean_ctor_get_uint8(v_x_468_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_468_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v_x_468_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_dec(v_x_468_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
lean_ctor_set_tag(v___x_480_, 2);
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_484_, 0, v_value_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSEventInit___lam__0(lean_object* v___f_491_, lean_object* v_d_492_){
_start:
{
lean_object* v_bubbles_493_; lean_object* v_cancelable_494_; lean_object* v_composed_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_bubbles_493_ = lean_ctor_get(v_d_492_, 0);
lean_inc(v_bubbles_493_);
v_cancelable_494_ = lean_ctor_get(v_d_492_, 1);
lean_inc(v_cancelable_494_);
v_composed_495_ = lean_ctor_get(v_d_492_, 2);
lean_inc(v_composed_495_);
lean_dec_ref(v_d_492_);
v___x_496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_491_, 2);
v___x_497_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_491_, v_bubbles_493_);
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_500_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_491_, v_cancelable_494_);
v___x_501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_503_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_491_, v_composed_495_);
v___x_504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = lean_unsigned_to_nat(3u);
v___x_506_ = lean_mk_empty_array_with_capacity(v___x_505_);
v___x_507_ = lean_array_push(v___x_506_, v___x_498_);
v___x_508_ = lean_array_push(v___x_507_, v___x_501_);
v___x_509_ = lean_array_push(v___x_508_, v___x_504_);
v___x_510_ = l_Lasm_JS_Web_Support_fields(v___x_509_);
lean_dec_ref(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSCustomEventInit___lam__0(lean_object* v___f_515_, lean_object* v_d_516_){
_start:
{
lean_object* v_bubbles_517_; lean_object* v_cancelable_518_; lean_object* v_composed_519_; lean_object* v_detail_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v_bubbles_517_ = lean_ctor_get(v_d_516_, 0);
lean_inc(v_bubbles_517_);
v_cancelable_518_ = lean_ctor_get(v_d_516_, 1);
lean_inc(v_cancelable_518_);
v_composed_519_ = lean_ctor_get(v_d_516_, 2);
lean_inc(v_composed_519_);
v_detail_520_ = lean_ctor_get(v_d_516_, 3);
lean_inc(v_detail_520_);
lean_dec_ref(v_d_516_);
v___x_521_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
lean_inc_ref_n(v___f_515_, 2);
v___x_522_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_515_, v_bubbles_517_);
v___x_523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_525_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_515_, v_cancelable_518_);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_528_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_515_, v_composed_519_);
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
v___x_531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
lean_ctor_set(v___x_531_, 1, v_detail_520_);
v___x_532_ = lean_unsigned_to_nat(4u);
v___x_533_ = lean_mk_empty_array_with_capacity(v___x_532_);
v___x_534_ = lean_array_push(v___x_533_, v___x_523_);
v___x_535_ = lean_array_push(v___x_534_, v___x_526_);
v___x_536_ = lean_array_push(v___x_535_, v___x_529_);
v___x_537_ = lean_array_push(v___x_536_, v___x_531_);
v___x_538_ = l_Lasm_JS_Web_Support_fields(v___x_537_);
lean_dec_ref(v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0(lean_object* v_x_549_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v_x_549_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0___boxed(lean_object* v_x_552_, lean_object* v___y_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__0(v_x_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1(lean_object* v_f_555_, lean_object* v___f_556_, lean_object* v_x_557_){
_start:
{
if (lean_obj_tag(v_x_557_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v___f_556_);
lean_dec_ref(v_f_555_);
v_a_559_ = lean_ctor_get(v_x_557_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v_x_557_);
if (v_isSharedCheck_567_ == 0)
{
v___x_561_ = v_x_557_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v_x_557_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_559_);
v___x_564_ = v_reuseFailAlloc_566_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
lean_object* v___x_565_; 
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
}
}
else
{
lean_object* v_a_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_a_568_ = lean_ctor_get(v_x_557_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v_x_557_, 1);
v___x_569_ = lean_unsigned_to_nat(0u);
v___x_570_ = 0;
v___x_571_ = lean_apply_2(v_f_555_, v_a_568_, lean_box(0));
v___x_572_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_569_, v___x_570_, v___x_571_, v___f_556_);
return v___x_572_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1___boxed(lean_object* v_f_573_, lean_object* v___f_574_, lean_object* v_x_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1(v_f_573_, v___f_574_, v_x_575_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn(lean_object* v_f_579_){
_start:
{
lean_object* v___f_581_; lean_object* v___f_582_; lean_object* v___f_583_; lean_object* v___x_584_; 
v___f_581_ = ((lean_object*)(l_Lasm_JS_Web_EventHandlerNonNull_ofFn___closed__0));
v___f_582_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventHandlerNonNull_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_582_, 0, v_f_579_);
lean_closure_set(v___f_582_, 1, v___f_581_);
v___f_583_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventListener_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_583_, 0, v___f_582_);
v___x_584_ = l_Lasm_JS_Function_ofFn(v___f_583_);
if (lean_obj_tag(v___x_584_) == 0)
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_a_585_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_584_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_584_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_600_; 
v_a_593_ = lean_ctor_get(v___x_584_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_600_ == 0)
{
v___x_595_ = v___x_584_;
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_584_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_600_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_598_; 
if (v_isShared_596_ == 0)
{
v___x_598_ = v___x_595_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_593_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofFn___boxed(lean_object* v_f_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lasm_JS_Web_EventHandlerNonNull_ofFn(v_f_601_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0(lean_object* v_f_604_, lean_object* v_args_605_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_unsigned_to_nat(0u);
v___x_608_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0(v_args_605_, v___x_607_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_610_; 
v_a_609_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_609_);
lean_dec_ref_known(v___x_608_, 1);
v___x_610_ = lean_apply_2(v_f_604_, v_a_609_, lean_box(0));
return v___x_610_;
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
lean_dec_ref(v_f_604_);
v_a_611_ = lean_ctor_get(v___x_608_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_608_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_608_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0___boxed(lean_object* v_f_619_, lean_object* v_args_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0(v_f_619_, v_args_620_);
lean_dec_ref(v_args_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn(lean_object* v_f_623_){
_start:
{
lean_object* v___f_625_; lean_object* v___x_626_; 
v___f_625_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_625_, 0, v_f_623_);
v___x_626_ = l_Lasm_JS_Function_ofSyncFn(v___f_625_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_626_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_626_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn___boxed(lean_object* v_f_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lasm_JS_Web_EventHandlerNonNull_ofSyncFn(v_f_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(lean_object* v_context_646_, lean_object* v_d_647_){
_start:
{
lean_object* v___y_650_; lean_object* v___y_651_; 
if (lean_obj_tag(v_d_647_) == 9)
{
lean_object* v_value_655_; lean_object* v___x_656_; 
v_value_655_ = lean_ctor_get(v_d_647_, 0);
lean_inc(v_value_655_);
lean_dec_ref_known(v_d_647_, 2);
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v_value_655_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; lean_object* v_received_659_; 
v___x_657_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_647_) == 9)
{
lean_object* v_value_673_; lean_object* v_description_674_; uint8_t v___x_675_; 
v_value_673_ = lean_ctor_get(v_d_647_, 0);
v_description_674_ = lean_ctor_get(v_d_647_, 1);
v___x_675_ = lean_string_dec_eq(v_description_674_, v___x_657_);
if (v___x_675_ == 0)
{
goto v___jp_671_;
}
else
{
uint32_t v___x_676_; uint64_t v___x_677_; lean_object* v___x_678_; uint32_t v___x_679_; lean_object* v___x_680_; 
lean_inc_n(v_value_673_, 2);
lean_dec_ref_known(v_d_647_, 2);
v___x_676_ = 206;
v___x_677_ = 0ULL;
v___x_678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_678_, 0, v_value_673_);
lean_ctor_set(v___x_678_, 1, v___x_657_);
v___x_679_ = lasm_js_value_handle(v_value_673_);
lean_dec(v_value_673_);
v___x_680_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_676_, v___x_677_, v___x_678_, v___x_679_);
lean_dec_ref_known(v___x_678_, 2);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; uint8_t v___x_682_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v___x_682_ = lean_string_validate_utf8(v_a_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; 
lean_dec(v_a_681_);
v___x_683_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_684_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_683_);
v_received_659_ = v___x_684_;
goto v___jp_658_;
}
else
{
lean_object* v___x_685_; 
v___x_685_ = lean_string_from_utf8_unchecked(v_a_681_);
v_received_659_ = v___x_685_;
goto v___jp_658_;
}
}
else
{
lean_object* v___x_686_; 
lean_dec_ref_known(v___x_680_, 1);
v___x_686_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_659_ = v___x_686_;
goto v___jp_658_;
}
}
}
else
{
goto v___jp_671_;
}
v___jp_658_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_661_ = lean_string_append(v___x_660_, v_context_646_);
v___x_662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_663_ = lean_string_append(v___x_661_, v___x_662_);
v___x_664_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSEventTarget___closed__1));
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
v___x_666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
v___x_668_ = lean_string_append(v___x_667_, v_received_659_);
lean_dec_ref(v_received_659_);
v___x_669_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_650_ = v___x_668_;
v___y_651_ = v___x_670_;
goto v___jp_649_;
}
else
{
v___y_650_ = v___x_668_;
v___y_651_ = v___x_657_;
goto v___jp_649_;
}
}
v___jp_671_:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lasm_JS_Data_describe(v_d_647_);
v_received_659_ = v___x_672_;
goto v___jp_658_;
}
}
v___jp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_string_append(v___y_650_, v___y_651_);
v___x_653_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0___boxed(lean_object* v_context_687_, lean_object* v_d_688_, lean_object* v_a_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(v_context_687_, v_d_688_);
lean_dec_ref(v_context_687_);
return v_res_690_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1(void){
_start:
{
uint8_t v___x_692_; uint64_t v___x_693_; 
v___x_692_ = 0;
v___x_693_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(lean_object* v_b_694_, lean_object* v_args_695_, uint8_t v_await_696_){
_start:
{
uint64_t v___y_699_; uint64_t v___y_700_; uint64_t v___x_743_; uint64_t v___y_745_; 
v___x_743_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_696_ == 0)
{
uint64_t v___x_750_; 
v___x_750_ = 0ULL;
v___y_745_ = v___x_750_;
goto v___jp_744_;
}
else
{
uint64_t v___x_751_; 
v___x_751_ = 2ULL;
v___y_745_ = v___x_751_;
goto v___jp_744_;
}
v___jp_698_:
{
uint64_t v_flags_701_; uint32_t v___x_702_; lean_object* v___x_703_; uint32_t v___x_704_; lean_object* v___x_705_; 
v_flags_701_ = lean_uint64_lor(v___y_699_, v___y_700_);
v___x_702_ = 214;
v___x_703_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_694_, v_args_695_);
v___x_704_ = 0;
v___x_705_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_702_, v_flags_701_, v___x_703_, v___x_704_);
lean_dec(v___x_703_);
if (lean_obj_tag(v___x_705_) == 0)
{
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_707_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
v___x_707_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_706_);
lean_dec(v_a_706_);
if (lean_obj_tag(v___x_707_) == 0)
{
lean_object* v_a_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_a_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_707_, 1);
v___x_709_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_694_);
v___x_710_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0_spec__0(v___x_709_, v_a_708_);
lean_dec_ref(v___x_709_);
return v___x_710_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
v_a_711_ = lean_ctor_get(v___x_707_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_707_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_707_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
v_a_719_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_705_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_705_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 1);
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_742_; 
v_a_727_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_742_ == 0)
{
v___x_729_ = v___x_705_;
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_705_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_731_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_732_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_694_);
v___x_733_ = lean_string_append(v___x_731_, v___x_732_);
lean_dec_ref(v___x_732_);
v___x_734_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_735_ = lean_string_append(v___x_733_, v___x_734_);
v___x_736_ = lean_io_error_to_string(v_a_727_);
v___x_737_ = lean_string_append(v___x_735_, v___x_736_);
lean_dec_ref(v___x_736_);
v___x_738_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_738_);
v___x_740_ = v___x_729_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
v___jp_744_:
{
uint8_t v_construct_746_; uint64_t v___x_747_; 
v_construct_746_ = lean_ctor_get_uint8(v_b_694_, sizeof(void*)*4);
v___x_747_ = lean_uint64_lor(v___x_743_, v___y_745_);
if (v_construct_746_ == 0)
{
uint64_t v___x_748_; 
v___x_748_ = 0ULL;
v___y_699_ = v___x_747_;
v___y_700_ = v___x_748_;
goto v___jp_698_;
}
else
{
uint64_t v___x_749_; 
v___x_749_ = 4ULL;
v___y_699_ = v___x_747_;
v___y_700_ = v___x_749_;
goto v___jp_698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___boxed(lean_object* v_b_752_, lean_object* v_args_753_, lean_object* v_await_754_, lean_object* v_a_755_){
_start:
{
uint8_t v_await_boxed_756_; lean_object* v_res_757_; 
v_await_boxed_756_ = lean_unbox(v_await_754_);
v_res_757_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(v_b_752_, v_args_753_, v_await_boxed_756_);
lean_dec_ref(v_b_752_);
return v_res_757_;
}
}
static lean_object* _init_l_Lasm_JS_Web_EventTarget_new___closed__5(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_new___closed__4));
v___x_770_ = l_Lasm_JS_Web_Support_args(v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new(){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_new___closed__3));
v___x_773_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_774_ = 0;
v___x_775_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0(v___x_772_, v___x_773_, v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_new___boxed(lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lasm_JS_Web_EventTarget_new();
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object* v_x_778_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
lean_object* v___x_779_; 
v___x_779_ = lean_box(0);
return v___x_779_;
}
else
{
lean_object* v_val_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_val_780_ = lean_ctor_get(v_x_778_, 0);
v___x_781_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_780_);
v___x_782_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_782_, 0, v_val_780_);
lean_ctor_set(v___x_782_, 1, v___x_781_);
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1___boxed(lean_object* v_x_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_x_783_);
lean_dec(v_x_783_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_785_) == 0)
{
lean_object* v___x_786_; 
v___x_786_ = lean_box(0);
return v___x_786_;
}
else
{
lean_object* v_val_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v_val_787_ = lean_ctor_get(v_x_785_, 0);
v___x_788_ = lean_alloc_ctor(2, 0, 1);
v___x_789_ = lean_unbox(v_val_787_);
lean_ctor_set_uint8(v___x_788_, 0, v___x_789_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0___boxed(lean_object* v_x_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_x_790_);
lean_dec(v_x_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0(lean_object* v_x_792_){
_start:
{
if (lean_obj_tag(v_x_792_) == 0)
{
lean_object* v___x_793_; 
v___x_793_ = lean_box(0);
return v___x_793_;
}
else
{
lean_object* v_val_794_; 
v_val_794_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_val_794_);
lean_dec_ref_known(v_x_792_, 1);
if (lean_obj_tag(v_val_794_) == 0)
{
lean_object* v_value_795_; lean_object* v_capture_796_; lean_object* v_passive_797_; lean_object* v_once_798_; lean_object* v_signal_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_value_795_ = lean_ctor_get(v_val_794_, 0);
lean_inc_ref(v_value_795_);
lean_dec_ref_known(v_val_794_, 1);
v_capture_796_ = lean_ctor_get(v_value_795_, 0);
lean_inc(v_capture_796_);
v_passive_797_ = lean_ctor_get(v_value_795_, 1);
lean_inc(v_passive_797_);
v_once_798_ = lean_ctor_get(v_value_795_, 2);
lean_inc(v_once_798_);
v_signal_799_ = lean_ctor_get(v_value_795_, 3);
lean_inc(v_signal_799_);
lean_dec_ref(v_value_795_);
v___x_800_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_801_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_capture_796_);
lean_dec(v_capture_796_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_800_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__1));
v___x_804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_passive_797_);
lean_dec(v_passive_797_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__2));
v___x_807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_once_798_);
lean_dec(v_once_798_);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_810_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_799_);
lean_dec(v_signal_799_);
v___x_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = lean_unsigned_to_nat(4u);
v___x_813_ = lean_mk_empty_array_with_capacity(v___x_812_);
v___x_814_ = lean_array_push(v___x_813_, v___x_802_);
v___x_815_ = lean_array_push(v___x_814_, v___x_805_);
v___x_816_ = lean_array_push(v___x_815_, v___x_808_);
v___x_817_ = lean_array_push(v___x_816_, v___x_811_);
v___x_818_ = l_Lasm_JS_Web_Support_fields(v___x_817_);
lean_dec_ref(v___x_817_);
return v___x_818_;
}
else
{
uint8_t v_value_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_value_819_ = lean_ctor_get_uint8(v_val_794_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v_val_794_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v_val_794_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_dec(v_val_794_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 2);
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_825_, 0, v_value_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(uint8_t v_await_827_, uint64_t v_extra_828_){
_start:
{
uint64_t v___x_829_; uint64_t v___y_831_; 
v___x_829_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_827_ == 0)
{
uint64_t v___x_834_; 
v___x_834_ = 0ULL;
v___y_831_ = v___x_834_;
goto v___jp_830_;
}
else
{
uint64_t v___x_835_; 
v___x_835_ = 2ULL;
v___y_831_ = v___x_835_;
goto v___jp_830_;
}
v___jp_830_:
{
uint64_t v___x_832_; uint64_t v___x_833_; 
v___x_832_ = lean_uint64_lor(v___x_829_, v___y_831_);
v___x_833_ = lean_uint64_lor(v___x_832_, v_extra_828_);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3___boxed(lean_object* v_await_836_, lean_object* v_extra_837_){
_start:
{
uint8_t v_await_boxed_838_; uint64_t v_extra_boxed_839_; uint64_t v_res_840_; lean_object* v_r_841_; 
v_await_boxed_838_ = lean_unbox(v_await_836_);
v_extra_boxed_839_ = lean_unbox_uint64(v_extra_837_);
lean_dec_ref(v_extra_837_);
v_res_840_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v_await_boxed_838_, v_extra_boxed_839_);
v_r_841_ = lean_box_uint64(v_res_840_);
return v_r_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg(){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = lean_box(0);
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg___boxed(lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(lean_object* v_context_847_, lean_object* v_bytes_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_848_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v___x_851_; 
lean_dec_ref_known(v___x_850_, 1);
v___x_851_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_851_;
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
v_a_852_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_850_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_850_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4___boxed(lean_object* v_context_860_, lean_object* v_bytes_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(v_context_860_, v_bytes_861_);
lean_dec_ref(v_bytes_861_);
lean_dec_ref(v_context_860_);
return v_res_863_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0(void){
_start:
{
uint64_t v___x_864_; uint8_t v___x_865_; uint64_t v___x_866_; 
v___x_864_ = 8ULL;
v___x_865_ = 0;
v___x_866_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_865_, v___x_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object* v_o_868_, lean_object* v_name_869_, lean_object* v_args_870_){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint64_t v___x_875_; lean_object* v___x_876_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_873_, 0, v_o_868_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
lean_inc_ref(v_name_869_);
v___x_874_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_874_, 0, v_name_869_);
v___x_875_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__0);
v___x_876_ = l_Lasm_JS_Value_invokeRaw(v___x_873_, v___x_874_, v_args_870_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_879_ = lean_string_append(v___x_878_, v_name_869_);
lean_dec_ref(v_name_869_);
v___x_880_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4(v___x_879_, v_a_877_);
lean_dec(v_a_877_);
lean_dec_ref(v___x_879_);
return v___x_880_;
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_dec_ref(v_name_869_);
v_a_881_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_876_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_876_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___boxed(lean_object* v_o_889_, lean_object* v_name_890_, lean_object* v_args_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_o_889_, v_name_890_, v_args_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener(lean_object* v_self_895_, lean_object* v_type_896_, lean_object* v_callback_897_, lean_object* v_options_898_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___y_903_; 
v___x_900_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_addEventListener___closed__0));
v___x_901_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_901_, 0, v_type_896_);
if (lean_obj_tag(v_callback_897_) == 0)
{
lean_object* v___x_912_; 
v___x_912_ = lean_box(1);
v___y_903_ = v___x_912_;
goto v___jp_902_;
}
else
{
lean_object* v_val_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v_val_913_ = lean_ctor_get(v_callback_897_, 0);
v___x_914_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_913_);
v___x_915_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_915_, 0, v_val_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___y_903_ = v___x_915_;
goto v___jp_902_;
}
v___jp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_904_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0(v_options_898_);
v___x_905_ = lean_unsigned_to_nat(3u);
v___x_906_ = lean_mk_empty_array_with_capacity(v___x_905_);
v___x_907_ = lean_array_push(v___x_906_, v___x_901_);
v___x_908_ = lean_array_push(v___x_907_, v___y_903_);
v___x_909_ = lean_array_push(v___x_908_, v___x_904_);
v___x_910_ = l_Lasm_JS_Web_Support_args(v___x_909_);
v___x_911_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_895_, v___x_900_, v___x_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_addEventListener___boxed(lean_object* v_self_916_, lean_object* v_type_917_, lean_object* v_callback_918_, lean_object* v_options_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l_Lasm_JS_Web_EventTarget_addEventListener(v_self_916_, v_type_917_, v_callback_918_, v_options_919_);
lean_dec(v_callback_918_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5(lean_object* v_context_922_, lean_object* v_d_923_){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___boxed(lean_object* v_context_926_, lean_object* v_d_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5(v_context_926_, v_d_927_);
lean_dec(v_d_927_);
lean_dec_ref(v_context_926_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_removeEventListener_spec__0(lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_object* v___x_931_; 
v___x_931_ = lean_box(0);
return v___x_931_;
}
else
{
lean_object* v_val_932_; 
v_val_932_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_val_932_);
lean_dec_ref_known(v_x_930_, 1);
if (lean_obj_tag(v_val_932_) == 0)
{
lean_object* v_value_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v_value_933_ = lean_ctor_get(v_val_932_, 0);
lean_inc(v_value_933_);
lean_dec_ref_known(v_val_932_, 1);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__0));
v___x_935_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_value_933_);
lean_dec(v_value_933_);
v___x_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_934_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = lean_mk_empty_array_with_capacity(v___x_937_);
v___x_939_ = lean_array_push(v___x_938_, v___x_936_);
v___x_940_ = l_Lasm_JS_Web_Support_fields(v___x_939_);
lean_dec_ref(v___x_939_);
return v___x_940_;
}
else
{
uint8_t v_value_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_value_941_ = lean_ctor_get_uint8(v_val_932_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_val_932_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v_val_932_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_dec(v_val_932_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 2);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_947_, 0, v_value_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener(lean_object* v_self_950_, lean_object* v_type_951_, lean_object* v_callback_952_, lean_object* v_options_953_){
_start:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___y_958_; 
v___x_955_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_removeEventListener___closed__0));
v___x_956_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_956_, 0, v_type_951_);
if (lean_obj_tag(v_callback_952_) == 0)
{
lean_object* v___x_967_; 
v___x_967_ = lean_box(1);
v___y_958_ = v___x_967_;
goto v___jp_957_;
}
else
{
lean_object* v_val_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_val_968_ = lean_ctor_get(v_callback_952_, 0);
v___x_969_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_968_);
v___x_970_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_970_, 0, v_val_968_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___y_958_ = v___x_970_;
goto v___jp_957_;
}
v___jp_957_:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_959_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_removeEventListener_spec__0(v_options_953_);
v___x_960_ = lean_unsigned_to_nat(3u);
v___x_961_ = lean_mk_empty_array_with_capacity(v___x_960_);
v___x_962_ = lean_array_push(v___x_961_, v___x_956_);
v___x_963_ = lean_array_push(v___x_962_, v___y_958_);
v___x_964_ = lean_array_push(v___x_963_, v___x_959_);
v___x_965_ = l_Lasm_JS_Web_Support_args(v___x_964_);
v___x_966_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_950_, v___x_955_, v___x_965_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_removeEventListener___boxed(lean_object* v_self_971_, lean_object* v_type_972_, lean_object* v_callback_973_, lean_object* v_options_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_JS_Web_EventTarget_removeEventListener(v_self_971_, v_type_972_, v_callback_973_, v_options_974_);
lean_dec(v_callback_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(lean_object* v_context_978_, lean_object* v_d_979_){
_start:
{
lean_object* v___y_982_; lean_object* v___y_983_; 
if (lean_obj_tag(v_d_979_) == 2)
{
uint8_t v_b_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_b_987_ = lean_ctor_get_uint8(v_d_979_, 0);
lean_dec_ref_known(v_d_979_, 0);
v___x_988_ = lean_box(v_b_987_);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
else
{
lean_object* v___x_990_; lean_object* v_received_992_; 
v___x_990_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_979_) == 9)
{
lean_object* v_value_1006_; lean_object* v_description_1007_; uint8_t v___x_1008_; 
v_value_1006_ = lean_ctor_get(v_d_979_, 0);
v_description_1007_ = lean_ctor_get(v_d_979_, 1);
v___x_1008_ = lean_string_dec_eq(v_description_1007_, v___x_990_);
if (v___x_1008_ == 0)
{
goto v___jp_1004_;
}
else
{
uint32_t v___x_1009_; uint64_t v___x_1010_; lean_object* v___x_1011_; uint32_t v___x_1012_; lean_object* v___x_1013_; 
lean_inc_n(v_value_1006_, 2);
lean_dec_ref_known(v_d_979_, 2);
v___x_1009_ = 206;
v___x_1010_ = 0ULL;
v___x_1011_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1011_, 0, v_value_1006_);
lean_ctor_set(v___x_1011_, 1, v___x_990_);
v___x_1012_ = lasm_js_value_handle(v_value_1006_);
lean_dec(v_value_1006_);
v___x_1013_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1009_, v___x_1010_, v___x_1011_, v___x_1012_);
lean_dec_ref_known(v___x_1011_, 2);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v_a_1014_; uint8_t v___x_1015_; 
v_a_1014_ = lean_ctor_get(v___x_1013_, 0);
lean_inc(v_a_1014_);
lean_dec_ref_known(v___x_1013_, 1);
v___x_1015_ = lean_string_validate_utf8(v_a_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec(v_a_1014_);
v___x_1016_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1017_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1016_);
v_received_992_ = v___x_1017_;
goto v___jp_991_;
}
else
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_string_from_utf8_unchecked(v_a_1014_);
v_received_992_ = v___x_1018_;
goto v___jp_991_;
}
}
else
{
lean_object* v___x_1019_; 
lean_dec_ref_known(v___x_1013_, 1);
v___x_1019_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_992_ = v___x_1019_;
goto v___jp_991_;
}
}
}
else
{
goto v___jp_1004_;
}
v___jp_991_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_993_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_994_ = lean_string_append(v___x_993_, v_context_978_);
v___x_995_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_996_ = lean_string_append(v___x_994_, v___x_995_);
v___x_997_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___closed__0));
v___x_998_ = lean_string_append(v___x_996_, v___x_997_);
v___x_999_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1000_ = lean_string_append(v___x_998_, v___x_999_);
v___x_1001_ = lean_string_append(v___x_1000_, v_received_992_);
lean_dec_ref(v_received_992_);
v___x_1002_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; 
v___x_1003_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_982_ = v___x_1001_;
v___y_983_ = v___x_1003_;
goto v___jp_981_;
}
else
{
v___y_982_ = v___x_1001_;
v___y_983_ = v___x_990_;
goto v___jp_981_;
}
}
v___jp_1004_:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lasm_JS_Data_describe(v_d_979_);
v_received_992_ = v___x_1005_;
goto v___jp_991_;
}
}
v___jp_981_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_984_ = lean_string_append(v___y_982_, v___y_983_);
v___x_985_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
v___x_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1020_, lean_object* v_d_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_1020_, v_d_1021_);
lean_dec_ref(v_context_1020_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(lean_object* v_context_1024_, lean_object* v_bytes_1025_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1025_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v___x_1029_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v___x_1029_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1_spec__2(v_context_1024_, v_a_1028_);
return v___x_1029_;
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
v_a_1030_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1027_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1027_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1___boxed(lean_object* v_context_1038_, lean_object* v_bytes_1039_, lean_object* v_a_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v_context_1038_, v_bytes_1039_);
lean_dec_ref(v_bytes_1039_);
lean_dec_ref(v_context_1038_);
return v_res_1041_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(uint8_t v_await_1042_, uint64_t v_extra_1043_){
_start:
{
uint64_t v___x_1044_; uint64_t v___y_1046_; 
v___x_1044_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1042_ == 0)
{
uint64_t v___x_1049_; 
v___x_1049_ = 0ULL;
v___y_1046_ = v___x_1049_;
goto v___jp_1045_;
}
else
{
uint64_t v___x_1050_; 
v___x_1050_ = 2ULL;
v___y_1046_ = v___x_1050_;
goto v___jp_1045_;
}
v___jp_1045_:
{
uint64_t v___x_1047_; uint64_t v___x_1048_; 
v___x_1047_ = lean_uint64_lor(v___x_1044_, v___y_1046_);
v___x_1048_ = lean_uint64_lor(v___x_1047_, v_extra_1043_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0___boxed(lean_object* v_await_1051_, lean_object* v_extra_1052_){
_start:
{
uint8_t v_await_boxed_1053_; uint64_t v_extra_boxed_1054_; uint64_t v_res_1055_; lean_object* v_r_1056_; 
v_await_boxed_1053_ = lean_unbox(v_await_1051_);
v_extra_boxed_1054_ = lean_unbox_uint64(v_extra_1052_);
lean_dec_ref(v_extra_1052_);
v_res_1055_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v_await_boxed_1053_, v_extra_boxed_1054_);
v_r_1056_ = lean_box_uint64(v_res_1055_);
return v_r_1056_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1057_; uint8_t v___x_1058_; uint64_t v___x_1059_; 
v___x_1057_ = 8ULL;
v___x_1058_ = 0;
v___x_1059_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__0(v___x_1058_, v___x_1057_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object* v_o_1060_, lean_object* v_name_1061_, lean_object* v_args_1062_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; uint64_t v___x_1067_; lean_object* v___x_1068_; 
v___x_1064_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1065_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1065_, 0, v_o_1060_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
lean_inc_ref(v_name_1061_);
v___x_1066_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1066_, 0, v_name_1061_);
v___x_1067_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___closed__0);
v___x_1068_ = l_Lasm_JS_Value_invokeRaw(v___x_1065_, v___x_1066_, v_args_1062_, v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_1071_ = lean_string_append(v___x_1070_, v_name_1061_);
lean_dec_ref(v_name_1061_);
v___x_1072_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v___x_1071_, v_a_1069_);
lean_dec(v_a_1069_);
lean_dec_ref(v___x_1071_);
return v___x_1072_;
}
else
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1080_; 
lean_dec_ref(v_name_1061_);
v_a_1073_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1075_ = v___x_1068_;
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1068_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1080_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1078_; 
if (v_isShared_1076_ == 0)
{
v___x_1078_ = v___x_1075_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_a_1073_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0___boxed(lean_object* v_o_1081_, lean_object* v_name_1082_, lean_object* v_args_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_o_1081_, v_name_1082_, v_args_1083_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent(lean_object* v_self_1087_, lean_object* v_event_1088_){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1090_ = ((lean_object*)(l_Lasm_JS_Web_EventTarget_dispatchEvent___closed__0));
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1092_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_event_1088_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_unsigned_to_nat(1u);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1093_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1092_);
v___x_1096_ = l_Lasm_JS_Web_Support_args(v___x_1095_);
v___x_1097_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1087_, v___x_1090_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_EventTarget_dispatchEvent___boxed(lean_object* v_self_1098_, lean_object* v_event_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lasm_JS_Web_EventTarget_dispatchEvent(v_self_1098_, v_event_1099_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(lean_object* v_x_1102_){
_start:
{
if (lean_obj_tag(v_x_1102_) == 0)
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_box(0);
return v___x_1103_;
}
else
{
lean_object* v_val_1104_; lean_object* v_bubbles_1105_; lean_object* v_cancelable_1106_; lean_object* v_composed_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_val_1104_ = lean_ctor_get(v_x_1102_, 0);
v_bubbles_1105_ = lean_ctor_get(v_val_1104_, 0);
v_cancelable_1106_ = lean_ctor_get(v_val_1104_, 1);
v_composed_1107_ = lean_ctor_get(v_val_1104_, 2);
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_1109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_1105_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1108_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_1112_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_1106_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1111_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_1115_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_1107_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_unsigned_to_nat(3u);
v___x_1118_ = lean_mk_empty_array_with_capacity(v___x_1117_);
v___x_1119_ = lean_array_push(v___x_1118_, v___x_1110_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1113_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1116_);
v___x_1122_ = l_Lasm_JS_Web_Support_fields(v___x_1121_);
lean_dec_ref(v___x_1121_);
return v___x_1122_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0___boxed(lean_object* v_x_1123_){
_start:
{
lean_object* v_res_1124_; 
v_res_1124_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(v_x_1123_);
lean_dec(v_x_1123_);
return v_res_1124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(lean_object* v_b_1125_, lean_object* v_args_1126_, uint8_t v_await_1127_){
_start:
{
uint64_t v___y_1130_; uint64_t v___y_1131_; uint64_t v___x_1174_; uint64_t v___y_1176_; 
v___x_1174_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1127_ == 0)
{
uint64_t v___x_1181_; 
v___x_1181_ = 0ULL;
v___y_1176_ = v___x_1181_;
goto v___jp_1175_;
}
else
{
uint64_t v___x_1182_; 
v___x_1182_ = 2ULL;
v___y_1176_ = v___x_1182_;
goto v___jp_1175_;
}
v___jp_1129_:
{
uint64_t v_flags_1132_; uint32_t v___x_1133_; lean_object* v___x_1134_; uint32_t v___x_1135_; lean_object* v___x_1136_; 
v_flags_1132_ = lean_uint64_lor(v___y_1130_, v___y_1131_);
v___x_1133_ = 214;
v___x_1134_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1125_, v_args_1126_);
v___x_1135_ = 0;
v___x_1136_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1133_, v_flags_1132_, v___x_1134_, v___x_1135_);
lean_dec(v___x_1134_);
if (lean_obj_tag(v___x_1136_) == 0)
{
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1138_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1137_);
lean_dec_ref_known(v___x_1136_, 1);
v___x_1138_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1137_);
lean_dec(v_a_1137_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v_a_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref_known(v___x_1138_, 1);
v___x_1140_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1125_);
v___x_1141_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0(v___x_1140_, v_a_1139_);
lean_dec_ref(v___x_1140_);
return v___x_1141_;
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
v_a_1142_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1138_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1138_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v_a_1150_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1136_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1136_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
lean_ctor_set_tag(v___x_1152_, 1);
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1173_; 
v_a_1158_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1160_ = v___x_1136_;
v_isShared_1161_ = v_isSharedCheck_1173_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1136_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1173_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1162_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1163_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1125_);
v___x_1164_ = lean_string_append(v___x_1162_, v___x_1163_);
lean_dec_ref(v___x_1163_);
v___x_1165_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_1166_ = lean_string_append(v___x_1164_, v___x_1165_);
v___x_1167_ = lean_io_error_to_string(v_a_1158_);
v___x_1168_ = lean_string_append(v___x_1166_, v___x_1167_);
lean_dec_ref(v___x_1167_);
v___x_1169_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1169_);
v___x_1171_ = v___x_1160_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
v___jp_1175_:
{
uint8_t v_construct_1177_; uint64_t v___x_1178_; 
v_construct_1177_ = lean_ctor_get_uint8(v_b_1125_, sizeof(void*)*4);
v___x_1178_ = lean_uint64_lor(v___x_1174_, v___y_1176_);
if (v_construct_1177_ == 0)
{
uint64_t v___x_1179_; 
v___x_1179_ = 0ULL;
v___y_1130_ = v___x_1178_;
v___y_1131_ = v___x_1179_;
goto v___jp_1129_;
}
else
{
uint64_t v___x_1180_; 
v___x_1180_ = 4ULL;
v___y_1130_ = v___x_1178_;
v___y_1131_ = v___x_1180_;
goto v___jp_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1___boxed(lean_object* v_b_1183_, lean_object* v_args_1184_, lean_object* v_await_1185_, lean_object* v_a_1186_){
_start:
{
uint8_t v_await_boxed_1187_; lean_object* v_res_1188_; 
v_await_boxed_1187_ = lean_unbox(v_await_1185_);
v_res_1188_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(v_b_1183_, v_args_1184_, v_await_boxed_1187_);
lean_dec_ref(v_b_1183_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new(lean_object* v_type_1197_, lean_object* v_eventInitDict_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; 
v___x_1200_ = lean_unsigned_to_nat(2u);
v___x_1201_ = ((lean_object*)(l_Lasm_JS_Web_Event_new___closed__2));
v___x_1202_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_type_1197_);
v___x_1203_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Event_new_spec__0(v_eventInitDict_1198_);
v___x_1204_ = lean_mk_empty_array_with_capacity(v___x_1200_);
v___x_1205_ = lean_array_push(v___x_1204_, v___x_1202_);
v___x_1206_ = lean_array_push(v___x_1205_, v___x_1203_);
v___x_1207_ = l_Lasm_JS_Web_Support_args(v___x_1206_);
v___x_1208_ = 0;
v___x_1209_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Event_new_spec__1(v___x_1201_, v___x_1207_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_new___boxed(lean_object* v_type_1210_, lean_object* v_eventInitDict_1211_, lean_object* v_a_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lasm_JS_Web_Event_new(v_type_1210_, v_eventInitDict_1211_);
lean_dec(v_eventInitDict_1211_);
return v_res_1213_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_NONE(void){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_unsigned_to_nat(0u);
return v___x_1214_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_CAPTURING__PHASE(void){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = lean_unsigned_to_nat(1u);
return v___x_1215_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_AT__TARGET(void){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_unsigned_to_nat(2u);
return v___x_1216_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Event_BUBBLING__PHASE(void){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_unsigned_to_nat(3u);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(lean_object* v_context_1219_, lean_object* v_d_1220_){
_start:
{
lean_object* v___y_1223_; lean_object* v___y_1224_; 
if (lean_obj_tag(v_d_1220_) == 4)
{
lean_object* v_s_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
v_s_1228_ = lean_ctor_get(v_d_1220_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v_d_1220_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v_d_1220_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_s_1228_);
lean_dec(v_d_1220_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
lean_ctor_set_tag(v___x_1230_, 0);
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_s_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
else
{
lean_object* v___x_1236_; lean_object* v_received_1238_; 
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1220_) == 9)
{
lean_object* v_value_1252_; lean_object* v_description_1253_; uint8_t v___x_1254_; 
v_value_1252_ = lean_ctor_get(v_d_1220_, 0);
v_description_1253_ = lean_ctor_get(v_d_1220_, 1);
v___x_1254_ = lean_string_dec_eq(v_description_1253_, v___x_1236_);
if (v___x_1254_ == 0)
{
goto v___jp_1250_;
}
else
{
uint32_t v___x_1255_; uint64_t v___x_1256_; lean_object* v___x_1257_; uint32_t v___x_1258_; lean_object* v___x_1259_; 
lean_inc_n(v_value_1252_, 2);
lean_dec_ref_known(v_d_1220_, 2);
v___x_1255_ = 206;
v___x_1256_ = 0ULL;
v___x_1257_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1257_, 0, v_value_1252_);
lean_ctor_set(v___x_1257_, 1, v___x_1236_);
v___x_1258_ = lasm_js_value_handle(v_value_1252_);
lean_dec(v_value_1252_);
v___x_1259_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1255_, v___x_1256_, v___x_1257_, v___x_1258_);
lean_dec_ref_known(v___x_1257_, 2);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; uint8_t v___x_1261_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
v___x_1261_ = lean_string_validate_utf8(v_a_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v_a_1260_);
v___x_1262_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1263_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1262_);
v_received_1238_ = v___x_1263_;
goto v___jp_1237_;
}
else
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_string_from_utf8_unchecked(v_a_1260_);
v_received_1238_ = v___x_1264_;
goto v___jp_1237_;
}
}
else
{
lean_object* v___x_1265_; 
lean_dec_ref_known(v___x_1259_, 1);
v___x_1265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1238_ = v___x_1265_;
goto v___jp_1237_;
}
}
}
else
{
goto v___jp_1250_;
}
v___jp_1237_:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
v___x_1239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1240_ = lean_string_append(v___x_1239_, v_context_1219_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1242_ = lean_string_append(v___x_1240_, v___x_1241_);
v___x_1243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___closed__0));
v___x_1244_ = lean_string_append(v___x_1242_, v___x_1243_);
v___x_1245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1246_ = lean_string_append(v___x_1244_, v___x_1245_);
v___x_1247_ = lean_string_append(v___x_1246_, v_received_1238_);
lean_dec_ref(v_received_1238_);
v___x_1248_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; 
v___x_1249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1223_ = v___x_1247_;
v___y_1224_ = v___x_1249_;
goto v___jp_1222_;
}
else
{
v___y_1223_ = v___x_1247_;
v___y_1224_ = v___x_1236_;
goto v___jp_1222_;
}
}
v___jp_1250_:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lasm_JS_Data_describe(v_d_1220_);
v_received_1238_ = v___x_1251_;
goto v___jp_1237_;
}
}
v___jp_1222_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = lean_string_append(v___y_1223_, v___y_1224_);
v___x_1226_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
v___x_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1266_, lean_object* v_d_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_1266_, v_d_1267_);
lean_dec_ref(v_context_1266_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(lean_object* v_context_1270_, lean_object* v_bytes_1271_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1271_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0_spec__1(v_context_1270_, v_a_1274_);
return v___x_1275_;
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
v_a_1276_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1273_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1273_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0___boxed(lean_object* v_context_1284_, lean_object* v_bytes_1285_, lean_object* v_a_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v_context_1284_, v_bytes_1285_);
lean_dec_ref(v_bytes_1285_);
lean_dec_ref(v_context_1284_);
return v_res_1287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object* v_o_1289_, lean_object* v_key_1290_){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_inc_ref(v_key_1290_);
v___x_1292_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1292_, 0, v_key_1290_);
v___x_1293_ = l_Lasm_JS_Wire_encodeIO(v___x_1292_);
lean_dec_ref_known(v___x_1292_, 1);
if (lean_obj_tag(v___x_1293_) == 0)
{
lean_object* v_a_1294_; uint32_t v___x_1295_; uint32_t v___x_1296_; uint64_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
lean_dec_ref_known(v___x_1293_, 1);
v___x_1295_ = 203;
v___x_1296_ = lasm_js_value_handle(v_o_1289_);
v___x_1297_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1298_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1299_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1299_, 0, v_o_1289_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = lasm_js_call(v___x_1295_, v___x_1296_, v___x_1297_, v_a_1294_, v___x_1299_);
lean_dec_ref_known(v___x_1299_, 2);
lean_dec(v_a_1294_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1300_, 1);
v___x_1302_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1303_ = l_String_quote(v_key_1290_);
v___x_1304_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
v___x_1305_ = lean_unsigned_to_nat(120u);
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = l_Std_Format_pretty(v___x_1304_, v___x_1305_, v___x_1306_, v___x_1306_);
v___x_1308_ = lean_string_append(v___x_1302_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1309_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0_spec__0(v___x_1308_, v_a_1301_);
lean_dec(v_a_1301_);
lean_dec_ref(v___x_1308_);
return v___x_1309_;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_key_1290_);
v_a_1310_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1300_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1300_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v_key_1290_);
lean_dec(v_o_1289_);
v_a_1318_ = lean_ctor_get(v___x_1293_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1293_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1293_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___boxed(lean_object* v_o_1326_, lean_object* v_key_1327_, lean_object* v_a_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_o_1326_, v_key_1327_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type(lean_object* v_self_1331_){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = ((lean_object*)(l_Lasm_JS_Web_Event_type___closed__0));
v___x_1334_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1331_, v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_type___boxed(lean_object* v_self_1335_, lean_object* v_a_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lasm_JS_Web_Event_type(v_self_1335_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(lean_object* v_context_1339_, lean_object* v_d_1340_){
_start:
{
lean_object* v___y_1346_; lean_object* v___y_1347_; 
switch(lean_obj_tag(v_d_1340_))
{
case 1:
{
goto v___jp_1342_;
}
case 0:
{
goto v___jp_1342_;
}
default: 
{
if (lean_obj_tag(v_d_1340_) == 9)
{
lean_object* v_value_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_value_1351_ = lean_ctor_get(v_d_1340_, 0);
lean_inc(v_value_1351_);
lean_dec_ref_known(v_d_1340_, 2);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_value_1351_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
else
{
lean_object* v___x_1354_; lean_object* v_received_1356_; 
v___x_1354_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1340_) == 9)
{
lean_object* v_value_1370_; lean_object* v_description_1371_; uint8_t v___x_1372_; 
v_value_1370_ = lean_ctor_get(v_d_1340_, 0);
v_description_1371_ = lean_ctor_get(v_d_1340_, 1);
v___x_1372_ = lean_string_dec_eq(v_description_1371_, v___x_1354_);
if (v___x_1372_ == 0)
{
goto v___jp_1368_;
}
else
{
uint32_t v___x_1373_; uint64_t v___x_1374_; lean_object* v___x_1375_; uint32_t v___x_1376_; lean_object* v___x_1377_; 
lean_inc_n(v_value_1370_, 2);
lean_dec_ref_known(v_d_1340_, 2);
v___x_1373_ = 206;
v___x_1374_ = 0ULL;
v___x_1375_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_value_1370_);
lean_ctor_set(v___x_1375_, 1, v___x_1354_);
v___x_1376_ = lasm_js_value_handle(v_value_1370_);
lean_dec(v_value_1370_);
v___x_1377_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1373_, v___x_1374_, v___x_1375_, v___x_1376_);
lean_dec_ref_known(v___x_1375_, 2);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; uint8_t v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = lean_string_validate_utf8(v_a_1378_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_dec(v_a_1378_);
v___x_1380_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1381_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1380_);
v_received_1356_ = v___x_1381_;
goto v___jp_1355_;
}
else
{
lean_object* v___x_1382_; 
v___x_1382_ = lean_string_from_utf8_unchecked(v_a_1378_);
v_received_1356_ = v___x_1382_;
goto v___jp_1355_;
}
}
else
{
lean_object* v___x_1383_; 
lean_dec_ref_known(v___x_1377_, 1);
v___x_1383_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1356_ = v___x_1383_;
goto v___jp_1355_;
}
}
}
else
{
goto v___jp_1368_;
}
v___jp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1358_ = lean_string_append(v___x_1357_, v_context_1339_);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1360_ = lean_string_append(v___x_1358_, v___x_1359_);
v___x_1361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___closed__0));
v___x_1362_ = lean_string_append(v___x_1360_, v___x_1361_);
v___x_1363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1364_ = lean_string_append(v___x_1362_, v___x_1363_);
v___x_1365_ = lean_string_append(v___x_1364_, v_received_1356_);
lean_dec_ref(v_received_1356_);
v___x_1366_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1346_ = v___x_1365_;
v___y_1347_ = v___x_1367_;
goto v___jp_1345_;
}
else
{
v___y_1346_ = v___x_1365_;
v___y_1347_ = v___x_1354_;
goto v___jp_1345_;
}
}
v___jp_1368_:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lasm_JS_Data_describe(v_d_1340_);
v_received_1356_ = v___x_1369_;
goto v___jp_1355_;
}
}
}
}
v___jp_1342_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = lean_box(0);
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
v___jp_1345_:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_string_append(v___y_1346_, v___y_1347_);
v___x_1349_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
v___x_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
return v___x_1350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1384_, lean_object* v_d_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(v_context_1384_, v_d_1385_);
lean_dec_ref(v_context_1384_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(lean_object* v_context_1388_, lean_object* v_bytes_1389_){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1389_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1391_, 1);
v___x_1393_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0_spec__1(v_context_1388_, v_a_1392_);
return v___x_1393_;
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
v_a_1394_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1396_ = v___x_1391_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1391_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1394_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0___boxed(lean_object* v_context_1402_, lean_object* v_bytes_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(v_context_1402_, v_bytes_1403_);
lean_dec_ref(v_bytes_1403_);
lean_dec_ref(v_context_1402_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(lean_object* v_o_1406_, lean_object* v_key_1407_){
_start:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; 
lean_inc_ref(v_key_1407_);
v___x_1409_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1409_, 0, v_key_1407_);
v___x_1410_ = l_Lasm_JS_Wire_encodeIO(v___x_1409_);
lean_dec_ref_known(v___x_1409_, 1);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; uint32_t v___x_1412_; uint32_t v___x_1413_; uint64_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1410_, 1);
v___x_1412_ = 203;
v___x_1413_ = lasm_js_value_handle(v_o_1406_);
v___x_1414_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1415_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1416_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1416_, 0, v_o_1406_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lasm_js_call(v___x_1412_, v___x_1413_, v___x_1414_, v_a_1411_, v___x_1416_);
lean_dec_ref_known(v___x_1416_, 2);
lean_dec(v_a_1411_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1420_ = l_String_quote(v_key_1407_);
v___x_1421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
v___x_1422_ = lean_unsigned_to_nat(120u);
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = l_Std_Format_pretty(v___x_1421_, v___x_1422_, v___x_1423_, v___x_1423_);
v___x_1425_ = lean_string_append(v___x_1419_, v___x_1424_);
lean_dec_ref(v___x_1424_);
v___x_1426_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0_spec__0(v___x_1425_, v_a_1418_);
lean_dec(v_a_1418_);
lean_dec_ref(v___x_1425_);
return v___x_1426_;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec_ref(v_key_1407_);
v_a_1427_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1417_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1417_);
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
else
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1442_; 
lean_dec_ref(v_key_1407_);
lean_dec(v_o_1406_);
v_a_1435_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1437_ = v___x_1410_;
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1410_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1442_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1440_; 
if (v_isShared_1438_ == 0)
{
v___x_1440_ = v___x_1437_;
goto v_reusejp_1439_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_a_1435_);
v___x_1440_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1439_;
}
v_reusejp_1439_:
{
return v___x_1440_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0___boxed(lean_object* v_o_1443_, lean_object* v_key_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_o_1443_, v_key_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target(lean_object* v_self_1448_){
_start:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Web_Event_target___closed__0));
v___x_1451_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1448_, v___x_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_target___boxed(lean_object* v_self_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lasm_JS_Web_Event_target(v_self_1452_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement(lean_object* v_self_1456_){
_start:
{
lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1458_ = ((lean_object*)(l_Lasm_JS_Web_Event_srcElement___closed__0));
v___x_1459_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1456_, v___x_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_srcElement___boxed(lean_object* v_self_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lasm_JS_Web_Event_srcElement(v_self_1460_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget(lean_object* v_self_1464_){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = ((lean_object*)(l_Lasm_JS_Web_Event_currentTarget___closed__0));
v___x_1467_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_target_spec__0(v_self_1464_, v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_currentTarget___boxed(lean_object* v_self_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Lasm_JS_Web_Event_currentTarget(v_self_1468_);
return v_res_1470_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = lean_nat_to_int(v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1(lean_object* v_context_1478_, lean_object* v_d_1479_){
_start:
{
lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___y_1488_; lean_object* v_received_1489_; lean_object* v___y_1508_; lean_object* v_a_1511_; lean_object* v_a_1536_; 
switch(lean_obj_tag(v_d_1479_))
{
case 3:
{
double v_n_1542_; lean_object* v___x_1543_; 
v_n_1542_ = lean_ctor_get_float(v_d_1479_, 0);
v___x_1543_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1542_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v___x_1544_; 
v___x_1544_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__5));
v_a_1511_ = v___x_1544_;
goto v___jp_1510_;
}
else
{
lean_object* v_val_1545_; 
v_val_1545_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v___x_1543_, 1);
v_a_1536_ = v_val_1545_;
goto v___jp_1535_;
}
}
case 5:
{
lean_object* v_i_1546_; 
v_i_1546_ = lean_ctor_get(v_d_1479_, 0);
lean_inc(v_i_1546_);
v_a_1536_ = v_i_1546_;
goto v___jp_1535_;
}
default: 
{
lean_object* v___x_1547_; 
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v_a_1511_ = v___x_1547_;
goto v___jp_1510_;
}
}
v___jp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1484_ = lean_string_append(v___y_1482_, v___y_1483_);
lean_dec_ref(v___y_1483_);
v___x_1485_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1484_);
v___x_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
return v___x_1486_;
}
v___jp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1490_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1491_ = lean_string_append(v___x_1490_, v_context_1478_);
v___x_1492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1493_ = lean_string_append(v___x_1491_, v___x_1492_);
v___x_1494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__0));
v___x_1495_ = lean_string_append(v___x_1493_, v___x_1494_);
v___x_1496_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1497_ = lean_string_append(v___x_1495_, v___x_1496_);
v___x_1498_ = lean_string_append(v___x_1497_, v_received_1489_);
lean_dec_ref(v_received_1489_);
v___x_1499_ = lean_string_utf8_byte_size(v___y_1488_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = lean_nat_dec_eq(v___x_1499_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1502_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__1));
v___x_1503_ = lean_string_append(v___x_1502_, v___y_1488_);
v___x_1504_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__2));
v___x_1505_ = lean_string_append(v___x_1503_, v___x_1504_);
v___y_1482_ = v___x_1498_;
v___y_1483_ = v___x_1505_;
goto v___jp_1481_;
}
else
{
lean_object* v___x_1506_; 
v___x_1506_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___y_1482_ = v___x_1498_;
v___y_1483_ = v___x_1506_;
goto v___jp_1481_;
}
}
v___jp_1507_:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lasm_JS_Data_describe(v_d_1479_);
v___y_1488_ = v___y_1508_;
v_received_1489_ = v___x_1509_;
goto v___jp_1487_;
}
v___jp_1510_:
{
if (lean_obj_tag(v_d_1479_) == 9)
{
lean_object* v_value_1512_; lean_object* v_description_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v_value_1512_ = lean_ctor_get(v_d_1479_, 0);
v_description_1513_ = lean_ctor_get(v_d_1479_, 1);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1515_ = lean_string_dec_eq(v_description_1513_, v___x_1514_);
if (v___x_1515_ == 0)
{
v___y_1508_ = v_a_1511_;
goto v___jp_1507_;
}
else
{
lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1532_; 
lean_inc(v_value_1512_);
v_isSharedCheck_1532_ = !lean_is_exclusive(v_d_1479_);
if (v_isSharedCheck_1532_ == 0)
{
lean_object* v_unused_1533_; lean_object* v_unused_1534_; 
v_unused_1533_ = lean_ctor_get(v_d_1479_, 1);
lean_dec(v_unused_1533_);
v_unused_1534_ = lean_ctor_get(v_d_1479_, 0);
lean_dec(v_unused_1534_);
v___x_1517_ = v_d_1479_;
v_isShared_1518_ = v_isSharedCheck_1532_;
goto v_resetjp_1516_;
}
else
{
lean_dec(v_d_1479_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1532_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
uint32_t v___x_1519_; uint64_t v___x_1520_; lean_object* v___x_1522_; 
v___x_1519_ = 206;
v___x_1520_ = 0ULL;
lean_inc(v_value_1512_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1514_);
v___x_1522_ = v___x_1517_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_value_1512_);
lean_ctor_set(v_reuseFailAlloc_1531_, 1, v___x_1514_);
v___x_1522_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
uint32_t v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = lasm_js_value_handle(v_value_1512_);
lean_dec(v_value_1512_);
v___x_1524_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1519_, v___x_1520_, v___x_1522_, v___x_1523_);
lean_dec_ref(v___x_1522_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; uint8_t v___x_1526_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
v___x_1526_ = lean_string_validate_utf8(v_a_1525_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
lean_dec(v_a_1525_);
v___x_1527_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1528_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1527_);
v___y_1488_ = v_a_1511_;
v_received_1489_ = v___x_1528_;
goto v___jp_1487_;
}
else
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_string_from_utf8_unchecked(v_a_1525_);
v___y_1488_ = v_a_1511_;
v_received_1489_ = v___x_1529_;
goto v___jp_1487_;
}
}
else
{
lean_object* v___x_1530_; 
lean_dec_ref_known(v___x_1524_, 1);
v___x_1530_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v___y_1488_ = v_a_1511_;
v_received_1489_ = v___x_1530_;
goto v___jp_1487_;
}
}
}
}
}
else
{
v___y_1508_ = v_a_1511_;
goto v___jp_1507_;
}
}
v___jp_1535_:
{
lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__3);
v___x_1538_ = lean_int_dec_le(v___x_1537_, v_a_1536_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; 
lean_dec(v_a_1536_);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__4));
v_a_1511_ = v___x_1539_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec(v_d_1479_);
v___x_1540_ = l_Int_toNat(v_a_1536_);
lean_dec(v_a_1536_);
v___x_1541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
return v___x_1541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1548_, lean_object* v_d_1549_, lean_object* v_a_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1(v_context_1548_, v_d_1549_);
lean_dec_ref(v_context_1548_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0(lean_object* v_context_1552_, lean_object* v_bytes_1553_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1553_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1557_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1(v_context_1552_, v_a_1556_);
return v___x_1557_;
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
v_a_1558_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1555_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1555_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0___boxed(lean_object* v_context_1566_, lean_object* v_bytes_1567_, lean_object* v_a_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0(v_context_1566_, v_bytes_1567_);
lean_dec_ref(v_bytes_1567_);
lean_dec_ref(v_context_1566_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(lean_object* v_o_1570_, lean_object* v_key_1571_){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
lean_inc_ref(v_key_1571_);
v___x_1573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1573_, 0, v_key_1571_);
v___x_1574_ = l_Lasm_JS_Wire_encodeIO(v___x_1573_);
lean_dec_ref_known(v___x_1573_, 1);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; uint32_t v___x_1576_; uint32_t v___x_1577_; uint64_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1575_);
lean_dec_ref_known(v___x_1574_, 1);
v___x_1576_ = 203;
v___x_1577_ = lasm_js_value_handle(v_o_1570_);
v___x_1578_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1579_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1580_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1580_, 0, v_o_1570_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
v___x_1581_ = lasm_js_call(v___x_1576_, v___x_1577_, v___x_1578_, v_a_1575_, v___x_1580_);
lean_dec_ref_known(v___x_1580_, 2);
lean_dec(v_a_1575_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1583_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1584_ = l_String_quote(v_key_1571_);
v___x_1585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
v___x_1586_ = lean_unsigned_to_nat(120u);
v___x_1587_ = lean_unsigned_to_nat(0u);
v___x_1588_ = l_Std_Format_pretty(v___x_1585_, v___x_1586_, v___x_1587_, v___x_1587_);
v___x_1589_ = lean_string_append(v___x_1583_, v___x_1588_);
lean_dec_ref(v___x_1588_);
v___x_1590_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0(v___x_1589_, v_a_1582_);
lean_dec(v_a_1582_);
lean_dec_ref(v___x_1589_);
return v___x_1590_;
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec_ref(v_key_1571_);
v_a_1591_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1581_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1581_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec_ref(v_key_1571_);
lean_dec(v_o_1570_);
v_a_1599_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1574_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1574_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0___boxed(lean_object* v_o_1607_, lean_object* v_key_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_o_1607_, v_key_1608_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase(lean_object* v_self_1612_){
_start:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Web_Event_eventPhase___closed__0));
v___x_1615_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_self_1612_, v___x_1614_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_eventPhase___boxed(lean_object* v_self_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lasm_JS_Web_Event_eventPhase(v_self_1616_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object* v_o_1619_, lean_object* v_key_1620_){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_inc_ref(v_key_1620_);
v___x_1622_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1622_, 0, v_key_1620_);
v___x_1623_ = l_Lasm_JS_Wire_encodeIO(v___x_1622_);
lean_dec_ref_known(v___x_1622_, 1);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; uint32_t v___x_1625_; uint32_t v___x_1626_; uint64_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = 203;
v___x_1626_ = lasm_js_value_handle(v_o_1619_);
v___x_1627_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1629_, 0, v_o_1619_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lasm_js_call(v___x_1625_, v___x_1626_, v___x_1627_, v_a_1624_, v___x_1629_);
lean_dec_ref_known(v___x_1629_, 2);
lean_dec(v_a_1624_);
if (lean_obj_tag(v___x_1630_) == 0)
{
lean_object* v_a_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1630_, 1);
v___x_1632_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1633_ = l_String_quote(v_key_1620_);
v___x_1634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
v___x_1635_ = lean_unsigned_to_nat(120u);
v___x_1636_ = lean_unsigned_to_nat(0u);
v___x_1637_ = l_Std_Format_pretty(v___x_1634_, v___x_1635_, v___x_1636_, v___x_1636_);
v___x_1638_ = lean_string_append(v___x_1632_, v___x_1637_);
lean_dec_ref(v___x_1637_);
v___x_1639_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0_spec__1(v___x_1638_, v_a_1631_);
lean_dec(v_a_1631_);
lean_dec_ref(v___x_1638_);
return v___x_1639_;
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec_ref(v_key_1620_);
v_a_1640_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1630_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1630_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
lean_dec_ref(v_key_1620_);
lean_dec(v_o_1619_);
v_a_1648_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1623_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1623_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0___boxed(lean_object* v_o_1656_, lean_object* v_key_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_o_1656_, v_key_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble(lean_object* v_self_1661_){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = ((lean_object*)(l_Lasm_JS_Web_Event_cancelBubble___closed__0));
v___x_1664_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1661_, v___x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelBubble___boxed(lean_object* v_self_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lasm_JS_Web_Event_cancelBubble(v_self_1665_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(lean_object* v_o_1668_, lean_object* v_key_1669_, lean_object* v_x_1670_){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v_payload_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1672_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1672_, 0, v_key_1669_);
v___x_1673_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_o_1668_);
v___x_1674_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_o_1668_);
lean_ctor_set(v___x_1674_, 1, v___x_1673_);
v___x_1675_ = lean_unsigned_to_nat(3u);
v___x_1676_ = lean_mk_empty_array_with_capacity(v___x_1675_);
lean_inc_ref(v___x_1672_);
v___x_1677_ = lean_array_push(v___x_1676_, v___x_1672_);
lean_inc(v_x_1670_);
v___x_1678_ = lean_array_push(v___x_1677_, v_x_1670_);
v___x_1679_ = lean_array_push(v___x_1678_, v___x_1674_);
v_payload_1680_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_1680_, 0, v___x_1679_);
v___x_1681_ = lean_unsigned_to_nat(2u);
v___x_1682_ = lean_mk_empty_array_with_capacity(v___x_1681_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1672_);
v___x_1684_ = lean_array_push(v___x_1683_, v_x_1670_);
v___x_1685_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
v___x_1686_ = l_Lasm_JS_Wire_encodeIO(v___x_1685_);
lean_dec_ref_known(v___x_1685_, 1);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; uint32_t v___x_1688_; uint32_t v___x_1689_; uint64_t v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 1);
v___x_1688_ = 204;
v___x_1689_ = lasm_js_value_handle(v_o_1668_);
lean_dec(v_o_1668_);
v___x_1690_ = 0ULL;
v___x_1691_ = lean_box(0);
v___x_1692_ = lasm_js_call(v___x_1688_, v___x_1689_, v___x_1690_, v_a_1687_, v_payload_1680_);
lean_dec_ref_known(v_payload_1680_, 1);
lean_dec(v_a_1687_);
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; 
v_unused_1700_ = lean_ctor_get(v___x_1692_, 0);
lean_dec(v_unused_1700_);
v___x_1694_ = v___x_1692_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_dec(v___x_1692_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 0, v___x_1691_);
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v___x_1691_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
else
{
lean_object* v_a_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1708_; 
v_a_1701_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1703_ = v___x_1692_;
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_a_1701_);
lean_dec(v___x_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1708_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1706_; 
if (v_isShared_1704_ == 0)
{
v___x_1706_ = v___x_1703_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_a_1701_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
else
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
lean_dec_ref_known(v_payload_1680_, 1);
lean_dec(v_o_1668_);
v_a_1709_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1686_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1686_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0___boxed(lean_object* v_o_1717_, lean_object* v_key_1718_, lean_object* v_x_1719_, lean_object* v_a_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_o_1717_, v_key_1718_, v_x_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble(lean_object* v_self_1722_, uint8_t v_value_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1725_ = ((lean_object*)(l_Lasm_JS_Web_Event_cancelBubble___closed__0));
v___x_1726_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1726_, 0, v_value_1723_);
v___x_1727_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1722_, v___x_1725_, v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setCancelBubble___boxed(lean_object* v_self_1728_, lean_object* v_value_1729_, lean_object* v_a_1730_){
_start:
{
uint8_t v_value_boxed_1731_; lean_object* v_res_1732_; 
v_value_boxed_1731_ = lean_unbox(v_value_1729_);
v_res_1732_ = l_Lasm_JS_Web_Event_setCancelBubble(v_self_1728_, v_value_boxed_1731_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles(lean_object* v_self_1733_){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_1736_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1733_, v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_bubbles___boxed(lean_object* v_self_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lasm_JS_Web_Event_bubbles(v_self_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable(lean_object* v_self_1740_){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_1743_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1740_, v___x_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_cancelable___boxed(lean_object* v_self_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lasm_JS_Web_Event_cancelable(v_self_1744_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue(lean_object* v_self_1748_){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1750_ = ((lean_object*)(l_Lasm_JS_Web_Event_returnValue___closed__0));
v___x_1751_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1748_, v___x_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_returnValue___boxed(lean_object* v_self_1752_, lean_object* v_a_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_Lasm_JS_Web_Event_returnValue(v_self_1752_);
return v_res_1754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue(lean_object* v_self_1755_, uint8_t v_value_1756_){
_start:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Web_Event_returnValue___closed__0));
v___x_1759_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1759_, 0, v_value_1756_);
v___x_1760_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_1755_, v___x_1758_, v___x_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_setReturnValue___boxed(lean_object* v_self_1761_, lean_object* v_value_1762_, lean_object* v_a_1763_){
_start:
{
uint8_t v_value_boxed_1764_; lean_object* v_res_1765_; 
v_value_boxed_1764_ = lean_unbox(v_value_1762_);
v_res_1765_ = l_Lasm_JS_Web_Event_setReturnValue(v_self_1761_, v_value_boxed_1764_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented(lean_object* v_self_1767_){
_start:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Web_Event_defaultPrevented___closed__0));
v___x_1770_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1767_, v___x_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_defaultPrevented___boxed(lean_object* v_self_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lasm_JS_Web_Event_defaultPrevented(v_self_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed(lean_object* v_self_1774_){
_start:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_1777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1774_, v___x_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composed___boxed(lean_object* v_self_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lasm_JS_Web_Event_composed(v_self_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted(lean_object* v_self_1782_){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Web_Event_isTrusted___closed__0));
v___x_1785_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1782_, v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_isTrusted___boxed(lean_object* v_self_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lasm_JS_Web_Event_isTrusted(v_self_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object* v_context_1790_, lean_object* v_d_1791_){
_start:
{
lean_object* v___y_1794_; lean_object* v___y_1795_; 
if (lean_obj_tag(v_d_1791_) == 3)
{
double v_n_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_n_1799_ = lean_ctor_get_float(v_d_1791_, 0);
lean_dec_ref_known(v_d_1791_, 0);
v___x_1800_ = lean_box_float(v_n_1799_);
v___x_1801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
else
{
lean_object* v___x_1802_; lean_object* v_received_1804_; 
v___x_1802_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_1791_) == 9)
{
lean_object* v_value_1818_; lean_object* v_description_1819_; uint8_t v___x_1820_; 
v_value_1818_ = lean_ctor_get(v_d_1791_, 0);
v_description_1819_ = lean_ctor_get(v_d_1791_, 1);
v___x_1820_ = lean_string_dec_eq(v_description_1819_, v___x_1802_);
if (v___x_1820_ == 0)
{
goto v___jp_1816_;
}
else
{
uint32_t v___x_1821_; uint64_t v___x_1822_; lean_object* v___x_1823_; uint32_t v___x_1824_; lean_object* v___x_1825_; 
lean_inc_n(v_value_1818_, 2);
lean_dec_ref_known(v_d_1791_, 2);
v___x_1821_ = 206;
v___x_1822_ = 0ULL;
v___x_1823_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1823_, 0, v_value_1818_);
lean_ctor_set(v___x_1823_, 1, v___x_1802_);
v___x_1824_ = lasm_js_value_handle(v_value_1818_);
lean_dec(v_value_1818_);
v___x_1825_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1821_, v___x_1822_, v___x_1823_, v___x_1824_);
lean_dec_ref_known(v___x_1823_, 2);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_a_1826_; uint8_t v___x_1827_; 
v_a_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1825_, 1);
v___x_1827_ = lean_string_validate_utf8(v_a_1826_);
if (v___x_1827_ == 0)
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_dec(v_a_1826_);
v___x_1828_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1829_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1828_);
v_received_1804_ = v___x_1829_;
goto v___jp_1803_;
}
else
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_string_from_utf8_unchecked(v_a_1826_);
v_received_1804_ = v___x_1830_;
goto v___jp_1803_;
}
}
else
{
lean_object* v___x_1831_; 
lean_dec_ref_known(v___x_1825_, 1);
v___x_1831_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_1804_ = v___x_1831_;
goto v___jp_1803_;
}
}
}
else
{
goto v___jp_1816_;
}
v___jp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1805_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1806_ = lean_string_append(v___x_1805_, v_context_1790_);
v___x_1807_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1808_ = lean_string_append(v___x_1806_, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___closed__0));
v___x_1810_ = lean_string_append(v___x_1808_, v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1812_ = lean_string_append(v___x_1810_, v___x_1811_);
v___x_1813_ = lean_string_append(v___x_1812_, v_received_1804_);
lean_dec_ref(v_received_1804_);
v___x_1814_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_1794_ = v___x_1813_;
v___y_1795_ = v___x_1815_;
goto v___jp_1793_;
}
else
{
v___y_1794_ = v___x_1813_;
v___y_1795_ = v___x_1802_;
goto v___jp_1793_;
}
}
v___jp_1816_:
{
lean_object* v___x_1817_; 
v___x_1817_ = l_Lasm_JS_Data_describe(v_d_1791_);
v_received_1804_ = v___x_1817_;
goto v___jp_1803_;
}
}
v___jp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_string_append(v___y_1794_, v___y_1795_);
v___x_1797_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
v___x_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
return v___x_1798_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1832_, lean_object* v_d_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1832_, v_d_1833_);
lean_dec_ref(v_context_1832_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(lean_object* v_context_1836_, lean_object* v_bytes_1837_){
_start:
{
lean_object* v___x_1839_; 
v___x_1839_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1837_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1841_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref_known(v___x_1839_, 1);
v___x_1841_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_1836_, v_a_1840_);
return v___x_1841_;
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1849_; 
v_a_1842_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1844_ = v___x_1839_;
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v___x_1839_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1849_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0___boxed(lean_object* v_context_1850_, lean_object* v_bytes_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v_context_1850_, v_bytes_1851_);
lean_dec_ref(v_bytes_1851_);
lean_dec_ref(v_context_1850_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object* v_o_1854_, lean_object* v_key_1855_){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc_ref(v_key_1855_);
v___x_1857_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1857_, 0, v_key_1855_);
v___x_1858_ = l_Lasm_JS_Wire_encodeIO(v___x_1857_);
lean_dec_ref_known(v___x_1857_, 1);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_a_1859_; uint32_t v___x_1860_; uint32_t v___x_1861_; uint64_t v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v_a_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_a_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = 203;
v___x_1861_ = lasm_js_value_handle(v_o_1854_);
v___x_1862_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1864_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1864_, 0, v_o_1854_);
lean_ctor_set(v___x_1864_, 1, v___x_1863_);
v___x_1865_ = lasm_js_call(v___x_1860_, v___x_1861_, v___x_1862_, v_a_1859_, v___x_1864_);
lean_dec_ref_known(v___x_1864_, 2);
lean_dec(v_a_1859_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v___x_1867_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_1868_ = l_String_quote(v_key_1855_);
v___x_1869_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
v___x_1870_ = lean_unsigned_to_nat(120u);
v___x_1871_ = lean_unsigned_to_nat(0u);
v___x_1872_ = l_Std_Format_pretty(v___x_1869_, v___x_1870_, v___x_1871_, v___x_1871_);
v___x_1873_ = lean_string_append(v___x_1867_, v___x_1872_);
lean_dec_ref(v___x_1872_);
v___x_1874_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0(v___x_1873_, v_a_1866_);
lean_dec(v_a_1866_);
lean_dec_ref(v___x_1873_);
return v___x_1874_;
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v_key_1855_);
v_a_1875_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1865_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1865_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
lean_dec_ref(v_key_1855_);
lean_dec(v_o_1854_);
v_a_1883_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1858_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1858_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0___boxed(lean_object* v_o_1891_, lean_object* v_key_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v_res_1894_; 
v_res_1894_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_1891_, v_key_1892_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp(lean_object* v_self_1896_){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = ((lean_object*)(l_Lasm_JS_Web_Event_timeStamp___closed__0));
v___x_1899_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_1896_, v___x_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_timeStamp___boxed(lean_object* v_self_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lasm_JS_Web_Event_timeStamp(v_self_1900_);
return v_res_1902_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(uint8_t v_await_1903_, uint64_t v_extra_1904_){
_start:
{
uint64_t v___x_1905_; uint64_t v___y_1907_; 
v___x_1905_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_1903_ == 0)
{
uint64_t v___x_1910_; 
v___x_1910_ = 0ULL;
v___y_1907_ = v___x_1910_;
goto v___jp_1906_;
}
else
{
uint64_t v___x_1911_; 
v___x_1911_ = 2ULL;
v___y_1907_ = v___x_1911_;
goto v___jp_1906_;
}
v___jp_1906_:
{
uint64_t v___x_1908_; uint64_t v___x_1909_; 
v___x_1908_ = lean_uint64_lor(v___x_1905_, v___y_1907_);
v___x_1909_ = lean_uint64_lor(v___x_1908_, v_extra_1904_);
return v___x_1909_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0___boxed(lean_object* v_await_1912_, lean_object* v_extra_1913_){
_start:
{
uint8_t v_await_boxed_1914_; uint64_t v_extra_boxed_1915_; uint64_t v_res_1916_; lean_object* v_r_1917_; 
v_await_boxed_1914_ = lean_unbox(v_await_1912_);
v_extra_boxed_1915_ = lean_unbox_uint64(v_extra_1913_);
lean_dec_ref(v_extra_1913_);
v_res_1916_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(v_await_boxed_1914_, v_extra_boxed_1915_);
v_r_1917_ = lean_box_uint64(v_res_1916_);
return v_r_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(size_t v_sz_1920_, size_t v_i_1921_, lean_object* v_bs_1922_){
_start:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_usize_dec_lt(v_i_1921_, v_sz_1920_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; 
v___x_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1924_, 0, v_bs_1922_);
return v___x_1924_;
}
else
{
lean_object* v_v_1925_; 
v_v_1925_ = lean_array_uget_borrowed(v_bs_1922_, v_i_1921_);
if (lean_obj_tag(v_v_1925_) == 9)
{
lean_object* v_value_1926_; lean_object* v___x_1927_; lean_object* v_bs_x27_1928_; size_t v___x_1929_; size_t v___x_1930_; lean_object* v___x_1931_; 
v_value_1926_ = lean_ctor_get(v_v_1925_, 0);
lean_inc(v_value_1926_);
v___x_1927_ = lean_unsigned_to_nat(0u);
v_bs_x27_1928_ = lean_array_uset(v_bs_1922_, v_i_1921_, v___x_1927_);
v___x_1929_ = ((size_t)1ULL);
v___x_1930_ = lean_usize_add(v_i_1921_, v___x_1929_);
v___x_1931_ = lean_array_uset(v_bs_x27_1928_, v_i_1921_, v_value_1926_);
v_i_1921_ = v___x_1930_;
v_bs_1922_ = v___x_1931_;
goto _start;
}
else
{
lean_object* v___x_1933_; 
lean_dec_ref(v_bs_1922_);
v___x_1933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_1933_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_1934_, lean_object* v_i_1935_, lean_object* v_bs_1936_){
_start:
{
size_t v_sz_boxed_1937_; size_t v_i_boxed_1938_; lean_object* v_res_1939_; 
v_sz_boxed_1937_ = lean_unbox_usize(v_sz_1934_);
lean_dec(v_sz_1934_);
v_i_boxed_1938_ = lean_unbox_usize(v_i_1935_);
lean_dec(v_i_1935_);
v_res_1939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_1937_, v_i_boxed_1938_, v_bs_1936_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(lean_object* v_context_1942_, lean_object* v_d_1943_){
_start:
{
lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___y_1952_; lean_object* v_received_1953_; lean_object* v___y_1972_; lean_object* v_a_1975_; 
if (lean_obj_tag(v_d_1943_) == 7)
{
lean_object* v_items_1999_; size_t v_sz_2000_; size_t v___x_2001_; lean_object* v___x_2002_; 
v_items_1999_ = lean_ctor_get(v_d_1943_, 0);
v_sz_2000_ = lean_array_size(v_items_1999_);
v___x_2001_ = ((size_t)0ULL);
lean_inc_ref(v_items_1999_);
v___x_2002_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2_spec__3(v_sz_2000_, v___x_2001_, v_items_1999_);
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; uint8_t v___x_2007_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_a_2003_);
lean_dec_ref_known(v___x_2002_, 1);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__1));
v___x_2005_ = lean_string_utf8_byte_size(v_a_2003_);
v___x_2006_ = lean_unsigned_to_nat(0u);
v___x_2007_ = lean_nat_dec_eq(v___x_2005_, v___x_2006_);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2009_ = lean_string_append(v___x_2008_, v_a_2003_);
lean_dec(v_a_2003_);
v___x_2010_ = lean_string_append(v___x_2004_, v___x_2009_);
lean_dec_ref(v___x_2009_);
v_a_1975_ = v___x_2010_;
goto v___jp_1974_;
}
else
{
lean_dec(v_a_2003_);
v_a_1975_ = v___x_2004_;
goto v___jp_1974_;
}
}
else
{
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2011_; 
v_a_2011_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_a_2011_);
lean_dec_ref_known(v___x_2002_, 1);
v_a_1975_ = v_a_2011_;
goto v___jp_1974_;
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec_ref_known(v_d_1943_, 1);
v_a_2012_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_2002_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_2002_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set_tag(v___x_2014_, 0);
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
else
{
lean_object* v___x_2020_; 
v___x_2020_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v_a_1975_ = v___x_2020_;
goto v___jp_1974_;
}
v___jp_1945_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = lean_string_append(v___y_1946_, v___y_1947_);
lean_dec_ref(v___y_1947_);
v___x_1949_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
v___x_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
return v___x_1950_;
}
v___jp_1951_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1954_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_1955_ = lean_string_append(v___x_1954_, v_context_1942_);
v___x_1956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_1957_ = lean_string_append(v___x_1955_, v___x_1956_);
v___x_1958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___closed__0));
v___x_1959_ = lean_string_append(v___x_1957_, v___x_1958_);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_1961_ = lean_string_append(v___x_1959_, v___x_1960_);
v___x_1962_ = lean_string_append(v___x_1961_, v_received_1953_);
lean_dec_ref(v_received_1953_);
v___x_1963_ = lean_string_utf8_byte_size(v___y_1952_);
v___x_1964_ = lean_unsigned_to_nat(0u);
v___x_1965_ = lean_nat_dec_eq(v___x_1963_, v___x_1964_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1966_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__1));
v___x_1967_ = lean_string_append(v___x_1966_, v___y_1952_);
lean_dec_ref(v___y_1952_);
v___x_1968_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0_spec__0_spec__1___closed__2));
v___x_1969_ = lean_string_append(v___x_1967_, v___x_1968_);
v___y_1946_ = v___x_1962_;
v___y_1947_ = v___x_1969_;
goto v___jp_1945_;
}
else
{
lean_object* v___x_1970_; 
lean_dec_ref(v___y_1952_);
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___y_1946_ = v___x_1962_;
v___y_1947_ = v___x_1970_;
goto v___jp_1945_;
}
}
v___jp_1971_:
{
lean_object* v___x_1973_; 
v___x_1973_ = l_Lasm_JS_Data_describe(v_d_1943_);
v___y_1952_ = v___y_1972_;
v_received_1953_ = v___x_1973_;
goto v___jp_1951_;
}
v___jp_1974_:
{
if (lean_obj_tag(v_d_1943_) == 9)
{
lean_object* v_value_1976_; lean_object* v_description_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; 
v_value_1976_ = lean_ctor_get(v_d_1943_, 0);
v_description_1977_ = lean_ctor_get(v_d_1943_, 1);
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_1979_ = lean_string_dec_eq(v_description_1977_, v___x_1978_);
if (v___x_1979_ == 0)
{
v___y_1972_ = v_a_1975_;
goto v___jp_1971_;
}
else
{
lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1996_; 
lean_inc(v_value_1976_);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_d_1943_);
if (v_isSharedCheck_1996_ == 0)
{
lean_object* v_unused_1997_; lean_object* v_unused_1998_; 
v_unused_1997_ = lean_ctor_get(v_d_1943_, 1);
lean_dec(v_unused_1997_);
v_unused_1998_ = lean_ctor_get(v_d_1943_, 0);
lean_dec(v_unused_1998_);
v___x_1981_ = v_d_1943_;
v_isShared_1982_ = v_isSharedCheck_1996_;
goto v_resetjp_1980_;
}
else
{
lean_dec(v_d_1943_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1996_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
uint32_t v___x_1983_; uint64_t v___x_1984_; lean_object* v___x_1986_; 
v___x_1983_ = 206;
v___x_1984_ = 0ULL;
lean_inc(v_value_1976_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 1, v___x_1978_);
v___x_1986_ = v___x_1981_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_value_1976_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1978_);
v___x_1986_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
uint32_t v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = lasm_js_value_handle(v_value_1976_);
lean_dec(v_value_1976_);
v___x_1988_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1983_, v___x_1984_, v___x_1986_, v___x_1987_);
lean_dec_ref(v___x_1986_);
if (lean_obj_tag(v___x_1988_) == 0)
{
lean_object* v_a_1989_; uint8_t v___x_1990_; 
v_a_1989_ = lean_ctor_get(v___x_1988_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1988_, 1);
v___x_1990_ = lean_string_validate_utf8(v_a_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
lean_dec(v_a_1989_);
v___x_1991_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_1992_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1991_);
v___y_1952_ = v_a_1975_;
v_received_1953_ = v___x_1992_;
goto v___jp_1951_;
}
else
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_string_from_utf8_unchecked(v_a_1989_);
v___y_1952_ = v_a_1975_;
v_received_1953_ = v___x_1993_;
goto v___jp_1951_;
}
}
else
{
lean_object* v___x_1994_; 
lean_dec_ref_known(v___x_1988_, 1);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v___y_1952_ = v_a_1975_;
v_received_1953_ = v___x_1994_;
goto v___jp_1951_;
}
}
}
}
}
else
{
v___y_1972_ = v_a_1975_;
goto v___jp_1971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2021_, lean_object* v_d_2022_, lean_object* v_a_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(v_context_2021_, v_d_2022_);
lean_dec_ref(v_context_2021_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(lean_object* v_context_2025_, lean_object* v_bytes_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2026_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2030_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref_known(v___x_2028_, 1);
v___x_2030_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1_spec__2(v_context_2025_, v_a_2029_);
return v___x_2030_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
v_a_2031_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2028_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2028_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1___boxed(lean_object* v_context_2039_, lean_object* v_bytes_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(v_context_2039_, v_bytes_2040_);
lean_dec_ref(v_bytes_2040_);
lean_dec_ref(v_context_2039_);
return v_res_2042_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2043_; uint8_t v___x_2044_; uint64_t v___x_2045_; 
v___x_2043_ = 8ULL;
v___x_2044_ = 0;
v___x_2045_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__0(v___x_2044_, v___x_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(lean_object* v_o_2046_, lean_object* v_name_2047_, lean_object* v_args_2048_){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; uint64_t v___x_2053_; lean_object* v___x_2054_; 
v___x_2050_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2051_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2051_, 0, v_o_2046_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
lean_inc_ref(v_name_2047_);
v___x_2052_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2052_, 0, v_name_2047_);
v___x_2053_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___closed__0);
v___x_2054_ = l_Lasm_JS_Value_invokeRaw(v___x_2051_, v___x_2052_, v_args_2048_, v___x_2053_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2054_, 1);
v___x_2056_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1___closed__1));
v___x_2057_ = lean_string_append(v___x_2056_, v_name_2047_);
lean_dec_ref(v_name_2047_);
v___x_2058_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0_spec__1(v___x_2057_, v_a_2055_);
lean_dec(v_a_2055_);
lean_dec_ref(v___x_2057_);
return v___x_2058_;
}
else
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_dec_ref(v_name_2047_);
v_a_2059_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2054_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2054_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0___boxed(lean_object* v_o_2067_, lean_object* v_name_2068_, lean_object* v_args_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(v_o_2067_, v_name_2068_, v_args_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath(lean_object* v_self_2073_){
_start:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = ((lean_object*)(l_Lasm_JS_Web_Event_composedPath___closed__0));
v___x_2076_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2077_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Event_composedPath_spec__0(v_self_2073_, v___x_2075_, v___x_2076_);
return v___x_2077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_composedPath___boxed(lean_object* v_self_2078_, lean_object* v_a_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lasm_JS_Web_Event_composedPath(v_self_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation(lean_object* v_self_2082_){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2084_ = ((lean_object*)(l_Lasm_JS_Web_Event_stopPropagation___closed__0));
v___x_2085_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2086_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2082_, v___x_2084_, v___x_2085_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopPropagation___boxed(lean_object* v_self_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lasm_JS_Web_Event_stopPropagation(v_self_2087_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation(lean_object* v_self_2091_){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = ((lean_object*)(l_Lasm_JS_Web_Event_stopImmediatePropagation___closed__0));
v___x_2094_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2095_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2091_, v___x_2093_, v___x_2094_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_stopImmediatePropagation___boxed(lean_object* v_self_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lasm_JS_Web_Event_stopImmediatePropagation(v_self_2096_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault(lean_object* v_self_2100_){
_start:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2102_ = ((lean_object*)(l_Lasm_JS_Web_Event_preventDefault___closed__0));
v___x_2103_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2104_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2100_, v___x_2102_, v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_preventDefault___boxed(lean_object* v_self_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lasm_JS_Web_Event_preventDefault(v_self_2105_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent(lean_object* v_self_2109_, lean_object* v_type_2110_, lean_object* v_bubbles_2111_, lean_object* v_cancelable_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2114_ = ((lean_object*)(l_Lasm_JS_Web_Event_initEvent___closed__0));
v___x_2115_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2115_, 0, v_type_2110_);
v___x_2116_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2111_);
v___x_2117_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2112_);
v___x_2118_ = lean_unsigned_to_nat(3u);
v___x_2119_ = lean_mk_empty_array_with_capacity(v___x_2118_);
v___x_2120_ = lean_array_push(v___x_2119_, v___x_2115_);
v___x_2121_ = lean_array_push(v___x_2120_, v___x_2116_);
v___x_2122_ = lean_array_push(v___x_2121_, v___x_2117_);
v___x_2123_ = l_Lasm_JS_Web_Support_args(v___x_2122_);
v___x_2124_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2109_, v___x_2114_, v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Event_initEvent___boxed(lean_object* v_self_2125_, lean_object* v_type_2126_, lean_object* v_bubbles_2127_, lean_object* v_cancelable_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l_Lasm_JS_Web_Event_initEvent(v_self_2125_, v_type_2126_, v_bubbles_2127_, v_cancelable_2128_);
lean_dec(v_cancelable_2128_);
lean_dec(v_bubbles_2127_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(lean_object* v_x_2131_){
_start:
{
if (lean_obj_tag(v_x_2131_) == 0)
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_box(0);
return v___x_2132_;
}
else
{
lean_object* v_val_2133_; lean_object* v_bubbles_2134_; lean_object* v_cancelable_2135_; lean_object* v_composed_2136_; lean_object* v_detail_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_val_2133_ = lean_ctor_get(v_x_2131_, 0);
v_bubbles_2134_ = lean_ctor_get(v_val_2133_, 0);
v_cancelable_2135_ = lean_ctor_get(v_val_2133_, 1);
v_composed_2136_ = lean_ctor_get(v_val_2133_, 2);
v_detail_2137_ = lean_ctor_get(v_val_2133_, 3);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__0));
v___x_2139_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2134_);
v___x_2140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2138_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__1));
v___x_2142_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2135_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2141_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventInit___lam__0___closed__2));
v___x_2145_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_composed_2136_);
v___x_2146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2144_);
lean_ctor_set(v___x_2146_, 1, v___x_2145_);
v___x_2147_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
lean_inc(v_detail_2137_);
v___x_2148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
lean_ctor_set(v___x_2148_, 1, v_detail_2137_);
v___x_2149_ = lean_unsigned_to_nat(4u);
v___x_2150_ = lean_mk_empty_array_with_capacity(v___x_2149_);
v___x_2151_ = lean_array_push(v___x_2150_, v___x_2140_);
v___x_2152_ = lean_array_push(v___x_2151_, v___x_2143_);
v___x_2153_ = lean_array_push(v___x_2152_, v___x_2146_);
v___x_2154_ = lean_array_push(v___x_2153_, v___x_2148_);
v___x_2155_ = l_Lasm_JS_Web_Support_fields(v___x_2154_);
lean_dec_ref(v___x_2154_);
return v___x_2155_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0___boxed(lean_object* v_x_2156_){
_start:
{
lean_object* v_res_2157_; 
v_res_2157_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(v_x_2156_);
lean_dec(v_x_2156_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(lean_object* v_context_2158_, lean_object* v_d_2159_){
_start:
{
lean_object* v___y_2162_; lean_object* v___y_2163_; 
if (lean_obj_tag(v_d_2159_) == 9)
{
lean_object* v_value_2167_; lean_object* v___x_2168_; 
v_value_2167_ = lean_ctor_get(v_d_2159_, 0);
lean_inc(v_value_2167_);
lean_dec_ref_known(v_d_2159_, 2);
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v_value_2167_);
return v___x_2168_;
}
else
{
lean_object* v___x_2169_; lean_object* v_received_2171_; 
v___x_2169_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2159_) == 9)
{
lean_object* v_value_2185_; lean_object* v_description_2186_; uint8_t v___x_2187_; 
v_value_2185_ = lean_ctor_get(v_d_2159_, 0);
v_description_2186_ = lean_ctor_get(v_d_2159_, 1);
v___x_2187_ = lean_string_dec_eq(v_description_2186_, v___x_2169_);
if (v___x_2187_ == 0)
{
goto v___jp_2183_;
}
else
{
uint32_t v___x_2188_; uint64_t v___x_2189_; lean_object* v___x_2190_; uint32_t v___x_2191_; lean_object* v___x_2192_; 
lean_inc_n(v_value_2185_, 2);
lean_dec_ref_known(v_d_2159_, 2);
v___x_2188_ = 206;
v___x_2189_ = 0ULL;
v___x_2190_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2190_, 0, v_value_2185_);
lean_ctor_set(v___x_2190_, 1, v___x_2169_);
v___x_2191_ = lasm_js_value_handle(v_value_2185_);
lean_dec(v_value_2185_);
v___x_2192_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2188_, v___x_2189_, v___x_2190_, v___x_2191_);
lean_dec_ref_known(v___x_2190_, 2);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; uint8_t v___x_2194_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref_known(v___x_2192_, 1);
v___x_2194_ = lean_string_validate_utf8(v_a_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
lean_dec(v_a_2193_);
v___x_2195_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2196_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2195_);
v_received_2171_ = v___x_2196_;
goto v___jp_2170_;
}
else
{
lean_object* v___x_2197_; 
v___x_2197_ = lean_string_from_utf8_unchecked(v_a_2193_);
v_received_2171_ = v___x_2197_;
goto v___jp_2170_;
}
}
else
{
lean_object* v___x_2198_; 
lean_dec_ref_known(v___x_2192_, 1);
v___x_2198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2171_ = v___x_2198_;
goto v___jp_2170_;
}
}
}
else
{
goto v___jp_2183_;
}
v___jp_2170_:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; uint8_t v___x_2181_; 
v___x_2172_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2173_ = lean_string_append(v___x_2172_, v_context_2158_);
v___x_2174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2175_ = lean_string_append(v___x_2173_, v___x_2174_);
v___x_2176_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCustomEvent___closed__0));
v___x_2177_ = lean_string_append(v___x_2175_, v___x_2176_);
v___x_2178_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2179_ = lean_string_append(v___x_2177_, v___x_2178_);
v___x_2180_ = lean_string_append(v___x_2179_, v_received_2171_);
lean_dec_ref(v_received_2171_);
v___x_2181_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2181_ == 0)
{
lean_object* v___x_2182_; 
v___x_2182_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2162_ = v___x_2180_;
v___y_2163_ = v___x_2182_;
goto v___jp_2161_;
}
else
{
v___y_2162_ = v___x_2180_;
v___y_2163_ = v___x_2169_;
goto v___jp_2161_;
}
}
v___jp_2183_:
{
lean_object* v___x_2184_; 
v___x_2184_ = l_Lasm_JS_Data_describe(v_d_2159_);
v_received_2171_ = v___x_2184_;
goto v___jp_2170_;
}
}
v___jp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2164_ = lean_string_append(v___y_2162_, v___y_2163_);
v___x_2165_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
return v___x_2166_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1___boxed(lean_object* v_context_2199_, lean_object* v_d_2200_, lean_object* v_a_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(v_context_2199_, v_d_2200_);
lean_dec_ref(v_context_2199_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(lean_object* v_b_2203_, lean_object* v_args_2204_, uint8_t v_await_2205_){
_start:
{
uint64_t v___y_2208_; uint64_t v___y_2209_; uint64_t v___x_2252_; uint64_t v___y_2254_; 
v___x_2252_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2205_ == 0)
{
uint64_t v___x_2259_; 
v___x_2259_ = 0ULL;
v___y_2254_ = v___x_2259_;
goto v___jp_2253_;
}
else
{
uint64_t v___x_2260_; 
v___x_2260_ = 2ULL;
v___y_2254_ = v___x_2260_;
goto v___jp_2253_;
}
v___jp_2207_:
{
uint64_t v_flags_2210_; uint32_t v___x_2211_; lean_object* v___x_2212_; uint32_t v___x_2213_; lean_object* v___x_2214_; 
v_flags_2210_ = lean_uint64_lor(v___y_2208_, v___y_2209_);
v___x_2211_ = 214;
v___x_2212_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2203_, v_args_2204_);
v___x_2213_ = 0;
v___x_2214_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2211_, v_flags_2210_, v___x_2212_, v___x_2213_);
lean_dec(v___x_2212_);
if (lean_obj_tag(v___x_2214_) == 0)
{
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2216_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
lean_inc(v_a_2215_);
lean_dec_ref_known(v___x_2214_, 1);
v___x_2216_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2215_);
lean_dec(v_a_2215_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2218_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2203_);
v___x_2219_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1_spec__1(v___x_2218_, v_a_2217_);
lean_dec_ref(v___x_2218_);
return v___x_2219_;
}
else
{
lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
v_a_2220_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2216_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2216_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
else
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2235_; 
v_a_2228_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2230_ = v___x_2214_;
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2214_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2231_ == 0)
{
lean_ctor_set_tag(v___x_2230_, 1);
v___x_2233_ = v___x_2230_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_a_2228_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2251_; 
v_a_2236_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2238_ = v___x_2214_;
v_isShared_2239_ = v_isSharedCheck_2251_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2214_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2251_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2249_; 
v___x_2240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2241_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2203_);
v___x_2242_ = lean_string_append(v___x_2240_, v___x_2241_);
lean_dec_ref(v___x_2241_);
v___x_2243_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2244_ = lean_string_append(v___x_2242_, v___x_2243_);
v___x_2245_ = lean_io_error_to_string(v_a_2236_);
v___x_2246_ = lean_string_append(v___x_2244_, v___x_2245_);
lean_dec_ref(v___x_2245_);
v___x_2247_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
if (v_isShared_2239_ == 0)
{
lean_ctor_set(v___x_2238_, 0, v___x_2247_);
v___x_2249_ = v___x_2238_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
v___jp_2253_:
{
uint8_t v_construct_2255_; uint64_t v___x_2256_; 
v_construct_2255_ = lean_ctor_get_uint8(v_b_2203_, sizeof(void*)*4);
v___x_2256_ = lean_uint64_lor(v___x_2252_, v___y_2254_);
if (v_construct_2255_ == 0)
{
uint64_t v___x_2257_; 
v___x_2257_ = 0ULL;
v___y_2208_ = v___x_2256_;
v___y_2209_ = v___x_2257_;
goto v___jp_2207_;
}
else
{
uint64_t v___x_2258_; 
v___x_2258_ = 4ULL;
v___y_2208_ = v___x_2256_;
v___y_2209_ = v___x_2258_;
goto v___jp_2207_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1___boxed(lean_object* v_b_2261_, lean_object* v_args_2262_, lean_object* v_await_2263_, lean_object* v_a_2264_){
_start:
{
uint8_t v_await_boxed_2265_; lean_object* v_res_2266_; 
v_await_boxed_2265_ = lean_unbox(v_await_2263_);
v_res_2266_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(v_b_2261_, v_args_2262_, v_await_boxed_2265_);
lean_dec_ref(v_b_2261_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new(lean_object* v_type_2275_, lean_object* v_eventInitDict_2276_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; uint8_t v___x_2286_; lean_object* v___x_2287_; 
v___x_2278_ = lean_unsigned_to_nat(2u);
v___x_2279_ = ((lean_object*)(l_Lasm_JS_Web_CustomEvent_new___closed__2));
v___x_2280_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2280_, 0, v_type_2275_);
v___x_2281_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_CustomEvent_new_spec__0(v_eventInitDict_2276_);
v___x_2282_ = lean_mk_empty_array_with_capacity(v___x_2278_);
v___x_2283_ = lean_array_push(v___x_2282_, v___x_2280_);
v___x_2284_ = lean_array_push(v___x_2283_, v___x_2281_);
v___x_2285_ = l_Lasm_JS_Web_Support_args(v___x_2284_);
v___x_2286_ = 0;
v___x_2287_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CustomEvent_new_spec__1(v___x_2279_, v___x_2285_, v___x_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_new___boxed(lean_object* v_type_2288_, lean_object* v_eventInitDict_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lasm_JS_Web_CustomEvent_new(v_type_2288_, v_eventInitDict_2289_);
lean_dec(v_eventInitDict_2289_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(lean_object* v_bytes_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2292_);
if (lean_obj_tag(v___x_2294_) == 0)
{
lean_object* v_a_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2302_; 
v_a_2295_ = lean_ctor_get(v___x_2294_, 0);
v_isSharedCheck_2302_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2302_ == 0)
{
v___x_2297_ = v___x_2294_;
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_a_2295_);
lean_dec(v___x_2294_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2302_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2300_; 
if (v_isShared_2298_ == 0)
{
v___x_2300_ = v___x_2297_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_a_2295_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
else
{
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg___boxed(lean_object* v_bytes_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_bytes_2303_);
lean_dec_ref(v_bytes_2303_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object* v_o_2306_, lean_object* v_key_2307_){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2309_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2309_, 0, v_key_2307_);
v___x_2310_ = l_Lasm_JS_Wire_encodeIO(v___x_2309_);
lean_dec_ref_known(v___x_2309_, 1);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; uint32_t v___x_2312_; uint32_t v___x_2313_; uint64_t v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v___x_2310_, 1);
v___x_2312_ = 203;
v___x_2313_ = lasm_js_value_handle(v_o_2306_);
v___x_2314_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2316_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2316_, 0, v_o_2306_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = lasm_js_call(v___x_2312_, v___x_2313_, v___x_2314_, v_a_2311_, v___x_2316_);
lean_dec_ref_known(v___x_2316_, 2);
lean_dec(v_a_2311_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v___x_2319_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_a_2318_);
lean_dec_ref_known(v___x_2317_, 1);
v___x_2319_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_a_2318_);
lean_dec(v_a_2318_);
return v___x_2319_;
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_a_2320_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2317_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2317_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
else
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2335_; 
lean_dec(v_o_2306_);
v_a_2328_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2335_ == 0)
{
v___x_2330_ = v___x_2310_;
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2310_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2335_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2333_; 
if (v_isShared_2331_ == 0)
{
v___x_2333_ = v___x_2330_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v_a_2328_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0___boxed(lean_object* v_o_2336_, lean_object* v_key_2337_, lean_object* v_a_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_o_2336_, v_key_2337_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail(lean_object* v_self_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l_Lasm_JS_Web_instToJSCustomEventInit___lam__0___closed__0));
v___x_2343_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2340_, v___x_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_detail___boxed(lean_object* v_self_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lasm_JS_Web_CustomEvent_detail(v_self_2344_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2347_){
_start:
{
lean_object* v___x_2349_; 
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v_d_2347_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2350_, lean_object* v_a_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___redArg(v_d_2350_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1(lean_object* v_context_2353_, lean_object* v_d_2354_){
_start:
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_d_2354_);
return v___x_2356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2357_, lean_object* v_d_2358_, lean_object* v_a_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0_spec__1(v_context_2357_, v_d_2358_);
lean_dec_ref(v_context_2357_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0(lean_object* v_context_2361_, lean_object* v_bytes_2362_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___redArg(v_bytes_2362_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0___boxed(lean_object* v_context_2365_, lean_object* v_bytes_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0_spec__0(v_context_2365_, v_bytes_2366_);
lean_dec_ref(v_bytes_2366_);
lean_dec_ref(v_context_2365_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent(lean_object* v_self_2370_, lean_object* v_type_2371_, lean_object* v_bubbles_2372_, lean_object* v_cancelable_2373_, lean_object* v_detail_2374_){
_start:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2376_ = ((lean_object*)(l_Lasm_JS_Web_CustomEvent_initCustomEvent___closed__0));
v___x_2377_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2377_, 0, v_type_2371_);
v___x_2378_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_bubbles_2372_);
v___x_2379_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_cancelable_2373_);
v___x_2380_ = lean_unsigned_to_nat(4u);
v___x_2381_ = lean_mk_empty_array_with_capacity(v___x_2380_);
v___x_2382_ = lean_array_push(v___x_2381_, v___x_2377_);
v___x_2383_ = lean_array_push(v___x_2382_, v___x_2378_);
v___x_2384_ = lean_array_push(v___x_2383_, v___x_2379_);
v___x_2385_ = lean_array_push(v___x_2384_, v_detail_2374_);
v___x_2386_ = l_Lasm_JS_Web_Support_args(v___x_2385_);
v___x_2387_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2370_, v___x_2376_, v___x_2386_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CustomEvent_initCustomEvent___boxed(lean_object* v_self_2388_, lean_object* v_type_2389_, lean_object* v_bubbles_2390_, lean_object* v_cancelable_2391_, lean_object* v_detail_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lasm_JS_Web_CustomEvent_initCustomEvent(v_self_2388_, v_type_2389_, v_bubbles_2390_, v_cancelable_2391_, v_detail_2392_);
lean_dec(v_cancelable_2391_);
lean_dec(v_bubbles_2390_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(lean_object* v_context_2395_, lean_object* v_d_2396_){
_start:
{
lean_object* v___y_2399_; lean_object* v___y_2400_; 
if (lean_obj_tag(v_d_2396_) == 9)
{
lean_object* v_value_2404_; lean_object* v___x_2405_; 
v_value_2404_ = lean_ctor_get(v_d_2396_, 0);
lean_inc(v_value_2404_);
lean_dec_ref_known(v_d_2396_, 2);
v___x_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2405_, 0, v_value_2404_);
return v___x_2405_;
}
else
{
lean_object* v___x_2406_; lean_object* v_received_2408_; 
v___x_2406_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2396_) == 9)
{
lean_object* v_value_2422_; lean_object* v_description_2423_; uint8_t v___x_2424_; 
v_value_2422_ = lean_ctor_get(v_d_2396_, 0);
v_description_2423_ = lean_ctor_get(v_d_2396_, 1);
v___x_2424_ = lean_string_dec_eq(v_description_2423_, v___x_2406_);
if (v___x_2424_ == 0)
{
goto v___jp_2420_;
}
else
{
uint32_t v___x_2425_; uint64_t v___x_2426_; lean_object* v___x_2427_; uint32_t v___x_2428_; lean_object* v___x_2429_; 
lean_inc_n(v_value_2422_, 2);
lean_dec_ref_known(v_d_2396_, 2);
v___x_2425_ = 206;
v___x_2426_ = 0ULL;
v___x_2427_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2427_, 0, v_value_2422_);
lean_ctor_set(v___x_2427_, 1, v___x_2406_);
v___x_2428_ = lasm_js_value_handle(v_value_2422_);
lean_dec(v_value_2422_);
v___x_2429_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2425_, v___x_2426_, v___x_2427_, v___x_2428_);
lean_dec_ref_known(v___x_2427_, 2);
if (lean_obj_tag(v___x_2429_) == 0)
{
lean_object* v_a_2430_; uint8_t v___x_2431_; 
v_a_2430_ = lean_ctor_get(v___x_2429_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v___x_2429_, 1);
v___x_2431_ = lean_string_validate_utf8(v_a_2430_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
lean_dec(v_a_2430_);
v___x_2432_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2433_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2432_);
v_received_2408_ = v___x_2433_;
goto v___jp_2407_;
}
else
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_string_from_utf8_unchecked(v_a_2430_);
v_received_2408_ = v___x_2434_;
goto v___jp_2407_;
}
}
else
{
lean_object* v___x_2435_; 
lean_dec_ref_known(v___x_2429_, 1);
v___x_2435_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2408_ = v___x_2435_;
goto v___jp_2407_;
}
}
}
else
{
goto v___jp_2420_;
}
v___jp_2407_:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; uint8_t v___x_2418_; 
v___x_2409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2410_ = lean_string_append(v___x_2409_, v_context_2395_);
v___x_2411_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2412_ = lean_string_append(v___x_2410_, v___x_2411_);
v___x_2413_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAbortController___closed__0));
v___x_2414_ = lean_string_append(v___x_2412_, v___x_2413_);
v___x_2415_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2416_ = lean_string_append(v___x_2414_, v___x_2415_);
v___x_2417_ = lean_string_append(v___x_2416_, v_received_2408_);
lean_dec_ref(v_received_2408_);
v___x_2418_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; 
v___x_2419_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2399_ = v___x_2417_;
v___y_2400_ = v___x_2419_;
goto v___jp_2398_;
}
else
{
v___y_2399_ = v___x_2417_;
v___y_2400_ = v___x_2406_;
goto v___jp_2398_;
}
}
v___jp_2420_:
{
lean_object* v___x_2421_; 
v___x_2421_ = l_Lasm_JS_Data_describe(v_d_2396_);
v_received_2408_ = v___x_2421_;
goto v___jp_2407_;
}
}
v___jp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2401_ = lean_string_append(v___y_2399_, v___y_2400_);
v___x_2402_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2401_);
v___x_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
return v___x_2403_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0___boxed(lean_object* v_context_2436_, lean_object* v_d_2437_, lean_object* v_a_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(v_context_2436_, v_d_2437_);
lean_dec_ref(v_context_2436_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(lean_object* v_b_2440_, lean_object* v_args_2441_, uint8_t v_await_2442_){
_start:
{
uint64_t v___y_2445_; uint64_t v___y_2446_; uint64_t v___x_2489_; uint64_t v___y_2491_; 
v___x_2489_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2442_ == 0)
{
uint64_t v___x_2496_; 
v___x_2496_ = 0ULL;
v___y_2491_ = v___x_2496_;
goto v___jp_2490_;
}
else
{
uint64_t v___x_2497_; 
v___x_2497_ = 2ULL;
v___y_2491_ = v___x_2497_;
goto v___jp_2490_;
}
v___jp_2444_:
{
uint64_t v_flags_2447_; uint32_t v___x_2448_; lean_object* v___x_2449_; uint32_t v___x_2450_; lean_object* v___x_2451_; 
v_flags_2447_ = lean_uint64_lor(v___y_2445_, v___y_2446_);
v___x_2448_ = 214;
v___x_2449_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2440_, v_args_2441_);
v___x_2450_ = 0;
v___x_2451_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2448_, v_flags_2447_, v___x_2449_, v___x_2450_);
lean_dec(v___x_2449_);
if (lean_obj_tag(v___x_2451_) == 0)
{
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2453_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2452_);
lean_dec(v_a_2452_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2453_, 1);
v___x_2455_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2440_);
v___x_2456_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0_spec__0(v___x_2455_, v_a_2454_);
lean_dec_ref(v___x_2455_);
return v___x_2456_;
}
else
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2464_; 
v_a_2457_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2464_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2464_ == 0)
{
v___x_2459_ = v___x_2453_;
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2453_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2464_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2462_; 
if (v_isShared_2460_ == 0)
{
v___x_2462_ = v___x_2459_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_a_2457_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2472_; 
v_a_2465_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2472_ == 0)
{
v___x_2467_ = v___x_2451_;
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2451_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2472_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___x_2470_; 
if (v_isShared_2468_ == 0)
{
lean_ctor_set_tag(v___x_2467_, 1);
v___x_2470_ = v___x_2467_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2465_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
}
else
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2488_; 
v_a_2473_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2475_ = v___x_2451_;
v_isShared_2476_ = v_isSharedCheck_2488_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2451_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2488_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2440_);
v___x_2479_ = lean_string_append(v___x_2477_, v___x_2478_);
lean_dec_ref(v___x_2478_);
v___x_2480_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2481_ = lean_string_append(v___x_2479_, v___x_2480_);
v___x_2482_ = lean_io_error_to_string(v_a_2473_);
v___x_2483_ = lean_string_append(v___x_2481_, v___x_2482_);
lean_dec_ref(v___x_2482_);
v___x_2484_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2484_);
v___x_2486_ = v___x_2475_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
v___jp_2490_:
{
uint8_t v_construct_2492_; uint64_t v___x_2493_; 
v_construct_2492_ = lean_ctor_get_uint8(v_b_2440_, sizeof(void*)*4);
v___x_2493_ = lean_uint64_lor(v___x_2489_, v___y_2491_);
if (v_construct_2492_ == 0)
{
uint64_t v___x_2494_; 
v___x_2494_ = 0ULL;
v___y_2445_ = v___x_2493_;
v___y_2446_ = v___x_2494_;
goto v___jp_2444_;
}
else
{
uint64_t v___x_2495_; 
v___x_2495_ = 4ULL;
v___y_2445_ = v___x_2493_;
v___y_2446_ = v___x_2495_;
goto v___jp_2444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0___boxed(lean_object* v_b_2498_, lean_object* v_args_2499_, lean_object* v_await_2500_, lean_object* v_a_2501_){
_start:
{
uint8_t v_await_boxed_2502_; lean_object* v_res_2503_; 
v_await_boxed_2502_ = lean_unbox(v_await_2500_);
v_res_2503_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(v_b_2498_, v_args_2499_, v_await_boxed_2502_);
lean_dec_ref(v_b_2498_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new(){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; uint8_t v___x_2515_; lean_object* v___x_2516_; 
v___x_2513_ = ((lean_object*)(l_Lasm_JS_Web_AbortController_new___closed__2));
v___x_2514_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2515_ = 0;
v___x_2516_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortController_new_spec__0(v___x_2513_, v___x_2514_, v___x_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_new___boxed(lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lasm_JS_Web_AbortController_new();
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1(lean_object* v_context_2519_, lean_object* v_d_2520_){
_start:
{
lean_object* v___y_2523_; lean_object* v___y_2524_; 
if (lean_obj_tag(v_d_2520_) == 9)
{
lean_object* v_value_2528_; lean_object* v___x_2529_; 
v_value_2528_ = lean_ctor_get(v_d_2520_, 0);
lean_inc(v_value_2528_);
lean_dec_ref_known(v_d_2520_, 2);
v___x_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2529_, 0, v_value_2528_);
return v___x_2529_;
}
else
{
lean_object* v___x_2530_; lean_object* v_received_2532_; 
v___x_2530_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2520_) == 9)
{
lean_object* v_value_2546_; lean_object* v_description_2547_; uint8_t v___x_2548_; 
v_value_2546_ = lean_ctor_get(v_d_2520_, 0);
v_description_2547_ = lean_ctor_get(v_d_2520_, 1);
v___x_2548_ = lean_string_dec_eq(v_description_2547_, v___x_2530_);
if (v___x_2548_ == 0)
{
goto v___jp_2544_;
}
else
{
uint32_t v___x_2549_; uint64_t v___x_2550_; lean_object* v___x_2551_; uint32_t v___x_2552_; lean_object* v___x_2553_; 
lean_inc_n(v_value_2546_, 2);
lean_dec_ref_known(v_d_2520_, 2);
v___x_2549_ = 206;
v___x_2550_ = 0ULL;
v___x_2551_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2551_, 0, v_value_2546_);
lean_ctor_set(v___x_2551_, 1, v___x_2530_);
v___x_2552_ = lasm_js_value_handle(v_value_2546_);
lean_dec(v_value_2546_);
v___x_2553_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2549_, v___x_2550_, v___x_2551_, v___x_2552_);
lean_dec_ref_known(v___x_2551_, 2);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; uint8_t v___x_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2555_ = lean_string_validate_utf8(v_a_2554_);
if (v___x_2555_ == 0)
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
lean_dec(v_a_2554_);
v___x_2556_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2557_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2556_);
v_received_2532_ = v___x_2557_;
goto v___jp_2531_;
}
else
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_string_from_utf8_unchecked(v_a_2554_);
v_received_2532_ = v___x_2558_;
goto v___jp_2531_;
}
}
else
{
lean_object* v___x_2559_; 
lean_dec_ref_known(v___x_2553_, 1);
v___x_2559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2532_ = v___x_2559_;
goto v___jp_2531_;
}
}
}
else
{
goto v___jp_2544_;
}
v___jp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2534_ = lean_string_append(v___x_2533_, v_context_2519_);
v___x_2535_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2536_ = lean_string_append(v___x_2534_, v___x_2535_);
v___x_2537_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSAbortSignal___closed__0));
v___x_2538_ = lean_string_append(v___x_2536_, v___x_2537_);
v___x_2539_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2540_ = lean_string_append(v___x_2538_, v___x_2539_);
v___x_2541_ = lean_string_append(v___x_2540_, v_received_2532_);
lean_dec_ref(v_received_2532_);
v___x_2542_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; 
v___x_2543_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2523_ = v___x_2541_;
v___y_2524_ = v___x_2543_;
goto v___jp_2522_;
}
else
{
v___y_2523_ = v___x_2541_;
v___y_2524_ = v___x_2530_;
goto v___jp_2522_;
}
}
v___jp_2544_:
{
lean_object* v___x_2545_; 
v___x_2545_ = l_Lasm_JS_Data_describe(v_d_2520_);
v_received_2532_ = v___x_2545_;
goto v___jp_2531_;
}
}
v___jp_2522_:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2525_ = lean_string_append(v___y_2523_, v___y_2524_);
v___x_2526_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
v___x_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
return v___x_2527_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2560_, lean_object* v_d_2561_, lean_object* v_a_2562_){
_start:
{
lean_object* v_res_2563_; 
v_res_2563_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1(v_context_2560_, v_d_2561_);
lean_dec_ref(v_context_2560_);
return v_res_2563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0(lean_object* v_context_2564_, lean_object* v_bytes_2565_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2565_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
v___x_2569_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1(v_context_2564_, v_a_2568_);
return v___x_2569_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
v_a_2570_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2567_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2567_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0___boxed(lean_object* v_context_2578_, lean_object* v_bytes_2579_, lean_object* v_a_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0(v_context_2578_, v_bytes_2579_);
lean_dec_ref(v_bytes_2579_);
lean_dec_ref(v_context_2578_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object* v_o_2582_, lean_object* v_key_2583_){
_start:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_inc_ref(v_key_2583_);
v___x_2585_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2585_, 0, v_key_2583_);
v___x_2586_ = l_Lasm_JS_Wire_encodeIO(v___x_2585_);
lean_dec_ref_known(v___x_2585_, 1);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; uint32_t v___x_2588_; uint32_t v___x_2589_; uint64_t v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_a_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v___x_2588_ = 203;
v___x_2589_ = lasm_js_value_handle(v_o_2582_);
v___x_2590_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_2591_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2592_, 0, v_o_2582_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = lasm_js_call(v___x_2588_, v___x_2589_, v___x_2590_, v_a_2587_, v___x_2592_);
lean_dec_ref_known(v___x_2592_, 2);
lean_dec(v_a_2587_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v___x_2595_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_2596_ = l_String_quote(v_key_2583_);
v___x_2597_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
v___x_2598_ = lean_unsigned_to_nat(120u);
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = l_Std_Format_pretty(v___x_2597_, v___x_2598_, v___x_2599_, v___x_2599_);
v___x_2601_ = lean_string_append(v___x_2595_, v___x_2600_);
lean_dec_ref(v___x_2600_);
v___x_2602_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0(v___x_2601_, v_a_2594_);
lean_dec(v_a_2594_);
lean_dec_ref(v___x_2601_);
return v___x_2602_;
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_dec_ref(v_key_2583_);
v_a_2603_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2593_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2593_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
else
{
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec_ref(v_key_2583_);
lean_dec(v_o_2582_);
v_a_2611_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2586_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2586_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0___boxed(lean_object* v_o_2619_, lean_object* v_key_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v_res_2622_; 
v_res_2622_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_o_2619_, v_key_2620_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal(lean_object* v_self_2623_){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSAddEventListenerOptions___lam__0___closed__3));
v___x_2626_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_2623_, v___x_2625_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_signal___boxed(lean_object* v_self_2627_, lean_object* v_a_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lasm_JS_Web_AbortController_signal(v_self_2627_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort(lean_object* v_self_2631_, lean_object* v_reason_2632_){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2634_ = ((lean_object*)(l_Lasm_JS_Web_AbortController_abort___closed__0));
v___x_2635_ = lean_unsigned_to_nat(1u);
v___x_2636_ = lean_mk_empty_array_with_capacity(v___x_2635_);
v___x_2637_ = lean_array_push(v___x_2636_, v_reason_2632_);
v___x_2638_ = l_Lasm_JS_Web_Support_args(v___x_2637_);
v___x_2639_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2631_, v___x_2634_, v___x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortController_abort___boxed(lean_object* v_self_2640_, lean_object* v_reason_2641_, lean_object* v_a_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lasm_JS_Web_AbortController_abort(v_self_2640_, v_reason_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted(lean_object* v_self_2645_){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_aborted___closed__0));
v___x_2648_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2645_, v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_aborted___boxed(lean_object* v_self_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lasm_JS_Web_AbortSignal_aborted(v_self_2649_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason(lean_object* v_self_2653_){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_reason___closed__0));
v___x_2656_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2653_, v___x_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_reason___boxed(lean_object* v_self_2657_, lean_object* v_a_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lasm_JS_Web_AbortSignal_reason(v_self_2657_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(lean_object* v_context_2661_, lean_object* v_d_2662_){
_start:
{
lean_object* v___y_2668_; lean_object* v___y_2669_; 
switch(lean_obj_tag(v_d_2662_))
{
case 1:
{
goto v___jp_2664_;
}
case 0:
{
goto v___jp_2664_;
}
default: 
{
if (lean_obj_tag(v_d_2662_) == 9)
{
lean_object* v_value_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_value_2673_ = lean_ctor_get(v_d_2662_, 0);
lean_inc(v_value_2673_);
lean_dec_ref_known(v_d_2662_, 2);
v___x_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2674_, 0, v_value_2673_);
v___x_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
return v___x_2675_;
}
else
{
lean_object* v___x_2676_; lean_object* v_received_2678_; 
v___x_2676_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2662_) == 9)
{
lean_object* v_value_2692_; lean_object* v_description_2693_; uint8_t v___x_2694_; 
v_value_2692_ = lean_ctor_get(v_d_2662_, 0);
v_description_2693_ = lean_ctor_get(v_d_2662_, 1);
v___x_2694_ = lean_string_dec_eq(v_description_2693_, v___x_2676_);
if (v___x_2694_ == 0)
{
goto v___jp_2690_;
}
else
{
uint32_t v___x_2695_; uint64_t v___x_2696_; lean_object* v___x_2697_; uint32_t v___x_2698_; lean_object* v___x_2699_; 
lean_inc_n(v_value_2692_, 2);
lean_dec_ref_known(v_d_2662_, 2);
v___x_2695_ = 206;
v___x_2696_ = 0ULL;
v___x_2697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2697_, 0, v_value_2692_);
lean_ctor_set(v___x_2697_, 1, v___x_2676_);
v___x_2698_ = lasm_js_value_handle(v_value_2692_);
lean_dec(v_value_2692_);
v___x_2699_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2695_, v___x_2696_, v___x_2697_, v___x_2698_);
lean_dec_ref_known(v___x_2697_, 2);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; uint8_t v___x_2701_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2701_ = lean_string_validate_utf8(v_a_2700_);
if (v___x_2701_ == 0)
{
lean_object* v___x_2702_; lean_object* v___x_2703_; 
lean_dec(v_a_2700_);
v___x_2702_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_2703_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2702_);
v_received_2678_ = v___x_2703_;
goto v___jp_2677_;
}
else
{
lean_object* v___x_2704_; 
v___x_2704_ = lean_string_from_utf8_unchecked(v_a_2700_);
v_received_2678_ = v___x_2704_;
goto v___jp_2677_;
}
}
else
{
lean_object* v___x_2705_; 
lean_dec_ref_known(v___x_2699_, 1);
v___x_2705_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2678_ = v___x_2705_;
goto v___jp_2677_;
}
}
}
else
{
goto v___jp_2690_;
}
v___jp_2677_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; uint8_t v___x_2688_; 
v___x_2679_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2680_ = lean_string_append(v___x_2679_, v_context_2661_);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2682_ = lean_string_append(v___x_2680_, v___x_2681_);
v___x_2683_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___closed__0));
v___x_2684_ = lean_string_append(v___x_2682_, v___x_2683_);
v___x_2685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2686_ = lean_string_append(v___x_2684_, v___x_2685_);
v___x_2687_ = lean_string_append(v___x_2686_, v_received_2678_);
lean_dec_ref(v_received_2678_);
v___x_2688_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; 
v___x_2689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2668_ = v___x_2687_;
v___y_2669_ = v___x_2689_;
goto v___jp_2667_;
}
else
{
v___y_2668_ = v___x_2687_;
v___y_2669_ = v___x_2676_;
goto v___jp_2667_;
}
}
v___jp_2690_:
{
lean_object* v___x_2691_; 
v___x_2691_ = l_Lasm_JS_Data_describe(v_d_2662_);
v_received_2678_ = v___x_2691_;
goto v___jp_2677_;
}
}
}
}
v___jp_2664_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2665_ = lean_box(0);
v___x_2666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
return v___x_2666_;
}
v___jp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2670_ = lean_string_append(v___y_2668_, v___y_2669_);
v___x_2671_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
return v___x_2672_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2706_, lean_object* v_d_2707_, lean_object* v_a_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(v_context_2706_, v_d_2707_);
lean_dec_ref(v_context_2706_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(lean_object* v_context_2710_, lean_object* v_bytes_2711_){
_start:
{
lean_object* v___x_2713_; 
v___x_2713_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2711_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v_a_2714_; lean_object* v___x_2715_; 
v_a_2714_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2713_, 1);
v___x_2715_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0_spec__1(v_context_2710_, v_a_2714_);
return v___x_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
v_a_2716_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2713_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2713_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0___boxed(lean_object* v_context_2724_, lean_object* v_bytes_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(v_context_2724_, v_bytes_2725_);
lean_dec_ref(v_bytes_2725_);
lean_dec_ref(v_context_2724_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(lean_object* v_o_2728_, lean_object* v_key_2729_){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
lean_inc_ref(v_key_2729_);
v___x_2731_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_key_2729_);
v___x_2732_ = l_Lasm_JS_Wire_encodeIO(v___x_2731_);
lean_dec_ref_known(v___x_2731_, 1);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; uint32_t v___x_2734_; uint32_t v___x_2735_; uint64_t v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2733_);
lean_dec_ref_known(v___x_2732_, 1);
v___x_2734_ = 203;
v___x_2735_ = lasm_js_value_handle(v_o_2728_);
v___x_2736_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
v___x_2737_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2738_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2738_, 0, v_o_2728_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = lasm_js_call(v___x_2734_, v___x_2735_, v___x_2736_, v_a_2733_, v___x_2738_);
lean_dec_ref_known(v___x_2738_, 2);
lean_dec(v_a_2733_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref_known(v___x_2739_, 1);
v___x_2741_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0___closed__0));
v___x_2742_ = l_String_quote(v_key_2729_);
v___x_2743_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2742_);
v___x_2744_ = lean_unsigned_to_nat(120u);
v___x_2745_ = lean_unsigned_to_nat(0u);
v___x_2746_ = l_Std_Format_pretty(v___x_2743_, v___x_2744_, v___x_2745_, v___x_2745_);
v___x_2747_ = lean_string_append(v___x_2741_, v___x_2746_);
lean_dec_ref(v___x_2746_);
v___x_2748_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0_spec__0(v___x_2747_, v_a_2740_);
lean_dec(v_a_2740_);
lean_dec_ref(v___x_2747_);
return v___x_2748_;
}
else
{
lean_object* v_a_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2756_; 
lean_dec_ref(v_key_2729_);
v_a_2749_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2756_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2756_ == 0)
{
v___x_2751_ = v___x_2739_;
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_a_2749_);
lean_dec(v___x_2739_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2756_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v___x_2754_; 
if (v_isShared_2752_ == 0)
{
v___x_2754_ = v___x_2751_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v_a_2749_);
v___x_2754_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
return v___x_2754_;
}
}
}
}
else
{
lean_object* v_a_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
lean_dec_ref(v_key_2729_);
lean_dec(v_o_2728_);
v_a_2757_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2764_ == 0)
{
v___x_2759_ = v___x_2732_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_inc(v_a_2757_);
lean_dec(v___x_2732_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2757_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0___boxed(lean_object* v_o_2765_, lean_object* v_key_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(v_o_2765_, v_key_2766_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort(lean_object* v_self_2770_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_onabort___closed__0));
v___x_2773_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortSignal_onabort_spec__0(v_self_2770_, v___x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_onabort___boxed(lean_object* v_self_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lasm_JS_Web_AbortSignal_onabort(v_self_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort(lean_object* v_self_2777_, lean_object* v_value_2778_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_onabort___closed__0));
if (lean_obj_tag(v_value_2778_) == 0)
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = lean_box(1);
v___x_2782_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2777_, v___x_2780_, v___x_2781_);
return v___x_2782_;
}
else
{
lean_object* v_val_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_val_2783_ = lean_ctor_get(v_value_2778_, 0);
v___x_2784_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
lean_inc(v_val_2783_);
v___x_2785_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2785_, 0, v_val_2783_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_Event_setCancelBubble_spec__0(v_self_2777_, v___x_2780_, v___x_2785_);
return v___x_2786_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_setOnabort___boxed(lean_object* v_self_2787_, lean_object* v_value_2788_, lean_object* v_a_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lasm_JS_Web_AbortSignal_setOnabort(v_self_2787_, v_value_2788_);
lean_dec(v_value_2788_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(lean_object* v_b_2791_, lean_object* v_args_2792_, uint8_t v_await_2793_){
_start:
{
uint64_t v___y_2796_; uint64_t v___y_2797_; uint64_t v___x_2840_; uint64_t v___y_2842_; 
v___x_2840_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_2793_ == 0)
{
uint64_t v___x_2847_; 
v___x_2847_ = 0ULL;
v___y_2842_ = v___x_2847_;
goto v___jp_2841_;
}
else
{
uint64_t v___x_2848_; 
v___x_2848_ = 2ULL;
v___y_2842_ = v___x_2848_;
goto v___jp_2841_;
}
v___jp_2795_:
{
uint64_t v_flags_2798_; uint32_t v___x_2799_; lean_object* v___x_2800_; uint32_t v___x_2801_; lean_object* v___x_2802_; 
v_flags_2798_ = lean_uint64_lor(v___y_2796_, v___y_2797_);
v___x_2799_ = 214;
v___x_2800_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2791_, v_args_2792_);
v___x_2801_ = 0;
v___x_2802_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2799_, v_flags_2798_, v___x_2800_, v___x_2801_);
lean_dec(v___x_2800_);
if (lean_obj_tag(v___x_2802_) == 0)
{
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2804_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
lean_inc(v_a_2803_);
lean_dec_ref_known(v___x_2802_, 1);
v___x_2804_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2803_);
lean_dec(v_a_2803_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2805_);
lean_dec_ref_known(v___x_2804_, 1);
v___x_2806_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2791_);
v___x_2807_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0_spec__0_spec__1(v___x_2806_, v_a_2805_);
lean_dec_ref(v___x_2806_);
return v___x_2807_;
}
else
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v_a_2808_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2804_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2804_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
v_a_2816_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2802_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2802_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set_tag(v___x_2818_, 1);
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2816_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2839_; 
v_a_2824_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2826_ = v___x_2802_;
v_isShared_2827_ = v_isSharedCheck_2839_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2802_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2839_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
v___x_2828_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2829_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2791_);
v___x_2830_ = lean_string_append(v___x_2828_, v___x_2829_);
lean_dec_ref(v___x_2829_);
v___x_2831_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_2832_ = lean_string_append(v___x_2830_, v___x_2831_);
v___x_2833_ = lean_io_error_to_string(v_a_2824_);
v___x_2834_ = lean_string_append(v___x_2832_, v___x_2833_);
lean_dec_ref(v___x_2833_);
v___x_2835_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 0, v___x_2835_);
v___x_2837_ = v___x_2826_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2835_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
v___jp_2841_:
{
uint8_t v_construct_2843_; uint64_t v___x_2844_; 
v_construct_2843_ = lean_ctor_get_uint8(v_b_2791_, sizeof(void*)*4);
v___x_2844_ = lean_uint64_lor(v___x_2840_, v___y_2842_);
if (v_construct_2843_ == 0)
{
uint64_t v___x_2845_; 
v___x_2845_ = 0ULL;
v___y_2796_ = v___x_2844_;
v___y_2797_ = v___x_2845_;
goto v___jp_2795_;
}
else
{
uint64_t v___x_2846_; 
v___x_2846_ = 4ULL;
v___y_2796_ = v___x_2844_;
v___y_2797_ = v___x_2846_;
goto v___jp_2795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0___boxed(lean_object* v_b_2849_, lean_object* v_args_2850_, lean_object* v_await_2851_, lean_object* v_a_2852_){
_start:
{
uint8_t v_await_boxed_2853_; lean_object* v_res_2854_; 
v_await_boxed_2853_ = lean_unbox(v_await_2851_);
v_res_2854_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v_b_2849_, v_args_2850_, v_await_boxed_2853_);
lean_dec_ref(v_b_2849_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort(lean_object* v_reason_2863_){
_start:
{
uint8_t v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2865_ = 0;
v___x_2866_ = lean_unsigned_to_nat(1u);
v___x_2867_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_abort___closed__2));
v___x_2868_ = lean_mk_empty_array_with_capacity(v___x_2866_);
v___x_2869_ = lean_array_push(v___x_2868_, v_reason_2863_);
v___x_2870_ = l_Lasm_JS_Web_Support_args(v___x_2869_);
v___x_2871_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_2867_, v___x_2870_, v___x_2865_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_abort___boxed(lean_object* v_reason_2872_, lean_object* v_a_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lasm_JS_Web_AbortSignal_abort(v_reason_2872_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout(lean_object* v_milliseconds_2883_){
_start:
{
uint8_t v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___y_2889_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; 
v___x_2885_ = 0;
v___x_2886_ = lean_unsigned_to_nat(1u);
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_timeout___closed__2));
v___x_2894_ = lean_nat_to_int(v_milliseconds_2883_);
v___x_2895_ = lean_nat_abs(v___x_2894_);
v___x_2896_ = lean_cstr_to_nat("9007199254740991");
v___x_2897_ = lean_nat_dec_le(v___x_2895_, v___x_2896_);
lean_dec(v___x_2895_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; 
v___x_2898_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2894_);
v___y_2889_ = v___x_2898_;
goto v___jp_2888_;
}
else
{
double v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = l_Float_ofInt(v___x_2894_);
lean_dec(v___x_2894_);
v___x_2900_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2900_, 0, v___x_2899_);
v___y_2889_ = v___x_2900_;
goto v___jp_2888_;
}
v___jp_2888_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2886_);
v___x_2891_ = lean_array_push(v___x_2890_, v___y_2889_);
v___x_2892_ = l_Lasm_JS_Web_Support_args(v___x_2891_);
v___x_2893_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_2887_, v___x_2892_, v___x_2885_);
return v___x_2893_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_timeout___boxed(lean_object* v_milliseconds_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lasm_JS_Web_AbortSignal_timeout(v_milliseconds_2901_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(size_t v_sz_2904_, size_t v_i_2905_, lean_object* v_bs_2906_){
_start:
{
uint8_t v___x_2907_; 
v___x_2907_ = lean_usize_dec_lt(v_i_2905_, v_sz_2904_);
if (v___x_2907_ == 0)
{
return v_bs_2906_;
}
else
{
lean_object* v_v_2908_; lean_object* v___x_2909_; lean_object* v_bs_x27_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; size_t v___x_2913_; size_t v___x_2914_; lean_object* v___x_2915_; 
v_v_2908_ = lean_array_uget(v_bs_2906_, v_i_2905_);
v___x_2909_ = lean_unsigned_to_nat(0u);
v_bs_x27_2910_ = lean_array_uset(v_bs_2906_, v_i_2905_, v___x_2909_);
v___x_2911_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
v___x_2912_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2912_, 0, v_v_2908_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = ((size_t)1ULL);
v___x_2914_ = lean_usize_add(v_i_2905_, v___x_2913_);
v___x_2915_ = lean_array_uset(v_bs_x27_2910_, v_i_2905_, v___x_2912_);
v_i_2905_ = v___x_2914_;
v_bs_2906_ = v___x_2915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0___boxed(lean_object* v_sz_2917_, lean_object* v_i_2918_, lean_object* v_bs_2919_){
_start:
{
size_t v_sz_boxed_2920_; size_t v_i_boxed_2921_; lean_object* v_res_2922_; 
v_sz_boxed_2920_ = lean_unbox_usize(v_sz_2917_);
lean_dec(v_sz_2917_);
v_i_boxed_2921_ = lean_unbox_usize(v_i_2918_);
lean_dec(v_i_2918_);
v_res_2922_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(v_sz_boxed_2920_, v_i_boxed_2921_, v_bs_2919_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any(lean_object* v_signals_2931_){
_start:
{
uint8_t v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; size_t v_sz_2936_; size_t v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2933_ = 0;
v___x_2934_ = lean_unsigned_to_nat(1u);
v___x_2935_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_any___closed__2));
v_sz_2936_ = lean_array_size(v_signals_2931_);
v___x_2937_ = ((size_t)0ULL);
v___x_2938_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_AbortSignal_any_spec__0(v_sz_2936_, v___x_2937_, v_signals_2931_);
v___x_2939_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2939_, 0, v___x_2938_);
v___x_2940_ = lean_mk_empty_array_with_capacity(v___x_2934_);
v___x_2941_ = lean_array_push(v___x_2940_, v___x_2939_);
v___x_2942_ = l_Lasm_JS_Web_Support_args(v___x_2941_);
v___x_2943_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_2935_, v___x_2942_, v___x_2933_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_any___boxed(lean_object* v_signals_2944_, lean_object* v_a_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lasm_JS_Web_AbortSignal_any(v_signals_2944_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted(lean_object* v_self_2948_){
_start:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Web_AbortSignal_throwIfAborted___closed__0));
v___x_2951_ = lean_obj_once(&l_Lasm_JS_Web_EventTarget_new___closed__5, &l_Lasm_JS_Web_EventTarget_new___closed__5_once, _init_l_Lasm_JS_Web_EventTarget_new___closed__5);
v___x_2952_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2948_, v___x_2950_, v___x_2951_);
return v___x_2952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_AbortSignal_throwIfAborted___boxed(lean_object* v_self_2953_, lean_object* v_a_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lasm_JS_Web_AbortSignal_throwIfAborted(v_self_2953_);
return v_res_2955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object* v_x_2956_){
_start:
{
if (lean_obj_tag(v_x_2956_) == 0)
{
lean_object* v___x_2957_; 
v___x_2957_ = lean_box(0);
return v___x_2957_;
}
else
{
lean_object* v_val_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2965_; 
v_val_2958_ = lean_ctor_get(v_x_2956_, 0);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_x_2956_);
if (v_isSharedCheck_2965_ == 0)
{
v___x_2960_ = v_x_2956_;
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_val_2958_);
lean_dec(v_x_2956_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2965_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2963_; 
if (v_isShared_2961_ == 0)
{
lean_ctor_set_tag(v___x_2960_, 4);
v___x_2963_ = v___x_2960_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_val_2958_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(lean_object* v_context_2966_, lean_object* v_d_2967_){
_start:
{
lean_object* v___y_2970_; lean_object* v___y_2971_; 
if (lean_obj_tag(v_d_2967_) == 9)
{
lean_object* v_value_2975_; lean_object* v___x_2976_; 
v_value_2975_ = lean_ctor_get(v_d_2967_, 0);
lean_inc(v_value_2975_);
lean_dec_ref_known(v_d_2967_, 2);
v___x_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2976_, 0, v_value_2975_);
return v___x_2976_;
}
else
{
lean_object* v___x_2977_; lean_object* v_received_2979_; 
v___x_2977_ = ((lean_object*)(l_Lasm_JS_Web_instToJSEventTarget___lam__0___closed__0));
if (lean_obj_tag(v_d_2967_) == 9)
{
lean_object* v_value_2993_; lean_object* v_description_2994_; uint8_t v___x_2995_; 
v_value_2993_ = lean_ctor_get(v_d_2967_, 0);
v_description_2994_ = lean_ctor_get(v_d_2967_, 1);
v___x_2995_ = lean_string_dec_eq(v_description_2994_, v___x_2977_);
if (v___x_2995_ == 0)
{
goto v___jp_2991_;
}
else
{
uint32_t v___x_2996_; uint64_t v___x_2997_; lean_object* v___x_2998_; uint32_t v___x_2999_; lean_object* v___x_3000_; 
lean_inc_n(v_value_2993_, 2);
lean_dec_ref_known(v_d_2967_, 2);
v___x_2996_ = 206;
v___x_2997_ = 0ULL;
v___x_2998_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2998_, 0, v_value_2993_);
lean_ctor_set(v___x_2998_, 1, v___x_2977_);
v___x_2999_ = lasm_js_value_handle(v_value_2993_);
lean_dec(v_value_2993_);
v___x_3000_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2996_, v___x_2997_, v___x_2998_, v___x_2999_);
lean_dec_ref_known(v___x_2998_, 2);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; uint8_t v___x_3002_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_a_3001_);
lean_dec_ref_known(v___x_3000_, 1);
v___x_3002_ = lean_string_validate_utf8(v_a_3001_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_dec(v_a_3001_);
v___x_3003_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__9);
v___x_3004_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3003_);
v_received_2979_ = v___x_3004_;
goto v___jp_2978_;
}
else
{
lean_object* v___x_3005_; 
v___x_3005_ = lean_string_from_utf8_unchecked(v_a_3001_);
v_received_2979_ = v___x_3005_;
goto v___jp_2978_;
}
}
else
{
lean_object* v___x_3006_; 
lean_dec_ref_known(v___x_3000_, 1);
v___x_3006_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__10));
v_received_2979_ = v___x_3006_;
goto v___jp_2978_;
}
}
}
else
{
goto v___jp_2991_;
}
v___jp_2978_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_2981_ = lean_string_append(v___x_2980_, v_context_2966_);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__1));
v___x_2983_ = lean_string_append(v___x_2981_, v___x_2982_);
v___x_2984_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMException___closed__0));
v___x_2985_ = lean_string_append(v___x_2983_, v___x_2984_);
v___x_2986_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__2));
v___x_2987_ = lean_string_append(v___x_2985_, v___x_2986_);
v___x_2988_ = lean_string_append(v___x_2987_, v_received_2979_);
lean_dec_ref(v_received_2979_);
v___x_2989_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__4);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; 
v___x_2990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__5));
v___y_2970_ = v___x_2988_;
v___y_2971_ = v___x_2990_;
goto v___jp_2969_;
}
else
{
v___y_2970_ = v___x_2988_;
v___y_2971_ = v___x_2977_;
goto v___jp_2969_;
}
}
v___jp_2991_:
{
lean_object* v___x_2992_; 
v___x_2992_ = l_Lasm_JS_Data_describe(v_d_2967_);
v_received_2979_ = v___x_2992_;
goto v___jp_2978_;
}
}
v___jp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = lean_string_append(v___y_2970_, v___y_2971_);
v___x_2973_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
v___x_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1___boxed(lean_object* v_context_3007_, lean_object* v_d_3008_, lean_object* v_a_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(v_context_3007_, v_d_3008_);
lean_dec_ref(v_context_3007_);
return v_res_3010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(lean_object* v_b_3011_, lean_object* v_args_3012_, uint8_t v_await_3013_){
_start:
{
uint64_t v___y_3016_; uint64_t v___y_3017_; uint64_t v___x_3060_; uint64_t v___y_3062_; 
v___x_3060_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__1);
if (v_await_3013_ == 0)
{
uint64_t v___x_3067_; 
v___x_3067_ = 0ULL;
v___y_3062_ = v___x_3067_;
goto v___jp_3061_;
}
else
{
uint64_t v___x_3068_; 
v___x_3068_ = 2ULL;
v___y_3062_ = v___x_3068_;
goto v___jp_3061_;
}
v___jp_3015_:
{
uint64_t v_flags_3018_; uint32_t v___x_3019_; lean_object* v___x_3020_; uint32_t v___x_3021_; lean_object* v___x_3022_; 
v_flags_3018_ = lean_uint64_lor(v___y_3016_, v___y_3017_);
v___x_3019_ = 214;
v___x_3020_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3011_, v_args_3012_);
v___x_3021_ = 0;
v___x_3022_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3019_, v_flags_3018_, v___x_3020_, v___x_3021_);
lean_dec(v___x_3020_);
if (lean_obj_tag(v___x_3022_) == 0)
{
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3023_);
lean_dec(v_a_3023_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
v___x_3026_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3011_);
v___x_3027_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1_spec__1(v___x_3026_, v_a_3025_);
lean_dec_ref(v___x_3026_);
return v___x_3027_;
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
v_a_3028_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3024_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3024_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
v_a_3036_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3022_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3022_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 1);
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3059_; 
v_a_3044_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3046_ = v___x_3022_;
v_isShared_3047_ = v_isSharedCheck_3059_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3022_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3059_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3057_; 
v___x_3048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_EventListener_ofFn_spec__0_spec__0___closed__0));
v___x_3049_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3011_);
v___x_3050_ = lean_string_append(v___x_3048_, v___x_3049_);
lean_dec_ref(v___x_3049_);
v___x_3051_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_EventTarget_new_spec__0___closed__0));
v___x_3052_ = lean_string_append(v___x_3050_, v___x_3051_);
v___x_3053_ = lean_io_error_to_string(v_a_3044_);
v___x_3054_ = lean_string_append(v___x_3052_, v___x_3053_);
lean_dec_ref(v___x_3053_);
v___x_3055_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 0, v___x_3055_);
v___x_3057_ = v___x_3046_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v___x_3055_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
v___jp_3061_:
{
uint8_t v_construct_3063_; uint64_t v___x_3064_; 
v_construct_3063_ = lean_ctor_get_uint8(v_b_3011_, sizeof(void*)*4);
v___x_3064_ = lean_uint64_lor(v___x_3060_, v___y_3062_);
if (v_construct_3063_ == 0)
{
uint64_t v___x_3065_; 
v___x_3065_ = 0ULL;
v___y_3016_ = v___x_3064_;
v___y_3017_ = v___x_3065_;
goto v___jp_3015_;
}
else
{
uint64_t v___x_3066_; 
v___x_3066_ = 4ULL;
v___y_3016_ = v___x_3064_;
v___y_3017_ = v___x_3066_;
goto v___jp_3015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1___boxed(lean_object* v_b_3069_, lean_object* v_args_3070_, lean_object* v_await_3071_, lean_object* v_a_3072_){
_start:
{
uint8_t v_await_boxed_3073_; lean_object* v_res_3074_; 
v_await_boxed_3073_ = lean_unbox(v_await_3071_);
v_res_3074_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(v_b_3069_, v_args_3070_, v_await_boxed_3073_);
lean_dec_ref(v_b_3069_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new(lean_object* v_message_3083_, lean_object* v_name_3084_){
_start:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; lean_object* v___x_3095_; 
v___x_3086_ = lean_unsigned_to_nat(2u);
v___x_3087_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_new___closed__2));
v___x_3088_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_message_3083_);
v___x_3089_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_name_3084_);
v___x_3090_ = lean_mk_empty_array_with_capacity(v___x_3086_);
v___x_3091_ = lean_array_push(v___x_3090_, v___x_3088_);
v___x_3092_ = lean_array_push(v___x_3091_, v___x_3089_);
v___x_3093_ = l_Lasm_JS_Web_Support_args(v___x_3092_);
v___x_3094_ = 0;
v___x_3095_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMException_new_spec__1(v___x_3087_, v___x_3093_, v___x_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_new___boxed(lean_object* v_message_3096_, lean_object* v_name_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Lasm_JS_Web_DOMException_new(v_message_3096_, v_name_3097_);
return v_res_3099_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INDEX__SIZE__ERR(void){
_start:
{
lean_object* v___x_3100_; 
v___x_3100_ = lean_unsigned_to_nat(1u);
return v___x_3100_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_DOMSTRING__SIZE__ERR(void){
_start:
{
lean_object* v___x_3101_; 
v___x_3101_ = lean_unsigned_to_nat(2u);
return v___x_3101_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_HIERARCHY__REQUEST__ERR(void){
_start:
{
lean_object* v___x_3102_; 
v___x_3102_ = lean_unsigned_to_nat(3u);
return v___x_3102_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_WRONG__DOCUMENT__ERR(void){
_start:
{
lean_object* v___x_3103_; 
v___x_3103_ = lean_unsigned_to_nat(4u);
return v___x_3103_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__CHARACTER__ERR(void){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = lean_unsigned_to_nat(5u);
return v___x_3104_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NO__DATA__ALLOWED__ERR(void){
_start:
{
lean_object* v___x_3105_; 
v___x_3105_ = lean_unsigned_to_nat(6u);
return v___x_3105_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NO__MODIFICATION__ALLOWED__ERR(void){
_start:
{
lean_object* v___x_3106_; 
v___x_3106_ = lean_unsigned_to_nat(7u);
return v___x_3106_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NOT__FOUND__ERR(void){
_start:
{
lean_object* v___x_3107_; 
v___x_3107_ = lean_unsigned_to_nat(8u);
return v___x_3107_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NOT__SUPPORTED__ERR(void){
_start:
{
lean_object* v___x_3108_; 
v___x_3108_ = lean_unsigned_to_nat(9u);
return v___x_3108_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INUSE__ATTRIBUTE__ERR(void){
_start:
{
lean_object* v___x_3109_; 
v___x_3109_ = lean_unsigned_to_nat(10u);
return v___x_3109_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__STATE__ERR(void){
_start:
{
lean_object* v___x_3110_; 
v___x_3110_ = lean_unsigned_to_nat(11u);
return v___x_3110_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_SYNTAX__ERR(void){
_start:
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_unsigned_to_nat(12u);
return v___x_3111_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__MODIFICATION__ERR(void){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_unsigned_to_nat(13u);
return v___x_3112_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NAMESPACE__ERR(void){
_start:
{
lean_object* v___x_3113_; 
v___x_3113_ = lean_unsigned_to_nat(14u);
return v___x_3113_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__ACCESS__ERR(void){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = lean_unsigned_to_nat(15u);
return v___x_3114_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_VALIDATION__ERR(void){
_start:
{
lean_object* v___x_3115_; 
v___x_3115_ = lean_unsigned_to_nat(16u);
return v___x_3115_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_TYPE__MISMATCH__ERR(void){
_start:
{
lean_object* v___x_3116_; 
v___x_3116_ = lean_unsigned_to_nat(17u);
return v___x_3116_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_SECURITY__ERR(void){
_start:
{
lean_object* v___x_3117_; 
v___x_3117_ = lean_unsigned_to_nat(18u);
return v___x_3117_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_NETWORK__ERR(void){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = lean_unsigned_to_nat(19u);
return v___x_3118_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_ABORT__ERR(void){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = lean_unsigned_to_nat(20u);
return v___x_3119_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_URL__MISMATCH__ERR(void){
_start:
{
lean_object* v___x_3120_; 
v___x_3120_ = lean_unsigned_to_nat(21u);
return v___x_3120_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_QUOTA__EXCEEDED__ERR(void){
_start:
{
lean_object* v___x_3121_; 
v___x_3121_ = lean_unsigned_to_nat(22u);
return v___x_3121_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_TIMEOUT__ERR(void){
_start:
{
lean_object* v___x_3122_; 
v___x_3122_ = lean_unsigned_to_nat(23u);
return v___x_3122_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_INVALID__NODE__TYPE__ERR(void){
_start:
{
lean_object* v___x_3123_; 
v___x_3123_ = lean_unsigned_to_nat(24u);
return v___x_3123_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMException_DATA__CLONE__ERR(void){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = lean_unsigned_to_nat(25u);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name(lean_object* v_self_3126_){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_name___closed__0));
v___x_3129_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3126_, v___x_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_name___boxed(lean_object* v_self_3130_, lean_object* v_a_3131_){
_start:
{
lean_object* v_res_3132_; 
v_res_3132_ = l_Lasm_JS_Web_DOMException_name(v_self_3130_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message(lean_object* v_self_3134_){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_message___closed__0));
v___x_3137_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_3134_, v___x_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_message___boxed(lean_object* v_self_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lasm_JS_Web_DOMException_message(v_self_3138_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code(lean_object* v_self_3142_){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l_Lasm_JS_Web_DOMException_code___closed__0));
v___x_3145_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_eventPhase_spec__0(v_self_3142_, v___x_3144_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMException_code___boxed(lean_object* v_self_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lasm_JS_Web_DOMException_code(v_self_3146_);
return v_res_3148_;
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
