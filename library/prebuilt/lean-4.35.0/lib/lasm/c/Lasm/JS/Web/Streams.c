// Lean compiler output
// Module: Lasm.JS.Web.Streams
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Dom
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
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(uint8_t, uint64_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lasm_js_await_into(lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSEventTarget___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSData;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStream = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStream___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStream___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStream___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStream___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSReadableStream___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.ReadableStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStream___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStream___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamDefaultReader = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.ReadableStreamDefaultReader"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReader = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.ReadableStreamBYOBReader"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.ReadableStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableByteStreamController = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.ReadableByteStreamController"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableByteStreamController = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableByteStreamController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBRequest = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.ReadableStreamBYOBRequest"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamBYOBRequest___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWritableStream = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWritableStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.WritableStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWritableStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWritableStream___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWritableStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWritableStreamDefaultWriter = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.WritableStreamDefaultWriter"};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSWritableStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.WritableStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSWritableStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformStream = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.TransformStream"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformStream___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStream___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformStream___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformStream___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformStream___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformStream = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStream___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Web.TransformStreamDefaultController"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformStreamDefaultController = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSByteLengthQueuingStrategy = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.ByteLengthQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy = (const lean_object*)&l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSCountQueuingStrategy = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Web.CountQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSCountQueuingStrategy = (const lean_object*)&l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__1_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqReadableStreamReaderMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqReadableStreamReaderMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode = (const lean_object*)&l_Lasm_JS_Web_instBEqReadableStreamReaderMode___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Web.ReadableStreamReaderMode.byob"};
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2;
static lean_once_cell_t l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprReadableStreamReaderMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamReaderMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamReaderMode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "byob"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStreamReaderMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.ReadableStreamReaderMode"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamType_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamType_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instBEqReadableStreamType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instBEqReadableStreamType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instBEqReadableStreamType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instBEqReadableStreamType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instBEqReadableStreamType = (const lean_object*)&l_Lasm_JS_Web_instBEqReadableStreamType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.ReadableStreamType.bytes"};
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprReadableStreamType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instReprReadableStreamType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprReadableStreamType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instReprReadableStreamType = (const lean_object*)&l_Lasm_JS_Web_instReprReadableStreamType___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedReadableStreamType_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedReadableStreamType;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamType___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStreamType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStreamType___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamType = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSReadableStreamType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.ReadableStreamType"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSReadableStreamType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategySize = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.QueuingStrategySize"};
static const lean_object* l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSQueuingStrategySize = (const lean_object*)&l_Lasm_JS_Web_instFromJSQueuingStrategySize___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_QueuingStrategySize_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_QueuingStrategySize_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "highWaterMark"};
static const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "size"};
static const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSQueuingStrategy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSQueuingStrategy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategy___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mode"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamReaderMode___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "readable"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "writable"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableWritablePair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableWritablePair___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableWritablePair___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "preventClose"};
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "preventAbort"};
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "preventCancel"};
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSEventTarget___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSStreamPipeOptions___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1;
static const lean_string_object l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.ReadableStreamReadResult"};
static const lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2_value;
static lean_once_cell_t l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult;
static const lean_string_object l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSQueuingStrategyInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategyInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit = (const lean_object*)&l_Lasm_JS_Web_instToJSQueuingStrategyInit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSJSFunction = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSJSFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.JSFunction"};
static const lean_object* l_Lasm_JS_Web_instFromJSJSFunction___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSJSFunction___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSJSFunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSJSFunction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSJSFunction___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSJSFunction___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSJSFunction = (const lean_object*)&l_Lasm_JS_Web_instFromJSJSFunction___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_JSFunction_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_JSFunction_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_JSFunction_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_JSFunction_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSourceStartCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Web.UnderlyingSourceStartCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceStartCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSourcePullCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.UnderlyingSourcePullCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourcePullCallback___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSourceCancelCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.JS.Web.UnderlyingSourceCancelCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSourceCancelCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pull"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cancel"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "autoAllocateChunkSize"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSUnderlyingSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamType___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSource___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSinkStartCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.UnderlyingSinkStartCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkStartCallback___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSinkWriteCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.UnderlyingSinkWriteCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkWriteCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSinkCloseCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.UnderlyingSinkCloseCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkCloseCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSinkAbortCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Web.UnderlyingSinkAbortCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSUnderlyingSinkAbortCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "write"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSUnderlyingSink___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink = (const lean_object*)&l_Lasm_JS_Web_instToJSUnderlyingSink___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformerStartCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.TransformerStartCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformerStartCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerStartCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformerTransformCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.TransformerTransformCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformerTransformCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerTransformCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformerFlushCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.TransformerFlushCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformerFlushCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerFlushCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformerCancelCallback = (const lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Web.TransformerCancelCallback"};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSTransformerCancelCallback = (const lean_object*)&l_Lasm_JS_Web_instFromJSTransformerCancelCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flush"};
static const lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "readableType"};
static const lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "writableType"};
static const lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTransformer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTransformer___lam__0, .m_arity = 5, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSTransformer___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTransformer = (const lean_object*)&l_Lasm_JS_Web_instToJSTransformer___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.ReadableStream.new"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ReadableStream"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStream_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStream_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_locked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "locked"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_locked___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_locked___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_from___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.ReadableStream.from"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_from___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_from___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStream_from___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ReadableStream.from"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_from___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_from___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStream_from___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStream_from___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_from___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStream_from___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_from___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_getReader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getReader"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_getReader___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_getReader___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "pipeThrough"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pipeTo"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Array (Lasm.JS.Web.ReadableStream)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "an element is not Lasm.JS.Web.ReadableStream"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStream_tee___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tee"};
static const lean_object* l_Lasm_JS_Web_ReadableStream_tee___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_tee___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_ReadableStream_tee___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_ReadableStream_tee___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStream_tee___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_ReadableStream_tee___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_ReadableStream_tee___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.ReadableStreamDefaultReader.new"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "ReadableStreamDefaultReader"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__0_value)} };
static const lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "closed"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Option (Bool)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "read"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "releaseLock"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Web.ReadableStreamBYOBReader.new"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "ReadableStreamBYOBReader"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Option (Float)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "desiredSize"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "enqueue"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Option (Lasm.JS.Web.ReadableStreamBYOBRequest)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "byobRequest"};
static const lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Option (ByteArray)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "view"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "respond"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "respondWithNewView"};
static const lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.WritableStream.new"};
static const lean_object* l_Lasm_JS_Web_WritableStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WritableStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "WritableStream"};
static const lean_object* l_Lasm_JS_Web_WritableStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WritableStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStream_getWriter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getWriter"};
static const lean_object* l_Lasm_JS_Web_WritableStream_getWriter___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_getWriter___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Web.WritableStreamDefaultWriter.new"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "WritableStreamDefaultWriter"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ready"};
static const lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TransformStream_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.TransformStream.new"};
static const lean_object* l_Lasm_JS_Web_TransformStream_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_TransformStream_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "TransformStream"};
static const lean_object* l_Lasm_JS_Web_TransformStream_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_TransformStream_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_TransformStream_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_TransformStream_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "terminate"};
static const lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0 = (const lean_object*)&l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Web.ByteLengthQueuingStrategy.new"};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "ByteLengthQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.CountQueuingStrategy.new"};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CountQueuingStrategy"};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_ReadableStream_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStream___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStream___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStream___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSReadableStream___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___redArg(){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = 1;
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___redArg___boxed(lean_object* v___dummy_108_){
_start:
{
uint8_t v_res_109_; lean_object* v_r_110_; 
v_res_109_ = l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___redArg();
v_r_110_ = lean_box(v_res_109_);
return v_r_110_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq(lean_object* v_x_111_, lean_object* v_y_112_){
_start:
{
uint8_t v___x_113_; 
v___x_113_ = 1;
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq___boxed(lean_object* v_x_114_, lean_object* v_y_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Lasm_JS_Web_instBEqReadableStreamReaderMode_beq(v_x_114_, v_y_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(2u);
v___x_124_ = lean_nat_to_int(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_to_int(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg(lean_object* v_prec_127_){
_start:
{
lean_object* v___y_129_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = lean_nat_dec_le(v___x_135_, v_prec_127_);
if (v___x_136_ == 0)
{
lean_object* v___x_137_; 
v___x_137_ = lean_obj_once(&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2, &l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2_once, _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2);
v___y_129_ = v___x_137_;
goto v___jp_128_;
}
else
{
lean_object* v___x_138_; 
v___x_138_ = lean_obj_once(&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3, &l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3_once, _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3);
v___y_129_ = v___x_138_;
goto v___jp_128_;
}
v___jp_128_:
{
lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_130_ = ((lean_object*)(l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__1));
lean_inc(v___y_129_);
v___x_131_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_131_, 0, v___y_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = 0;
v___x_133_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_133_, 0, v___x_131_);
lean_ctor_set_uint8(v___x_133_, sizeof(void*)*1, v___x_132_);
v___x_134_ = l_Repr_addAppParen(v___x_133_, v_prec_127_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___boxed(lean_object* v_prec_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg(v_prec_139_);
lean_dec(v_prec_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr(lean_object* v_x_141_, lean_object* v_prec_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg(v_prec_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___boxed(lean_object* v_x_144_, lean_object* v_prec_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr(v_x_144_, v_prec_145_);
lean_dec(v_prec_145_);
return v_res_146_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode_default(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_box(0);
return v___x_149_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_box(0);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0(lean_object* v_x_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0(lean_object* v_x_163_){
_start:
{
if (lean_obj_tag(v_x_163_) == 4)
{
lean_object* v_s_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v_s_166_ = lean_ctor_get(v_x_163_, 0);
v___x_167_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__0));
v___x_168_ = lean_string_dec_eq(v_s_166_, v___x_167_);
if (v___x_168_ == 0)
{
goto v___jp_164_;
}
else
{
lean_object* v___x_169_; 
v___x_169_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__2));
return v___x_169_;
}
}
else
{
goto v___jp_164_;
}
v___jp_164_:
{
lean_object* v___x_165_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0___boxed(lean_object* v_x_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lasm_JS_Web_instFromJSReadableStreamReaderMode___lam__0(v_x_170_);
lean_dec(v_x_170_);
return v_res_171_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamType_beq___redArg(){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = 1;
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamType_beq___redArg___boxed(lean_object* v___dummy_181_){
_start:
{
uint8_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lasm_JS_Web_instBEqReadableStreamType_beq___redArg();
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqReadableStreamType_beq(lean_object* v_x_184_, lean_object* v_y_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = 1;
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqReadableStreamType_beq___boxed(lean_object* v_x_187_, lean_object* v_y_188_){
_start:
{
uint8_t v_res_189_; lean_object* v_r_190_; 
v_res_189_ = l_Lasm_JS_Web_instBEqReadableStreamType_beq(v_x_187_, v_y_188_);
v_r_190_ = lean_box(v_res_189_);
return v_r_190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg(lean_object* v_prec_196_){
_start:
{
lean_object* v___y_198_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = lean_unsigned_to_nat(1024u);
v___x_205_ = lean_nat_dec_le(v___x_204_, v_prec_196_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2, &l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2_once, _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__2);
v___y_198_ = v___x_206_;
goto v___jp_197_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3, &l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3_once, _init_l_Lasm_JS_Web_instReprReadableStreamReaderMode_repr___redArg___closed__3);
v___y_198_ = v___x_207_;
goto v___jp_197_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_199_ = ((lean_object*)(l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___closed__1));
lean_inc(v___y_198_);
v___x_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_200_, 0, v___y_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = 0;
v___x_202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*1, v___x_201_);
v___x_203_ = l_Repr_addAppParen(v___x_202_, v_prec_196_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg___boxed(lean_object* v_prec_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg(v_prec_208_);
lean_dec(v_prec_208_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr(lean_object* v_x_210_, lean_object* v_prec_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lasm_JS_Web_instReprReadableStreamType_repr___redArg(v_prec_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprReadableStreamType_repr___boxed(lean_object* v_x_213_, lean_object* v_prec_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lasm_JS_Web_instReprReadableStreamType_repr(v_x_213_, v_prec_214_);
lean_dec(v_prec_214_);
return v_res_215_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instInhabitedReadableStreamType_default(void){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_box(0);
return v___x_218_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instInhabitedReadableStreamType(void){
_start:
{
lean_object* v___x_219_; 
v___x_219_ = lean_box(0);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamType___lam__0(lean_object* v_x_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__1));
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0(lean_object* v_x_231_){
_start:
{
if (lean_obj_tag(v_x_231_) == 4)
{
lean_object* v_s_234_; lean_object* v___x_235_; uint8_t v___x_236_; 
v_s_234_ = lean_ctor_get(v_x_231_, 0);
v___x_235_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamType___lam__0___closed__0));
v___x_236_ = lean_string_dec_eq(v_s_234_, v___x_235_);
if (v___x_236_ == 0)
{
goto v___jp_232_;
}
else
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__1));
return v___x_237_;
}
}
else
{
goto v___jp_232_;
}
v___jp_232_:
{
lean_object* v___x_233_; 
v___x_233_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___closed__0));
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0___boxed(lean_object* v_x_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lasm_JS_Web_instFromJSReadableStreamType___lam__0(v_x_238_);
lean_dec(v_x_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0(lean_object* v_x_254_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_264_; 
v_a_256_ = lean_ctor_get(v_x_254_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_264_ == 0)
{
v___x_258_ = v_x_254_;
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v_x_254_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_264_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_256_);
v___x_261_ = v_reuseFailAlloc_263_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; 
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_275_; 
v_a_265_ = lean_ctor_get(v_x_254_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_254_);
if (v_isSharedCheck_275_ == 0)
{
v___x_267_ = v_x_254_;
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v_x_254_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; double v___x_270_; lean_object* v___x_272_; 
v___x_269_ = lean_alloc_ctor(3, 0, 8);
v___x_270_ = lean_unbox_float(v_a_265_);
lean_dec(v_a_265_);
lean_ctor_set_float(v___x_269_, 0, v___x_270_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v___x_269_);
v___x_272_ = v___x_267_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_269_);
v___x_272_ = v_reuseFailAlloc_274_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
lean_object* v___x_273_; 
v___x_273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0___boxed(lean_object* v_x_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__0(v_x_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1(lean_object* v_f_279_, lean_object* v___f_280_, lean_object* v_x_281_){
_start:
{
if (lean_obj_tag(v_x_281_) == 0)
{
lean_object* v___x_283_; 
lean_dec_ref(v___f_280_);
lean_dec_ref(v_f_279_);
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v_x_281_);
return v___x_283_;
}
else
{
lean_object* v_a_284_; lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_a_284_ = lean_ctor_get(v_x_281_, 0);
lean_inc(v_a_284_);
lean_dec_ref_known(v_x_281_, 1);
v___x_285_ = lean_unsigned_to_nat(0u);
v___x_286_ = 0;
v___x_287_ = lean_apply_2(v_f_279_, v_a_284_, lean_box(0));
v___x_288_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_285_, v___x_286_, v___x_287_, v___f_280_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1___boxed(lean_object* v_f_289_, lean_object* v___f_290_, lean_object* v_x_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1(v_f_289_, v___f_290_, v_x_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object* v_args_294_, lean_object* v_i_295_){
_start:
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = lean_array_get_size(v_args_294_);
v___x_298_ = lean_nat_dec_lt(v_i_295_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_box(0);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_array_fget_borrowed(v_args_294_, v_i_295_);
lean_inc(v___x_301_);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0___boxed(lean_object* v_args_303_, lean_object* v_i_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_303_, v_i_304_);
lean_dec(v_i_304_);
lean_dec_ref(v_args_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2(lean_object* v___f_307_, lean_object* v_args_308_){
_start:
{
lean_object* v___x_310_; uint8_t v___x_311_; lean_object* v_val_313_; lean_object* v___x_316_; lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v___x_310_ = lean_unsigned_to_nat(0u);
v___x_311_ = 0;
v___x_316_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_308_, v___x_310_);
v_a_317_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_316_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_316_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v_val_313_);
v___x_315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_310_, v___x_311_, v___x_314_, v___f_307_);
return v___x_315_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
lean_ctor_set_tag(v___x_319_, 1);
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
v_val_313_ = v___x_322_;
goto v___jp_312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed(lean_object* v___f_325_, lean_object* v_args_326_, lean_object* v___y_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2(v___f_325_, v_args_326_);
lean_dec_ref(v_args_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn(lean_object* v_f_330_){
_start:
{
lean_object* v___f_332_; lean_object* v___f_333_; lean_object* v___f_334_; lean_object* v___x_335_; 
v___f_332_ = ((lean_object*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___closed__0));
v___f_333_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_333_, 0, v_f_330_);
lean_closure_set(v___f_333_, 1, v___f_332_);
v___f_334_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_334_, 0, v___f_333_);
v___x_335_ = l_Lasm_JS_Function_ofFn(v___f_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___boxed(lean_object* v_f_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lasm_JS_Web_QueuingStrategySize_ofFn(v_f_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0(lean_object* v_f_355_, lean_object* v_args_356_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_a_360_; lean_object* v___x_361_; 
v___x_358_ = lean_unsigned_to_nat(0u);
v___x_359_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_356_, v___x_358_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref(v___x_359_);
v___x_361_ = lean_apply_2(v_f_355_, v_a_360_, lean_box(0));
if (lean_obj_tag(v___x_361_) == 0)
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_371_; 
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_371_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_371_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_371_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; double v___x_367_; lean_object* v___x_369_; 
v___x_366_ = lean_alloc_ctor(3, 0, 8);
v___x_367_ = lean_unbox_float(v_a_362_);
lean_dec(v_a_362_);
lean_ctor_set_float(v___x_366_, 0, v___x_367_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_366_);
v___x_369_ = v___x_364_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_366_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
v_a_372_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_361_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_361_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0___boxed(lean_object* v_f_380_, lean_object* v_args_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0(v_f_380_, v_args_381_);
lean_dec_ref(v_args_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn(lean_object* v_f_384_){
_start:
{
lean_object* v___f_386_; lean_object* v___x_387_; 
v___f_386_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_386_, 0, v_f_384_);
v___x_387_ = l_Lasm_JS_Function_ofSyncFn(v___f_386_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_387_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_387_);
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
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_387_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_387_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___boxed(lean_object* v_f_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn(v_f_404_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0(lean_object* v___f_409_, lean_object* v___f_410_, lean_object* v_d_411_){
_start:
{
lean_object* v_highWaterMark_412_; lean_object* v_size_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_430_; 
v_highWaterMark_412_ = lean_ctor_get(v_d_411_, 0);
v_size_413_ = lean_ctor_get(v_d_411_, 1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_d_411_);
if (v_isSharedCheck_430_ == 0)
{
v___x_415_ = v_d_411_;
v_isShared_416_ = v_isSharedCheck_430_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_size_413_);
lean_inc(v_highWaterMark_412_);
lean_dec(v_d_411_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_430_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_417_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_418_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_409_, v_highWaterMark_412_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 1, v___x_418_);
lean_ctor_set(v___x_415_, 0, v___x_417_);
v___x_420_ = v___x_415_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_417_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v___x_418_);
v___x_420_ = v_reuseFailAlloc_429_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_422_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_410_, v_size_413_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = lean_unsigned_to_nat(2u);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
v___x_426_ = lean_array_push(v___x_425_, v___x_420_);
v___x_427_ = lean_array_push(v___x_426_, v___x_423_);
v___x_428_ = l_Lasm_JS_Web_Support_fields(v___x_427_);
lean_dec_ref(v___x_427_);
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0(lean_object* v___f_437_, lean_object* v_d_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_440_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_437_, v_d_438_);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = lean_unsigned_to_nat(1u);
v___x_443_ = lean_mk_empty_array_with_capacity(v___x_442_);
v___x_444_ = lean_array_push(v___x_443_, v___x_441_);
v___x_445_ = l_Lasm_JS_Web_Support_fields(v___x_444_);
lean_dec_ref(v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0(lean_object* v_d_451_){
_start:
{
lean_object* v_readable_452_; lean_object* v_writable_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_471_; 
v_readable_452_ = lean_ctor_get(v_d_451_, 0);
v_writable_453_ = lean_ctor_get(v_d_451_, 1);
v_isSharedCheck_471_ = !lean_is_exclusive(v_d_451_);
if (v_isSharedCheck_471_ == 0)
{
v___x_455_ = v_d_451_;
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_writable_453_);
lean_inc(v_readable_452_);
lean_dec(v_d_451_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_471_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_457_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_458_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_456_ == 0)
{
lean_ctor_set_tag(v___x_455_, 9);
lean_ctor_set(v___x_455_, 1, v___x_458_);
v___x_460_ = v___x_455_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_readable_452_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v___x_458_);
v___x_460_ = v_reuseFailAlloc_470_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_457_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_463_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_463_, 0, v_writable_453_);
lean_ctor_set(v___x_463_, 1, v___x_458_);
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_unsigned_to_nat(2u);
v___x_466_ = lean_mk_empty_array_with_capacity(v___x_465_);
v___x_467_ = lean_array_push(v___x_466_, v___x_461_);
v___x_468_ = lean_array_push(v___x_467_, v___x_464_);
v___x_469_ = l_Lasm_JS_Web_Support_fields(v___x_468_);
lean_dec_ref(v___x_468_);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0(lean_object* v___f_478_, lean_object* v___f_479_, lean_object* v_d_480_){
_start:
{
lean_object* v_preventClose_481_; lean_object* v_preventAbort_482_; lean_object* v_preventCancel_483_; lean_object* v_signal_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v_preventClose_481_ = lean_ctor_get(v_d_480_, 0);
lean_inc(v_preventClose_481_);
v_preventAbort_482_ = lean_ctor_get(v_d_480_, 1);
lean_inc(v_preventAbort_482_);
v_preventCancel_483_ = lean_ctor_get(v_d_480_, 2);
lean_inc(v_preventCancel_483_);
v_signal_484_ = lean_ctor_get(v_d_480_, 3);
lean_inc(v_signal_484_);
lean_dec_ref(v_d_480_);
v___x_485_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_478_, 2);
v___x_486_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_478_, v_preventClose_481_);
v___x_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_489_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_478_, v_preventAbort_482_);
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_488_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_492_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_478_, v_preventCancel_483_);
v___x_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set(v___x_493_, 1, v___x_492_);
v___x_494_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_495_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_479_, v_signal_484_);
v___x_496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set(v___x_496_, 1, v___x_495_);
v___x_497_ = lean_unsigned_to_nat(4u);
v___x_498_ = lean_mk_empty_array_with_capacity(v___x_497_);
v___x_499_ = lean_array_push(v___x_498_, v___x_487_);
v___x_500_ = lean_array_push(v___x_499_, v___x_490_);
v___x_501_ = lean_array_push(v___x_500_, v___x_493_);
v___x_502_ = lean_array_push(v___x_501_, v___x_496_);
v___x_503_ = l_Lasm_JS_Web_Support_fields(v___x_502_);
lean_dec_ref(v___x_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0(lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v_d_514_){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
v___x_516_ = l_Lasm_JS_readField___redArg(v___x_512_, v_d_514_, v___x_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
lean_dec_ref(v___x_513_);
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v_a_525_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_516_, 1);
v___x_526_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
v___x_527_ = l_Lasm_JS_readField___redArg(v___x_513_, v_d_514_, v___x_526_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_535_; 
lean_dec(v_a_525_);
v_a_528_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_535_ == 0)
{
v___x_530_ = v___x_527_;
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_a_528_);
lean_dec(v___x_527_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_535_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_533_; 
if (v_isShared_531_ == 0)
{
v___x_533_ = v___x_530_;
goto v_reusejp_532_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_a_528_);
v___x_533_ = v_reuseFailAlloc_534_;
goto v_reusejp_532_;
}
v_reusejp_532_:
{
return v___x_533_;
}
}
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_544_; 
v_a_536_ = lean_ctor_get(v___x_527_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_544_ == 0)
{
v___x_538_ = v___x_527_;
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_527_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_540_, 0, v_a_525_);
lean_ctor_set(v___x_540_, 1, v_a_536_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_540_);
v___x_542_ = v___x_538_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_540_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___boxed(lean_object* v___x_545_, lean_object* v___x_546_, lean_object* v_d_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0(v___x_545_, v___x_546_, v_d_547_);
lean_dec(v_d_547_);
return v_res_548_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = l_Lasm_JS_instFromJSBool;
v___x_550_ = l_Lasm_JS_instFromJSOption___redArg(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___f_553_; 
v___x_551_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0);
v___x_552_ = l_Lasm_JS_instFromJSData;
v___f_553_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_553_, 0, v___x_552_);
lean_closure_set(v___f_553_, 1, v___x_551_);
return v___f_553_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3(void){
_start:
{
uint8_t v___x_555_; lean_object* v___x_556_; lean_object* v___f_557_; lean_object* v___x_558_; 
v___x_555_ = 0;
v___x_556_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___f_557_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1);
v___x_558_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_558_, 0, v___f_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
lean_ctor_set_uint8(v___x_558_, sizeof(void*)*2, v___x_555_);
return v___x_558_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult(void){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0(lean_object* v___f_561_, lean_object* v_d_562_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_563_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_564_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_561_, v_d_562_);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_563_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
v___x_566_ = lean_unsigned_to_nat(1u);
v___x_567_ = lean_mk_empty_array_with_capacity(v___x_566_);
v___x_568_ = lean_array_push(v___x_567_, v___x_565_);
v___x_569_ = l_Lasm_JS_Web_Support_fields(v___x_568_);
lean_dec_ref(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0(double v_d_574_){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_575_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_576_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_576_, 0, v_d_574_);
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set(v___x_577_, 1, v___x_576_);
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_mk_empty_array_with_capacity(v___x_578_);
v___x_580_ = lean_array_push(v___x_579_, v___x_577_);
v___x_581_ = l_Lasm_JS_Web_Support_fields(v___x_580_);
lean_dec_ref(v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0___boxed(lean_object* v_d_582_){
_start:
{
double v_d_boxed_583_; lean_object* v_res_584_; 
v_d_boxed_583_ = lean_unbox_float(v_d_582_);
lean_dec_ref(v_d_582_);
v_res_584_ = l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0(v_d_boxed_583_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0(lean_object* v_x_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v_x_594_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0___boxed(lean_object* v_x_597_, lean_object* v___y_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lasm_JS_Web_JSFunction_ofFn___lam__0(v_x_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1(lean_object* v_f_600_, lean_object* v___f_601_, lean_object* v_args_602_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_array_get_size(v_args_602_);
v___x_606_ = l_Array_extract___redArg(v_args_602_, v___x_604_, v___x_605_);
v___x_607_ = 0;
v___x_608_ = lean_apply_2(v_f_600_, v___x_606_, lean_box(0));
v___x_609_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_604_, v___x_607_, v___x_608_, v___f_601_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1___boxed(lean_object* v_f_610_, lean_object* v___f_611_, lean_object* v_args_612_, lean_object* v___y_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lasm_JS_Web_JSFunction_ofFn___lam__1(v_f_610_, v___f_611_, v_args_612_);
lean_dec_ref(v_args_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn(lean_object* v_f_616_){
_start:
{
lean_object* v___f_618_; lean_object* v___f_619_; lean_object* v___x_620_; 
v___f_618_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_619_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_JSFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_619_, 0, v_f_616_);
lean_closure_set(v___f_619_, 1, v___f_618_);
v___x_620_ = l_Lasm_JS_Function_ofFn(v___f_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
v_a_629_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_620_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_620_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___boxed(lean_object* v_f_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_JS_Web_JSFunction_ofFn(v_f_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0(lean_object* v_f_640_, lean_object* v_args_641_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_643_ = lean_unsigned_to_nat(0u);
v___x_644_ = lean_array_get_size(v_args_641_);
v___x_645_ = l_Array_extract___redArg(v_args_641_, v___x_643_, v___x_644_);
v___x_646_ = lean_apply_2(v_f_640_, v___x_645_, lean_box(0));
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_647_, lean_object* v_args_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0(v_f_647_, v_args_648_);
lean_dec_ref(v_args_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn(lean_object* v_f_651_){
_start:
{
lean_object* v___f_653_; lean_object* v___x_654_; 
v___f_653_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_653_, 0, v_f_651_);
v___x_654_ = l_Lasm_JS_Function_ofSyncFn(v___f_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v_a_655_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v___x_654_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v___x_654_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
v_a_663_ = lean_ctor_get(v___x_654_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_654_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_654_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___boxed(lean_object* v_f_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lasm_JS_Web_JSFunction_ofSyncFn(v_f_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1(lean_object* v_f_681_, lean_object* v___f_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v___f_682_);
lean_dec_ref(v_f_681_);
v_a_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_695_; uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v_x_683_, 1);
v___x_695_ = lean_unsigned_to_nat(0u);
v___x_696_ = 0;
v___x_697_ = lean_apply_2(v_f_681_, v_a_694_, lean_box(0));
v___x_698_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_695_, v___x_696_, v___x_697_, v___f_682_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed(lean_object* v_f_699_, lean_object* v___f_700_, lean_object* v_x_701_, lean_object* v___y_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1(v_f_699_, v___f_700_, v_x_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(lean_object* v_args_705_, lean_object* v_i_706_){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_708_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = lean_nat_add(v_i_706_, v___x_709_);
v___x_711_ = l_Nat_reprFast(v___x_710_);
v___x_712_ = lean_string_append(v___x_708_, v___x_711_);
lean_dec_ref(v___x_711_);
v___x_713_ = lean_array_get_size(v_args_705_);
v___x_714_ = lean_nat_dec_lt(v_i_706_, v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = lean_box(0);
v___x_716_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_712_, v___x_715_);
lean_dec_ref(v___x_712_);
return v___x_716_;
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = lean_array_fget_borrowed(v_args_705_, v_i_706_);
lean_inc(v___x_717_);
v___x_718_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_712_, v___x_717_);
lean_dec_ref(v___x_712_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___boxed(lean_object* v_args_719_, lean_object* v_i_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_719_, v_i_720_);
lean_dec(v_i_720_);
lean_dec_ref(v_args_719_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0(lean_object* v___f_723_, lean_object* v_args_724_){
_start:
{
lean_object* v___x_726_; uint8_t v___x_727_; lean_object* v_val_729_; lean_object* v___x_732_; 
v___x_726_ = lean_unsigned_to_nat(0u);
v___x_727_ = 0;
v___x_732_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_724_, v___x_726_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set_tag(v___x_735_, 1);
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_val_729_ = v___x_738_;
goto v___jp_728_;
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
v_a_741_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_732_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_732_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set_tag(v___x_743_, 0);
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
v_val_729_ = v___x_746_;
goto v___jp_728_;
}
}
}
v___jp_728_:
{
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v_val_729_);
v___x_731_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_726_, v___x_727_, v___x_730_, v___f_723_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed(lean_object* v___f_749_, lean_object* v_args_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0(v___f_749_, v_args_750_);
lean_dec_ref(v_args_750_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn(lean_object* v_f_753_){
_start:
{
lean_object* v___f_755_; lean_object* v___f_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v___f_755_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_756_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_756_, 0, v_f_753_);
lean_closure_set(v___f_756_, 1, v___f_755_);
v___f_757_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_757_, 0, v___f_756_);
v___x_758_ = l_Lasm_JS_Function_ofFn(v___f_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_758_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_758_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_a_767_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_758_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_758_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___boxed(lean_object* v_f_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn(v_f_775_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0(lean_object* v_f_778_, lean_object* v_args_779_){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_781_ = lean_unsigned_to_nat(0u);
v___x_782_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_779_, v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_784_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
v___x_784_ = lean_apply_2(v_f_778_, v_a_783_, lean_box(0));
return v___x_784_;
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_dec_ref(v_f_778_);
v_a_785_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_782_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_782_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_793_, lean_object* v_args_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0(v_f_793_, v_args_794_);
lean_dec_ref(v_args_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn(lean_object* v_f_797_){
_start:
{
lean_object* v___f_799_; lean_object* v___x_800_; 
v___f_799_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_799_, 0, v_f_797_);
v___x_800_ = l_Lasm_JS_Function_ofSyncFn(v___f_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_800_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_a_809_ = lean_ctor_get(v___x_800_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_800_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_800_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___boxed(lean_object* v_f_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn(v_f_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0(lean_object* v_x_831_){
_start:
{
if (lean_obj_tag(v_x_831_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_841_; 
v_a_833_ = lean_ctor_get(v_x_831_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v_x_831_);
if (v_isSharedCheck_841_ == 0)
{
v___x_835_ = v_x_831_;
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v_x_831_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_840_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_839_; 
v___x_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
}
}
else
{
lean_object* v___x_842_; 
lean_dec_ref_known(v_x_831_, 1);
v___x_842_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__1));
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___boxed(lean_object* v_x_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0(v_x_843_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1(lean_object* v_f_846_, lean_object* v___f_847_, lean_object* v_x_848_){
_start:
{
if (lean_obj_tag(v_x_848_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
lean_dec_ref(v___f_847_);
lean_dec_ref(v_f_846_);
v_a_850_ = lean_ctor_get(v_x_848_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v_x_848_);
if (v_isSharedCheck_858_ == 0)
{
v___x_852_ = v_x_848_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v_x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_857_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; 
v___x_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_856_, 0, v___x_855_);
return v___x_856_;
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_860_; uint8_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_859_ = lean_ctor_get(v_x_848_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v_x_848_, 1);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = 0;
v___x_862_ = lean_apply_2(v_f_846_, v_a_859_, lean_box(0));
v___x_863_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_860_, v___x_861_, v___x_862_, v___f_847_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed(lean_object* v_f_864_, lean_object* v___f_865_, lean_object* v_x_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1(v_f_864_, v___f_865_, v_x_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn(lean_object* v_f_870_){
_start:
{
lean_object* v___f_872_; lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___x_875_; 
v___f_872_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_873_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_873_, 0, v_f_870_);
lean_closure_set(v___f_873_, 1, v___f_872_);
v___f_874_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_874_, 0, v___f_873_);
v___x_875_ = l_Lasm_JS_Function_ofFn(v___f_874_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
v_a_884_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_875_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_875_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___boxed(lean_object* v_f_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn(v_f_892_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0(lean_object* v_f_895_, lean_object* v_args_896_){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_unsigned_to_nat(0u);
v___x_899_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_896_, v___x_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_901_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = lean_apply_2(v_f_895_, v_a_900_, lean_box(0));
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_909_; 
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v___x_901_, 0);
lean_dec(v_unused_910_);
v___x_903_ = v___x_901_;
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
else
{
lean_dec(v___x_901_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_907_; 
v___x_905_ = lean_box(0);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_905_);
v___x_907_ = v___x_903_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
v_a_911_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_901_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_901_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_926_; 
lean_dec_ref(v_f_895_);
v_a_919_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_926_ == 0)
{
v___x_921_ = v___x_899_;
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_a_919_);
lean_dec(v___x_899_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_926_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_924_; 
if (v_isShared_922_ == 0)
{
v___x_924_ = v___x_921_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_919_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_927_, lean_object* v_args_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0(v_f_927_, v_args_928_);
lean_dec_ref(v_args_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn(lean_object* v_f_931_){
_start:
{
lean_object* v___f_933_; lean_object* v___x_934_; 
v___f_933_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_933_, 0, v_f_931_);
v___x_934_ = l_Lasm_JS_Function_ofSyncFn(v___f_933_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_934_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_934_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_934_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___boxed(lean_object* v_f_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn(v_f_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1(lean_object* v_f_961_, lean_object* v___f_962_, lean_object* v_x_963_){
_start:
{
if (lean_obj_tag(v_x_963_) == 0)
{
lean_object* v___x_965_; 
lean_dec_ref(v___f_962_);
lean_dec_ref(v_f_961_);
v___x_965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_965_, 0, v_x_963_);
return v___x_965_;
}
else
{
lean_object* v_a_966_; lean_object* v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v_a_966_ = lean_ctor_get(v_x_963_, 0);
lean_inc(v_a_966_);
lean_dec_ref_known(v_x_963_, 1);
v___x_967_ = lean_unsigned_to_nat(0u);
v___x_968_ = 0;
v___x_969_ = lean_apply_2(v_f_961_, v_a_966_, lean_box(0));
v___x_970_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_967_, v___x_968_, v___x_969_, v___f_962_);
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed(lean_object* v_f_971_, lean_object* v___f_972_, lean_object* v_x_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1(v_f_971_, v___f_972_, v_x_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn(lean_object* v_f_976_){
_start:
{
lean_object* v___f_978_; lean_object* v___f_979_; lean_object* v___f_980_; lean_object* v___x_981_; 
v___f_978_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_979_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_979_, 0, v_f_976_);
lean_closure_set(v___f_979_, 1, v___f_978_);
v___f_980_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_980_, 0, v___f_979_);
v___x_981_ = l_Lasm_JS_Function_ofFn(v___f_980_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_981_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_981_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
v_a_990_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_981_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_981_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___boxed(lean_object* v_f_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn(v_f_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0(lean_object* v_f_1001_, lean_object* v_args_1002_){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v_a_1006_; lean_object* v___x_1007_; 
v___x_1004_ = lean_unsigned_to_nat(0u);
v___x_1005_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1002_, v___x_1004_);
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1006_);
lean_dec_ref(v___x_1005_);
v___x_1007_ = lean_apply_2(v_f_1001_, v_a_1006_, lean_box(0));
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1015_; 
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v___x_1007_, 0);
lean_dec(v_unused_1016_);
v___x_1009_ = v___x_1007_;
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
else
{
lean_dec(v___x_1007_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1015_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1011_; lean_object* v___x_1013_; 
v___x_1011_ = lean_box(0);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v___x_1011_);
v___x_1013_ = v___x_1009_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
v_a_1017_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1007_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1007_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1025_, lean_object* v_args_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0(v_f_1025_, v_args_1026_);
lean_dec_ref(v_args_1026_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn(lean_object* v_f_1029_){
_start:
{
lean_object* v___f_1031_; lean_object* v___x_1032_; 
v___f_1031_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1031_, 0, v_f_1029_);
v___x_1032_ = l_Lasm_JS_Function_ofSyncFn(v___f_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
v_a_1041_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1032_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1032_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___boxed(lean_object* v_f_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn(v_f_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0(lean_object* v___f_1057_, lean_object* v___f_1058_, lean_object* v___f_1059_, lean_object* v___f_1060_, lean_object* v___f_1061_, lean_object* v_d_1062_){
_start:
{
lean_object* v_start_1063_; lean_object* v_pull_1064_; lean_object* v_cancel_1065_; lean_object* v_type_1066_; lean_object* v_autoAllocateChunkSize_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_start_1063_ = lean_ctor_get(v_d_1062_, 0);
lean_inc(v_start_1063_);
v_pull_1064_ = lean_ctor_get(v_d_1062_, 1);
lean_inc(v_pull_1064_);
v_cancel_1065_ = lean_ctor_get(v_d_1062_, 2);
lean_inc(v_cancel_1065_);
v_type_1066_ = lean_ctor_get(v_d_1062_, 3);
lean_inc(v_type_1066_);
v_autoAllocateChunkSize_1067_ = lean_ctor_get(v_d_1062_, 4);
lean_inc(v_autoAllocateChunkSize_1067_);
lean_dec_ref(v_d_1062_);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_1069_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1057_, v_start_1063_);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__1));
v___x_1072_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1058_, v_pull_1064_);
v___x_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1071_);
lean_ctor_set(v___x_1073_, 1, v___x_1072_);
v___x_1074_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_1075_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_cancel_1065_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3));
v___x_1078_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1060_, v_type_1066_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set(v___x_1079_, 1, v___x_1078_);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__4));
v___x_1081_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1061_, v_autoAllocateChunkSize_1067_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = lean_unsigned_to_nat(5u);
v___x_1084_ = lean_mk_empty_array_with_capacity(v___x_1083_);
v___x_1085_ = lean_array_push(v___x_1084_, v___x_1070_);
v___x_1086_ = lean_array_push(v___x_1085_, v___x_1073_);
v___x_1087_ = lean_array_push(v___x_1086_, v___x_1076_);
v___x_1088_ = lean_array_push(v___x_1087_, v___x_1079_);
v___x_1089_ = lean_array_push(v___x_1088_, v___x_1082_);
v___x_1090_ = l_Lasm_JS_Web_Support_fields(v___x_1089_);
lean_dec_ref(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_1107_ = lean_string_utf8_byte_size(v___x_1106_);
return v___x_1107_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1108_ = lean_unsigned_to_nat(0u);
v___x_1109_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3);
v___x_1110_ = lean_nat_dec_eq(v___x_1109_, v___x_1108_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1115_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__8));
v___x_1116_ = lean_unsigned_to_nat(46u);
v___x_1117_ = lean_unsigned_to_nat(193u);
v___x_1118_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v___x_1119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6));
v___x_1120_ = l_mkPanicMessageWithDecl(v___x_1119_, v___x_1118_, v___x_1117_, v___x_1116_, v___x_1115_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1122_, lean_object* v_d_1123_){
_start:
{
lean_object* v___y_1126_; lean_object* v___y_1127_; 
if (lean_obj_tag(v_d_1123_) == 9)
{
lean_object* v_value_1131_; lean_object* v___x_1132_; 
v_value_1131_ = lean_ctor_get(v_d_1123_, 0);
lean_inc(v_value_1131_);
lean_dec_ref_known(v_d_1123_, 2);
v___x_1132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1132_, 0, v_value_1131_);
return v___x_1132_;
}
else
{
lean_object* v___x_1133_; lean_object* v_received_1135_; 
v___x_1133_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_1123_) == 9)
{
lean_object* v_value_1149_; lean_object* v_description_1150_; uint8_t v___x_1151_; 
v_value_1149_ = lean_ctor_get(v_d_1123_, 0);
v_description_1150_ = lean_ctor_get(v_d_1123_, 1);
v___x_1151_ = lean_string_dec_eq(v_description_1150_, v___x_1133_);
if (v___x_1151_ == 0)
{
goto v___jp_1147_;
}
else
{
uint32_t v___x_1152_; uint64_t v___x_1153_; lean_object* v___x_1154_; uint32_t v___x_1155_; lean_object* v___x_1156_; 
lean_inc_n(v_value_1149_, 2);
lean_dec_ref_known(v_d_1123_, 2);
v___x_1152_ = 206;
v___x_1153_ = 0ULL;
v___x_1154_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1154_, 0, v_value_1149_);
lean_ctor_set(v___x_1154_, 1, v___x_1133_);
v___x_1155_ = lasm_js_value_handle(v_value_1149_);
lean_dec(v_value_1149_);
v___x_1156_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1152_, v___x_1153_, v___x_1154_, v___x_1155_);
lean_dec_ref_known(v___x_1154_, 2);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; uint8_t v___x_1158_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1156_, 1);
v___x_1158_ = lean_string_validate_utf8(v_a_1157_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
lean_dec(v_a_1157_);
v___x_1159_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1160_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1159_);
v_received_1135_ = v___x_1160_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_string_from_utf8_unchecked(v_a_1157_);
v_received_1135_ = v___x_1161_;
goto v___jp_1134_;
}
}
else
{
lean_object* v___x_1162_; 
lean_dec_ref_known(v___x_1156_, 1);
v___x_1162_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_1135_ = v___x_1162_;
goto v___jp_1134_;
}
}
}
else
{
goto v___jp_1147_;
}
v___jp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1137_ = lean_string_append(v___x_1136_, v_context_1122_);
v___x_1138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1139_ = lean_string_append(v___x_1137_, v___x_1138_);
v___x_1140_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0));
v___x_1141_ = lean_string_append(v___x_1139_, v___x_1140_);
v___x_1142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
v___x_1144_ = lean_string_append(v___x_1143_, v_received_1135_);
lean_dec_ref(v_received_1135_);
v___x_1145_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; 
v___x_1146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_1126_ = v___x_1144_;
v___y_1127_ = v___x_1146_;
goto v___jp_1125_;
}
else
{
v___y_1126_ = v___x_1144_;
v___y_1127_ = v___x_1133_;
goto v___jp_1125_;
}
}
v___jp_1147_:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lasm_JS_Data_describe(v_d_1123_);
v_received_1135_ = v___x_1148_;
goto v___jp_1134_;
}
}
v___jp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_string_append(v___y_1126_, v___y_1127_);
v___x_1129_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1163_, lean_object* v_d_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v_context_1163_, v_d_1164_);
lean_dec_ref(v_context_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(lean_object* v_args_1167_, lean_object* v_i_1168_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1170_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = lean_nat_add(v_i_1168_, v___x_1171_);
v___x_1173_ = l_Nat_reprFast(v___x_1172_);
v___x_1174_ = lean_string_append(v___x_1170_, v___x_1173_);
lean_dec_ref(v___x_1173_);
v___x_1175_ = lean_array_get_size(v_args_1167_);
v___x_1176_ = lean_nat_dec_lt(v_i_1168_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = lean_box(0);
v___x_1178_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1174_, v___x_1177_);
lean_dec_ref(v___x_1174_);
return v___x_1178_;
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = lean_array_fget_borrowed(v_args_1167_, v_i_1168_);
lean_inc(v___x_1179_);
v___x_1180_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1174_, v___x_1179_);
lean_dec_ref(v___x_1174_);
return v___x_1180_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1181_, lean_object* v_i_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1181_, v_i_1182_);
lean_dec(v_i_1182_);
lean_dec_ref(v_args_1181_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(lean_object* v___f_1185_, lean_object* v_args_1186_){
_start:
{
lean_object* v___x_1188_; uint8_t v___x_1189_; lean_object* v_val_1191_; lean_object* v___x_1194_; 
v___x_1188_ = lean_unsigned_to_nat(0u);
v___x_1189_ = 0;
v___x_1194_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1186_, v___x_1188_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1194_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1194_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
lean_ctor_set_tag(v___x_1197_, 1);
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
v_val_1191_ = v___x_1200_;
goto v___jp_1190_;
}
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v_a_1203_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1194_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1194_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set_tag(v___x_1205_, 0);
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
v_val_1191_ = v___x_1208_;
goto v___jp_1190_;
}
}
}
v___jp_1190_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_val_1191_);
v___x_1193_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1188_, v___x_1189_, v___x_1192_, v___f_1185_);
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1211_, lean_object* v_args_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(v___f_1211_, v_args_1212_);
lean_dec_ref(v_args_1212_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(lean_object* v_f_1215_){
_start:
{
lean_object* v___f_1217_; lean_object* v___f_1218_; lean_object* v___f_1219_; lean_object* v___x_1220_; 
v___f_1217_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1218_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1218_, 0, v_f_1215_);
lean_closure_set(v___f_1218_, 1, v___f_1217_);
v___f_1219_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1219_, 0, v___f_1218_);
v___x_1220_ = l_Lasm_JS_Function_ofFn(v___f_1219_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1220_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1220_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___boxed(lean_object* v_f_1237_, lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(v_f_1237_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(lean_object* v_f_1240_, lean_object* v_args_1241_){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1241_, v___x_1243_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1246_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1244_, 1);
v___x_1246_ = lean_apply_2(v_f_1240_, v_a_1245_, lean_box(0));
return v___x_1246_;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v_f_1240_);
v_a_1247_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1244_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1244_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1255_, lean_object* v_args_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(v_f_1255_, v_args_1256_);
lean_dec_ref(v_args_1256_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(lean_object* v_f_1259_){
_start:
{
lean_object* v___f_1261_; lean_object* v___x_1262_; 
v___f_1261_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1261_, 0, v_f_1259_);
v___x_1262_ = l_Lasm_JS_Function_ofSyncFn(v___f_1261_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1262_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1262_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
else
{
lean_object* v_a_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
v_a_1271_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1273_ = v___x_1262_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_a_1271_);
lean_dec(v___x_1262_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1271_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___boxed(lean_object* v_f_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(v_f_1279_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(lean_object* v_f_1289_, lean_object* v_a_1290_, lean_object* v___f_1291_, lean_object* v_x_1292_){
_start:
{
if (lean_obj_tag(v_x_1292_) == 0)
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v___f_1291_);
lean_dec(v_a_1290_);
lean_dec_ref(v_f_1289_);
v_a_1294_ = lean_ctor_get(v_x_1292_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_x_1292_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1296_ = v_x_1292_;
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v_x_1292_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v_a_1303_ = lean_ctor_get(v_x_1292_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v_x_1292_, 1);
v___x_1304_ = lean_unsigned_to_nat(0u);
v___x_1305_ = 0;
v___x_1306_ = lean_apply_3(v_f_1289_, v_a_1290_, v_a_1303_, lean_box(0));
v___x_1307_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1304_, v___x_1305_, v___x_1306_, v___f_1291_);
return v___x_1307_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed(lean_object* v_f_1308_, lean_object* v_a_1309_, lean_object* v___f_1310_, lean_object* v_x_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(v_f_1308_, v_a_1309_, v___f_1310_, v_x_1311_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(lean_object* v_f_1314_, lean_object* v___f_1315_, lean_object* v_args_1316_, lean_object* v_x_1317_){
_start:
{
if (lean_obj_tag(v_x_1317_) == 0)
{
lean_object* v___x_1319_; 
lean_dec_ref(v___f_1315_);
lean_dec_ref(v_f_1314_);
v___x_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1319_, 0, v_x_1317_);
return v___x_1319_;
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1341_; 
v_a_1320_ = lean_ctor_get(v_x_1317_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v_x_1317_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1322_ = v_x_1317_;
v_isShared_1323_ = v_isSharedCheck_1341_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v_x_1317_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1341_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___f_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; lean_object* v_val_1329_; lean_object* v___x_1332_; 
v___f_1324_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1324_, 0, v_f_1314_);
lean_closure_set(v___f_1324_, 1, v_a_1320_);
lean_closure_set(v___f_1324_, 2, v___f_1315_);
v___x_1325_ = lean_unsigned_to_nat(1u);
v___x_1326_ = lean_unsigned_to_nat(0u);
v___x_1327_ = 0;
v___x_1332_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1316_, v___x_1325_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1335_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 0, v_a_1333_);
v___x_1335_ = v___x_1322_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_a_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
v_val_1329_ = v___x_1335_;
goto v___jp_1328_;
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; 
v_a_1337_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1337_);
lean_dec_ref_known(v___x_1332_, 1);
if (v_isShared_1323_ == 0)
{
lean_ctor_set_tag(v___x_1322_, 0);
lean_ctor_set(v___x_1322_, 0, v_a_1337_);
v___x_1339_ = v___x_1322_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1337_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
v_val_1329_ = v___x_1339_;
goto v___jp_1328_;
}
}
v___jp_1328_:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_val_1329_);
v___x_1331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1326_, v___x_1327_, v___x_1330_, v___f_1324_);
return v___x_1331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed(lean_object* v_f_1342_, lean_object* v___f_1343_, lean_object* v_args_1344_, lean_object* v_x_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(v_f_1342_, v___f_1343_, v_args_1344_, v_x_1345_);
lean_dec_ref(v_args_1344_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(lean_object* v_f_1348_, lean_object* v___f_1349_, lean_object* v_args_1350_){
_start:
{
lean_object* v___f_1352_; lean_object* v___x_1353_; uint8_t v___x_1354_; lean_object* v_val_1356_; lean_object* v___x_1359_; lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_inc_ref(v_args_1350_);
v___f_1352_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1352_, 0, v_f_1348_);
lean_closure_set(v___f_1352_, 1, v___f_1349_);
lean_closure_set(v___f_1352_, 2, v_args_1350_);
v___x_1353_ = lean_unsigned_to_nat(0u);
v___x_1354_ = 0;
v___x_1359_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1350_, v___x_1353_);
lean_dec_ref(v_args_1350_);
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v___jp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_val_1356_);
v___x_1358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1353_, v___x_1354_, v___x_1357_, v___f_1352_);
return v___x_1358_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 1);
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
v_val_1356_ = v___x_1365_;
goto v___jp_1355_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed(lean_object* v_f_1368_, lean_object* v___f_1369_, lean_object* v_args_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(v_f_1368_, v___f_1369_, v_args_1370_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(lean_object* v_f_1373_){
_start:
{
lean_object* v___f_1375_; lean_object* v___f_1376_; lean_object* v___x_1377_; 
v___f_1375_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1376_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1376_, 0, v_f_1373_);
lean_closure_set(v___f_1376_, 1, v___f_1375_);
v___x_1377_ = l_Lasm_JS_Function_ofFn(v___f_1376_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1377_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
v_a_1386_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1377_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1377_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___boxed(lean_object* v_f_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(v_f_1394_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(lean_object* v_f_1397_, lean_object* v_args_1398_){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v_a_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1398_, v___x_1400_);
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref(v___x_1401_);
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1398_, v___x_1403_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v___x_1406_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref_known(v___x_1404_, 1);
v___x_1406_ = lean_apply_3(v_f_1397_, v_a_1402_, v_a_1405_, lean_box(0));
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1414_ == 0)
{
lean_object* v_unused_1415_; 
v_unused_1415_ = lean_ctor_get(v___x_1406_, 0);
lean_dec(v_unused_1415_);
v___x_1408_ = v___x_1406_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_dec(v___x_1406_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1410_ = lean_box(0);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1410_);
v___x_1412_ = v___x_1408_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
else
{
lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1423_; 
v_a_1416_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1423_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1423_ == 0)
{
v___x_1418_ = v___x_1406_;
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_dec(v___x_1406_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1423_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
lean_object* v___x_1421_; 
if (v_isShared_1419_ == 0)
{
v___x_1421_ = v___x_1418_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v_a_1416_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec(v_a_1402_);
lean_dec_ref(v_f_1397_);
v_a_1424_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1404_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1404_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1432_, lean_object* v_args_1433_, lean_object* v___y_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(v_f_1432_, v_args_1433_);
lean_dec_ref(v_args_1433_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(lean_object* v_f_1436_){
_start:
{
lean_object* v___f_1438_; lean_object* v___x_1439_; 
v___f_1438_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1438_, 0, v_f_1436_);
v___x_1439_ = l_Lasm_JS_Function_ofSyncFn(v___f_1438_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1439_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1439_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
v_a_1448_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1439_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1439_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___boxed(lean_object* v_f_1456_, lean_object* v_a_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(v_f_1456_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(lean_object* v_f_1466_, lean_object* v___f_1467_, lean_object* v_x_1468_){
_start:
{
lean_object* v___x_1470_; uint8_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = 0;
v___x_1472_ = lean_apply_1(v_f_1466_, lean_box(0));
v___x_1473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1470_, v___x_1471_, v___x_1472_, v___f_1467_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed(lean_object* v_f_1474_, lean_object* v___f_1475_, lean_object* v_x_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(v_f_1474_, v___f_1475_, v_x_1476_);
lean_dec_ref(v_x_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(lean_object* v_f_1479_){
_start:
{
lean_object* v___f_1481_; lean_object* v___f_1482_; lean_object* v___x_1483_; 
v___f_1481_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1482_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1482_, 0, v_f_1479_);
lean_closure_set(v___f_1482_, 1, v___f_1481_);
v___x_1483_ = l_Lasm_JS_Function_ofFn(v___f_1482_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1491_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1486_ = v___x_1483_;
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_a_1484_);
lean_dec(v___x_1483_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1491_;
goto v_resetjp_1485_;
}
v_resetjp_1485_:
{
lean_object* v___x_1489_; 
if (v_isShared_1487_ == 0)
{
v___x_1489_ = v___x_1486_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v_a_1484_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
v_a_1492_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1483_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1483_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___boxed(lean_object* v_f_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(v_f_1500_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(lean_object* v_f_1503_, lean_object* v_x_1504_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_apply_1(v_f_1503_, lean_box(0));
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1514_; 
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1506_, 0);
lean_dec(v_unused_1515_);
v___x_1508_ = v___x_1506_;
v_isShared_1509_ = v_isSharedCheck_1514_;
goto v_resetjp_1507_;
}
else
{
lean_dec(v___x_1506_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1514_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
v___x_1510_ = lean_box(0);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 0, v___x_1510_);
v___x_1512_ = v___x_1508_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
v_a_1516_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1506_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1506_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1524_, lean_object* v_x_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(v_f_1524_, v_x_1525_);
lean_dec_ref(v_x_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(lean_object* v_f_1528_){
_start:
{
lean_object* v___f_1530_; lean_object* v___x_1531_; 
v___f_1530_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1530_, 0, v_f_1528_);
v___x_1531_ = l_Lasm_JS_Function_ofSyncFn(v___f_1530_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
v_a_1540_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1531_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1531_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___boxed(lean_object* v_f_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(v_f_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(lean_object* v_f_1558_){
_start:
{
lean_object* v___f_1560_; lean_object* v___f_1561_; lean_object* v___f_1562_; lean_object* v___x_1563_; 
v___f_1560_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1561_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1561_, 0, v_f_1558_);
lean_closure_set(v___f_1561_, 1, v___f_1560_);
v___f_1562_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1562_, 0, v___f_1561_);
v___x_1563_ = l_Lasm_JS_Function_ofFn(v___f_1562_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1563_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1563_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
v_a_1572_ = lean_ctor_get(v___x_1563_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1563_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1563_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1563_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn___boxed(lean_object* v_f_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(v_f_1580_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(lean_object* v_f_1583_){
_start:
{
lean_object* v___f_1585_; lean_object* v___x_1586_; 
v___f_1585_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1585_, 0, v_f_1583_);
v___x_1586_ = l_Lasm_JS_Function_ofSyncFn(v___f_1585_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
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
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
v_a_1595_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1586_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1586_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn___boxed(lean_object* v_f_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_res_1605_; 
v_res_1605_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(v_f_1603_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0(lean_object* v___f_1609_, lean_object* v___f_1610_, lean_object* v___f_1611_, lean_object* v___f_1612_, lean_object* v_d_1613_){
_start:
{
lean_object* v_start_1614_; lean_object* v_write_1615_; lean_object* v_close_1616_; lean_object* v_abort_1617_; lean_object* v_type_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_start_1614_ = lean_ctor_get(v_d_1613_, 0);
lean_inc(v_start_1614_);
v_write_1615_ = lean_ctor_get(v_d_1613_, 1);
lean_inc(v_write_1615_);
v_close_1616_ = lean_ctor_get(v_d_1613_, 2);
lean_inc(v_close_1616_);
v_abort_1617_ = lean_ctor_get(v_d_1613_, 3);
lean_inc(v_abort_1617_);
v_type_1618_ = lean_ctor_get(v_d_1613_, 4);
lean_inc(v_type_1618_);
lean_dec_ref(v_d_1613_);
v___x_1619_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_1620_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1609_, v_start_1614_);
v___x_1621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_1623_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1610_, v_write_1615_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1622_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_1626_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1611_, v_close_1616_);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_1629_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1612_, v_abort_1617_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3));
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
lean_ctor_set(v___x_1632_, 1, v_type_1618_);
v___x_1633_ = lean_unsigned_to_nat(5u);
v___x_1634_ = lean_mk_empty_array_with_capacity(v___x_1633_);
v___x_1635_ = lean_array_push(v___x_1634_, v___x_1621_);
v___x_1636_ = lean_array_push(v___x_1635_, v___x_1624_);
v___x_1637_ = lean_array_push(v___x_1636_, v___x_1627_);
v___x_1638_ = lean_array_push(v___x_1637_, v___x_1630_);
v___x_1639_ = lean_array_push(v___x_1638_, v___x_1632_);
v___x_1640_ = l_Lasm_JS_Web_Support_fields(v___x_1639_);
lean_dec_ref(v___x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1651_, lean_object* v_d_1652_){
_start:
{
lean_object* v___y_1655_; lean_object* v___y_1656_; 
if (lean_obj_tag(v_d_1652_) == 9)
{
lean_object* v_value_1660_; lean_object* v___x_1661_; 
v_value_1660_ = lean_ctor_get(v_d_1652_, 0);
lean_inc(v_value_1660_);
lean_dec_ref_known(v_d_1652_, 2);
v___x_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1661_, 0, v_value_1660_);
return v___x_1661_;
}
else
{
lean_object* v___x_1662_; lean_object* v_received_1664_; 
v___x_1662_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_1652_) == 9)
{
lean_object* v_value_1678_; lean_object* v_description_1679_; uint8_t v___x_1680_; 
v_value_1678_ = lean_ctor_get(v_d_1652_, 0);
v_description_1679_ = lean_ctor_get(v_d_1652_, 1);
v___x_1680_ = lean_string_dec_eq(v_description_1679_, v___x_1662_);
if (v___x_1680_ == 0)
{
goto v___jp_1676_;
}
else
{
uint32_t v___x_1681_; uint64_t v___x_1682_; lean_object* v___x_1683_; uint32_t v___x_1684_; lean_object* v___x_1685_; 
lean_inc_n(v_value_1678_, 2);
lean_dec_ref_known(v_d_1652_, 2);
v___x_1681_ = 206;
v___x_1682_ = 0ULL;
v___x_1683_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1683_, 0, v_value_1678_);
lean_ctor_set(v___x_1683_, 1, v___x_1662_);
v___x_1684_ = lasm_js_value_handle(v_value_1678_);
lean_dec(v_value_1678_);
v___x_1685_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1681_, v___x_1682_, v___x_1683_, v___x_1684_);
lean_dec_ref_known(v___x_1683_, 2);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; uint8_t v___x_1687_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_a_1686_);
lean_dec_ref_known(v___x_1685_, 1);
v___x_1687_ = lean_string_validate_utf8(v_a_1686_);
if (v___x_1687_ == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec(v_a_1686_);
v___x_1688_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1689_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1688_);
v_received_1664_ = v___x_1689_;
goto v___jp_1663_;
}
else
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_string_from_utf8_unchecked(v_a_1686_);
v_received_1664_ = v___x_1690_;
goto v___jp_1663_;
}
}
else
{
lean_object* v___x_1691_; 
lean_dec_ref_known(v___x_1685_, 1);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_1664_ = v___x_1691_;
goto v___jp_1663_;
}
}
}
else
{
goto v___jp_1676_;
}
v___jp_1663_:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1665_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1666_ = lean_string_append(v___x_1665_, v_context_1651_);
v___x_1667_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1668_ = lean_string_append(v___x_1666_, v___x_1667_);
v___x_1669_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0));
v___x_1670_ = lean_string_append(v___x_1668_, v___x_1669_);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1672_ = lean_string_append(v___x_1670_, v___x_1671_);
v___x_1673_ = lean_string_append(v___x_1672_, v_received_1664_);
lean_dec_ref(v_received_1664_);
v___x_1674_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
v___x_1675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_1655_ = v___x_1673_;
v___y_1656_ = v___x_1675_;
goto v___jp_1654_;
}
else
{
v___y_1655_ = v___x_1673_;
v___y_1656_ = v___x_1662_;
goto v___jp_1654_;
}
}
v___jp_1676_:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lasm_JS_Data_describe(v_d_1652_);
v_received_1664_ = v___x_1677_;
goto v___jp_1663_;
}
}
v___jp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1657_ = lean_string_append(v___y_1655_, v___y_1656_);
v___x_1658_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1692_, lean_object* v_d_1693_, lean_object* v_a_1694_){
_start:
{
lean_object* v_res_1695_; 
v_res_1695_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v_context_1692_, v_d_1693_);
lean_dec_ref(v_context_1692_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(lean_object* v_args_1696_, lean_object* v_i_1697_){
_start:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v___x_1699_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1700_ = lean_unsigned_to_nat(1u);
v___x_1701_ = lean_nat_add(v_i_1697_, v___x_1700_);
v___x_1702_ = l_Nat_reprFast(v___x_1701_);
v___x_1703_ = lean_string_append(v___x_1699_, v___x_1702_);
lean_dec_ref(v___x_1702_);
v___x_1704_ = lean_array_get_size(v_args_1696_);
v___x_1705_ = lean_nat_dec_lt(v_i_1697_, v___x_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_box(0);
v___x_1707_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1703_, v___x_1706_);
lean_dec_ref(v___x_1703_);
return v___x_1707_;
}
else
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = lean_array_fget_borrowed(v_args_1696_, v_i_1697_);
lean_inc(v___x_1708_);
v___x_1709_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1703_, v___x_1708_);
lean_dec_ref(v___x_1703_);
return v___x_1709_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1710_, lean_object* v_i_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1710_, v_i_1711_);
lean_dec(v_i_1711_);
lean_dec_ref(v_args_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(lean_object* v___f_1714_, lean_object* v_args_1715_){
_start:
{
lean_object* v___x_1717_; uint8_t v___x_1718_; lean_object* v_val_1720_; lean_object* v___x_1723_; 
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = 0;
v___x_1723_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1715_, v___x_1717_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set_tag(v___x_1726_, 1);
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
v_val_1720_ = v___x_1729_;
goto v___jp_1719_;
}
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_a_1732_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1723_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1723_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
lean_ctor_set_tag(v___x_1734_, 0);
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v_val_1720_ = v___x_1737_;
goto v___jp_1719_;
}
}
}
v___jp_1719_:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_val_1720_);
v___x_1722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1717_, v___x_1718_, v___x_1721_, v___f_1714_);
return v___x_1722_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1740_, lean_object* v_args_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(v___f_1740_, v_args_1741_);
lean_dec_ref(v_args_1741_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn(lean_object* v_f_1744_){
_start:
{
lean_object* v___f_1746_; lean_object* v___f_1747_; lean_object* v___f_1748_; lean_object* v___x_1749_; 
v___f_1746_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1747_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1747_, 0, v_f_1744_);
lean_closure_set(v___f_1747_, 1, v___f_1746_);
v___f_1748_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1748_, 0, v___f_1747_);
v___x_1749_ = l_Lasm_JS_Function_ofFn(v___f_1748_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1749_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1749_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
v_a_1758_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1749_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1749_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___boxed(lean_object* v_f_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn(v_f_1766_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(lean_object* v_f_1769_, lean_object* v_args_1770_){
_start:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1772_ = lean_unsigned_to_nat(0u);
v___x_1773_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1770_, v___x_1772_);
if (lean_obj_tag(v___x_1773_) == 0)
{
lean_object* v_a_1774_; lean_object* v___x_1775_; 
v_a_1774_ = lean_ctor_get(v___x_1773_, 0);
lean_inc(v_a_1774_);
lean_dec_ref_known(v___x_1773_, 1);
v___x_1775_ = lean_apply_2(v_f_1769_, v_a_1774_, lean_box(0));
return v___x_1775_;
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_dec_ref(v_f_1769_);
v_a_1776_ = lean_ctor_get(v___x_1773_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1773_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1773_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1773_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1784_, lean_object* v_args_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(v_f_1784_, v_args_1785_);
lean_dec_ref(v_args_1785_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(lean_object* v_f_1788_){
_start:
{
lean_object* v___f_1790_; lean_object* v___x_1791_; 
v___f_1790_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1790_, 0, v_f_1788_);
v___x_1791_ = l_Lasm_JS_Function_ofSyncFn(v___f_1790_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1799_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1794_ = v___x_1791_;
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1791_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
v_a_1800_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1791_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1791_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___boxed(lean_object* v_f_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(v_f_1808_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(lean_object* v_f_1818_, lean_object* v___f_1819_, lean_object* v_args_1820_, lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1821_) == 0)
{
lean_object* v___x_1823_; 
lean_dec_ref(v___f_1819_);
lean_dec_ref(v_f_1818_);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v_x_1821_);
return v___x_1823_;
}
else
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1845_; 
v_a_1824_ = lean_ctor_get(v_x_1821_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_x_1821_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1826_ = v_x_1821_;
v_isShared_1827_ = v_isSharedCheck_1845_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v_x_1821_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1845_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; lean_object* v_val_1833_; lean_object* v___x_1836_; 
v___f_1828_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1828_, 0, v_f_1818_);
lean_closure_set(v___f_1828_, 1, v_a_1824_);
lean_closure_set(v___f_1828_, 2, v___f_1819_);
v___x_1829_ = lean_unsigned_to_nat(1u);
v___x_1830_ = lean_unsigned_to_nat(0u);
v___x_1831_ = 0;
v___x_1836_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1820_, v___x_1829_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1839_; 
v_a_1837_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1837_);
lean_dec_ref_known(v___x_1836_, 1);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v_a_1837_);
v___x_1839_ = v___x_1826_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1837_);
v___x_1839_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
v_val_1833_ = v___x_1839_;
goto v___jp_1832_;
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; 
v_a_1841_ = lean_ctor_get(v___x_1836_, 0);
lean_inc(v_a_1841_);
lean_dec_ref_known(v___x_1836_, 1);
if (v_isShared_1827_ == 0)
{
lean_ctor_set_tag(v___x_1826_, 0);
lean_ctor_set(v___x_1826_, 0, v_a_1841_);
v___x_1843_ = v___x_1826_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1841_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
v_val_1833_ = v___x_1843_;
goto v___jp_1832_;
}
}
v___jp_1832_:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v_val_1833_);
v___x_1835_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1830_, v___x_1831_, v___x_1834_, v___f_1828_);
return v___x_1835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed(lean_object* v_f_1846_, lean_object* v___f_1847_, lean_object* v_args_1848_, lean_object* v_x_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(v_f_1846_, v___f_1847_, v_args_1848_, v_x_1849_);
lean_dec_ref(v_args_1848_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(lean_object* v_f_1852_, lean_object* v___f_1853_, lean_object* v_args_1854_){
_start:
{
lean_object* v___f_1856_; lean_object* v___x_1857_; uint8_t v___x_1858_; lean_object* v_val_1860_; lean_object* v___x_1863_; lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_inc_ref(v_args_1854_);
v___f_1856_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1856_, 0, v_f_1852_);
lean_closure_set(v___f_1856_, 1, v___f_1853_);
lean_closure_set(v___f_1856_, 2, v_args_1854_);
v___x_1857_ = lean_unsigned_to_nat(0u);
v___x_1858_ = 0;
v___x_1863_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1854_, v___x_1857_);
lean_dec_ref(v_args_1854_);
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1863_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1863_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v___jp_1859_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1861_, 0, v_val_1860_);
v___x_1862_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1857_, v___x_1858_, v___x_1861_, v___f_1856_);
return v___x_1862_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
lean_ctor_set_tag(v___x_1866_, 1);
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
v_val_1860_ = v___x_1869_;
goto v___jp_1859_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed(lean_object* v_f_1872_, lean_object* v___f_1873_, lean_object* v_args_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(v_f_1872_, v___f_1873_, v_args_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn(lean_object* v_f_1877_){
_start:
{
lean_object* v___f_1879_; lean_object* v___f_1880_; lean_object* v___x_1881_; 
v___f_1879_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1880_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1880_, 0, v_f_1877_);
lean_closure_set(v___f_1880_, 1, v___f_1879_);
v___x_1881_ = l_Lasm_JS_Function_ofFn(v___f_1880_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1881_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1881_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___boxed(lean_object* v_f_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn(v_f_1898_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(lean_object* v_f_1901_, lean_object* v_args_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v_a_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1902_, v___x_1904_);
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref(v___x_1905_);
v___x_1907_ = lean_unsigned_to_nat(1u);
v___x_1908_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1902_, v___x_1907_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = lean_apply_3(v_f_1901_, v_a_1906_, v_a_1909_, lean_box(0));
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1918_; 
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v___x_1910_, 0);
lean_dec(v_unused_1919_);
v___x_1912_ = v___x_1910_;
v_isShared_1913_ = v_isSharedCheck_1918_;
goto v_resetjp_1911_;
}
else
{
lean_dec(v___x_1910_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1918_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1914_; lean_object* v___x_1916_; 
v___x_1914_ = lean_box(0);
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 0, v___x_1914_);
v___x_1916_ = v___x_1912_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1910_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1910_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_a_1906_);
lean_dec_ref(v_f_1901_);
v_a_1928_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1908_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1908_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1936_, lean_object* v_args_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(v_f_1936_, v_args_1937_);
lean_dec_ref(v_args_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(lean_object* v_f_1940_){
_start:
{
lean_object* v___f_1942_; lean_object* v___x_1943_; 
v___f_1942_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1942_, 0, v_f_1940_);
v___x_1943_ = l_Lasm_JS_Function_ofSyncFn(v___f_1942_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
v_a_1944_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1943_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1943_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
v_a_1952_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1943_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1943_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___boxed(lean_object* v_f_1960_, lean_object* v_a_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(v_f_1960_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn(lean_object* v_f_1970_){
_start:
{
lean_object* v___f_1972_; lean_object* v___f_1973_; lean_object* v___f_1974_; lean_object* v___x_1975_; 
v___f_1972_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1973_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1973_, 0, v_f_1970_);
lean_closure_set(v___f_1973_, 1, v___f_1972_);
v___f_1974_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1974_, 0, v___f_1973_);
v___x_1975_ = l_Lasm_JS_Function_ofFn(v___f_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
v_a_1984_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1975_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1975_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn___boxed(lean_object* v_f_1992_, lean_object* v_a_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lasm_JS_Web_TransformerFlushCallback_ofFn(v_f_1992_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(lean_object* v_f_1995_, lean_object* v_args_1996_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1996_, v___x_1998_);
if (lean_obj_tag(v___x_1999_) == 0)
{
lean_object* v_a_2000_; lean_object* v___x_2001_; 
v_a_2000_ = lean_ctor_get(v___x_1999_, 0);
lean_inc(v_a_2000_);
lean_dec_ref_known(v___x_1999_, 1);
v___x_2001_ = lean_apply_2(v_f_1995_, v_a_2000_, lean_box(0));
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2009_; 
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2009_ == 0)
{
lean_object* v_unused_2010_; 
v_unused_2010_ = lean_ctor_get(v___x_2001_, 0);
lean_dec(v_unused_2010_);
v___x_2003_ = v___x_2001_;
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
else
{
lean_dec(v___x_2001_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2009_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2005_ = lean_box(0);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2005_);
v___x_2007_ = v___x_2003_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
return v___x_2007_;
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2001_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2001_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec_ref(v_f_1995_);
v_a_2019_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_1999_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_1999_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_2027_, lean_object* v_args_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(v_f_2027_, v_args_2028_);
lean_dec_ref(v_args_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(lean_object* v_f_2031_){
_start:
{
lean_object* v___f_2033_; lean_object* v___x_2034_; 
v___f_2033_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2033_, 0, v_f_2031_);
v___x_2034_ = l_Lasm_JS_Function_ofSyncFn(v___f_2033_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2034_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2034_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2034_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2034_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___boxed(lean_object* v_f_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(v_f_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn(lean_object* v_f_2061_){
_start:
{
lean_object* v___f_2063_; lean_object* v___f_2064_; lean_object* v___f_2065_; lean_object* v___x_2066_; 
v___f_2063_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_2064_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2064_, 0, v_f_2061_);
lean_closure_set(v___f_2064_, 1, v___f_2063_);
v___f_2065_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2065_, 0, v___f_2064_);
v___x_2066_ = l_Lasm_JS_Function_ofFn(v___f_2065_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
v_a_2075_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2066_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2066_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn___boxed(lean_object* v_f_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lasm_JS_Web_TransformerCancelCallback_ofFn(v_f_2083_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(lean_object* v_f_2086_){
_start:
{
lean_object* v___f_2088_; lean_object* v___x_2089_; 
v___f_2088_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2088_, 0, v_f_2086_);
v___x_2089_ = l_Lasm_JS_Function_ofSyncFn(v___f_2088_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2097_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2092_ = v___x_2089_;
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2089_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_a_2090_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
else
{
lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
v_a_2098_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2089_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2089_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn___boxed(lean_object* v_f_2106_, lean_object* v_a_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(v_f_2106_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0(lean_object* v___f_2113_, lean_object* v___f_2114_, lean_object* v___f_2115_, lean_object* v___f_2116_, lean_object* v_d_2117_){
_start:
{
lean_object* v_start_2118_; lean_object* v_transform_2119_; lean_object* v_flush_2120_; lean_object* v_cancel_2121_; lean_object* v_readableType_2122_; lean_object* v_writableType_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_start_2118_ = lean_ctor_get(v_d_2117_, 0);
lean_inc(v_start_2118_);
v_transform_2119_ = lean_ctor_get(v_d_2117_, 1);
lean_inc(v_transform_2119_);
v_flush_2120_ = lean_ctor_get(v_d_2117_, 2);
lean_inc(v_flush_2120_);
v_cancel_2121_ = lean_ctor_get(v_d_2117_, 3);
lean_inc(v_cancel_2121_);
v_readableType_2122_ = lean_ctor_get(v_d_2117_, 4);
lean_inc(v_readableType_2122_);
v_writableType_2123_ = lean_ctor_get(v_d_2117_, 5);
lean_inc(v_writableType_2123_);
lean_dec_ref(v_d_2117_);
v___x_2124_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_2125_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2113_, v_start_2118_);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0));
v___x_2128_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2114_, v_transform_2119_);
v___x_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1));
v___x_2131_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2115_, v_flush_2120_);
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2130_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2134_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2116_, v_cancel_2121_);
v___x_2135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2133_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
v___x_2136_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2));
v___x_2137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
lean_ctor_set(v___x_2137_, 1, v_readableType_2122_);
v___x_2138_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3));
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v_writableType_2123_);
v___x_2140_ = lean_unsigned_to_nat(6u);
v___x_2141_ = lean_mk_empty_array_with_capacity(v___x_2140_);
v___x_2142_ = lean_array_push(v___x_2141_, v___x_2126_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2129_);
v___x_2144_ = lean_array_push(v___x_2143_, v___x_2132_);
v___x_2145_ = lean_array_push(v___x_2144_, v___x_2135_);
v___x_2146_ = lean_array_push(v___x_2145_, v___x_2137_);
v___x_2147_ = lean_array_push(v___x_2146_, v___x_2139_);
v___x_2148_ = l_Lasm_JS_Web_Support_fields(v___x_2147_);
lean_dec_ref(v___x_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(lean_object* v_context_2152_, lean_object* v_d_2153_){
_start:
{
lean_object* v___y_2156_; lean_object* v___y_2157_; 
if (lean_obj_tag(v_d_2153_) == 9)
{
lean_object* v_value_2161_; lean_object* v___x_2162_; 
v_value_2161_ = lean_ctor_get(v_d_2153_, 0);
lean_inc(v_value_2161_);
lean_dec_ref_known(v_d_2153_, 2);
v___x_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2162_, 0, v_value_2161_);
return v___x_2162_;
}
else
{
lean_object* v___x_2163_; lean_object* v_received_2165_; 
v___x_2163_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_2153_) == 9)
{
lean_object* v_value_2179_; lean_object* v_description_2180_; uint8_t v___x_2181_; 
v_value_2179_ = lean_ctor_get(v_d_2153_, 0);
v_description_2180_ = lean_ctor_get(v_d_2153_, 1);
v___x_2181_ = lean_string_dec_eq(v_description_2180_, v___x_2163_);
if (v___x_2181_ == 0)
{
goto v___jp_2177_;
}
else
{
uint32_t v___x_2182_; uint64_t v___x_2183_; lean_object* v___x_2184_; uint32_t v___x_2185_; lean_object* v___x_2186_; 
lean_inc_n(v_value_2179_, 2);
lean_dec_ref_known(v_d_2153_, 2);
v___x_2182_ = 206;
v___x_2183_ = 0ULL;
v___x_2184_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2184_, 0, v_value_2179_);
lean_ctor_set(v___x_2184_, 1, v___x_2163_);
v___x_2185_ = lasm_js_value_handle(v_value_2179_);
lean_dec(v_value_2179_);
v___x_2186_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2182_, v___x_2183_, v___x_2184_, v___x_2185_);
lean_dec_ref_known(v___x_2184_, 2);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; uint8_t v___x_2188_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
lean_inc(v_a_2187_);
lean_dec_ref_known(v___x_2186_, 1);
v___x_2188_ = lean_string_validate_utf8(v_a_2187_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; lean_object* v___x_2190_; 
lean_dec(v_a_2187_);
v___x_2189_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_2190_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2189_);
v_received_2165_ = v___x_2190_;
goto v___jp_2164_;
}
else
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_string_from_utf8_unchecked(v_a_2187_);
v_received_2165_ = v___x_2191_;
goto v___jp_2164_;
}
}
else
{
lean_object* v___x_2192_; 
lean_dec_ref_known(v___x_2186_, 1);
v___x_2192_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_2165_ = v___x_2192_;
goto v___jp_2164_;
}
}
}
else
{
goto v___jp_2177_;
}
v___jp_2164_:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2166_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2167_ = lean_string_append(v___x_2166_, v_context_2152_);
v___x_2168_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2169_ = lean_string_append(v___x_2167_, v___x_2168_);
v___x_2170_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStream___closed__1));
v___x_2171_ = lean_string_append(v___x_2169_, v___x_2170_);
v___x_2172_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2173_ = lean_string_append(v___x_2171_, v___x_2172_);
v___x_2174_ = lean_string_append(v___x_2173_, v_received_2165_);
lean_dec_ref(v_received_2165_);
v___x_2175_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; 
v___x_2176_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_2156_ = v___x_2174_;
v___y_2157_ = v___x_2176_;
goto v___jp_2155_;
}
else
{
v___y_2156_ = v___x_2174_;
v___y_2157_ = v___x_2163_;
goto v___jp_2155_;
}
}
v___jp_2177_:
{
lean_object* v___x_2178_; 
v___x_2178_ = l_Lasm_JS_Data_describe(v_d_2153_);
v_received_2165_ = v___x_2178_;
goto v___jp_2164_;
}
}
v___jp_2155_:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2158_ = lean_string_append(v___y_2156_, v___y_2157_);
v___x_2159_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2158_);
v___x_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
return v___x_2160_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3___boxed(lean_object* v_context_2193_, lean_object* v_d_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v_context_2193_, v_d_2194_);
lean_dec_ref(v_context_2193_);
return v_res_2196_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_2198_; uint64_t v___x_2199_; 
v___x_2198_ = 0;
v___x_2199_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2198_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(lean_object* v_b_2200_, lean_object* v_args_2201_, uint8_t v_await_2202_){
_start:
{
uint64_t v___y_2205_; uint64_t v___y_2206_; uint64_t v___x_2249_; uint64_t v___y_2251_; 
v___x_2249_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_2202_ == 0)
{
uint64_t v___x_2256_; 
v___x_2256_ = 0ULL;
v___y_2251_ = v___x_2256_;
goto v___jp_2250_;
}
else
{
uint64_t v___x_2257_; 
v___x_2257_ = 2ULL;
v___y_2251_ = v___x_2257_;
goto v___jp_2250_;
}
v___jp_2204_:
{
uint64_t v_flags_2207_; uint32_t v___x_2208_; lean_object* v___x_2209_; uint32_t v___x_2210_; lean_object* v___x_2211_; 
v_flags_2207_ = lean_uint64_lor(v___y_2205_, v___y_2206_);
v___x_2208_ = 214;
v___x_2209_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2200_, v_args_2201_);
v___x_2210_ = 0;
v___x_2211_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2208_, v_flags_2207_, v___x_2209_, v___x_2210_);
lean_dec(v___x_2209_);
if (lean_obj_tag(v___x_2211_) == 0)
{
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; lean_object* v___x_2213_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2213_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2212_);
lean_dec(v_a_2212_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v_a_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v_a_2214_ = lean_ctor_get(v___x_2213_, 0);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___x_2213_, 1);
v___x_2215_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2200_);
v___x_2216_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v___x_2215_, v_a_2214_);
lean_dec_ref(v___x_2215_);
return v___x_2216_;
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
v_a_2217_ = lean_ctor_get(v___x_2213_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2213_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2213_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_object* v_a_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2232_; 
v_a_2225_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2232_ == 0)
{
v___x_2227_ = v___x_2211_;
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_a_2225_);
lean_dec(v___x_2211_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2232_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v___x_2230_; 
if (v_isShared_2228_ == 0)
{
lean_ctor_set_tag(v___x_2227_, 1);
v___x_2230_ = v___x_2227_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v_a_2225_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2248_; 
v_a_2233_ = lean_ctor_get(v___x_2211_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2211_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2235_ = v___x_2211_;
v_isShared_2236_ = v_isSharedCheck_2248_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2211_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2248_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2246_; 
v___x_2237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2238_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2200_);
v___x_2239_ = lean_string_append(v___x_2237_, v___x_2238_);
lean_dec_ref(v___x_2238_);
v___x_2240_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_2241_ = lean_string_append(v___x_2239_, v___x_2240_);
v___x_2242_ = lean_io_error_to_string(v_a_2233_);
v___x_2243_ = lean_string_append(v___x_2241_, v___x_2242_);
lean_dec_ref(v___x_2242_);
v___x_2244_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2244_);
v___x_2246_ = v___x_2235_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
v___jp_2250_:
{
uint8_t v_construct_2252_; uint64_t v___x_2253_; 
v_construct_2252_ = lean_ctor_get_uint8(v_b_2200_, sizeof(void*)*4);
v___x_2253_ = lean_uint64_lor(v___x_2249_, v___y_2251_);
if (v_construct_2252_ == 0)
{
uint64_t v___x_2254_; 
v___x_2254_ = 0ULL;
v___y_2205_ = v___x_2253_;
v___y_2206_ = v___x_2254_;
goto v___jp_2204_;
}
else
{
uint64_t v___x_2255_; 
v___x_2255_ = 4ULL;
v___y_2205_ = v___x_2253_;
v___y_2206_ = v___x_2255_;
goto v___jp_2204_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___boxed(lean_object* v_b_2258_, lean_object* v_args_2259_, lean_object* v_await_2260_, lean_object* v_a_2261_){
_start:
{
uint8_t v_await_boxed_2262_; lean_object* v_res_2263_; 
v_await_boxed_2262_ = lean_unbox(v_await_2260_);
v_res_2263_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v_b_2258_, v_args_2259_, v_await_boxed_2262_);
lean_dec_ref(v_b_2258_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(lean_object* v_x_2264_){
_start:
{
if (lean_obj_tag(v_x_2264_) == 0)
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_box(0);
return v___x_2265_;
}
else
{
lean_object* v_val_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v_val_2266_ = lean_ctor_get(v_x_2264_, 0);
v___x_2267_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
lean_inc(v_val_2266_);
v___x_2268_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2268_, 0, v_val_2266_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
return v___x_2268_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1___boxed(lean_object* v_x_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_x_2269_);
lean_dec(v_x_2269_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object* v_x_2271_){
_start:
{
if (lean_obj_tag(v_x_2271_) == 0)
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_box(0);
return v___x_2272_;
}
else
{
lean_object* v_val_2273_; lean_object* v___x_2274_; double v___x_2275_; 
v_val_2273_ = lean_ctor_get(v_x_2271_, 0);
v___x_2274_ = lean_alloc_ctor(3, 0, 8);
v___x_2275_ = lean_unbox_float(v_val_2273_);
lean_ctor_set_float(v___x_2274_, 0, v___x_2275_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0___boxed(lean_object* v_x_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_x_2276_);
lean_dec(v_x_2276_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(lean_object* v_x_2278_){
_start:
{
if (lean_obj_tag(v_x_2278_) == 0)
{
lean_object* v___x_2279_; 
v___x_2279_ = lean_box(0);
return v___x_2279_;
}
else
{
lean_object* v_val_2280_; lean_object* v_highWaterMark_2281_; lean_object* v_size_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2299_; 
v_val_2280_ = lean_ctor_get(v_x_2278_, 0);
lean_inc(v_val_2280_);
lean_dec_ref_known(v_x_2278_, 1);
v_highWaterMark_2281_ = lean_ctor_get(v_val_2280_, 0);
v_size_2282_ = lean_ctor_get(v_val_2280_, 1);
v_isSharedCheck_2299_ = !lean_is_exclusive(v_val_2280_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2284_ = v_val_2280_;
v_isShared_2285_ = v_isSharedCheck_2299_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_size_2282_);
lean_inc(v_highWaterMark_2281_);
lean_dec(v_val_2280_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2299_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2286_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_2287_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_highWaterMark_2281_);
lean_dec(v_highWaterMark_2281_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 1, v___x_2287_);
lean_ctor_set(v___x_2284_, 0, v___x_2286_);
v___x_2289_ = v___x_2284_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2286_);
lean_ctor_set(v_reuseFailAlloc_2298_, 1, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_2291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_size_2282_);
lean_dec(v_size_2282_);
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2290_);
lean_ctor_set(v___x_2292_, 1, v___x_2291_);
v___x_2293_ = lean_unsigned_to_nat(2u);
v___x_2294_ = lean_mk_empty_array_with_capacity(v___x_2293_);
v___x_2295_ = lean_array_push(v___x_2294_, v___x_2289_);
v___x_2296_ = lean_array_push(v___x_2295_, v___x_2292_);
v___x_2297_ = l_Lasm_JS_Web_Support_fields(v___x_2296_);
lean_dec_ref(v___x_2296_);
return v___x_2297_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new(lean_object* v_underlyingSource_2309_, lean_object* v_strategy_2310_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; lean_object* v___x_2320_; 
v___x_2312_ = lean_unsigned_to_nat(2u);
v___x_2313_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_new___closed__3));
v___x_2314_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_2310_);
v___x_2315_ = lean_mk_empty_array_with_capacity(v___x_2312_);
v___x_2316_ = lean_array_push(v___x_2315_, v_underlyingSource_2309_);
v___x_2317_ = lean_array_push(v___x_2316_, v___x_2314_);
v___x_2318_ = l_Lasm_JS_Web_Support_args(v___x_2317_);
v___x_2319_ = 0;
v___x_2320_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v___x_2313_, v___x_2318_, v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new___boxed(lean_object* v_underlyingSource_2321_, lean_object* v_strategy_2322_, lean_object* v_a_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lasm_JS_Web_ReadableStream_new(v_underlyingSource_2321_, v_strategy_2322_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked(lean_object* v_self_2326_){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_2329_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2326_, v___x_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked___boxed(lean_object* v_self_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lasm_JS_Web_ReadableStream_locked(v_self_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from(lean_object* v_asyncIterable_2341_){
_start:
{
uint8_t v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2343_ = 0;
v___x_2344_ = lean_unsigned_to_nat(1u);
v___x_2345_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_from___closed__2));
v___x_2346_ = lean_mk_empty_array_with_capacity(v___x_2344_);
v___x_2347_ = lean_array_push(v___x_2346_, v_asyncIterable_2341_);
v___x_2348_ = l_Lasm_JS_Web_Support_args(v___x_2347_);
v___x_2349_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v___x_2345_, v___x_2348_, v___x_2343_);
return v___x_2349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object* v_asyncIterable_2350_, lean_object* v_a_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = l_Lasm_JS_Web_ReadableStream_from(v_asyncIterable_2350_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2353_, lean_object* v_bytes_2354_){
_start:
{
lean_object* v___x_2356_; uint8_t v___x_2357_; lean_object* v_val_2359_; lean_object* v___x_2362_; 
v___x_2356_ = lean_unsigned_to_nat(0u);
v___x_2357_ = 0;
v___x_2362_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2354_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2362_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2362_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
lean_ctor_set_tag(v___x_2365_, 1);
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
v_val_2359_ = v___x_2368_;
goto v___jp_2358_;
}
}
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
v_a_2371_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2362_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2362_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 0);
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
v_val_2359_ = v___x_2376_;
goto v___jp_2358_;
}
}
}
v___jp_2358_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2360_, 0, v_val_2359_);
v___x_2361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2356_, v___x_2357_, v___x_2360_, v___f_2353_);
return v___x_2361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2379_, lean_object* v_bytes_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_res_2382_; 
v_res_2382_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(v___f_2379_, v_bytes_2380_);
lean_dec_ref(v_bytes_2380_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object* v_x_2383_){
_start:
{
lean_object* v_val_2386_; 
if (lean_obj_tag(v_x_2383_) == 0)
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2396_; 
v_a_2388_ = lean_ctor_get(v_x_2383_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2390_ = v_x_2383_;
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v_x_2383_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2396_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
lean_object* v___x_2394_; 
v___x_2394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
return v___x_2394_;
}
}
}
else
{
lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2405_; 
v_isSharedCheck_2405_ = !lean_is_exclusive(v_x_2383_);
if (v_isSharedCheck_2405_ == 0)
{
lean_object* v_unused_2406_; 
v_unused_2406_ = lean_ctor_get(v_x_2383_, 0);
lean_dec(v_unused_2406_);
v___x_2398_ = v_x_2383_;
v_isShared_2399_ = v_isSharedCheck_2405_;
goto v_resetjp_2397_;
}
else
{
lean_dec(v_x_2383_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2405_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v_a_2401_; lean_object* v___x_2403_; 
v___x_2400_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref(v___x_2400_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v_a_2401_);
v___x_2403_ = v___x_2398_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
v_val_2386_ = v___x_2403_;
goto v___jp_2385_;
}
}
}
v___jp_2385_:
{
lean_object* v___x_2387_; 
v___x_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2387_, 0, v_val_2386_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2407_, lean_object* v___y_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(v_x_2407_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object* v_failurePrefix_2410_, lean_object* v_x_2411_){
_start:
{
if (lean_obj_tag(v_x_2411_) == 0)
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2424_; 
v_a_2413_ = lean_ctor_get(v_x_2411_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v_x_2411_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2415_ = v_x_2411_;
v_isShared_2416_ = v_isSharedCheck_2424_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v_x_2411_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2424_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2421_; 
v___x_2417_ = lean_io_error_to_string(v_a_2413_);
v___x_2418_ = lean_string_append(v_failurePrefix_2410_, v___x_2417_);
lean_dec_ref(v___x_2417_);
v___x_2419_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2418_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2419_);
v___x_2421_ = v___x_2415_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v___x_2419_);
v___x_2421_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
lean_object* v___x_2422_; 
v___x_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2421_);
return v___x_2422_;
}
}
}
else
{
lean_object* v___x_2425_; 
lean_dec_ref(v_failurePrefix_2410_);
v___x_2425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2425_, 0, v_x_2411_);
return v___x_2425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_failurePrefix_2426_, lean_object* v_x_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(v_failurePrefix_2426_, v_x_2427_);
return v_res_2429_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object* v___f_2430_, lean_object* v_x_2431_){
_start:
{
if (lean_obj_tag(v_x_2431_) == 0)
{
lean_object* v___x_2433_; 
lean_dec_ref(v___f_2430_);
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v_x_2431_);
return v___x_2433_;
}
else
{
lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2445_; 
v_isSharedCheck_2445_ = !lean_is_exclusive(v_x_2431_);
if (v_isSharedCheck_2445_ == 0)
{
lean_object* v_unused_2446_; 
v_unused_2446_ = lean_ctor_get(v_x_2431_, 0);
lean_dec(v_unused_2446_);
v___x_2435_ = v_x_2431_;
v_isShared_2436_ = v_isSharedCheck_2445_;
goto v_resetjp_2434_;
}
else
{
lean_dec(v_x_2431_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2445_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; uint8_t v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
v___x_2437_ = lean_unsigned_to_nat(0u);
v___x_2438_ = 0;
v___x_2439_ = lean_io_promise_new();
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v___x_2439_);
v___x_2441_ = v___x_2435_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; 
v___x_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2441_);
v___x_2443_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2437_, v___x_2438_, v___x_2442_, v___f_2430_);
return v___x_2443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object* v___f_2447_, lean_object* v_x_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(v___f_2447_, v_x_2448_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object* v___f_2451_, lean_object* v_a_2452_, uint32_t v_op_2453_, uint64_t v_flags_2454_, lean_object* v_payload_2455_, lean_object* v_x_2456_){
_start:
{
if (lean_obj_tag(v_x_2456_) == 0)
{
lean_object* v___x_2458_; 
lean_dec_ref(v___f_2451_);
v___x_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2458_, 0, v_x_2456_);
return v___x_2458_;
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2479_; 
v_a_2459_ = lean_ctor_get(v_x_2456_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v_x_2456_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2461_ = v_x_2456_;
v_isShared_2462_ = v_isSharedCheck_2479_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v_x_2456_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2479_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint32_t v___x_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; lean_object* v_val_2467_; lean_object* v___x_2470_; 
v___x_2463_ = 0;
v___x_2464_ = lean_unsigned_to_nat(0u);
v___x_2465_ = 0;
v___x_2470_ = lasm_js_call_into(v_a_2452_, v_op_2453_, v___x_2463_, v_flags_2454_, v_a_2459_, v_payload_2455_);
lean_dec(v_a_2459_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v___x_2473_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v_a_2471_);
v___x_2473_ = v___x_2461_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
v_val_2467_ = v___x_2473_;
goto v___jp_2466_;
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; 
v_a_2475_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2475_);
lean_dec_ref_known(v___x_2470_, 1);
if (v_isShared_2462_ == 0)
{
lean_ctor_set_tag(v___x_2461_, 0);
lean_ctor_set(v___x_2461_, 0, v_a_2475_);
v___x_2477_ = v___x_2461_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2475_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
v_val_2467_ = v___x_2477_;
goto v___jp_2466_;
}
}
v___jp_2466_:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2468_, 0, v_val_2467_);
v___x_2469_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2464_, v___x_2465_, v___x_2468_, v___f_2451_);
return v___x_2469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object* v___f_2480_, lean_object* v_a_2481_, lean_object* v_op_2482_, lean_object* v_flags_2483_, lean_object* v_payload_2484_, lean_object* v_x_2485_, lean_object* v___y_2486_){
_start:
{
uint32_t v_op_boxed_2487_; uint64_t v_flags_boxed_2488_; lean_object* v_res_2489_; 
v_op_boxed_2487_ = lean_unbox_uint32(v_op_2482_);
lean_dec(v_op_2482_);
v_flags_boxed_2488_ = lean_unbox_uint64(v_flags_2483_);
lean_dec_ref(v_flags_2483_);
v_res_2489_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(v___f_2480_, v_a_2481_, v_op_boxed_2487_, v_flags_boxed_2488_, v_payload_2484_, v_x_2485_);
lean_dec(v_payload_2484_);
lean_dec(v_a_2481_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object* v___x_2490_, uint8_t v___x_2491_, lean_object* v___f_2492_, lean_object* v_a_2493_, uint32_t v_op_2494_, uint64_t v_flags_2495_, lean_object* v_payload_2496_, lean_object* v_x_2497_){
_start:
{
lean_object* v_val_2500_; 
if (lean_obj_tag(v_x_2497_) == 0)
{
lean_object* v___x_2503_; 
lean_dec_ref(v___f_2492_);
lean_dec(v___x_2490_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v_x_2497_);
return v___x_2503_;
}
else
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2518_; 
v_a_2504_ = lean_ctor_get(v_x_2497_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v_x_2497_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2506_ = v_x_2497_;
v_isShared_2507_ = v_isSharedCheck_2518_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v_x_2497_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2518_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
uint32_t v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = 0;
v___x_2509_ = lasm_js_call_into(v_a_2493_, v_op_2494_, v___x_2508_, v_flags_2495_, v_a_2504_, v_payload_2496_);
lean_dec(v_a_2504_);
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2510_);
lean_dec_ref_known(v___x_2509_, 1);
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v_a_2510_);
v___x_2512_ = v___x_2506_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
v_val_2500_ = v___x_2512_;
goto v___jp_2499_;
}
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; 
v_a_2514_ = lean_ctor_get(v___x_2509_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2509_, 1);
if (v_isShared_2507_ == 0)
{
lean_ctor_set_tag(v___x_2506_, 0);
lean_ctor_set(v___x_2506_, 0, v_a_2514_);
v___x_2516_ = v___x_2506_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2514_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
v_val_2500_ = v___x_2516_;
goto v___jp_2499_;
}
}
}
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_val_2500_);
v___x_2502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2490_, v___x_2491_, v___x_2501_, v___f_2492_);
return v___x_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v___x_2519_, lean_object* v___x_2520_, lean_object* v___f_2521_, lean_object* v_a_2522_, lean_object* v_op_2523_, lean_object* v_flags_2524_, lean_object* v_payload_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v___x_952__boxed_2528_; uint32_t v_op_boxed_2529_; uint64_t v_flags_boxed_2530_; lean_object* v_res_2531_; 
v___x_952__boxed_2528_ = lean_unbox(v___x_2520_);
v_op_boxed_2529_ = lean_unbox_uint32(v_op_2523_);
lean_dec(v_op_2523_);
v_flags_boxed_2530_ = lean_unbox_uint64(v_flags_2524_);
lean_dec_ref(v_flags_2524_);
v_res_2531_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(v___x_2519_, v___x_952__boxed_2528_, v___f_2521_, v_a_2522_, v_op_boxed_2529_, v_flags_boxed_2530_, v_payload_2525_, v_x_2526_);
lean_dec(v_payload_2525_);
lean_dec(v_a_2522_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object* v_a_2532_, lean_object* v_x_2533_){
_start:
{
if (lean_obj_tag(v_x_2533_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2543_; 
v_a_2535_ = lean_ctor_get(v_x_2533_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v_x_2533_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2537_ = v_x_2533_;
v_isShared_2538_ = v_isSharedCheck_2543_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v_x_2533_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2543_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
lean_object* v___x_2541_; 
v___x_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
return v___x_2541_;
}
}
}
else
{
lean_object* v___x_2544_; 
lean_dec_ref_known(v_x_2533_, 1);
v___x_2544_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2532_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_2545_, lean_object* v_x_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(v_a_2545_, v_x_2546_);
lean_dec(v_a_2545_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object* v_failurePrefix_2549_, uint32_t v_op_2550_, uint64_t v_flags_2551_, lean_object* v_payload_2552_, lean_object* v___f_2553_, lean_object* v___f_2554_, lean_object* v___f_2555_, lean_object* v_x_2556_){
_start:
{
if (lean_obj_tag(v_x_2556_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2566_; 
lean_dec_ref(v___f_2555_);
lean_dec_ref(v___f_2554_);
lean_dec_ref(v___f_2553_);
lean_dec(v_payload_2552_);
v_a_2558_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2560_ = v_x_2556_;
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v_x_2556_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2566_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2613_; 
v_a_2567_ = lean_ctor_get(v_x_2556_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v_x_2556_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2569_ = v_x_2556_;
v_isShared_2570_ = v_isSharedCheck_2613_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v_x_2556_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2613_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; uint8_t v___x_2573_; 
v___x_2571_ = lean_string_utf8_byte_size(v_failurePrefix_2549_);
v___x_2572_ = lean_unsigned_to_nat(0u);
v___x_2573_ = lean_nat_dec_eq(v___x_2571_, v___x_2572_);
if (v___x_2573_ == 0)
{
lean_object* v___f_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___f_2578_; lean_object* v_val_2580_; lean_object* v___x_2585_; 
lean_dec_ref(v___f_2555_);
lean_inc(v_a_2567_);
v___f_2574_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2574_, 0, v_a_2567_);
v___x_2575_ = lean_box(v___x_2573_);
v___x_2576_ = lean_box_uint32(v_op_2550_);
v___x_2577_ = lean_box_uint64(v_flags_2551_);
lean_inc(v_payload_2552_);
v___f_2578_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2578_, 0, v___x_2572_);
lean_closure_set(v___f_2578_, 1, v___x_2575_);
lean_closure_set(v___f_2578_, 2, v___f_2574_);
lean_closure_set(v___f_2578_, 3, v_a_2567_);
lean_closure_set(v___f_2578_, 4, v___x_2576_);
lean_closure_set(v___f_2578_, 5, v___x_2577_);
lean_closure_set(v___f_2578_, 6, v_payload_2552_);
v___x_2585_ = l_Lasm_JS_Wire_encodeIO(v_payload_2552_);
lean_dec(v_payload_2552_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v_a_2586_);
v___x_2588_ = v___x_2569_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
v_val_2580_ = v___x_2588_;
goto v___jp_2579_;
}
}
else
{
lean_object* v_a_2590_; lean_object* v___x_2592_; 
v_a_2590_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2590_);
lean_dec_ref_known(v___x_2585_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2590_);
v___x_2592_ = v___x_2569_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
v_val_2580_ = v___x_2592_;
goto v___jp_2579_;
}
}
v___jp_2579_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2581_, 0, v_val_2580_);
v___x_2582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2581_, v___f_2578_);
v___x_2583_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2582_, v___f_2553_);
v___x_2584_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2573_, v___x_2583_, v___f_2554_);
return v___x_2584_;
}
}
else
{
lean_object* v___f_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___f_2597_; uint8_t v___x_2598_; lean_object* v_val_2600_; lean_object* v___x_2604_; 
lean_dec_ref(v___f_2554_);
lean_dec_ref(v___f_2553_);
lean_inc(v_a_2567_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2594_, 0, v_a_2567_);
v___x_2595_ = lean_box_uint32(v_op_2550_);
v___x_2596_ = lean_box_uint64(v_flags_2551_);
lean_inc(v_payload_2552_);
v___f_2597_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2597_, 0, v___f_2594_);
lean_closure_set(v___f_2597_, 1, v_a_2567_);
lean_closure_set(v___f_2597_, 2, v___x_2595_);
lean_closure_set(v___f_2597_, 3, v___x_2596_);
lean_closure_set(v___f_2597_, 4, v_payload_2552_);
v___x_2598_ = 0;
v___x_2604_ = l_Lasm_JS_Wire_encodeIO(v_payload_2552_);
lean_dec(v_payload_2552_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2607_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v___x_2604_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set(v___x_2569_, 0, v_a_2605_);
v___x_2607_ = v___x_2569_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2605_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
v_val_2600_ = v___x_2607_;
goto v___jp_2599_;
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; 
v_a_2609_ = lean_ctor_get(v___x_2604_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2604_, 1);
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
lean_ctor_set(v___x_2569_, 0, v_a_2609_);
v___x_2611_ = v___x_2569_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2609_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
v_val_2600_ = v___x_2611_;
goto v___jp_2599_;
}
}
v___jp_2599_:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2601_, 0, v_val_2600_);
v___x_2602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2598_, v___x_2601_, v___f_2597_);
v___x_2603_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2572_, v___x_2598_, v___x_2602_, v___f_2555_);
return v___x_2603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_failurePrefix_2614_, lean_object* v_op_2615_, lean_object* v_flags_2616_, lean_object* v_payload_2617_, lean_object* v___f_2618_, lean_object* v___f_2619_, lean_object* v___f_2620_, lean_object* v_x_2621_, lean_object* v___y_2622_){
_start:
{
uint32_t v_op_boxed_2623_; uint64_t v_flags_boxed_2624_; lean_object* v_res_2625_; 
v_op_boxed_2623_ = lean_unbox_uint32(v_op_2615_);
lean_dec(v_op_2615_);
v_flags_boxed_2624_ = lean_unbox_uint64(v_flags_2616_);
lean_dec_ref(v_flags_2616_);
v_res_2625_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(v_failurePrefix_2614_, v_op_boxed_2623_, v_flags_boxed_2624_, v_payload_2617_, v___f_2618_, v___f_2619_, v___f_2620_, v_x_2621_);
lean_dec_ref(v_failurePrefix_2614_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2627_) == 0)
{
lean_object* v_a_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2637_; 
lean_dec_ref(v___f_2626_);
v_a_2629_ = lean_ctor_get(v_x_2627_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_x_2627_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2631_ = v_x_2627_;
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_a_2629_);
lean_dec(v_x_2627_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_a_2629_);
v___x_2634_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
return v___x_2635_;
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2639_; 
v_a_2638_ = lean_ctor_get(v_x_2627_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v_x_2627_, 1);
v___x_2639_ = lean_apply_2(v___f_2626_, v_a_2638_, lean_box(0));
return v___x_2639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2640_, lean_object* v_x_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(v___f_2640_, v_x_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t v_op_2649_, uint64_t v_flags_2650_, lean_object* v_payload_2651_, lean_object* v_failurePrefix_2652_){
_start:
{
lean_object* v___f_2654_; lean_object* v___f_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___f_2658_; lean_object* v___f_2659_; lean_object* v___x_2660_; uint8_t v___x_2661_; lean_object* v_val_2663_; lean_object* v___x_2666_; 
v___f_2654_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2652_);
v___f_2655_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2655_, 0, v_failurePrefix_2652_);
v___x_2656_ = lean_box_uint32(v_op_2649_);
v___x_2657_ = lean_box_uint64(v_flags_2650_);
v___f_2658_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2658_, 0, v_failurePrefix_2652_);
lean_closure_set(v___f_2658_, 1, v___x_2656_);
lean_closure_set(v___f_2658_, 2, v___x_2657_);
lean_closure_set(v___f_2658_, 3, v_payload_2651_);
lean_closure_set(v___f_2658_, 4, v___f_2655_);
lean_closure_set(v___f_2658_, 5, v___f_2654_);
lean_closure_set(v___f_2658_, 6, v___f_2654_);
v___f_2659_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2659_, 0, v___f_2658_);
v___x_2660_ = lean_unsigned_to_nat(0u);
v___x_2661_ = 0;
v___x_2666_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2674_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2669_ = v___x_2666_;
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_a_2667_);
lean_dec(v___x_2666_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2674_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v___x_2672_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set_tag(v___x_2669_, 1);
v___x_2672_ = v___x_2669_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_a_2667_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
v_val_2663_ = v___x_2672_;
goto v___jp_2662_;
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
v_a_2675_ = lean_ctor_get(v___x_2666_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2666_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2666_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set_tag(v___x_2677_, 0);
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
v___x_2680_ = v_reuseFailAlloc_2681_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
v_val_2663_ = v___x_2680_;
goto v___jp_2662_;
}
}
}
v___jp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2664_, 0, v_val_2663_);
v___x_2665_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2660_, v___x_2661_, v___x_2664_, v___f_2659_);
return v___x_2665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object* v_op_2683_, lean_object* v_flags_2684_, lean_object* v_payload_2685_, lean_object* v_failurePrefix_2686_, lean_object* v_a_2687_){
_start:
{
uint32_t v_op_boxed_2688_; uint64_t v_flags_boxed_2689_; lean_object* v_res_2690_; 
v_op_boxed_2688_ = lean_unbox_uint32(v_op_2683_);
lean_dec(v_op_2683_);
v_flags_boxed_2689_ = lean_unbox_uint64(v_flags_2684_);
lean_dec_ref(v_flags_2684_);
v_res_2690_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_boxed_2688_, v_flags_boxed_2689_, v_payload_2685_, v_failurePrefix_2686_);
return v_res_2690_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2691_; uint8_t v___x_2692_; uint64_t v___x_2693_; 
v___x_2691_ = 8ULL;
v___x_2692_ = 0;
v___x_2693_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_2692_, v___x_2691_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object* v_o_2694_, lean_object* v_name_2695_, lean_object* v_args_2696_){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; uint32_t v___x_2701_; uint64_t v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2699_, 0, v_o_2694_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2700_, 0, v_name_2695_);
v___x_2701_ = 205;
v___x_2702_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0);
v___x_2703_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_args_2696_);
v___x_2704_ = lean_unsigned_to_nat(3u);
v___x_2705_ = lean_mk_empty_array_with_capacity(v___x_2704_);
v___x_2706_ = lean_array_push(v___x_2705_, v___x_2699_);
v___x_2707_ = lean_array_push(v___x_2706_, v___x_2700_);
v___x_2708_ = lean_array_push(v___x_2707_, v___x_2703_);
v___x_2709_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
v___x_2710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_2701_, v___x_2702_, v___x_2709_, v___x_2698_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object* v_o_2711_, lean_object* v_name_2712_, lean_object* v_args_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_o_2711_, v_name_2712_, v_args_2713_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object* v_self_2716_, lean_object* v_reason_2717_){
_start:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2719_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2720_ = lean_unsigned_to_nat(1u);
v___x_2721_ = lean_mk_empty_array_with_capacity(v___x_2720_);
v___x_2722_ = lean_array_push(v___x_2721_, v_reason_2717_);
v___x_2723_ = l_Lasm_JS_Web_Support_args(v___x_2722_);
v___x_2724_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2716_, v___x_2719_, v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object* v_self_2725_, lean_object* v_reason_2726_, lean_object* v_a_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lasm_JS_Web_ReadableStream_cancel(v_self_2725_, v_reason_2726_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object* v_context_2729_, uint32_t v_op_2730_, uint64_t v_flags_2731_, lean_object* v_payload_2732_, lean_object* v_failurePrefix_2733_){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_2730_, v_flags_2731_, v_payload_2732_, v_failurePrefix_2733_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object* v_context_2736_, lean_object* v_op_2737_, lean_object* v_flags_2738_, lean_object* v_payload_2739_, lean_object* v_failurePrefix_2740_, lean_object* v_a_2741_){
_start:
{
uint32_t v_op_boxed_2742_; uint64_t v_flags_boxed_2743_; lean_object* v_res_2744_; 
v_op_boxed_2742_ = lean_unbox_uint32(v_op_2737_);
lean_dec(v_op_2737_);
v_flags_boxed_2743_ = lean_unbox_uint64(v_flags_2738_);
lean_dec_ref(v_flags_2738_);
v_res_2744_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(v_context_2736_, v_op_boxed_2742_, v_flags_boxed_2743_, v_payload_2739_, v_failurePrefix_2740_);
lean_dec_ref(v_context_2736_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v___x_2746_; 
v___x_2746_ = lean_box(0);
return v___x_2746_;
}
else
{
lean_object* v___x_2747_; 
v___x_2747_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_2747_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object* v_x_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_x_2748_);
lean_dec(v_x_2748_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object* v_x_2750_){
_start:
{
if (lean_obj_tag(v_x_2750_) == 0)
{
lean_object* v___x_2751_; 
v___x_2751_ = lean_box(0);
return v___x_2751_;
}
else
{
lean_object* v_val_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v_val_2752_ = lean_ctor_get(v_x_2750_, 0);
v___x_2753_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_2754_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_val_2752_);
v___x_2755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2753_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = lean_unsigned_to_nat(1u);
v___x_2757_ = lean_mk_empty_array_with_capacity(v___x_2756_);
v___x_2758_ = lean_array_push(v___x_2757_, v___x_2755_);
v___x_2759_ = l_Lasm_JS_Web_Support_fields(v___x_2758_);
lean_dec_ref(v___x_2758_);
return v___x_2759_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object* v_x_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_x_2760_);
lean_dec(v_x_2760_);
return v_res_2761_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_2762_; uint64_t v___x_2763_; 
v___x_2762_ = 1;
v___x_2763_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2762_);
return v___x_2763_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t v_await_2764_, uint64_t v_extra_2765_){
_start:
{
uint64_t v___x_2766_; uint64_t v___y_2768_; 
v___x_2766_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
if (v_await_2764_ == 0)
{
uint64_t v___x_2771_; 
v___x_2771_ = 0ULL;
v___y_2768_ = v___x_2771_;
goto v___jp_2767_;
}
else
{
uint64_t v___x_2772_; 
v___x_2772_ = 2ULL;
v___y_2768_ = v___x_2772_;
goto v___jp_2767_;
}
v___jp_2767_:
{
uint64_t v___x_2769_; uint64_t v___x_2770_; 
v___x_2769_ = lean_uint64_lor(v___x_2766_, v___y_2768_);
v___x_2770_ = lean_uint64_lor(v___x_2769_, v_extra_2765_);
return v___x_2770_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object* v_await_2773_, lean_object* v_extra_2774_){
_start:
{
uint8_t v_await_boxed_2775_; uint64_t v_extra_boxed_2776_; uint64_t v_res_2777_; lean_object* v_r_2778_; 
v_await_boxed_2775_ = lean_unbox(v_await_2773_);
v_extra_boxed_2776_ = lean_unbox_uint64(v_extra_2774_);
lean_dec_ref(v_extra_2774_);
v_res_2777_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v_await_boxed_2775_, v_extra_boxed_2776_);
v_r_2778_ = lean_box_uint64(v_res_2777_);
return v_r_2778_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2779_; uint8_t v___x_2780_; uint64_t v___x_2781_; 
v___x_2779_ = 8ULL;
v___x_2780_ = 0;
v___x_2781_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2780_, v___x_2779_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object* v_o_2783_, lean_object* v_name_2784_, lean_object* v_args_2785_){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; uint64_t v___x_2790_; lean_object* v___x_2791_; 
v___x_2787_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2788_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2788_, 0, v_o_2783_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
lean_inc_ref(v_name_2784_);
v___x_2789_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2789_, 0, v_name_2784_);
v___x_2790_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0);
v___x_2791_ = l_Lasm_JS_Value_invokeRaw(v___x_2788_, v___x_2789_, v_args_2785_, v___x_2790_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref_known(v___x_2791_, 1);
v___x_2793_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2794_ = lean_string_append(v___x_2793_, v_name_2784_);
lean_dec_ref(v_name_2784_);
v___x_2795_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2794_, v_a_2792_);
lean_dec(v_a_2792_);
lean_dec_ref(v___x_2794_);
return v___x_2795_;
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec_ref(v_name_2784_);
v_a_2796_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2791_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2791_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object* v_o_2804_, lean_object* v_name_2805_, lean_object* v_args_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2804_, v_name_2805_, v_args_2806_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object* v_self_2810_, lean_object* v_options_2811_){
_start:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2813_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_getReader___closed__0));
v___x_2814_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_options_2811_);
v___x_2815_ = lean_unsigned_to_nat(1u);
v___x_2816_ = lean_mk_empty_array_with_capacity(v___x_2815_);
v___x_2817_ = lean_array_push(v___x_2816_, v___x_2814_);
v___x_2818_ = l_Lasm_JS_Web_Support_args(v___x_2817_);
v___x_2819_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2810_, v___x_2813_, v___x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object* v_self_2820_, lean_object* v_options_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v_res_2823_; 
v_res_2823_ = l_Lasm_JS_Web_ReadableStream_getReader(v_self_2820_, v_options_2821_);
lean_dec(v_options_2821_);
return v_res_2823_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1(uint8_t v_await_2824_, uint64_t v_extra_2825_){
_start:
{
uint64_t v___x_2826_; uint64_t v___y_2828_; 
v___x_2826_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_2824_ == 0)
{
uint64_t v___x_2831_; 
v___x_2831_ = 0ULL;
v___y_2828_ = v___x_2831_;
goto v___jp_2827_;
}
else
{
uint64_t v___x_2832_; 
v___x_2832_ = 2ULL;
v___y_2828_ = v___x_2832_;
goto v___jp_2827_;
}
v___jp_2827_:
{
uint64_t v___x_2829_; uint64_t v___x_2830_; 
v___x_2829_ = lean_uint64_lor(v___x_2826_, v___y_2828_);
v___x_2830_ = lean_uint64_lor(v___x_2829_, v_extra_2825_);
return v___x_2830_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1___boxed(lean_object* v_await_2833_, lean_object* v_extra_2834_){
_start:
{
uint8_t v_await_boxed_2835_; uint64_t v_extra_boxed_2836_; uint64_t v_res_2837_; lean_object* v_r_2838_; 
v_await_boxed_2835_ = lean_unbox(v_await_2833_);
v_extra_boxed_2836_ = lean_unbox_uint64(v_extra_2834_);
lean_dec_ref(v_extra_2834_);
v_res_2837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1(v_await_boxed_2835_, v_extra_boxed_2836_);
v_r_2838_ = lean_box_uint64(v_res_2837_);
return v_r_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2(lean_object* v_context_2839_, lean_object* v_bytes_2840_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2840_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2844_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2843_);
lean_dec_ref_known(v___x_2842_, 1);
v___x_2844_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v_context_2839_, v_a_2843_);
return v___x_2844_;
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
v_a_2845_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2842_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2842_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2___boxed(lean_object* v_context_2853_, lean_object* v_bytes_2854_, lean_object* v_a_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2(v_context_2853_, v_bytes_2854_);
lean_dec_ref(v_bytes_2854_);
lean_dec_ref(v_context_2853_);
return v_res_2856_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2857_; uint8_t v___x_2858_; uint64_t v___x_2859_; 
v___x_2857_ = 8ULL;
v___x_2858_ = 0;
v___x_2859_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__1(v___x_2858_, v___x_2857_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(lean_object* v_o_2860_, lean_object* v_name_2861_, lean_object* v_args_2862_){
_start:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; uint64_t v___x_2867_; lean_object* v___x_2868_; 
v___x_2864_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2865_, 0, v_o_2860_);
lean_ctor_set(v___x_2865_, 1, v___x_2864_);
lean_inc_ref(v_name_2861_);
v___x_2866_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2866_, 0, v_name_2861_);
v___x_2867_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___closed__0);
v___x_2868_ = l_Lasm_JS_Value_invokeRaw(v___x_2865_, v___x_2866_, v_args_2862_, v___x_2867_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___x_2868_, 1);
v___x_2870_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2871_ = lean_string_append(v___x_2870_, v_name_2861_);
lean_dec_ref(v_name_2861_);
v___x_2872_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2(v___x_2871_, v_a_2869_);
lean_dec(v_a_2869_);
lean_dec_ref(v___x_2871_);
return v___x_2872_;
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec_ref(v_name_2861_);
v_a_2873_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2868_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2868_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1___boxed(lean_object* v_o_2881_, lean_object* v_name_2882_, lean_object* v_args_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(v_o_2881_, v_name_2882_, v_args_2883_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object* v_x_2886_){
_start:
{
if (lean_obj_tag(v_x_2886_) == 0)
{
lean_object* v___x_2887_; 
v___x_2887_ = lean_box(0);
return v___x_2887_;
}
else
{
lean_object* v_val_2888_; lean_object* v_preventClose_2889_; lean_object* v_preventAbort_2890_; lean_object* v_preventCancel_2891_; lean_object* v_signal_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_val_2888_ = lean_ctor_get(v_x_2886_, 0);
v_preventClose_2889_ = lean_ctor_get(v_val_2888_, 0);
v_preventAbort_2890_ = lean_ctor_get(v_val_2888_, 1);
v_preventCancel_2891_ = lean_ctor_get(v_val_2888_, 2);
v_signal_2892_ = lean_ctor_get(v_val_2888_, 3);
v___x_2893_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
v___x_2894_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventClose_2889_);
v___x_2895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2893_);
lean_ctor_set(v___x_2895_, 1, v___x_2894_);
v___x_2896_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_2897_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventAbort_2890_);
v___x_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2896_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
v___x_2899_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_2900_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventCancel_2891_);
v___x_2901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2899_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
v___x_2902_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_2903_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2892_);
v___x_2904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2902_);
lean_ctor_set(v___x_2904_, 1, v___x_2903_);
v___x_2905_ = lean_unsigned_to_nat(4u);
v___x_2906_ = lean_mk_empty_array_with_capacity(v___x_2905_);
v___x_2907_ = lean_array_push(v___x_2906_, v___x_2895_);
v___x_2908_ = lean_array_push(v___x_2907_, v___x_2898_);
v___x_2909_ = lean_array_push(v___x_2908_, v___x_2901_);
v___x_2910_ = lean_array_push(v___x_2909_, v___x_2904_);
v___x_2911_ = l_Lasm_JS_Web_Support_fields(v___x_2910_);
lean_dec_ref(v___x_2910_);
return v___x_2911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object* v_x_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_x_2912_);
lean_dec(v_x_2912_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object* v_self_2915_, lean_object* v_transform_2916_, lean_object* v_options_2917_){
_start:
{
lean_object* v_readable_2919_; lean_object* v_writable_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2944_; 
v_readable_2919_ = lean_ctor_get(v_transform_2916_, 0);
v_writable_2920_ = lean_ctor_get(v_transform_2916_, 1);
v_isSharedCheck_2944_ = !lean_is_exclusive(v_transform_2916_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2922_ = v_transform_2916_;
v_isShared_2923_ = v_isSharedCheck_2944_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_writable_2920_);
lean_inc(v_readable_2919_);
lean_dec(v_transform_2916_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2944_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2928_; 
v___x_2924_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0));
v___x_2925_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_2926_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_2923_ == 0)
{
lean_ctor_set_tag(v___x_2922_, 9);
lean_ctor_set(v___x_2922_, 1, v___x_2926_);
v___x_2928_ = v___x_2922_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_readable_2919_);
lean_ctor_set(v_reuseFailAlloc_2943_, 1, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2925_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
v___x_2930_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_2931_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2931_, 0, v_writable_2920_);
lean_ctor_set(v___x_2931_, 1, v___x_2926_);
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2930_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = lean_unsigned_to_nat(2u);
v___x_2934_ = lean_mk_empty_array_with_capacity(v___x_2933_);
lean_inc_ref(v___x_2934_);
v___x_2935_ = lean_array_push(v___x_2934_, v___x_2929_);
v___x_2936_ = lean_array_push(v___x_2935_, v___x_2932_);
v___x_2937_ = l_Lasm_JS_Web_Support_fields(v___x_2936_);
lean_dec_ref(v___x_2936_);
v___x_2938_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2917_);
v___x_2939_ = lean_array_push(v___x_2934_, v___x_2937_);
v___x_2940_ = lean_array_push(v___x_2939_, v___x_2938_);
v___x_2941_ = l_Lasm_JS_Web_Support_args(v___x_2940_);
v___x_2942_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1(v_self_2915_, v___x_2924_, v___x_2941_);
return v___x_2942_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object* v_self_2945_, lean_object* v_transform_2946_, lean_object* v_options_2947_, lean_object* v_a_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l_Lasm_JS_Web_ReadableStream_pipeThrough(v_self_2945_, v_transform_2946_, v_options_2947_);
lean_dec(v_options_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object* v_self_2951_, lean_object* v_destination_2952_, lean_object* v_options_2953_){
_start:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2955_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0));
v___x_2956_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2957_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_destination_2952_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2953_);
v___x_2959_ = lean_unsigned_to_nat(2u);
v___x_2960_ = lean_mk_empty_array_with_capacity(v___x_2959_);
v___x_2961_ = lean_array_push(v___x_2960_, v___x_2957_);
v___x_2962_ = lean_array_push(v___x_2961_, v___x_2958_);
v___x_2963_ = l_Lasm_JS_Web_Support_args(v___x_2962_);
v___x_2964_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2951_, v___x_2955_, v___x_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object* v_self_2965_, lean_object* v_destination_2966_, lean_object* v_options_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lasm_JS_Web_ReadableStream_pipeTo(v_self_2965_, v_destination_2966_, v_options_2967_);
lean_dec(v_options_2967_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2972_, size_t v_i_2973_, lean_object* v_bs_2974_){
_start:
{
uint8_t v___x_2975_; 
v___x_2975_ = lean_usize_dec_lt(v_i_2973_, v_sz_2972_);
if (v___x_2975_ == 0)
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2976_, 0, v_bs_2974_);
return v___x_2976_;
}
else
{
lean_object* v_v_2977_; 
v_v_2977_ = lean_array_uget_borrowed(v_bs_2974_, v_i_2973_);
if (lean_obj_tag(v_v_2977_) == 9)
{
lean_object* v_value_2978_; lean_object* v___x_2979_; lean_object* v_bs_x27_2980_; size_t v___x_2981_; size_t v___x_2982_; lean_object* v___x_2983_; 
v_value_2978_ = lean_ctor_get(v_v_2977_, 0);
lean_inc(v_value_2978_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v_bs_x27_2980_ = lean_array_uset(v_bs_2974_, v_i_2973_, v___x_2979_);
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_add(v_i_2973_, v___x_2981_);
v___x_2983_ = lean_array_uset(v_bs_x27_2980_, v_i_2973_, v_value_2978_);
v_i_2973_ = v___x_2982_;
v_bs_2974_ = v___x_2983_;
goto _start;
}
else
{
lean_object* v___x_2985_; 
lean_dec_ref(v_bs_2974_);
v___x_2985_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2985_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2986_, lean_object* v_i_2987_, lean_object* v_bs_2988_){
_start:
{
size_t v_sz_boxed_2989_; size_t v_i_boxed_2990_; lean_object* v_res_2991_; 
v_sz_boxed_2989_ = lean_unbox_usize(v_sz_2986_);
lean_dec(v_sz_2986_);
v_i_boxed_2990_ = lean_unbox_usize(v_i_2987_);
lean_dec(v_i_2987_);
v_res_2991_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2989_, v_i_boxed_2990_, v_bs_2988_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object* v_context_2996_, lean_object* v_d_2997_){
_start:
{
lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3006_; lean_object* v_received_3007_; lean_object* v___y_3026_; lean_object* v_a_3029_; 
if (lean_obj_tag(v_d_2997_) == 7)
{
lean_object* v_items_3053_; size_t v_sz_3054_; size_t v___x_3055_; lean_object* v___x_3056_; 
v_items_3053_ = lean_ctor_get(v_d_2997_, 0);
v_sz_3054_ = lean_array_size(v_items_3053_);
v___x_3055_ = ((size_t)0ULL);
lean_inc_ref(v_items_3053_);
v___x_3056_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_3054_, v___x_3055_, v_items_3053_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; uint8_t v___x_3061_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3058_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3));
v___x_3059_ = lean_string_utf8_byte_size(v_a_3057_);
v___x_3060_ = lean_unsigned_to_nat(0u);
v___x_3061_ = lean_nat_dec_eq(v___x_3059_, v___x_3060_);
if (v___x_3061_ == 0)
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3062_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3063_ = lean_string_append(v___x_3062_, v_a_3057_);
lean_dec(v_a_3057_);
v___x_3064_ = lean_string_append(v___x_3058_, v___x_3063_);
lean_dec_ref(v___x_3063_);
v_a_3029_ = v___x_3064_;
goto v___jp_3028_;
}
else
{
lean_dec(v_a_3057_);
v_a_3029_ = v___x_3058_;
goto v___jp_3028_;
}
}
else
{
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3065_; 
v_a_3065_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3056_, 1);
v_a_3029_ = v_a_3065_;
goto v___jp_3028_;
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec_ref_known(v_d_2997_, 1);
v_a_3066_ = lean_ctor_get(v___x_3056_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3056_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3056_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3056_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
lean_ctor_set_tag(v___x_3068_, 0);
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
else
{
lean_object* v___x_3074_; 
v___x_3074_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v_a_3029_ = v___x_3074_;
goto v___jp_3028_;
}
v___jp_2999_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3002_ = lean_string_append(v___y_3000_, v___y_3001_);
lean_dec_ref(v___y_3001_);
v___x_3003_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
v___x_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3003_);
return v___x_3004_;
}
v___jp_3005_:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; uint8_t v___x_3019_; 
v___x_3008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3009_ = lean_string_append(v___x_3008_, v_context_2996_);
v___x_3010_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3011_ = lean_string_append(v___x_3009_, v___x_3010_);
v___x_3012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0));
v___x_3013_ = lean_string_append(v___x_3011_, v___x_3012_);
v___x_3014_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3015_ = lean_string_append(v___x_3013_, v___x_3014_);
v___x_3016_ = lean_string_append(v___x_3015_, v_received_3007_);
lean_dec_ref(v_received_3007_);
v___x_3017_ = lean_string_utf8_byte_size(v___y_3006_);
v___x_3018_ = lean_unsigned_to_nat(0u);
v___x_3019_ = lean_nat_dec_eq(v___x_3017_, v___x_3018_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3020_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3021_ = lean_string_append(v___x_3020_, v___y_3006_);
lean_dec_ref(v___y_3006_);
v___x_3022_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3023_ = lean_string_append(v___x_3021_, v___x_3022_);
v___y_3000_ = v___x_3016_;
v___y_3001_ = v___x_3023_;
goto v___jp_2999_;
}
else
{
lean_object* v___x_3024_; 
lean_dec_ref(v___y_3006_);
v___x_3024_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3000_ = v___x_3016_;
v___y_3001_ = v___x_3024_;
goto v___jp_2999_;
}
}
v___jp_3025_:
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Lasm_JS_Data_describe(v_d_2997_);
v___y_3006_ = v___y_3026_;
v_received_3007_ = v___x_3027_;
goto v___jp_3005_;
}
v___jp_3028_:
{
if (lean_obj_tag(v_d_2997_) == 9)
{
lean_object* v_value_3030_; lean_object* v_description_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; 
v_value_3030_ = lean_ctor_get(v_d_2997_, 0);
v_description_3031_ = lean_ctor_get(v_d_2997_, 1);
v___x_3032_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3033_ = lean_string_dec_eq(v_description_3031_, v___x_3032_);
if (v___x_3033_ == 0)
{
v___y_3026_ = v_a_3029_;
goto v___jp_3025_;
}
else
{
lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3050_; 
lean_inc(v_value_3030_);
v_isSharedCheck_3050_ = !lean_is_exclusive(v_d_2997_);
if (v_isSharedCheck_3050_ == 0)
{
lean_object* v_unused_3051_; lean_object* v_unused_3052_; 
v_unused_3051_ = lean_ctor_get(v_d_2997_, 1);
lean_dec(v_unused_3051_);
v_unused_3052_ = lean_ctor_get(v_d_2997_, 0);
lean_dec(v_unused_3052_);
v___x_3035_ = v_d_2997_;
v_isShared_3036_ = v_isSharedCheck_3050_;
goto v_resetjp_3034_;
}
else
{
lean_dec(v_d_2997_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3050_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
uint32_t v___x_3037_; uint64_t v___x_3038_; lean_object* v___x_3040_; 
v___x_3037_ = 206;
v___x_3038_ = 0ULL;
lean_inc(v_value_3030_);
if (v_isShared_3036_ == 0)
{
lean_ctor_set(v___x_3035_, 1, v___x_3032_);
v___x_3040_ = v___x_3035_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v_value_3030_);
lean_ctor_set(v_reuseFailAlloc_3049_, 1, v___x_3032_);
v___x_3040_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
uint32_t v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = lasm_js_value_handle(v_value_3030_);
lean_dec(v_value_3030_);
v___x_3042_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3037_, v___x_3038_, v___x_3040_, v___x_3041_);
lean_dec_ref(v___x_3040_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; uint8_t v___x_3044_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
v___x_3044_ = lean_string_validate_utf8(v_a_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
lean_dec(v_a_3043_);
v___x_3045_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3046_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3045_);
v___y_3006_ = v_a_3029_;
v_received_3007_ = v___x_3046_;
goto v___jp_3005_;
}
else
{
lean_object* v___x_3047_; 
v___x_3047_ = lean_string_from_utf8_unchecked(v_a_3043_);
v___y_3006_ = v_a_3029_;
v_received_3007_ = v___x_3047_;
goto v___jp_3005_;
}
}
else
{
lean_object* v___x_3048_; 
lean_dec_ref_known(v___x_3042_, 1);
v___x_3048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3006_ = v_a_3029_;
v_received_3007_ = v___x_3048_;
goto v___jp_3005_;
}
}
}
}
}
else
{
v___y_3026_ = v_a_3029_;
goto v___jp_3025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3075_, lean_object* v_d_3076_, lean_object* v_a_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3075_, v_d_3076_);
lean_dec_ref(v_context_3075_);
return v_res_3078_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object* v_context_3079_, lean_object* v_bytes_3080_){
_start:
{
lean_object* v___x_3082_; 
v___x_3082_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3080_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3084_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v___x_3084_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3079_, v_a_3083_);
return v___x_3084_;
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
v_a_3085_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3082_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3082_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object* v_context_3093_, lean_object* v_bytes_3094_, lean_object* v_a_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v_context_3093_, v_bytes_3094_);
lean_dec_ref(v_bytes_3094_);
lean_dec_ref(v_context_3093_);
return v_res_3096_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t v_await_3097_, uint64_t v_extra_3098_){
_start:
{
uint64_t v___x_3099_; uint64_t v___y_3101_; 
v___x_3099_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3097_ == 0)
{
uint64_t v___x_3104_; 
v___x_3104_ = 0ULL;
v___y_3101_ = v___x_3104_;
goto v___jp_3100_;
}
else
{
uint64_t v___x_3105_; 
v___x_3105_ = 2ULL;
v___y_3101_ = v___x_3105_;
goto v___jp_3100_;
}
v___jp_3100_:
{
uint64_t v___x_3102_; uint64_t v___x_3103_; 
v___x_3102_ = lean_uint64_lor(v___x_3099_, v___y_3101_);
v___x_3103_ = lean_uint64_lor(v___x_3102_, v_extra_3098_);
return v___x_3103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object* v_await_3106_, lean_object* v_extra_3107_){
_start:
{
uint8_t v_await_boxed_3108_; uint64_t v_extra_boxed_3109_; uint64_t v_res_3110_; lean_object* v_r_3111_; 
v_await_boxed_3108_ = lean_unbox(v_await_3106_);
v_extra_boxed_3109_ = lean_unbox_uint64(v_extra_3107_);
lean_dec_ref(v_extra_3107_);
v_res_3110_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v_await_boxed_3108_, v_extra_boxed_3109_);
v_r_3111_ = lean_box_uint64(v_res_3110_);
return v_r_3111_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3112_; uint8_t v___x_3113_; uint64_t v___x_3114_; 
v___x_3112_ = 8ULL;
v___x_3113_ = 0;
v___x_3114_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v___x_3113_, v___x_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object* v_o_3115_, lean_object* v_name_3116_, lean_object* v_args_3117_){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; uint64_t v___x_3122_; lean_object* v___x_3123_; 
v___x_3119_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3120_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3120_, 0, v_o_3115_);
lean_ctor_set(v___x_3120_, 1, v___x_3119_);
lean_inc_ref(v_name_3116_);
v___x_3121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3121_, 0, v_name_3116_);
v___x_3122_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0);
v___x_3123_ = l_Lasm_JS_Value_invokeRaw(v___x_3120_, v___x_3121_, v_args_3117_, v___x_3122_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref_known(v___x_3123_, 1);
v___x_3125_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3126_ = lean_string_append(v___x_3125_, v_name_3116_);
lean_dec_ref(v_name_3116_);
v___x_3127_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v___x_3126_, v_a_3124_);
lean_dec(v_a_3124_);
lean_dec_ref(v___x_3126_);
return v___x_3127_;
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec_ref(v_name_3116_);
v_a_3128_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3123_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3123_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object* v_o_3136_, lean_object* v_name_3137_, lean_object* v_args_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_o_3136_, v_name_3137_, v_args_3138_);
return v_res_3140_;
}
}
static lean_object* _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__1));
v___x_3145_ = l_Lasm_JS_Web_Support_args(v___x_3144_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object* v_self_3146_){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3148_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__0));
v___x_3149_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3150_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_self_3146_, v___x_3148_, v___x_3149_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object* v_self_3151_, lean_object* v_a_3152_){
_start:
{
lean_object* v_res_3153_; 
v_res_3153_ = l_Lasm_JS_Web_ReadableStream_tee(v_self_3151_);
return v_res_3153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object* v_context_3154_, lean_object* v_d_3155_){
_start:
{
lean_object* v___y_3158_; lean_object* v___y_3159_; 
if (lean_obj_tag(v_d_3155_) == 9)
{
lean_object* v_value_3163_; lean_object* v___x_3164_; 
v_value_3163_ = lean_ctor_get(v_d_3155_, 0);
lean_inc(v_value_3163_);
lean_dec_ref_known(v_d_3155_, 2);
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v_value_3163_);
return v___x_3164_;
}
else
{
lean_object* v___x_3165_; lean_object* v_received_3167_; 
v___x_3165_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3155_) == 9)
{
lean_object* v_value_3181_; lean_object* v_description_3182_; uint8_t v___x_3183_; 
v_value_3181_ = lean_ctor_get(v_d_3155_, 0);
v_description_3182_ = lean_ctor_get(v_d_3155_, 1);
v___x_3183_ = lean_string_dec_eq(v_description_3182_, v___x_3165_);
if (v___x_3183_ == 0)
{
goto v___jp_3179_;
}
else
{
uint32_t v___x_3184_; uint64_t v___x_3185_; lean_object* v___x_3186_; uint32_t v___x_3187_; lean_object* v___x_3188_; 
lean_inc_n(v_value_3181_, 2);
lean_dec_ref_known(v_d_3155_, 2);
v___x_3184_ = 206;
v___x_3185_ = 0ULL;
v___x_3186_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3186_, 0, v_value_3181_);
lean_ctor_set(v___x_3186_, 1, v___x_3165_);
v___x_3187_ = lasm_js_value_handle(v_value_3181_);
lean_dec(v_value_3181_);
v___x_3188_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3184_, v___x_3185_, v___x_3186_, v___x_3187_);
lean_dec_ref_known(v___x_3186_, 2);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; uint8_t v___x_3190_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3190_ = lean_string_validate_utf8(v_a_3189_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; lean_object* v___x_3192_; 
lean_dec(v_a_3189_);
v___x_3191_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3192_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3191_);
v_received_3167_ = v___x_3192_;
goto v___jp_3166_;
}
else
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_string_from_utf8_unchecked(v_a_3189_);
v_received_3167_ = v___x_3193_;
goto v___jp_3166_;
}
}
else
{
lean_object* v___x_3194_; 
lean_dec_ref_known(v___x_3188_, 1);
v___x_3194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3167_ = v___x_3194_;
goto v___jp_3166_;
}
}
}
else
{
goto v___jp_3179_;
}
v___jp_3166_:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; uint8_t v___x_3177_; 
v___x_3168_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3169_ = lean_string_append(v___x_3168_, v_context_3154_);
v___x_3170_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3171_ = lean_string_append(v___x_3169_, v___x_3170_);
v___x_3172_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0));
v___x_3173_ = lean_string_append(v___x_3171_, v___x_3172_);
v___x_3174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3175_ = lean_string_append(v___x_3173_, v___x_3174_);
v___x_3176_ = lean_string_append(v___x_3175_, v_received_3167_);
lean_dec_ref(v_received_3167_);
v___x_3177_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3177_ == 0)
{
lean_object* v___x_3178_; 
v___x_3178_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3158_ = v___x_3176_;
v___y_3159_ = v___x_3178_;
goto v___jp_3157_;
}
else
{
v___y_3158_ = v___x_3176_;
v___y_3159_ = v___x_3165_;
goto v___jp_3157_;
}
}
v___jp_3179_:
{
lean_object* v___x_3180_; 
v___x_3180_ = l_Lasm_JS_Data_describe(v_d_3155_);
v_received_3167_ = v___x_3180_;
goto v___jp_3166_;
}
}
v___jp_3157_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = lean_string_append(v___y_3158_, v___y_3159_);
v___x_3161_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3160_);
v___x_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
return v___x_3162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object* v_context_3195_, lean_object* v_d_3196_, lean_object* v_a_3197_){
_start:
{
lean_object* v_res_3198_; 
v_res_3198_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v_context_3195_, v_d_3196_);
lean_dec_ref(v_context_3195_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object* v_b_3199_, lean_object* v_args_3200_, uint8_t v_await_3201_){
_start:
{
uint64_t v___y_3204_; uint64_t v___y_3205_; uint64_t v___x_3248_; uint64_t v___y_3250_; 
v___x_3248_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3201_ == 0)
{
uint64_t v___x_3255_; 
v___x_3255_ = 0ULL;
v___y_3250_ = v___x_3255_;
goto v___jp_3249_;
}
else
{
uint64_t v___x_3256_; 
v___x_3256_ = 2ULL;
v___y_3250_ = v___x_3256_;
goto v___jp_3249_;
}
v___jp_3203_:
{
uint64_t v_flags_3206_; uint32_t v___x_3207_; lean_object* v___x_3208_; uint32_t v___x_3209_; lean_object* v___x_3210_; 
v_flags_3206_ = lean_uint64_lor(v___y_3204_, v___y_3205_);
v___x_3207_ = 214;
v___x_3208_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3199_, v_args_3200_);
v___x_3209_ = 0;
v___x_3210_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3207_, v_flags_3206_, v___x_3208_, v___x_3209_);
lean_dec(v___x_3208_);
if (lean_obj_tag(v___x_3210_) == 0)
{
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3212_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_a_3211_);
lean_dec_ref_known(v___x_3210_, 1);
v___x_3212_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3211_);
lean_dec(v_a_3211_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v_a_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v_a_3213_ = lean_ctor_get(v___x_3212_, 0);
lean_inc(v_a_3213_);
lean_dec_ref_known(v___x_3212_, 1);
v___x_3214_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3199_);
v___x_3215_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v___x_3214_, v_a_3213_);
lean_dec_ref(v___x_3214_);
return v___x_3215_;
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
v_a_3216_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3212_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3212_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
else
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
v_a_3224_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3226_ = v___x_3210_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3210_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
lean_ctor_set_tag(v___x_3226_, 1);
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_a_3224_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
else
{
lean_object* v_a_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3247_; 
v_a_3232_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3234_ = v___x_3210_;
v_isShared_3235_ = v_isSharedCheck_3247_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_a_3232_);
lean_dec(v___x_3210_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3247_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3245_; 
v___x_3236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3199_);
v___x_3238_ = lean_string_append(v___x_3236_, v___x_3237_);
lean_dec_ref(v___x_3237_);
v___x_3239_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3240_ = lean_string_append(v___x_3238_, v___x_3239_);
v___x_3241_ = lean_io_error_to_string(v_a_3232_);
v___x_3242_ = lean_string_append(v___x_3240_, v___x_3241_);
lean_dec_ref(v___x_3241_);
v___x_3243_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 0, v___x_3243_);
v___x_3245_ = v___x_3234_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
v___jp_3249_:
{
uint8_t v_construct_3251_; uint64_t v___x_3252_; 
v_construct_3251_ = lean_ctor_get_uint8(v_b_3199_, sizeof(void*)*4);
v___x_3252_ = lean_uint64_lor(v___x_3248_, v___y_3250_);
if (v_construct_3251_ == 0)
{
uint64_t v___x_3253_; 
v___x_3253_ = 0ULL;
v___y_3204_ = v___x_3252_;
v___y_3205_ = v___x_3253_;
goto v___jp_3203_;
}
else
{
uint64_t v___x_3254_; 
v___x_3254_ = 4ULL;
v___y_3204_ = v___x_3252_;
v___y_3205_ = v___x_3254_;
goto v___jp_3203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object* v_b_3257_, lean_object* v_args_3258_, lean_object* v_await_3259_, lean_object* v_a_3260_){
_start:
{
uint8_t v_await_boxed_3261_; lean_object* v_res_3262_; 
v_await_boxed_3261_ = lean_unbox(v_await_3259_);
v_res_3262_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v_b_3257_, v_args_3258_, v_await_boxed_3261_);
lean_dec_ref(v_b_3257_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object* v_stream_3271_){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; uint8_t v___x_3280_; lean_object* v___x_3281_; 
v___x_3273_ = lean_unsigned_to_nat(1u);
v___x_3274_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2));
v___x_3275_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3276_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3276_, 0, v_stream_3271_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
v___x_3277_ = lean_mk_empty_array_with_capacity(v___x_3273_);
v___x_3278_ = lean_array_push(v___x_3277_, v___x_3276_);
v___x_3279_ = l_Lasm_JS_Web_Support_args(v___x_3278_);
v___x_3280_ = 0;
v___x_3281_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v___x_3274_, v___x_3279_, v___x_3280_);
return v___x_3281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object* v_stream_3282_, lean_object* v_a_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_new(v_stream_3282_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object* v___f_3285_, lean_object* v_a_3286_, lean_object* v___x_3287_, lean_object* v_x_3288_){
_start:
{
if (lean_obj_tag(v_x_3288_) == 0)
{
lean_object* v_a_3290_; lean_object* v___x_3292_; uint8_t v_isShared_3293_; uint8_t v_isSharedCheck_3298_; 
lean_dec_ref(v___f_3285_);
v_a_3290_ = lean_ctor_get(v_x_3288_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v_x_3288_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3292_ = v_x_3288_;
v_isShared_3293_ = v_isSharedCheck_3298_;
goto v_resetjp_3291_;
}
else
{
lean_inc(v_a_3290_);
lean_dec(v_x_3288_);
v___x_3292_ = lean_box(0);
v_isShared_3293_ = v_isSharedCheck_3298_;
goto v_resetjp_3291_;
}
v_resetjp_3291_:
{
lean_object* v___x_3295_; 
if (v_isShared_3293_ == 0)
{
v___x_3295_ = v___x_3292_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3290_);
v___x_3295_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
lean_object* v___x_3296_; 
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
return v___x_3296_;
}
}
}
else
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3318_; 
v_a_3299_ = lean_ctor_get(v_x_3288_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v_x_3288_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3301_ = v_x_3288_;
v_isShared_3302_ = v_isSharedCheck_3318_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v_x_3288_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3318_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; uint8_t v___x_3304_; lean_object* v_val_3306_; lean_object* v___x_3309_; 
v___x_3303_ = lean_unsigned_to_nat(0u);
v___x_3304_ = 0;
v___x_3309_ = lasm_js_await_into(v_a_3286_, v_a_3299_, v___x_3287_);
lean_dec(v_a_3299_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v_a_3310_; lean_object* v___x_3312_; 
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3309_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_a_3310_);
v___x_3312_ = v___x_3301_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
v_val_3306_ = v___x_3312_;
goto v___jp_3305_;
}
}
else
{
lean_object* v_a_3314_; lean_object* v___x_3316_; 
v_a_3314_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3309_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 0);
lean_ctor_set(v___x_3301_, 0, v_a_3314_);
v___x_3316_ = v___x_3301_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3314_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
v_val_3306_ = v___x_3316_;
goto v___jp_3305_;
}
}
v___jp_3305_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3307_, 0, v_val_3306_);
v___x_3308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3304_, v___x_3307_, v___f_3285_);
return v___x_3308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object* v___f_3319_, lean_object* v_a_3320_, lean_object* v___x_3321_, lean_object* v_x_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(v___f_3319_, v_a_3320_, v___x_3321_, v_x_3322_);
lean_dec(v___x_3321_);
lean_dec(v_a_3320_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object* v_a_3325_, lean_object* v___f_3326_, lean_object* v_x_3327_){
_start:
{
if (lean_obj_tag(v_x_3327_) == 0)
{
lean_object* v___x_3329_; 
lean_dec_ref(v___f_3326_);
v___x_3329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3329_, 0, v_x_3327_);
return v___x_3329_;
}
else
{
lean_object* v___x_3330_; uint8_t v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
lean_dec_ref_known(v_x_3327_, 1);
v___x_3330_ = lean_unsigned_to_nat(0u);
v___x_3331_ = 0;
v___x_3332_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3325_);
v___x_3333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3330_, v___x_3331_, v___x_3332_, v___f_3326_);
return v___x_3333_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object* v_a_3334_, lean_object* v___f_3335_, lean_object* v_x_3336_, lean_object* v___y_3337_){
_start:
{
lean_object* v_res_3338_; 
v_res_3338_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(v_a_3334_, v___f_3335_, v_x_3336_);
lean_dec(v_a_3334_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object* v___f_3339_, lean_object* v_v_3340_, lean_object* v_x_3341_){
_start:
{
if (lean_obj_tag(v_x_3341_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3351_; 
lean_dec(v_v_3340_);
lean_dec_ref(v___f_3339_);
v_a_3343_ = lean_ctor_get(v_x_3341_, 0);
v_isSharedCheck_3351_ = !lean_is_exclusive(v_x_3341_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3345_ = v_x_3341_;
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v_x_3341_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3351_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
lean_object* v___x_3349_; 
v___x_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
return v___x_3349_;
}
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3375_; 
v_a_3352_ = lean_ctor_get(v_x_3341_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v_x_3341_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3354_ = v_x_3341_;
v_isShared_3355_ = v_isSharedCheck_3375_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v_x_3341_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3375_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___f_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___f_3359_; lean_object* v___x_3360_; uint8_t v___x_3361_; lean_object* v_val_3363_; lean_object* v___x_3366_; 
lean_inc(v_a_3352_);
v___f_3356_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3356_, 0, v_a_3352_);
lean_closure_set(v___f_3356_, 1, v___f_3339_);
v___x_3357_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3358_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3358_, 0, v_v_3340_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
lean_inc_ref(v___x_3358_);
v___f_3359_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3359_, 0, v___f_3356_);
lean_closure_set(v___f_3359_, 1, v_a_3352_);
lean_closure_set(v___f_3359_, 2, v___x_3358_);
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = 0;
v___x_3366_ = l_Lasm_JS_Wire_encodeIO(v___x_3358_);
lean_dec_ref_known(v___x_3358_, 2);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; lean_object* v___x_3369_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___x_3366_, 1);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v_a_3367_);
v___x_3369_ = v___x_3354_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3367_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
v_val_3363_ = v___x_3369_;
goto v___jp_3362_;
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; 
v_a_3371_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_a_3371_);
lean_dec_ref_known(v___x_3366_, 1);
if (v_isShared_3355_ == 0)
{
lean_ctor_set_tag(v___x_3354_, 0);
lean_ctor_set(v___x_3354_, 0, v_a_3371_);
v___x_3373_ = v___x_3354_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3371_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
v_val_3363_ = v___x_3373_;
goto v___jp_3362_;
}
}
v___jp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_val_3363_);
v___x_3365_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3360_, v___x_3361_, v___x_3364_, v___f_3359_);
return v___x_3365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object* v___f_3376_, lean_object* v_v_3377_, lean_object* v_x_3378_, lean_object* v___y_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(v___f_3376_, v_v_3377_, v_x_3378_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object* v___f_3381_, lean_object* v_x_3382_){
_start:
{
if (lean_obj_tag(v_x_3382_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3392_; 
lean_dec_ref(v___f_3381_);
v_a_3384_ = lean_ctor_get(v_x_3382_, 0);
v_isSharedCheck_3392_ = !lean_is_exclusive(v_x_3382_);
if (v_isSharedCheck_3392_ == 0)
{
v___x_3386_ = v_x_3382_;
v_isShared_3387_ = v_isSharedCheck_3392_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v_x_3382_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3392_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3389_; 
if (v_isShared_3387_ == 0)
{
v___x_3389_ = v___x_3386_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v_a_3384_);
v___x_3389_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
return v___x_3390_;
}
}
}
else
{
lean_object* v_a_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3412_; 
v_a_3393_ = lean_ctor_get(v_x_3382_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v_x_3382_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3395_ = v_x_3382_;
v_isShared_3396_ = v_isSharedCheck_3412_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_a_3393_);
lean_dec(v_x_3382_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3412_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v___x_3397_; uint8_t v___x_3398_; lean_object* v_val_3400_; lean_object* v___x_3403_; 
v___x_3397_ = lean_unsigned_to_nat(0u);
v___x_3398_ = 0;
v___x_3403_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3393_);
lean_dec(v_a_3393_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; lean_object* v___x_3406_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3403_, 1);
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v_a_3404_);
v___x_3406_ = v___x_3395_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3404_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
v_val_3400_ = v___x_3406_;
goto v___jp_3399_;
}
}
else
{
lean_object* v_a_3408_; lean_object* v___x_3410_; 
v_a_3408_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3408_);
lean_dec_ref_known(v___x_3403_, 1);
if (v_isShared_3396_ == 0)
{
lean_ctor_set_tag(v___x_3395_, 0);
lean_ctor_set(v___x_3395_, 0, v_a_3408_);
v___x_3410_ = v___x_3395_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
v_val_3400_ = v___x_3410_;
goto v___jp_3399_;
}
}
v___jp_3399_:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3401_, 0, v_val_3400_);
v___x_3402_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3397_, v___x_3398_, v___x_3401_, v___f_3381_);
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object* v___f_3413_, lean_object* v_x_3414_, lean_object* v___y_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(v___f_3413_, v_x_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object* v_v_3419_){
_start:
{
lean_object* v___f_3421_; lean_object* v___f_3422_; lean_object* v___f_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; lean_object* v_val_3427_; lean_object* v___x_3430_; 
v___f_3421_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0));
v___f_3422_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3422_, 0, v___f_3421_);
lean_closure_set(v___f_3422_, 1, v_v_3419_);
v___f_3423_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3423_, 0, v___f_3422_);
v___x_3424_ = lean_unsigned_to_nat(0u);
v___x_3425_ = 0;
v___x_3430_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
lean_ctor_set_tag(v___x_3433_, 1);
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
v_val_3427_ = v___x_3436_;
goto v___jp_3426_;
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
v_a_3439_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3430_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3430_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 0);
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
v_val_3427_ = v___x_3444_;
goto v___jp_3426_;
}
}
}
v___jp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3428_, 0, v_val_3427_);
v___x_3429_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3424_, v___x_3425_, v___x_3428_, v___f_3423_);
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object* v_v_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_v_3447_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object* v_x_3450_){
_start:
{
if (lean_obj_tag(v_x_3450_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3460_; 
v_a_3452_ = lean_ctor_get(v_x_3450_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_x_3450_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3454_ = v_x_3450_;
v_isShared_3455_ = v_isSharedCheck_3460_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v_x_3450_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3460_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
return v___x_3458_;
}
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3462_; 
v_a_3461_ = lean_ctor_get(v_x_3450_, 0);
lean_inc(v_a_3461_);
lean_dec_ref_known(v_x_3450_, 1);
v___x_3462_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3461_);
return v___x_3462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object* v_x_3463_, lean_object* v___y_3464_){
_start:
{
lean_object* v_res_3465_; 
v_res_3465_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(v_x_3463_);
return v_res_3465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(lean_object* v_o_3467_, lean_object* v_key_3468_){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; 
lean_inc_ref(v_key_3468_);
v___x_3470_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3470_, 0, v_key_3468_);
v___x_3471_ = l_Lasm_JS_Wire_encodeIO(v___x_3470_);
lean_dec_ref_known(v___x_3470_, 1);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; uint32_t v___x_3473_; uint32_t v___x_3474_; uint64_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_a_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v___x_3473_ = 203;
v___x_3474_ = lasm_js_value_handle(v_o_3467_);
v___x_3475_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
v___x_3476_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3477_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3477_, 0, v_o_3467_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
v___x_3478_ = lasm_js_call(v___x_3473_, v___x_3474_, v___x_3475_, v_a_3472_, v___x_3477_);
lean_dec_ref_known(v___x_3477_, 2);
lean_dec(v_a_3472_);
if (lean_obj_tag(v___x_3478_) == 0)
{
lean_object* v_a_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_a_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_a_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_3481_ = l_String_quote(v_key_3468_);
v___x_3482_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
v___x_3483_ = lean_unsigned_to_nat(120u);
v___x_3484_ = lean_unsigned_to_nat(0u);
v___x_3485_ = l_Std_Format_pretty(v___x_3482_, v___x_3483_, v___x_3484_, v___x_3484_);
v___x_3486_ = lean_string_append(v___x_3480_, v___x_3485_);
lean_dec_ref(v___x_3485_);
v___x_3487_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3486_, v_a_3479_);
lean_dec(v_a_3479_);
lean_dec_ref(v___x_3486_);
return v___x_3487_;
}
else
{
lean_object* v_a_3488_; lean_object* v___x_3490_; uint8_t v_isShared_3491_; uint8_t v_isSharedCheck_3495_; 
lean_dec_ref(v_key_3468_);
v_a_3488_ = lean_ctor_get(v___x_3478_, 0);
v_isSharedCheck_3495_ = !lean_is_exclusive(v___x_3478_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3490_ = v___x_3478_;
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
else
{
lean_inc(v_a_3488_);
lean_dec(v___x_3478_);
v___x_3490_ = lean_box(0);
v_isShared_3491_ = v_isSharedCheck_3495_;
goto v_resetjp_3489_;
}
v_resetjp_3489_:
{
lean_object* v___x_3493_; 
if (v_isShared_3491_ == 0)
{
v___x_3493_ = v___x_3490_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_a_3488_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
else
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3503_; 
lean_dec_ref(v_key_3468_);
lean_dec(v_o_3467_);
v_a_3496_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3503_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3503_ == 0)
{
v___x_3498_ = v___x_3471_;
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v___x_3471_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3503_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
return v___x_3501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___boxed(lean_object* v_o_3504_, lean_object* v_key_3505_, lean_object* v_a_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(v_o_3504_, v_key_3505_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object* v_self_3510_){
_start:
{
lean_object* v___f_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; uint8_t v___x_3515_; lean_object* v_val_3517_; lean_object* v___x_3520_; 
v___f_3512_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3513_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3514_ = lean_unsigned_to_nat(0u);
v___x_3515_ = 0;
v___x_3520_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(v_self_3510_, v___x_3513_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3520_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3520_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
lean_ctor_set_tag(v___x_3523_, 1);
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
v_val_3517_ = v___x_3526_;
goto v___jp_3516_;
}
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
v_a_3529_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3520_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3520_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
lean_ctor_set_tag(v___x_3531_, 0);
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
v_val_3517_ = v___x_3534_;
goto v___jp_3516_;
}
}
}
v___jp_3516_:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3518_, 0, v_val_3517_);
v___x_3519_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3514_, v___x_3515_, v___x_3518_, v___f_3512_);
return v___x_3519_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object* v_self_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(v_self_3537_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_3540_, uint32_t v_op_3541_, uint64_t v_flags_3542_, lean_object* v_payload_3543_, lean_object* v___f_3544_, lean_object* v___f_3545_, lean_object* v___f_3546_, lean_object* v_x_3547_){
_start:
{
if (lean_obj_tag(v_x_3547_) == 0)
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3557_; 
lean_dec_ref(v___f_3546_);
lean_dec_ref(v___f_3545_);
lean_dec_ref(v___f_3544_);
lean_dec(v_payload_3543_);
v_a_3549_ = lean_ctor_get(v_x_3547_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v_x_3547_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3551_ = v_x_3547_;
v_isShared_3552_ = v_isSharedCheck_3557_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v_x_3547_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3557_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
lean_object* v___x_3555_; 
v___x_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
return v___x_3555_;
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3604_; 
v_a_3558_ = lean_ctor_get(v_x_3547_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v_x_3547_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3560_ = v_x_3547_;
v_isShared_3561_ = v_isSharedCheck_3604_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v_x_3547_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3604_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; uint8_t v___x_3564_; 
v___x_3562_ = lean_string_utf8_byte_size(v_failurePrefix_3540_);
v___x_3563_ = lean_unsigned_to_nat(0u);
v___x_3564_ = lean_nat_dec_eq(v___x_3562_, v___x_3563_);
if (v___x_3564_ == 0)
{
lean_object* v___f_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___f_3569_; lean_object* v_val_3571_; lean_object* v___x_3576_; 
lean_dec_ref(v___f_3546_);
lean_inc(v_a_3558_);
v___f_3565_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3565_, 0, v_a_3558_);
v___x_3566_ = lean_box(v___x_3564_);
v___x_3567_ = lean_box_uint32(v_op_3541_);
v___x_3568_ = lean_box_uint64(v_flags_3542_);
lean_inc(v_payload_3543_);
v___f_3569_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3569_, 0, v___x_3563_);
lean_closure_set(v___f_3569_, 1, v___x_3566_);
lean_closure_set(v___f_3569_, 2, v___f_3565_);
lean_closure_set(v___f_3569_, 3, v_a_3558_);
lean_closure_set(v___f_3569_, 4, v___x_3567_);
lean_closure_set(v___f_3569_, 5, v___x_3568_);
lean_closure_set(v___f_3569_, 6, v_payload_3543_);
v___x_3576_ = l_Lasm_JS_Wire_encodeIO(v_payload_3543_);
lean_dec(v_payload_3543_);
if (lean_obj_tag(v___x_3576_) == 0)
{
lean_object* v_a_3577_; lean_object* v___x_3579_; 
v_a_3577_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3577_);
lean_dec_ref_known(v___x_3576_, 1);
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 0, v_a_3577_);
v___x_3579_ = v___x_3560_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3577_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
v_val_3571_ = v___x_3579_;
goto v___jp_3570_;
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; 
v_a_3581_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_a_3581_);
lean_dec_ref_known(v___x_3576_, 1);
if (v_isShared_3561_ == 0)
{
lean_ctor_set_tag(v___x_3560_, 0);
lean_ctor_set(v___x_3560_, 0, v_a_3581_);
v___x_3583_ = v___x_3560_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3581_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
v_val_3571_ = v___x_3583_;
goto v___jp_3570_;
}
}
v___jp_3570_:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3572_, 0, v_val_3571_);
v___x_3573_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3563_, v___x_3564_, v___x_3572_, v___f_3569_);
v___x_3574_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3563_, v___x_3564_, v___x_3573_, v___f_3544_);
v___x_3575_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3563_, v___x_3564_, v___x_3574_, v___f_3545_);
return v___x_3575_;
}
}
else
{
lean_object* v___f_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___f_3588_; uint8_t v___x_3589_; lean_object* v_val_3591_; lean_object* v___x_3595_; 
lean_dec_ref(v___f_3545_);
lean_dec_ref(v___f_3544_);
lean_inc(v_a_3558_);
v___f_3585_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3585_, 0, v_a_3558_);
v___x_3586_ = lean_box_uint32(v_op_3541_);
v___x_3587_ = lean_box_uint64(v_flags_3542_);
lean_inc(v_payload_3543_);
v___f_3588_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3588_, 0, v___f_3585_);
lean_closure_set(v___f_3588_, 1, v_a_3558_);
lean_closure_set(v___f_3588_, 2, v___x_3586_);
lean_closure_set(v___f_3588_, 3, v___x_3587_);
lean_closure_set(v___f_3588_, 4, v_payload_3543_);
v___x_3589_ = 0;
v___x_3595_ = l_Lasm_JS_Wire_encodeIO(v_payload_3543_);
lean_dec(v_payload_3543_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v_a_3596_; lean_object* v___x_3598_; 
v_a_3596_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3596_);
lean_dec_ref_known(v___x_3595_, 1);
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 0, v_a_3596_);
v___x_3598_ = v___x_3560_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3596_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
v_val_3591_ = v___x_3598_;
goto v___jp_3590_;
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; 
v_a_3600_ = lean_ctor_get(v___x_3595_, 0);
lean_inc(v_a_3600_);
lean_dec_ref_known(v___x_3595_, 1);
if (v_isShared_3561_ == 0)
{
lean_ctor_set_tag(v___x_3560_, 0);
lean_ctor_set(v___x_3560_, 0, v_a_3600_);
v___x_3602_ = v___x_3560_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
v_val_3591_ = v___x_3602_;
goto v___jp_3590_;
}
}
v___jp_3590_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_val_3591_);
v___x_3593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3563_, v___x_3589_, v___x_3592_, v___f_3588_);
v___x_3594_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3563_, v___x_3589_, v___x_3593_, v___f_3546_);
return v___x_3594_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_3605_, lean_object* v_op_3606_, lean_object* v_flags_3607_, lean_object* v_payload_3608_, lean_object* v___f_3609_, lean_object* v___f_3610_, lean_object* v___f_3611_, lean_object* v_x_3612_, lean_object* v___y_3613_){
_start:
{
uint32_t v_op_boxed_3614_; uint64_t v_flags_boxed_3615_; lean_object* v_res_3616_; 
v_op_boxed_3614_ = lean_unbox_uint32(v_op_3606_);
lean_dec(v_op_3606_);
v_flags_boxed_3615_ = lean_unbox_uint64(v_flags_3607_);
lean_dec_ref(v_flags_3607_);
v_res_3616_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(v_failurePrefix_3605_, v_op_boxed_3614_, v_flags_boxed_3615_, v_payload_3608_, v___f_3609_, v___f_3610_, v___f_3611_, v_x_3612_);
lean_dec_ref(v_failurePrefix_3605_);
return v_res_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object* v___f_3617_, lean_object* v_x_3618_){
_start:
{
if (lean_obj_tag(v_x_3618_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3628_; 
lean_dec_ref(v___f_3617_);
v_a_3620_ = lean_ctor_get(v_x_3618_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v_x_3618_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3622_ = v_x_3618_;
v_isShared_3623_ = v_isSharedCheck_3628_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v_x_3618_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3628_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3625_; 
if (v_isShared_3623_ == 0)
{
v___x_3625_ = v___x_3622_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3620_);
v___x_3625_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
return v___x_3626_;
}
}
}
else
{
lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3640_; 
v_isSharedCheck_3640_ = !lean_is_exclusive(v_x_3618_);
if (v_isSharedCheck_3640_ == 0)
{
lean_object* v_unused_3641_; 
v_unused_3641_ = lean_ctor_get(v_x_3618_, 0);
lean_dec(v_unused_3641_);
v___x_3630_ = v_x_3618_;
v_isShared_3631_ = v_isSharedCheck_3640_;
goto v_resetjp_3629_;
}
else
{
lean_dec(v_x_3618_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3640_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v___x_3632_; uint8_t v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3636_; 
v___x_3632_ = lean_unsigned_to_nat(0u);
v___x_3633_ = 0;
v___x_3634_ = lean_io_promise_new();
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 0, v___x_3634_);
v___x_3636_ = v___x_3630_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3634_);
v___x_3636_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3636_);
v___x_3638_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3632_, v___x_3633_, v___x_3637_, v___f_3617_);
return v___x_3638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object* v___f_3642_, lean_object* v_x_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(v___f_3642_, v_x_3643_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object* v___f_3646_, lean_object* v_bytes_3647_){
_start:
{
lean_object* v___x_3649_; uint8_t v___x_3650_; lean_object* v_val_3652_; lean_object* v___x_3655_; 
v___x_3649_ = lean_unsigned_to_nat(0u);
v___x_3650_ = 0;
v___x_3655_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3647_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3655_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
lean_ctor_set_tag(v___x_3658_, 1);
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
v_val_3652_ = v___x_3661_;
goto v___jp_3651_;
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
v_a_3664_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3655_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3655_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
lean_ctor_set_tag(v___x_3666_, 0);
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
v_val_3652_ = v___x_3669_;
goto v___jp_3651_;
}
}
}
v___jp_3651_:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3653_, 0, v_val_3652_);
v___x_3654_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3649_, v___x_3650_, v___x_3653_, v___f_3646_);
return v___x_3654_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3672_, lean_object* v_bytes_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(v___f_3672_, v_bytes_3673_);
lean_dec_ref(v_bytes_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3685_, lean_object* v_key_3686_){
_start:
{
if (lean_obj_tag(v_d_3685_) == 8)
{
lean_object* v___x_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3718_; 
v___x_3689_ = l_Lasm_JS_Data_field(v_d_3685_, v_key_3686_);
v_isSharedCheck_3718_ = !lean_is_exclusive(v_d_3685_);
if (v_isSharedCheck_3718_ == 0)
{
lean_object* v_unused_3719_; 
v_unused_3719_ = lean_ctor_get(v_d_3685_, 0);
lean_dec(v_unused_3719_);
v___x_3691_ = v_d_3685_;
v_isShared_3692_ = v_isSharedCheck_3718_;
goto v_resetjp_3690_;
}
else
{
lean_dec(v_d_3685_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3718_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
switch(lean_obj_tag(v___x_3689_))
{
case 1:
{
lean_del_object(v___x_3691_);
goto v___jp_3687_;
}
case 0:
{
lean_del_object(v___x_3691_);
goto v___jp_3687_;
}
default: 
{
if (lean_obj_tag(v___x_3689_) == 2)
{
uint8_t v_b_3693_; lean_object* v___x_3694_; lean_object* v___x_3696_; 
v_b_3693_ = lean_ctor_get_uint8(v___x_3689_, 0);
lean_dec_ref_known(v___x_3689_, 0);
v___x_3694_ = lean_box(v_b_3693_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 1);
lean_ctor_set(v___x_3691_, 0, v___x_3694_);
v___x_3696_ = v___x_3691_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
lean_object* v___x_3697_; 
v___x_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3697_, 0, v___x_3696_);
return v___x_3697_;
}
}
else
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; uint8_t v___x_3709_; 
v___x_3699_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3700_ = lean_string_append(v___x_3699_, v_key_3686_);
v___x_3701_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3702_ = lean_string_append(v___x_3700_, v___x_3701_);
v___x_3703_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_3704_ = lean_string_append(v___x_3702_, v___x_3703_);
v___x_3705_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3706_ = lean_string_append(v___x_3704_, v___x_3705_);
v___x_3707_ = l_Lasm_JS_Data_describe(v___x_3689_);
v___x_3708_ = lean_string_append(v___x_3706_, v___x_3707_);
lean_dec_ref(v___x_3707_);
v___x_3709_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3709_ == 0)
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3713_; 
v___x_3710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___x_3711_ = lean_string_append(v___x_3708_, v___x_3710_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3711_);
v___x_3713_ = v___x_3691_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v___x_3711_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
else
{
lean_object* v___x_3716_; 
if (v_isShared_3692_ == 0)
{
lean_ctor_set_tag(v___x_3691_, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3708_);
v___x_3716_ = v___x_3691_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3708_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3720_; 
lean_dec(v_d_3685_);
v___x_3720_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6));
return v___x_3720_;
}
v___jp_3687_:
{
lean_object* v___x_3688_; 
v___x_3688_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3688_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3721_, lean_object* v_key_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3721_, v_key_3722_);
lean_dec_ref(v_key_3722_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3726_, lean_object* v_key_3727_){
_start:
{
if (lean_obj_tag(v_d_3726_) == 8)
{
lean_object* v___x_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
v___x_3728_ = l_Lasm_JS_Data_field(v_d_3726_, v_key_3727_);
v_isSharedCheck_3735_ = !lean_is_exclusive(v_d_3726_);
if (v_isSharedCheck_3735_ == 0)
{
lean_object* v_unused_3736_; 
v_unused_3736_ = lean_ctor_get(v_d_3726_, 0);
lean_dec(v_unused_3736_);
v___x_3730_ = v_d_3726_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_dec(v_d_3726_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
lean_ctor_set_tag(v___x_3730_, 1);
lean_ctor_set(v___x_3730_, 0, v___x_3728_);
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v___x_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
else
{
lean_object* v___x_3737_; 
lean_dec(v_d_3726_);
v___x_3737_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3737_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3738_, lean_object* v_key_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3738_, v_key_3739_);
lean_dec_ref(v_key_3739_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object* v_context_3741_, lean_object* v_d_3742_){
_start:
{
lean_object* v___y_3745_; lean_object* v___y_3746_; lean_object* v___y_3751_; lean_object* v_received_3752_; lean_object* v___y_3771_; lean_object* v_a_3774_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
lean_inc(v_d_3742_);
v___x_3799_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3742_, v___x_3798_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_a_3800_; 
v_a_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3800_);
lean_dec_ref_known(v___x_3799_, 1);
v_a_3774_ = v_a_3800_;
goto v___jp_3773_;
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v_a_3801_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_a_3801_);
lean_dec_ref_known(v___x_3799_, 1);
v___x_3802_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
lean_inc(v_d_3742_);
v___x_3803_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3742_, v___x_3802_);
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_object* v_a_3804_; 
lean_dec(v_a_3801_);
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
lean_inc(v_a_3804_);
lean_dec_ref_known(v___x_3803_, 1);
v_a_3774_ = v_a_3804_;
goto v___jp_3773_;
}
else
{
lean_object* v_a_3805_; lean_object* v___x_3807_; uint8_t v_isShared_3808_; uint8_t v_isSharedCheck_3813_; 
lean_dec(v_d_3742_);
v_a_3805_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3807_ = v___x_3803_;
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
else
{
lean_inc(v_a_3805_);
lean_dec(v___x_3803_);
v___x_3807_ = lean_box(0);
v_isShared_3808_ = v_isSharedCheck_3813_;
goto v_resetjp_3806_;
}
v_resetjp_3806_:
{
lean_object* v___x_3809_; lean_object* v___x_3811_; 
v___x_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3809_, 0, v_a_3801_);
lean_ctor_set(v___x_3809_, 1, v_a_3805_);
if (v_isShared_3808_ == 0)
{
lean_ctor_set_tag(v___x_3807_, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3809_);
v___x_3811_ = v___x_3807_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
v___jp_3744_:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3747_ = lean_string_append(v___y_3745_, v___y_3746_);
lean_dec_ref(v___y_3746_);
v___x_3748_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
v___x_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3749_, 0, v___x_3748_);
return v___x_3749_;
}
v___jp_3750_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; 
v___x_3753_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3754_ = lean_string_append(v___x_3753_, v_context_3741_);
v___x_3755_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3756_ = lean_string_append(v___x_3754_, v___x_3755_);
v___x_3757_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___x_3758_ = lean_string_append(v___x_3756_, v___x_3757_);
v___x_3759_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3760_ = lean_string_append(v___x_3758_, v___x_3759_);
v___x_3761_ = lean_string_append(v___x_3760_, v_received_3752_);
lean_dec_ref(v_received_3752_);
v___x_3762_ = lean_string_utf8_byte_size(v___y_3751_);
v___x_3763_ = lean_unsigned_to_nat(0u);
v___x_3764_ = lean_nat_dec_eq(v___x_3762_, v___x_3763_);
if (v___x_3764_ == 0)
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3765_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3766_ = lean_string_append(v___x_3765_, v___y_3751_);
lean_dec_ref(v___y_3751_);
v___x_3767_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3768_ = lean_string_append(v___x_3766_, v___x_3767_);
v___y_3745_ = v___x_3761_;
v___y_3746_ = v___x_3768_;
goto v___jp_3744_;
}
else
{
lean_object* v___x_3769_; 
lean_dec_ref(v___y_3751_);
v___x_3769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3745_ = v___x_3761_;
v___y_3746_ = v___x_3769_;
goto v___jp_3744_;
}
}
v___jp_3770_:
{
lean_object* v___x_3772_; 
v___x_3772_ = l_Lasm_JS_Data_describe(v_d_3742_);
v___y_3751_ = v___y_3771_;
v_received_3752_ = v___x_3772_;
goto v___jp_3750_;
}
v___jp_3773_:
{
if (lean_obj_tag(v_d_3742_) == 9)
{
lean_object* v_value_3775_; lean_object* v_description_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v_value_3775_ = lean_ctor_get(v_d_3742_, 0);
v_description_3776_ = lean_ctor_get(v_d_3742_, 1);
v___x_3777_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3778_ = lean_string_dec_eq(v_description_3776_, v___x_3777_);
if (v___x_3778_ == 0)
{
v___y_3771_ = v_a_3774_;
goto v___jp_3770_;
}
else
{
lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3795_; 
lean_inc(v_value_3775_);
v_isSharedCheck_3795_ = !lean_is_exclusive(v_d_3742_);
if (v_isSharedCheck_3795_ == 0)
{
lean_object* v_unused_3796_; lean_object* v_unused_3797_; 
v_unused_3796_ = lean_ctor_get(v_d_3742_, 1);
lean_dec(v_unused_3796_);
v_unused_3797_ = lean_ctor_get(v_d_3742_, 0);
lean_dec(v_unused_3797_);
v___x_3780_ = v_d_3742_;
v_isShared_3781_ = v_isSharedCheck_3795_;
goto v_resetjp_3779_;
}
else
{
lean_dec(v_d_3742_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3795_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
uint32_t v___x_3782_; uint64_t v___x_3783_; lean_object* v___x_3785_; 
v___x_3782_ = 206;
v___x_3783_ = 0ULL;
lean_inc(v_value_3775_);
if (v_isShared_3781_ == 0)
{
lean_ctor_set(v___x_3780_, 1, v___x_3777_);
v___x_3785_ = v___x_3780_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_value_3775_);
lean_ctor_set(v_reuseFailAlloc_3794_, 1, v___x_3777_);
v___x_3785_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
uint32_t v___x_3786_; lean_object* v___x_3787_; 
v___x_3786_ = lasm_js_value_handle(v_value_3775_);
lean_dec(v_value_3775_);
v___x_3787_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3782_, v___x_3783_, v___x_3785_, v___x_3786_);
lean_dec_ref(v___x_3785_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; uint8_t v___x_3789_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
lean_inc(v_a_3788_);
lean_dec_ref_known(v___x_3787_, 1);
v___x_3789_ = lean_string_validate_utf8(v_a_3788_);
if (v___x_3789_ == 0)
{
lean_object* v___x_3790_; lean_object* v___x_3791_; 
lean_dec(v_a_3788_);
v___x_3790_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3791_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3790_);
v___y_3751_ = v_a_3774_;
v_received_3752_ = v___x_3791_;
goto v___jp_3750_;
}
else
{
lean_object* v___x_3792_; 
v___x_3792_ = lean_string_from_utf8_unchecked(v_a_3788_);
v___y_3751_ = v_a_3774_;
v_received_3752_ = v___x_3792_;
goto v___jp_3750_;
}
}
else
{
lean_object* v___x_3793_; 
lean_dec_ref_known(v___x_3787_, 1);
v___x_3793_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3751_ = v_a_3774_;
v_received_3752_ = v___x_3793_;
goto v___jp_3750_;
}
}
}
}
}
else
{
v___y_3771_ = v_a_3774_;
goto v___jp_3770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3814_, lean_object* v_d_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3814_, v_d_3815_);
lean_dec_ref(v_context_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object* v_context_3818_, lean_object* v_x_3819_){
_start:
{
lean_object* v_val_3822_; 
if (lean_obj_tag(v_x_3819_) == 0)
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3832_; 
v_a_3824_ = lean_ctor_get(v_x_3819_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v_x_3819_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3826_ = v_x_3819_;
v_isShared_3827_ = v_isSharedCheck_3832_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v_x_3819_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3832_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3829_; 
if (v_isShared_3827_ == 0)
{
v___x_3829_ = v___x_3826_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3824_);
v___x_3829_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
lean_object* v___x_3830_; 
v___x_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3829_);
return v___x_3830_;
}
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3846_; 
v_a_3833_ = lean_ctor_get(v_x_3819_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_x_3819_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3835_ = v_x_3819_;
v_isShared_3836_ = v_isSharedCheck_3846_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v_x_3819_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3846_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3837_; 
v___x_3837_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3818_, v_a_3833_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3840_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3837_, 1);
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 0, v_a_3838_);
v___x_3840_ = v___x_3835_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_a_3838_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
v_val_3822_ = v___x_3840_;
goto v___jp_3821_;
}
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; 
v_a_3842_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_a_3842_);
lean_dec_ref_known(v___x_3837_, 1);
if (v_isShared_3836_ == 0)
{
lean_ctor_set_tag(v___x_3835_, 0);
lean_ctor_set(v___x_3835_, 0, v_a_3842_);
v___x_3844_ = v___x_3835_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3842_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
v_val_3822_ = v___x_3844_;
goto v___jp_3821_;
}
}
}
}
v___jp_3821_:
{
lean_object* v___x_3823_; 
v___x_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3823_, 0, v_val_3822_);
return v___x_3823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3847_, lean_object* v_x_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(v_context_3847_, v_x_3848_);
lean_dec_ref(v_context_3847_);
return v_res_3850_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object* v___f_3851_, lean_object* v_x_3852_){
_start:
{
if (lean_obj_tag(v_x_3852_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3862_; 
lean_dec_ref(v___f_3851_);
v_a_3854_ = lean_ctor_get(v_x_3852_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v_x_3852_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3856_ = v_x_3852_;
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v_x_3852_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; 
v___x_3860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
return v___x_3860_;
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3864_; 
v_a_3863_ = lean_ctor_get(v_x_3852_, 0);
lean_inc(v_a_3863_);
lean_dec_ref_known(v_x_3852_, 1);
v___x_3864_ = lean_apply_2(v___f_3851_, v_a_3863_, lean_box(0));
return v___x_3864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3865_, lean_object* v_x_3866_, lean_object* v___y_3867_){
_start:
{
lean_object* v_res_3868_; 
v_res_3868_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(v___f_3865_, v_x_3866_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object* v_context_3869_, uint32_t v_op_3870_, uint64_t v_flags_3871_, lean_object* v_payload_3872_, lean_object* v_failurePrefix_3873_){
_start:
{
lean_object* v___f_3875_; lean_object* v___f_3876_; lean_object* v___f_3877_; lean_object* v___f_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___f_3881_; lean_object* v___f_3882_; lean_object* v___x_3883_; uint8_t v___x_3884_; lean_object* v_val_3886_; lean_object* v___x_3889_; 
v___f_3875_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3875_, 0, v_context_3869_);
v___f_3876_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3876_, 0, v___f_3875_);
v___f_3877_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3877_, 0, v___f_3876_);
lean_inc_ref(v_failurePrefix_3873_);
v___f_3878_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3878_, 0, v_failurePrefix_3873_);
v___x_3879_ = lean_box_uint32(v_op_3870_);
v___x_3880_ = lean_box_uint64(v_flags_3871_);
lean_inc_ref(v___f_3877_);
v___f_3881_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3881_, 0, v_failurePrefix_3873_);
lean_closure_set(v___f_3881_, 1, v___x_3879_);
lean_closure_set(v___f_3881_, 2, v___x_3880_);
lean_closure_set(v___f_3881_, 3, v_payload_3872_);
lean_closure_set(v___f_3881_, 4, v___f_3878_);
lean_closure_set(v___f_3881_, 5, v___f_3877_);
lean_closure_set(v___f_3881_, 6, v___f_3877_);
v___f_3882_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3882_, 0, v___f_3881_);
v___x_3883_ = lean_unsigned_to_nat(0u);
v___x_3884_ = 0;
v___x_3889_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3889_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3889_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
lean_ctor_set_tag(v___x_3892_, 1);
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
v_val_3886_ = v___x_3895_;
goto v___jp_3885_;
}
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_a_3898_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3889_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3889_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
lean_ctor_set_tag(v___x_3900_, 0);
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
v_val_3886_ = v___x_3903_;
goto v___jp_3885_;
}
}
}
v___jp_3885_:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3887_, 0, v_val_3886_);
v___x_3888_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3883_, v___x_3884_, v___x_3887_, v___f_3882_);
return v___x_3888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object* v_context_3906_, lean_object* v_op_3907_, lean_object* v_flags_3908_, lean_object* v_payload_3909_, lean_object* v_failurePrefix_3910_, lean_object* v_a_3911_){
_start:
{
uint32_t v_op_boxed_3912_; uint64_t v_flags_boxed_3913_; lean_object* v_res_3914_; 
v_op_boxed_3912_ = lean_unbox_uint32(v_op_3907_);
lean_dec(v_op_3907_);
v_flags_boxed_3913_ = lean_unbox_uint64(v_flags_3908_);
lean_dec_ref(v_flags_3908_);
v_res_3914_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v_context_3906_, v_op_boxed_3912_, v_flags_boxed_3913_, v_payload_3909_, v_failurePrefix_3910_);
return v_res_3914_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t v_await_3915_, uint64_t v_extra_3916_){
_start:
{
uint64_t v___x_3917_; uint64_t v___y_3919_; 
v___x_3917_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3915_ == 0)
{
uint64_t v___x_3922_; 
v___x_3922_ = 0ULL;
v___y_3919_ = v___x_3922_;
goto v___jp_3918_;
}
else
{
uint64_t v___x_3923_; 
v___x_3923_ = 2ULL;
v___y_3919_ = v___x_3923_;
goto v___jp_3918_;
}
v___jp_3918_:
{
uint64_t v___x_3920_; uint64_t v___x_3921_; 
v___x_3920_ = lean_uint64_lor(v___x_3917_, v___y_3919_);
v___x_3921_ = lean_uint64_lor(v___x_3920_, v_extra_3916_);
return v___x_3921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object* v_await_3924_, lean_object* v_extra_3925_){
_start:
{
uint8_t v_await_boxed_3926_; uint64_t v_extra_boxed_3927_; uint64_t v_res_3928_; lean_object* v_r_3929_; 
v_await_boxed_3926_ = lean_unbox(v_await_3924_);
v_extra_boxed_3927_ = lean_unbox_uint64(v_extra_3925_);
lean_dec_ref(v_extra_3925_);
v_res_3928_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v_await_boxed_3926_, v_extra_boxed_3927_);
v_r_3929_ = lean_box_uint64(v_res_3928_);
return v_r_3929_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3930_; uint8_t v___x_3931_; uint64_t v___x_3932_; 
v___x_3930_ = 8ULL;
v___x_3931_ = 0;
v___x_3932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v___x_3931_, v___x_3930_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object* v_o_3933_, lean_object* v_name_3934_, lean_object* v_args_3935_){
_start:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; uint32_t v___x_3942_; uint64_t v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3937_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3938_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3938_, 0, v_o_3933_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
lean_inc_ref(v_name_3934_);
v___x_3939_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3939_, 0, v_name_3934_);
v___x_3940_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3941_ = lean_string_append(v___x_3940_, v_name_3934_);
lean_dec_ref(v_name_3934_);
v___x_3942_ = 205;
v___x_3943_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0);
v___x_3944_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3944_, 0, v_args_3935_);
v___x_3945_ = lean_unsigned_to_nat(3u);
v___x_3946_ = lean_mk_empty_array_with_capacity(v___x_3945_);
v___x_3947_ = lean_array_push(v___x_3946_, v___x_3938_);
v___x_3948_ = lean_array_push(v___x_3947_, v___x_3939_);
v___x_3949_ = lean_array_push(v___x_3948_, v___x_3944_);
v___x_3950_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3949_);
v___x_3951_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v___x_3941_, v___x_3942_, v___x_3943_, v___x_3950_, v___x_3937_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object* v_o_3952_, lean_object* v_name_3953_, lean_object* v_args_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_o_3952_, v_name_3953_, v_args_3954_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object* v_self_3958_){
_start:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3960_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_3961_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3962_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_3958_, v___x_3960_, v___x_3961_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object* v_self_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_read(v_self_3963_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object* v_self_3967_){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_3970_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3971_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3967_, v___x_3969_, v___x_3970_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object* v_self_3972_, lean_object* v_a_3973_){
_start:
{
lean_object* v_res_3974_; 
v_res_3974_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(v_self_3972_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object* v_self_3975_, lean_object* v_reason_3976_){
_start:
{
lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
v___x_3978_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_3979_ = lean_unsigned_to_nat(1u);
v___x_3980_ = lean_mk_empty_array_with_capacity(v___x_3979_);
v___x_3981_ = lean_array_push(v___x_3980_, v_reason_3976_);
v___x_3982_ = l_Lasm_JS_Web_Support_args(v___x_3981_);
v___x_3983_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3975_, v___x_3978_, v___x_3982_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object* v_self_3984_, lean_object* v_reason_3985_, lean_object* v_a_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(v_self_3984_, v_reason_3985_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object* v_context_3988_, lean_object* v_d_3989_){
_start:
{
lean_object* v___y_3992_; lean_object* v___y_3993_; 
if (lean_obj_tag(v_d_3989_) == 9)
{
lean_object* v_value_3997_; lean_object* v___x_3998_; 
v_value_3997_ = lean_ctor_get(v_d_3989_, 0);
lean_inc(v_value_3997_);
lean_dec_ref_known(v_d_3989_, 2);
v___x_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3998_, 0, v_value_3997_);
return v___x_3998_;
}
else
{
lean_object* v___x_3999_; lean_object* v_received_4001_; 
v___x_3999_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3989_) == 9)
{
lean_object* v_value_4015_; lean_object* v_description_4016_; uint8_t v___x_4017_; 
v_value_4015_ = lean_ctor_get(v_d_3989_, 0);
v_description_4016_ = lean_ctor_get(v_d_3989_, 1);
v___x_4017_ = lean_string_dec_eq(v_description_4016_, v___x_3999_);
if (v___x_4017_ == 0)
{
goto v___jp_4013_;
}
else
{
uint32_t v___x_4018_; uint64_t v___x_4019_; lean_object* v___x_4020_; uint32_t v___x_4021_; lean_object* v___x_4022_; 
lean_inc_n(v_value_4015_, 2);
lean_dec_ref_known(v_d_3989_, 2);
v___x_4018_ = 206;
v___x_4019_ = 0ULL;
v___x_4020_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4020_, 0, v_value_4015_);
lean_ctor_set(v___x_4020_, 1, v___x_3999_);
v___x_4021_ = lasm_js_value_handle(v_value_4015_);
lean_dec(v_value_4015_);
v___x_4022_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4018_, v___x_4019_, v___x_4020_, v___x_4021_);
lean_dec_ref_known(v___x_4020_, 2);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; uint8_t v___x_4024_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4022_, 1);
v___x_4024_ = lean_string_validate_utf8(v_a_4023_);
if (v___x_4024_ == 0)
{
lean_object* v___x_4025_; lean_object* v___x_4026_; 
lean_dec(v_a_4023_);
v___x_4025_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4026_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4025_);
v_received_4001_ = v___x_4026_;
goto v___jp_4000_;
}
else
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_string_from_utf8_unchecked(v_a_4023_);
v_received_4001_ = v___x_4027_;
goto v___jp_4000_;
}
}
else
{
lean_object* v___x_4028_; 
lean_dec_ref_known(v___x_4022_, 1);
v___x_4028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4001_ = v___x_4028_;
goto v___jp_4000_;
}
}
}
else
{
goto v___jp_4013_;
}
v___jp_4000_:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; uint8_t v___x_4011_; 
v___x_4002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4003_ = lean_string_append(v___x_4002_, v_context_3988_);
v___x_4004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4005_ = lean_string_append(v___x_4003_, v___x_4004_);
v___x_4006_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0));
v___x_4007_ = lean_string_append(v___x_4005_, v___x_4006_);
v___x_4008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4009_ = lean_string_append(v___x_4007_, v___x_4008_);
v___x_4010_ = lean_string_append(v___x_4009_, v_received_4001_);
lean_dec_ref(v_received_4001_);
v___x_4011_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4011_ == 0)
{
lean_object* v___x_4012_; 
v___x_4012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3992_ = v___x_4010_;
v___y_3993_ = v___x_4012_;
goto v___jp_3991_;
}
else
{
v___y_3992_ = v___x_4010_;
v___y_3993_ = v___x_3999_;
goto v___jp_3991_;
}
}
v___jp_4013_:
{
lean_object* v___x_4014_; 
v___x_4014_ = l_Lasm_JS_Data_describe(v_d_3989_);
v_received_4001_ = v___x_4014_;
goto v___jp_4000_;
}
}
v___jp_3991_:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3994_ = lean_string_append(v___y_3992_, v___y_3993_);
v___x_3995_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
v___x_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3995_);
return v___x_3996_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object* v_context_4029_, lean_object* v_d_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v_context_4029_, v_d_4030_);
lean_dec_ref(v_context_4029_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object* v_b_4033_, lean_object* v_args_4034_, uint8_t v_await_4035_){
_start:
{
uint64_t v___y_4038_; uint64_t v___y_4039_; uint64_t v___x_4082_; uint64_t v___y_4084_; 
v___x_4082_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4035_ == 0)
{
uint64_t v___x_4089_; 
v___x_4089_ = 0ULL;
v___y_4084_ = v___x_4089_;
goto v___jp_4083_;
}
else
{
uint64_t v___x_4090_; 
v___x_4090_ = 2ULL;
v___y_4084_ = v___x_4090_;
goto v___jp_4083_;
}
v___jp_4037_:
{
uint64_t v_flags_4040_; uint32_t v___x_4041_; lean_object* v___x_4042_; uint32_t v___x_4043_; lean_object* v___x_4044_; 
v_flags_4040_ = lean_uint64_lor(v___y_4038_, v___y_4039_);
v___x_4041_ = 214;
v___x_4042_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4033_, v_args_4034_);
v___x_4043_ = 0;
v___x_4044_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4041_, v_flags_4040_, v___x_4042_, v___x_4043_);
lean_dec(v___x_4042_);
if (lean_obj_tag(v___x_4044_) == 0)
{
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___x_4046_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4044_, 1);
v___x_4046_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4045_);
lean_dec(v_a_4045_);
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_object* v_a_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v_a_4047_ = lean_ctor_get(v___x_4046_, 0);
lean_inc(v_a_4047_);
lean_dec_ref_known(v___x_4046_, 1);
v___x_4048_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4033_);
v___x_4049_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v___x_4048_, v_a_4047_);
lean_dec_ref(v___x_4048_);
return v___x_4049_;
}
else
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
v_a_4050_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_4046_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4046_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
v_a_4058_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4044_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4044_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4063_; 
if (v_isShared_4061_ == 0)
{
lean_ctor_set_tag(v___x_4060_, 1);
v___x_4063_ = v___x_4060_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4058_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4081_; 
v_a_4066_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4081_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4081_ == 0)
{
v___x_4068_ = v___x_4044_;
v_isShared_4069_ = v_isSharedCheck_4081_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4044_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4081_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4079_; 
v___x_4070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4071_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4033_);
v___x_4072_ = lean_string_append(v___x_4070_, v___x_4071_);
lean_dec_ref(v___x_4071_);
v___x_4073_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4074_ = lean_string_append(v___x_4072_, v___x_4073_);
v___x_4075_ = lean_io_error_to_string(v_a_4066_);
v___x_4076_ = lean_string_append(v___x_4074_, v___x_4075_);
lean_dec_ref(v___x_4075_);
v___x_4077_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4077_, 0, v___x_4076_);
if (v_isShared_4069_ == 0)
{
lean_ctor_set(v___x_4068_, 0, v___x_4077_);
v___x_4079_ = v___x_4068_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4080_; 
v_reuseFailAlloc_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4080_, 0, v___x_4077_);
v___x_4079_ = v_reuseFailAlloc_4080_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
return v___x_4079_;
}
}
}
}
v___jp_4083_:
{
uint8_t v_construct_4085_; uint64_t v___x_4086_; 
v_construct_4085_ = lean_ctor_get_uint8(v_b_4033_, sizeof(void*)*4);
v___x_4086_ = lean_uint64_lor(v___x_4082_, v___y_4084_);
if (v_construct_4085_ == 0)
{
uint64_t v___x_4087_; 
v___x_4087_ = 0ULL;
v___y_4038_ = v___x_4086_;
v___y_4039_ = v___x_4087_;
goto v___jp_4037_;
}
else
{
uint64_t v___x_4088_; 
v___x_4088_ = 4ULL;
v___y_4038_ = v___x_4086_;
v___y_4039_ = v___x_4088_;
goto v___jp_4037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object* v_b_4091_, lean_object* v_args_4092_, lean_object* v_await_4093_, lean_object* v_a_4094_){
_start:
{
uint8_t v_await_boxed_4095_; lean_object* v_res_4096_; 
v_await_boxed_4095_ = lean_unbox(v_await_4093_);
v_res_4096_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v_b_4091_, v_args_4092_, v_await_boxed_4095_);
lean_dec_ref(v_b_4091_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object* v_stream_4105_){
_start:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; uint8_t v___x_4114_; lean_object* v___x_4115_; 
v___x_4107_ = lean_unsigned_to_nat(1u);
v___x_4108_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2));
v___x_4109_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4110_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4110_, 0, v_stream_4105_);
lean_ctor_set(v___x_4110_, 1, v___x_4109_);
v___x_4111_ = lean_mk_empty_array_with_capacity(v___x_4107_);
v___x_4112_ = lean_array_push(v___x_4111_, v___x_4110_);
v___x_4113_ = l_Lasm_JS_Web_Support_args(v___x_4112_);
v___x_4114_ = 0;
v___x_4115_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v___x_4108_, v___x_4113_, v___x_4114_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object* v_stream_4116_, lean_object* v_a_4117_){
_start:
{
lean_object* v_res_4118_; 
v_res_4118_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_new(v_stream_4116_);
return v_res_4118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object* v_self_4119_){
_start:
{
lean_object* v___f_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; uint8_t v___x_4124_; lean_object* v_val_4126_; lean_object* v___x_4129_; 
v___f_4121_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4122_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4123_ = lean_unsigned_to_nat(0u);
v___x_4124_ = 0;
v___x_4129_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(v_self_4119_, v___x_4122_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4129_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v___x_4129_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
lean_ctor_set_tag(v___x_4132_, 1);
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
v_val_4126_ = v___x_4135_;
goto v___jp_4125_;
}
}
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
v_a_4138_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4129_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4129_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
lean_ctor_set_tag(v___x_4140_, 0);
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
v_val_4126_ = v___x_4143_;
goto v___jp_4125_;
}
}
}
v___jp_4125_:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4127_, 0, v_val_4126_);
v___x_4128_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4123_, v___x_4124_, v___x_4127_, v___f_4121_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object* v_self_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v_res_4148_; 
v_res_4148_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(v_self_4146_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object* v_x_4149_){
_start:
{
if (lean_obj_tag(v_x_4149_) == 0)
{
lean_object* v___x_4150_; 
v___x_4150_ = lean_box(0);
return v___x_4150_;
}
else
{
lean_object* v_val_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4164_; 
v_val_4151_ = lean_ctor_get(v_x_4149_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_x_4149_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4153_ = v_x_4149_;
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_val_4151_);
lean_dec(v_x_4149_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; uint8_t v___x_4158_; 
v___x_4155_ = lean_nat_to_int(v_val_4151_);
v___x_4156_ = lean_nat_abs(v___x_4155_);
v___x_4157_ = lean_cstr_to_nat("9007199254740991");
v___x_4158_ = lean_nat_dec_le(v___x_4156_, v___x_4157_);
lean_dec(v___x_4156_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4160_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set_tag(v___x_4153_, 5);
lean_ctor_set(v___x_4153_, 0, v___x_4155_);
v___x_4160_ = v___x_4153_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v___x_4155_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
else
{
double v___x_4162_; lean_object* v___x_4163_; 
lean_del_object(v___x_4153_);
v___x_4162_ = l_Float_ofInt(v___x_4155_);
lean_dec(v___x_4155_);
v___x_4163_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object* v_x_4165_){
_start:
{
if (lean_obj_tag(v_x_4165_) == 0)
{
lean_object* v___x_4166_; 
v___x_4166_ = lean_box(0);
return v___x_4166_;
}
else
{
lean_object* v_val_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v_val_4167_ = lean_ctor_get(v_x_4165_, 0);
lean_inc(v_val_4167_);
lean_dec_ref_known(v_x_4165_, 1);
v___x_4168_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_4169_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_4167_);
v___x_4170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4170_, 0, v___x_4168_);
lean_ctor_set(v___x_4170_, 1, v___x_4169_);
v___x_4171_ = lean_unsigned_to_nat(1u);
v___x_4172_ = lean_mk_empty_array_with_capacity(v___x_4171_);
v___x_4173_ = lean_array_push(v___x_4172_, v___x_4170_);
v___x_4174_ = l_Lasm_JS_Web_Support_fields(v___x_4173_);
lean_dec_ref(v___x_4173_);
return v___x_4174_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object* v_self_4175_, lean_object* v_view_4176_, lean_object* v_options_4177_){
_start:
{
lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
v___x_4179_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_4180_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4180_, 0, v_view_4176_);
v___x_4181_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(v_options_4177_);
v___x_4182_ = lean_unsigned_to_nat(2u);
v___x_4183_ = lean_mk_empty_array_with_capacity(v___x_4182_);
v___x_4184_ = lean_array_push(v___x_4183_, v___x_4180_);
v___x_4185_ = lean_array_push(v___x_4184_, v___x_4181_);
v___x_4186_ = l_Lasm_JS_Web_Support_args(v___x_4185_);
v___x_4187_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_4175_, v___x_4179_, v___x_4186_);
return v___x_4187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object* v_self_4188_, lean_object* v_view_4189_, lean_object* v_options_4190_, lean_object* v_a_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_read(v_self_4188_, v_view_4189_, v_options_4190_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object* v_self_4193_){
_start:
{
lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4195_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4196_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4197_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4193_, v___x_4195_, v___x_4196_);
return v___x_4197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object* v_self_4198_, lean_object* v_a_4199_){
_start:
{
lean_object* v_res_4200_; 
v_res_4200_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(v_self_4198_);
return v_res_4200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object* v_self_4201_, lean_object* v_reason_4202_){
_start:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4204_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_4205_ = lean_unsigned_to_nat(1u);
v___x_4206_ = lean_mk_empty_array_with_capacity(v___x_4205_);
v___x_4207_ = lean_array_push(v___x_4206_, v_reason_4202_);
v___x_4208_ = l_Lasm_JS_Web_Support_args(v___x_4207_);
v___x_4209_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4201_, v___x_4204_, v___x_4208_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object* v_self_4210_, lean_object* v_reason_4211_, lean_object* v_a_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(v_self_4210_, v_reason_4211_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object* v_context_4215_, lean_object* v_d_4216_){
_start:
{
lean_object* v___y_4222_; lean_object* v___y_4223_; 
switch(lean_obj_tag(v_d_4216_))
{
case 1:
{
goto v___jp_4218_;
}
case 0:
{
goto v___jp_4218_;
}
default: 
{
if (lean_obj_tag(v_d_4216_) == 3)
{
double v_n_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; 
v_n_4227_ = lean_ctor_get_float(v_d_4216_, 0);
lean_dec_ref_known(v_d_4216_, 0);
v___x_4228_ = lean_box_float(v_n_4227_);
v___x_4229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4228_);
v___x_4230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4229_);
return v___x_4230_;
}
else
{
lean_object* v___x_4231_; lean_object* v_received_4233_; 
v___x_4231_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4216_) == 9)
{
lean_object* v_value_4247_; lean_object* v_description_4248_; uint8_t v___x_4249_; 
v_value_4247_ = lean_ctor_get(v_d_4216_, 0);
v_description_4248_ = lean_ctor_get(v_d_4216_, 1);
v___x_4249_ = lean_string_dec_eq(v_description_4248_, v___x_4231_);
if (v___x_4249_ == 0)
{
goto v___jp_4245_;
}
else
{
uint32_t v___x_4250_; uint64_t v___x_4251_; lean_object* v___x_4252_; uint32_t v___x_4253_; lean_object* v___x_4254_; 
lean_inc_n(v_value_4247_, 2);
lean_dec_ref_known(v_d_4216_, 2);
v___x_4250_ = 206;
v___x_4251_ = 0ULL;
v___x_4252_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4252_, 0, v_value_4247_);
lean_ctor_set(v___x_4252_, 1, v___x_4231_);
v___x_4253_ = lasm_js_value_handle(v_value_4247_);
lean_dec(v_value_4247_);
v___x_4254_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4250_, v___x_4251_, v___x_4252_, v___x_4253_);
lean_dec_ref_known(v___x_4252_, 2);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v_a_4255_; uint8_t v___x_4256_; 
v_a_4255_ = lean_ctor_get(v___x_4254_, 0);
lean_inc(v_a_4255_);
lean_dec_ref_known(v___x_4254_, 1);
v___x_4256_ = lean_string_validate_utf8(v_a_4255_);
if (v___x_4256_ == 0)
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
lean_dec(v_a_4255_);
v___x_4257_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4258_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4257_);
v_received_4233_ = v___x_4258_;
goto v___jp_4232_;
}
else
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_string_from_utf8_unchecked(v_a_4255_);
v_received_4233_ = v___x_4259_;
goto v___jp_4232_;
}
}
else
{
lean_object* v___x_4260_; 
lean_dec_ref_known(v___x_4254_, 1);
v___x_4260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4233_ = v___x_4260_;
goto v___jp_4232_;
}
}
}
else
{
goto v___jp_4245_;
}
v___jp_4232_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; uint8_t v___x_4243_; 
v___x_4234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4235_ = lean_string_append(v___x_4234_, v_context_4215_);
v___x_4236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4237_ = lean_string_append(v___x_4235_, v___x_4236_);
v___x_4238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0));
v___x_4239_ = lean_string_append(v___x_4237_, v___x_4238_);
v___x_4240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4241_ = lean_string_append(v___x_4239_, v___x_4240_);
v___x_4242_ = lean_string_append(v___x_4241_, v_received_4233_);
lean_dec_ref(v_received_4233_);
v___x_4243_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4243_ == 0)
{
lean_object* v___x_4244_; 
v___x_4244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4222_ = v___x_4242_;
v___y_4223_ = v___x_4244_;
goto v___jp_4221_;
}
else
{
v___y_4222_ = v___x_4242_;
v___y_4223_ = v___x_4231_;
goto v___jp_4221_;
}
}
v___jp_4245_:
{
lean_object* v___x_4246_; 
v___x_4246_ = l_Lasm_JS_Data_describe(v_d_4216_);
v_received_4233_ = v___x_4246_;
goto v___jp_4232_;
}
}
}
}
v___jp_4218_:
{
lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4219_ = lean_box(0);
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4219_);
return v___x_4220_;
}
v___jp_4221_:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4224_ = lean_string_append(v___y_4222_, v___y_4223_);
v___x_4225_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4225_, 0, v___x_4224_);
v___x_4226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
return v___x_4226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4261_, lean_object* v_d_4262_, lean_object* v_a_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4261_, v_d_4262_);
lean_dec_ref(v_context_4261_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object* v_context_4265_, lean_object* v_bytes_4266_){
_start:
{
lean_object* v___x_4268_; 
v___x_4268_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4266_);
if (lean_obj_tag(v___x_4268_) == 0)
{
lean_object* v_a_4269_; lean_object* v___x_4270_; 
v_a_4269_ = lean_ctor_get(v___x_4268_, 0);
lean_inc(v_a_4269_);
lean_dec_ref_known(v___x_4268_, 1);
v___x_4270_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4265_, v_a_4269_);
return v___x_4270_;
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4278_; 
v_a_4271_ = lean_ctor_get(v___x_4268_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4268_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4273_ = v___x_4268_;
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4268_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4278_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4276_; 
if (v_isShared_4274_ == 0)
{
v___x_4276_ = v___x_4273_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v_a_4271_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object* v_context_4279_, lean_object* v_bytes_4280_, lean_object* v_a_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v_context_4279_, v_bytes_4280_);
lean_dec_ref(v_bytes_4280_);
lean_dec_ref(v_context_4279_);
return v_res_4282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object* v_o_4283_, lean_object* v_key_4284_){
_start:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; 
lean_inc_ref(v_key_4284_);
v___x_4286_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4286_, 0, v_key_4284_);
v___x_4287_ = l_Lasm_JS_Wire_encodeIO(v___x_4286_);
lean_dec_ref_known(v___x_4286_, 1);
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; uint32_t v___x_4289_; uint32_t v___x_4290_; uint64_t v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4287_, 1);
v___x_4289_ = 203;
v___x_4290_ = lasm_js_value_handle(v_o_4283_);
v___x_4291_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4292_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4293_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4293_, 0, v_o_4283_);
lean_ctor_set(v___x_4293_, 1, v___x_4292_);
v___x_4294_ = lasm_js_call(v___x_4289_, v___x_4290_, v___x_4291_, v_a_4288_, v___x_4293_);
lean_dec_ref_known(v___x_4293_, 2);
lean_dec(v_a_4288_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v___x_4296_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_4297_ = l_String_quote(v_key_4284_);
v___x_4298_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4298_, 0, v___x_4297_);
v___x_4299_ = lean_unsigned_to_nat(120u);
v___x_4300_ = lean_unsigned_to_nat(0u);
v___x_4301_ = l_Std_Format_pretty(v___x_4298_, v___x_4299_, v___x_4300_, v___x_4300_);
v___x_4302_ = lean_string_append(v___x_4296_, v___x_4301_);
lean_dec_ref(v___x_4301_);
v___x_4303_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v___x_4302_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v___x_4302_);
return v___x_4303_;
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec_ref(v_key_4284_);
v_a_4304_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4294_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4294_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4304_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec_ref(v_key_4284_);
lean_dec(v_o_4283_);
v_a_4312_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4287_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4287_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object* v_o_4320_, lean_object* v_key_4321_, lean_object* v_a_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_o_4320_, v_key_4321_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object* v_self_4325_){
_start:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; 
v___x_4327_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4328_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4325_, v___x_4327_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object* v_self_4329_, lean_object* v_a_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(v_self_4329_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object* v_self_4332_){
_start:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___x_4334_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4335_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4336_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4332_, v___x_4334_, v___x_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object* v_self_4337_, lean_object* v_a_4338_){
_start:
{
lean_object* v_res_4339_; 
v_res_4339_ = l_Lasm_JS_Web_ReadableStreamDefaultController_close(v_self_4337_);
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object* v_self_4341_, lean_object* v_chunk_4342_){
_start:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___x_4344_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4345_ = lean_unsigned_to_nat(1u);
v___x_4346_ = lean_mk_empty_array_with_capacity(v___x_4345_);
v___x_4347_ = lean_array_push(v___x_4346_, v_chunk_4342_);
v___x_4348_ = l_Lasm_JS_Web_Support_args(v___x_4347_);
v___x_4349_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4341_, v___x_4344_, v___x_4348_);
return v___x_4349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object* v_self_4350_, lean_object* v_chunk_4351_, lean_object* v_a_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(v_self_4350_, v_chunk_4351_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object* v_self_4355_, lean_object* v_e_4356_){
_start:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4358_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4359_ = lean_unsigned_to_nat(1u);
v___x_4360_ = lean_mk_empty_array_with_capacity(v___x_4359_);
v___x_4361_ = lean_array_push(v___x_4360_, v_e_4356_);
v___x_4362_ = l_Lasm_JS_Web_Support_args(v___x_4361_);
v___x_4363_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4355_, v___x_4358_, v___x_4362_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object* v_self_4364_, lean_object* v_e_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l_Lasm_JS_Web_ReadableStreamDefaultController_error(v_self_4364_, v_e_4365_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object* v_context_4369_, lean_object* v_d_4370_){
_start:
{
lean_object* v___y_4376_; lean_object* v___y_4377_; 
switch(lean_obj_tag(v_d_4370_))
{
case 1:
{
goto v___jp_4372_;
}
case 0:
{
goto v___jp_4372_;
}
default: 
{
if (lean_obj_tag(v_d_4370_) == 9)
{
lean_object* v_value_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; 
v_value_4381_ = lean_ctor_get(v_d_4370_, 0);
lean_inc(v_value_4381_);
lean_dec_ref_known(v_d_4370_, 2);
v___x_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4382_, 0, v_value_4381_);
v___x_4383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4383_, 0, v___x_4382_);
return v___x_4383_;
}
else
{
lean_object* v___x_4384_; lean_object* v_received_4386_; 
v___x_4384_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4370_) == 9)
{
lean_object* v_value_4400_; lean_object* v_description_4401_; uint8_t v___x_4402_; 
v_value_4400_ = lean_ctor_get(v_d_4370_, 0);
v_description_4401_ = lean_ctor_get(v_d_4370_, 1);
v___x_4402_ = lean_string_dec_eq(v_description_4401_, v___x_4384_);
if (v___x_4402_ == 0)
{
goto v___jp_4398_;
}
else
{
uint32_t v___x_4403_; uint64_t v___x_4404_; lean_object* v___x_4405_; uint32_t v___x_4406_; lean_object* v___x_4407_; 
lean_inc_n(v_value_4400_, 2);
lean_dec_ref_known(v_d_4370_, 2);
v___x_4403_ = 206;
v___x_4404_ = 0ULL;
v___x_4405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4405_, 0, v_value_4400_);
lean_ctor_set(v___x_4405_, 1, v___x_4384_);
v___x_4406_ = lasm_js_value_handle(v_value_4400_);
lean_dec(v_value_4400_);
v___x_4407_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4403_, v___x_4404_, v___x_4405_, v___x_4406_);
lean_dec_ref_known(v___x_4405_, 2);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; uint8_t v___x_4409_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4407_, 1);
v___x_4409_ = lean_string_validate_utf8(v_a_4408_);
if (v___x_4409_ == 0)
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
lean_dec(v_a_4408_);
v___x_4410_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4411_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4410_);
v_received_4386_ = v___x_4411_;
goto v___jp_4385_;
}
else
{
lean_object* v___x_4412_; 
v___x_4412_ = lean_string_from_utf8_unchecked(v_a_4408_);
v_received_4386_ = v___x_4412_;
goto v___jp_4385_;
}
}
else
{
lean_object* v___x_4413_; 
lean_dec_ref_known(v___x_4407_, 1);
v___x_4413_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4386_ = v___x_4413_;
goto v___jp_4385_;
}
}
}
else
{
goto v___jp_4398_;
}
v___jp_4385_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; uint8_t v___x_4396_; 
v___x_4387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4388_ = lean_string_append(v___x_4387_, v_context_4369_);
v___x_4389_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4390_ = lean_string_append(v___x_4388_, v___x_4389_);
v___x_4391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0));
v___x_4392_ = lean_string_append(v___x_4390_, v___x_4391_);
v___x_4393_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4394_ = lean_string_append(v___x_4392_, v___x_4393_);
v___x_4395_ = lean_string_append(v___x_4394_, v_received_4386_);
lean_dec_ref(v_received_4386_);
v___x_4396_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4396_ == 0)
{
lean_object* v___x_4397_; 
v___x_4397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4376_ = v___x_4395_;
v___y_4377_ = v___x_4397_;
goto v___jp_4375_;
}
else
{
v___y_4376_ = v___x_4395_;
v___y_4377_ = v___x_4384_;
goto v___jp_4375_;
}
}
v___jp_4398_:
{
lean_object* v___x_4399_; 
v___x_4399_ = l_Lasm_JS_Data_describe(v_d_4370_);
v_received_4386_ = v___x_4399_;
goto v___jp_4385_;
}
}
}
}
v___jp_4372_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4373_ = lean_box(0);
v___x_4374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4373_);
return v___x_4374_;
}
v___jp_4375_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; 
v___x_4378_ = lean_string_append(v___y_4376_, v___y_4377_);
v___x_4379_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
v___x_4380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4379_);
return v___x_4380_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4414_, lean_object* v_d_4415_, lean_object* v_a_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4414_, v_d_4415_);
lean_dec_ref(v_context_4414_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object* v_context_4418_, lean_object* v_bytes_4419_){
_start:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4419_);
if (lean_obj_tag(v___x_4421_) == 0)
{
lean_object* v_a_4422_; lean_object* v___x_4423_; 
v_a_4422_ = lean_ctor_get(v___x_4421_, 0);
lean_inc(v_a_4422_);
lean_dec_ref_known(v___x_4421_, 1);
v___x_4423_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4418_, v_a_4422_);
return v___x_4423_;
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
v_a_4424_ = lean_ctor_get(v___x_4421_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4421_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4421_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4421_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object* v_context_4432_, lean_object* v_bytes_4433_, lean_object* v_a_4434_){
_start:
{
lean_object* v_res_4435_; 
v_res_4435_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v_context_4432_, v_bytes_4433_);
lean_dec_ref(v_bytes_4433_);
lean_dec_ref(v_context_4432_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object* v_o_4436_, lean_object* v_key_4437_){
_start:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
lean_inc_ref(v_key_4437_);
v___x_4439_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4439_, 0, v_key_4437_);
v___x_4440_ = l_Lasm_JS_Wire_encodeIO(v___x_4439_);
lean_dec_ref_known(v___x_4439_, 1);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; uint32_t v___x_4442_; uint32_t v___x_4443_; uint64_t v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref_known(v___x_4440_, 1);
v___x_4442_ = 203;
v___x_4443_ = lasm_js_value_handle(v_o_4436_);
v___x_4444_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4446_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4446_, 0, v_o_4436_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = lasm_js_call(v___x_4442_, v___x_4443_, v___x_4444_, v_a_4441_, v___x_4446_);
lean_dec_ref_known(v___x_4446_, 2);
lean_dec(v_a_4441_);
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
lean_inc(v_a_4448_);
lean_dec_ref_known(v___x_4447_, 1);
v___x_4449_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_4450_ = l_String_quote(v_key_4437_);
v___x_4451_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4450_);
v___x_4452_ = lean_unsigned_to_nat(120u);
v___x_4453_ = lean_unsigned_to_nat(0u);
v___x_4454_ = l_Std_Format_pretty(v___x_4451_, v___x_4452_, v___x_4453_, v___x_4453_);
v___x_4455_ = lean_string_append(v___x_4449_, v___x_4454_);
lean_dec_ref(v___x_4454_);
v___x_4456_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v___x_4455_, v_a_4448_);
lean_dec(v_a_4448_);
lean_dec_ref(v___x_4455_);
return v___x_4456_;
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_dec_ref(v_key_4437_);
v_a_4457_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4447_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4447_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
else
{
lean_object* v_a_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4472_; 
lean_dec_ref(v_key_4437_);
lean_dec(v_o_4436_);
v_a_4465_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4467_ = v___x_4440_;
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_dec(v___x_4440_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___x_4470_; 
if (v_isShared_4468_ == 0)
{
v___x_4470_ = v___x_4467_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_a_4465_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object* v_o_4473_, lean_object* v_key_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_o_4473_, v_key_4474_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object* v_self_4478_){
_start:
{
lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4480_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0));
v___x_4481_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_self_4478_, v___x_4480_);
return v___x_4481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object* v_self_4482_, lean_object* v_a_4483_){
_start:
{
lean_object* v_res_4484_; 
v_res_4484_ = l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(v_self_4482_);
return v_res_4484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object* v_self_4485_){
_start:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4488_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4485_, v___x_4487_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object* v_self_4489_, lean_object* v_a_4490_){
_start:
{
lean_object* v_res_4491_; 
v_res_4491_ = l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(v_self_4489_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object* v_self_4492_){
_start:
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4494_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4495_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4496_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4492_, v___x_4494_, v___x_4495_);
return v___x_4496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object* v_self_4497_, lean_object* v_a_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l_Lasm_JS_Web_ReadableByteStreamController_close(v_self_4497_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object* v_self_4500_, lean_object* v_chunk_4501_){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
v___x_4503_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4504_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4504_, 0, v_chunk_4501_);
v___x_4505_ = lean_unsigned_to_nat(1u);
v___x_4506_ = lean_mk_empty_array_with_capacity(v___x_4505_);
v___x_4507_ = lean_array_push(v___x_4506_, v___x_4504_);
v___x_4508_ = l_Lasm_JS_Web_Support_args(v___x_4507_);
v___x_4509_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4500_, v___x_4503_, v___x_4508_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object* v_self_4510_, lean_object* v_chunk_4511_, lean_object* v_a_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lasm_JS_Web_ReadableByteStreamController_enqueue(v_self_4510_, v_chunk_4511_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object* v_self_4514_, lean_object* v_e_4515_){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4517_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4518_ = lean_unsigned_to_nat(1u);
v___x_4519_ = lean_mk_empty_array_with_capacity(v___x_4518_);
v___x_4520_ = lean_array_push(v___x_4519_, v_e_4515_);
v___x_4521_ = l_Lasm_JS_Web_Support_args(v___x_4520_);
v___x_4522_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4514_, v___x_4517_, v___x_4521_);
return v___x_4522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object* v_self_4523_, lean_object* v_e_4524_, lean_object* v_a_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l_Lasm_JS_Web_ReadableByteStreamController_error(v_self_4523_, v_e_4524_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object* v_context_4528_, lean_object* v_d_4529_){
_start:
{
lean_object* v___y_4535_; lean_object* v___y_4536_; 
switch(lean_obj_tag(v_d_4529_))
{
case 1:
{
goto v___jp_4531_;
}
case 0:
{
goto v___jp_4531_;
}
default: 
{
if (lean_obj_tag(v_d_4529_) == 6)
{
lean_object* v_b_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v_b_4540_ = lean_ctor_get(v_d_4529_, 0);
lean_inc_ref(v_b_4540_);
lean_dec_ref_known(v_d_4529_, 1);
v___x_4541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4541_, 0, v_b_4540_);
v___x_4542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4541_);
return v___x_4542_;
}
else
{
lean_object* v___x_4543_; lean_object* v_received_4545_; 
v___x_4543_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4529_) == 9)
{
lean_object* v_value_4559_; lean_object* v_description_4560_; uint8_t v___x_4561_; 
v_value_4559_ = lean_ctor_get(v_d_4529_, 0);
v_description_4560_ = lean_ctor_get(v_d_4529_, 1);
v___x_4561_ = lean_string_dec_eq(v_description_4560_, v___x_4543_);
if (v___x_4561_ == 0)
{
goto v___jp_4557_;
}
else
{
uint32_t v___x_4562_; uint64_t v___x_4563_; lean_object* v___x_4564_; uint32_t v___x_4565_; lean_object* v___x_4566_; 
lean_inc_n(v_value_4559_, 2);
lean_dec_ref_known(v_d_4529_, 2);
v___x_4562_ = 206;
v___x_4563_ = 0ULL;
v___x_4564_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4564_, 0, v_value_4559_);
lean_ctor_set(v___x_4564_, 1, v___x_4543_);
v___x_4565_ = lasm_js_value_handle(v_value_4559_);
lean_dec(v_value_4559_);
v___x_4566_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4562_, v___x_4563_, v___x_4564_, v___x_4565_);
lean_dec_ref_known(v___x_4564_, 2);
if (lean_obj_tag(v___x_4566_) == 0)
{
lean_object* v_a_4567_; uint8_t v___x_4568_; 
v_a_4567_ = lean_ctor_get(v___x_4566_, 0);
lean_inc(v_a_4567_);
lean_dec_ref_known(v___x_4566_, 1);
v___x_4568_ = lean_string_validate_utf8(v_a_4567_);
if (v___x_4568_ == 0)
{
lean_object* v___x_4569_; lean_object* v___x_4570_; 
lean_dec(v_a_4567_);
v___x_4569_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4570_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4569_);
v_received_4545_ = v___x_4570_;
goto v___jp_4544_;
}
else
{
lean_object* v___x_4571_; 
v___x_4571_ = lean_string_from_utf8_unchecked(v_a_4567_);
v_received_4545_ = v___x_4571_;
goto v___jp_4544_;
}
}
else
{
lean_object* v___x_4572_; 
lean_dec_ref_known(v___x_4566_, 1);
v___x_4572_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4545_ = v___x_4572_;
goto v___jp_4544_;
}
}
}
else
{
goto v___jp_4557_;
}
v___jp_4544_:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; uint8_t v___x_4555_; 
v___x_4546_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4547_ = lean_string_append(v___x_4546_, v_context_4528_);
v___x_4548_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4549_ = lean_string_append(v___x_4547_, v___x_4548_);
v___x_4550_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0));
v___x_4551_ = lean_string_append(v___x_4549_, v___x_4550_);
v___x_4552_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4553_ = lean_string_append(v___x_4551_, v___x_4552_);
v___x_4554_ = lean_string_append(v___x_4553_, v_received_4545_);
lean_dec_ref(v_received_4545_);
v___x_4555_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4555_ == 0)
{
lean_object* v___x_4556_; 
v___x_4556_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4535_ = v___x_4554_;
v___y_4536_ = v___x_4556_;
goto v___jp_4534_;
}
else
{
v___y_4535_ = v___x_4554_;
v___y_4536_ = v___x_4543_;
goto v___jp_4534_;
}
}
v___jp_4557_:
{
lean_object* v___x_4558_; 
v___x_4558_ = l_Lasm_JS_Data_describe(v_d_4529_);
v_received_4545_ = v___x_4558_;
goto v___jp_4544_;
}
}
}
}
v___jp_4531_:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4532_ = lean_box(0);
v___x_4533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4532_);
return v___x_4533_;
}
v___jp_4534_:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4537_ = lean_string_append(v___y_4535_, v___y_4536_);
v___x_4538_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
v___x_4539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4538_);
return v___x_4539_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4573_, lean_object* v_d_4574_, lean_object* v_a_4575_){
_start:
{
lean_object* v_res_4576_; 
v_res_4576_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4573_, v_d_4574_);
lean_dec_ref(v_context_4573_);
return v_res_4576_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object* v_context_4577_, lean_object* v_bytes_4578_){
_start:
{
lean_object* v___x_4580_; 
v___x_4580_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4578_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; lean_object* v___x_4582_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
lean_inc(v_a_4581_);
lean_dec_ref_known(v___x_4580_, 1);
v___x_4582_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4577_, v_a_4581_);
return v___x_4582_;
}
else
{
lean_object* v_a_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_4590_; 
v_a_4583_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4585_ = v___x_4580_;
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_a_4583_);
lean_dec(v___x_4580_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v___x_4588_; 
if (v_isShared_4586_ == 0)
{
v___x_4588_ = v___x_4585_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v_a_4583_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object* v_context_4591_, lean_object* v_bytes_4592_, lean_object* v_a_4593_){
_start:
{
lean_object* v_res_4594_; 
v_res_4594_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v_context_4591_, v_bytes_4592_);
lean_dec_ref(v_bytes_4592_);
lean_dec_ref(v_context_4591_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object* v_o_4595_, lean_object* v_key_4596_){
_start:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; 
lean_inc_ref(v_key_4596_);
v___x_4598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4598_, 0, v_key_4596_);
v___x_4599_ = l_Lasm_JS_Wire_encodeIO(v___x_4598_);
lean_dec_ref_known(v___x_4598_, 1);
if (lean_obj_tag(v___x_4599_) == 0)
{
lean_object* v_a_4600_; uint32_t v___x_4601_; uint32_t v___x_4602_; uint64_t v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; 
v_a_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc(v_a_4600_);
lean_dec_ref_known(v___x_4599_, 1);
v___x_4601_ = 203;
v___x_4602_ = lasm_js_value_handle(v_o_4595_);
v___x_4603_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4604_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4605_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4605_, 0, v_o_4595_);
lean_ctor_set(v___x_4605_, 1, v___x_4604_);
v___x_4606_ = lasm_js_call(v___x_4601_, v___x_4602_, v___x_4603_, v_a_4600_, v___x_4605_);
lean_dec_ref_known(v___x_4605_, 2);
lean_dec(v_a_4600_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4607_);
lean_dec_ref_known(v___x_4606_, 1);
v___x_4608_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_4609_ = l_String_quote(v_key_4596_);
v___x_4610_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
v___x_4611_ = lean_unsigned_to_nat(120u);
v___x_4612_ = lean_unsigned_to_nat(0u);
v___x_4613_ = l_Std_Format_pretty(v___x_4610_, v___x_4611_, v___x_4612_, v___x_4612_);
v___x_4614_ = lean_string_append(v___x_4608_, v___x_4613_);
lean_dec_ref(v___x_4613_);
v___x_4615_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v___x_4614_, v_a_4607_);
lean_dec(v_a_4607_);
lean_dec_ref(v___x_4614_);
return v___x_4615_;
}
else
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4623_; 
lean_dec_ref(v_key_4596_);
v_a_4616_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4623_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4623_ == 0)
{
v___x_4618_ = v___x_4606_;
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v___x_4606_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4623_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
}
}
else
{
lean_object* v_a_4624_; lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4631_; 
lean_dec_ref(v_key_4596_);
lean_dec(v_o_4595_);
v_a_4624_ = lean_ctor_get(v___x_4599_, 0);
v_isSharedCheck_4631_ = !lean_is_exclusive(v___x_4599_);
if (v_isSharedCheck_4631_ == 0)
{
v___x_4626_ = v___x_4599_;
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
else
{
lean_inc(v_a_4624_);
lean_dec(v___x_4599_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4631_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4629_; 
if (v_isShared_4627_ == 0)
{
v___x_4629_ = v___x_4626_;
goto v_reusejp_4628_;
}
else
{
lean_object* v_reuseFailAlloc_4630_; 
v_reuseFailAlloc_4630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4630_, 0, v_a_4624_);
v___x_4629_ = v_reuseFailAlloc_4630_;
goto v_reusejp_4628_;
}
v_reusejp_4628_:
{
return v___x_4629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object* v_o_4632_, lean_object* v_key_4633_, lean_object* v_a_4634_){
_start:
{
lean_object* v_res_4635_; 
v_res_4635_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_o_4632_, v_key_4633_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object* v_self_4637_){
_start:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4639_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0));
v___x_4640_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_self_4637_, v___x_4639_);
return v___x_4640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object* v_self_4641_, lean_object* v_a_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(v_self_4641_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object* v_self_4645_, lean_object* v_bytesWritten_4646_){
_start:
{
lean_object* v___x_4648_; lean_object* v___y_4650_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; uint8_t v___x_4659_; 
v___x_4648_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0));
v___x_4656_ = lean_nat_to_int(v_bytesWritten_4646_);
v___x_4657_ = lean_nat_abs(v___x_4656_);
v___x_4658_ = lean_cstr_to_nat("9007199254740991");
v___x_4659_ = lean_nat_dec_le(v___x_4657_, v___x_4658_);
lean_dec(v___x_4657_);
if (v___x_4659_ == 0)
{
lean_object* v___x_4660_; 
v___x_4660_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4660_, 0, v___x_4656_);
v___y_4650_ = v___x_4660_;
goto v___jp_4649_;
}
else
{
double v___x_4661_; lean_object* v___x_4662_; 
v___x_4661_ = l_Float_ofInt(v___x_4656_);
lean_dec(v___x_4656_);
v___x_4662_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4662_, 0, v___x_4661_);
v___y_4650_ = v___x_4662_;
goto v___jp_4649_;
}
v___jp_4649_:
{
lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4651_ = lean_unsigned_to_nat(1u);
v___x_4652_ = lean_mk_empty_array_with_capacity(v___x_4651_);
v___x_4653_ = lean_array_push(v___x_4652_, v___y_4650_);
v___x_4654_ = l_Lasm_JS_Web_Support_args(v___x_4653_);
v___x_4655_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4645_, v___x_4648_, v___x_4654_);
return v___x_4655_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object* v_self_4663_, lean_object* v_bytesWritten_4664_, lean_object* v_a_4665_){
_start:
{
lean_object* v_res_4666_; 
v_res_4666_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(v_self_4663_, v_bytesWritten_4664_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object* v_self_4668_, lean_object* v_view_4669_){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; 
v___x_4671_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0));
v___x_4672_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4672_, 0, v_view_4669_);
v___x_4673_ = lean_unsigned_to_nat(1u);
v___x_4674_ = lean_mk_empty_array_with_capacity(v___x_4673_);
v___x_4675_ = lean_array_push(v___x_4674_, v___x_4672_);
v___x_4676_ = l_Lasm_JS_Web_Support_args(v___x_4675_);
v___x_4677_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4668_, v___x_4671_, v___x_4676_);
return v___x_4677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object* v_self_4678_, lean_object* v_view_4679_, lean_object* v_a_4680_){
_start:
{
lean_object* v_res_4681_; 
v_res_4681_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(v_self_4678_, v_view_4679_);
return v_res_4681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object* v_context_4682_, lean_object* v_d_4683_){
_start:
{
lean_object* v___y_4686_; lean_object* v___y_4687_; 
if (lean_obj_tag(v_d_4683_) == 9)
{
lean_object* v_value_4691_; lean_object* v___x_4692_; 
v_value_4691_ = lean_ctor_get(v_d_4683_, 0);
lean_inc(v_value_4691_);
lean_dec_ref_known(v_d_4683_, 2);
v___x_4692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4692_, 0, v_value_4691_);
return v___x_4692_;
}
else
{
lean_object* v___x_4693_; lean_object* v_received_4695_; 
v___x_4693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4683_) == 9)
{
lean_object* v_value_4709_; lean_object* v_description_4710_; uint8_t v___x_4711_; 
v_value_4709_ = lean_ctor_get(v_d_4683_, 0);
v_description_4710_ = lean_ctor_get(v_d_4683_, 1);
v___x_4711_ = lean_string_dec_eq(v_description_4710_, v___x_4693_);
if (v___x_4711_ == 0)
{
goto v___jp_4707_;
}
else
{
uint32_t v___x_4712_; uint64_t v___x_4713_; lean_object* v___x_4714_; uint32_t v___x_4715_; lean_object* v___x_4716_; 
lean_inc_n(v_value_4709_, 2);
lean_dec_ref_known(v_d_4683_, 2);
v___x_4712_ = 206;
v___x_4713_ = 0ULL;
v___x_4714_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4714_, 0, v_value_4709_);
lean_ctor_set(v___x_4714_, 1, v___x_4693_);
v___x_4715_ = lasm_js_value_handle(v_value_4709_);
lean_dec(v_value_4709_);
v___x_4716_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4712_, v___x_4713_, v___x_4714_, v___x_4715_);
lean_dec_ref_known(v___x_4714_, 2);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v_a_4717_; uint8_t v___x_4718_; 
v_a_4717_ = lean_ctor_get(v___x_4716_, 0);
lean_inc(v_a_4717_);
lean_dec_ref_known(v___x_4716_, 1);
v___x_4718_ = lean_string_validate_utf8(v_a_4717_);
if (v___x_4718_ == 0)
{
lean_object* v___x_4719_; lean_object* v___x_4720_; 
lean_dec(v_a_4717_);
v___x_4719_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4720_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4719_);
v_received_4695_ = v___x_4720_;
goto v___jp_4694_;
}
else
{
lean_object* v___x_4721_; 
v___x_4721_ = lean_string_from_utf8_unchecked(v_a_4717_);
v_received_4695_ = v___x_4721_;
goto v___jp_4694_;
}
}
else
{
lean_object* v___x_4722_; 
lean_dec_ref_known(v___x_4716_, 1);
v___x_4722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4695_ = v___x_4722_;
goto v___jp_4694_;
}
}
}
else
{
goto v___jp_4707_;
}
v___jp_4694_:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; uint8_t v___x_4705_; 
v___x_4696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4697_ = lean_string_append(v___x_4696_, v_context_4682_);
v___x_4698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4699_ = lean_string_append(v___x_4697_, v___x_4698_);
v___x_4700_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStream___closed__0));
v___x_4701_ = lean_string_append(v___x_4699_, v___x_4700_);
v___x_4702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4703_ = lean_string_append(v___x_4701_, v___x_4702_);
v___x_4704_ = lean_string_append(v___x_4703_, v_received_4695_);
lean_dec_ref(v_received_4695_);
v___x_4705_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4705_ == 0)
{
lean_object* v___x_4706_; 
v___x_4706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4686_ = v___x_4704_;
v___y_4687_ = v___x_4706_;
goto v___jp_4685_;
}
else
{
v___y_4686_ = v___x_4704_;
v___y_4687_ = v___x_4693_;
goto v___jp_4685_;
}
}
v___jp_4707_:
{
lean_object* v___x_4708_; 
v___x_4708_ = l_Lasm_JS_Data_describe(v_d_4683_);
v_received_4695_ = v___x_4708_;
goto v___jp_4694_;
}
}
v___jp_4685_:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4688_ = lean_string_append(v___y_4686_, v___y_4687_);
v___x_4689_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4688_);
v___x_4690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4689_);
return v___x_4690_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object* v_context_4723_, lean_object* v_d_4724_, lean_object* v_a_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_4723_, v_d_4724_);
lean_dec_ref(v_context_4723_);
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object* v_b_4727_, lean_object* v_args_4728_, uint8_t v_await_4729_){
_start:
{
uint64_t v___y_4732_; uint64_t v___y_4733_; uint64_t v___x_4776_; uint64_t v___y_4778_; 
v___x_4776_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4729_ == 0)
{
uint64_t v___x_4783_; 
v___x_4783_ = 0ULL;
v___y_4778_ = v___x_4783_;
goto v___jp_4777_;
}
else
{
uint64_t v___x_4784_; 
v___x_4784_ = 2ULL;
v___y_4778_ = v___x_4784_;
goto v___jp_4777_;
}
v___jp_4731_:
{
uint64_t v_flags_4734_; uint32_t v___x_4735_; lean_object* v___x_4736_; uint32_t v___x_4737_; lean_object* v___x_4738_; 
v_flags_4734_ = lean_uint64_lor(v___y_4732_, v___y_4733_);
v___x_4735_ = 214;
v___x_4736_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4727_, v_args_4728_);
v___x_4737_ = 0;
v___x_4738_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4735_, v_flags_4734_, v___x_4736_, v___x_4737_);
lean_dec(v___x_4736_);
if (lean_obj_tag(v___x_4738_) == 0)
{
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; lean_object* v___x_4740_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4739_);
lean_dec_ref_known(v___x_4738_, 1);
v___x_4740_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4739_);
lean_dec(v_a_4739_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4741_);
lean_dec_ref_known(v___x_4740_, 1);
v___x_4742_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4727_);
v___x_4743_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v___x_4742_, v_a_4741_);
lean_dec_ref(v___x_4742_);
return v___x_4743_;
}
else
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4751_; 
v_a_4744_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4746_ = v___x_4740_;
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v___x_4740_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4751_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___x_4749_; 
if (v_isShared_4747_ == 0)
{
v___x_4749_ = v___x_4746_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_a_4744_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
}
}
}
}
else
{
lean_object* v_a_4752_; lean_object* v___x_4754_; uint8_t v_isShared_4755_; uint8_t v_isSharedCheck_4759_; 
v_a_4752_ = lean_ctor_get(v___x_4738_, 0);
v_isSharedCheck_4759_ = !lean_is_exclusive(v___x_4738_);
if (v_isSharedCheck_4759_ == 0)
{
v___x_4754_ = v___x_4738_;
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
else
{
lean_inc(v_a_4752_);
lean_dec(v___x_4738_);
v___x_4754_ = lean_box(0);
v_isShared_4755_ = v_isSharedCheck_4759_;
goto v_resetjp_4753_;
}
v_resetjp_4753_:
{
lean_object* v___x_4757_; 
if (v_isShared_4755_ == 0)
{
lean_ctor_set_tag(v___x_4754_, 1);
v___x_4757_ = v___x_4754_;
goto v_reusejp_4756_;
}
else
{
lean_object* v_reuseFailAlloc_4758_; 
v_reuseFailAlloc_4758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4758_, 0, v_a_4752_);
v___x_4757_ = v_reuseFailAlloc_4758_;
goto v_reusejp_4756_;
}
v_reusejp_4756_:
{
return v___x_4757_;
}
}
}
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4775_; 
v_a_4760_ = lean_ctor_get(v___x_4738_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4738_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4762_ = v___x_4738_;
v_isShared_4763_ = v_isSharedCheck_4775_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_a_4760_);
lean_dec(v___x_4738_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4775_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4773_; 
v___x_4764_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4765_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4727_);
v___x_4766_ = lean_string_append(v___x_4764_, v___x_4765_);
lean_dec_ref(v___x_4765_);
v___x_4767_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4768_ = lean_string_append(v___x_4766_, v___x_4767_);
v___x_4769_ = lean_io_error_to_string(v_a_4760_);
v___x_4770_ = lean_string_append(v___x_4768_, v___x_4769_);
lean_dec_ref(v___x_4769_);
v___x_4771_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4770_);
if (v_isShared_4763_ == 0)
{
lean_ctor_set(v___x_4762_, 0, v___x_4771_);
v___x_4773_ = v___x_4762_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v___x_4771_);
v___x_4773_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
return v___x_4773_;
}
}
}
}
v___jp_4777_:
{
uint8_t v_construct_4779_; uint64_t v___x_4780_; 
v_construct_4779_ = lean_ctor_get_uint8(v_b_4727_, sizeof(void*)*4);
v___x_4780_ = lean_uint64_lor(v___x_4776_, v___y_4778_);
if (v_construct_4779_ == 0)
{
uint64_t v___x_4781_; 
v___x_4781_ = 0ULL;
v___y_4732_ = v___x_4780_;
v___y_4733_ = v___x_4781_;
goto v___jp_4731_;
}
else
{
uint64_t v___x_4782_; 
v___x_4782_ = 4ULL;
v___y_4732_ = v___x_4780_;
v___y_4733_ = v___x_4782_;
goto v___jp_4731_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object* v_b_4785_, lean_object* v_args_4786_, lean_object* v_await_4787_, lean_object* v_a_4788_){
_start:
{
uint8_t v_await_boxed_4789_; lean_object* v_res_4790_; 
v_await_boxed_4789_ = lean_unbox(v_await_4787_);
v_res_4790_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v_b_4785_, v_args_4786_, v_await_boxed_4789_);
lean_dec_ref(v_b_4785_);
return v_res_4790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object* v_underlyingSink_4799_, lean_object* v_strategy_4800_){
_start:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; uint8_t v___x_4809_; lean_object* v___x_4810_; 
v___x_4802_ = lean_unsigned_to_nat(2u);
v___x_4803_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_new___closed__2));
v___x_4804_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_4800_);
v___x_4805_ = lean_mk_empty_array_with_capacity(v___x_4802_);
v___x_4806_ = lean_array_push(v___x_4805_, v_underlyingSink_4799_);
v___x_4807_ = lean_array_push(v___x_4806_, v___x_4804_);
v___x_4808_ = l_Lasm_JS_Web_Support_args(v___x_4807_);
v___x_4809_ = 0;
v___x_4810_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v___x_4803_, v___x_4808_, v___x_4809_);
return v___x_4810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object* v_underlyingSink_4811_, lean_object* v_strategy_4812_, lean_object* v_a_4813_){
_start:
{
lean_object* v_res_4814_; 
v_res_4814_ = l_Lasm_JS_Web_WritableStream_new(v_underlyingSink_4811_, v_strategy_4812_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object* v_self_4815_){
_start:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; 
v___x_4817_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_4818_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4815_, v___x_4817_);
return v___x_4818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object* v_self_4819_, lean_object* v_a_4820_){
_start:
{
lean_object* v_res_4821_; 
v_res_4821_ = l_Lasm_JS_Web_WritableStream_locked(v_self_4819_);
return v_res_4821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object* v_self_4822_, lean_object* v_reason_4823_){
_start:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4825_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_4826_ = lean_unsigned_to_nat(1u);
v___x_4827_ = lean_mk_empty_array_with_capacity(v___x_4826_);
v___x_4828_ = lean_array_push(v___x_4827_, v_reason_4823_);
v___x_4829_ = l_Lasm_JS_Web_Support_args(v___x_4828_);
v___x_4830_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4822_, v___x_4825_, v___x_4829_);
return v___x_4830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object* v_self_4831_, lean_object* v_reason_4832_, lean_object* v_a_4833_){
_start:
{
lean_object* v_res_4834_; 
v_res_4834_ = l_Lasm_JS_Web_WritableStream_abort(v_self_4831_, v_reason_4832_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object* v_self_4835_){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4838_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4839_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4835_, v___x_4837_, v___x_4838_);
return v___x_4839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object* v_self_4840_, lean_object* v_a_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l_Lasm_JS_Web_WritableStream_close(v_self_4840_);
return v_res_4842_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0(uint8_t v_await_4843_, uint64_t v_extra_4844_){
_start:
{
uint64_t v___x_4845_; uint64_t v___y_4847_; 
v___x_4845_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4843_ == 0)
{
uint64_t v___x_4850_; 
v___x_4850_ = 0ULL;
v___y_4847_ = v___x_4850_;
goto v___jp_4846_;
}
else
{
uint64_t v___x_4851_; 
v___x_4851_ = 2ULL;
v___y_4847_ = v___x_4851_;
goto v___jp_4846_;
}
v___jp_4846_:
{
uint64_t v___x_4848_; uint64_t v___x_4849_; 
v___x_4848_ = lean_uint64_lor(v___x_4845_, v___y_4847_);
v___x_4849_ = lean_uint64_lor(v___x_4848_, v_extra_4844_);
return v___x_4849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0___boxed(lean_object* v_await_4852_, lean_object* v_extra_4853_){
_start:
{
uint8_t v_await_boxed_4854_; uint64_t v_extra_boxed_4855_; uint64_t v_res_4856_; lean_object* v_r_4857_; 
v_await_boxed_4854_ = lean_unbox(v_await_4852_);
v_extra_boxed_4855_ = lean_unbox_uint64(v_extra_4853_);
lean_dec_ref(v_extra_4853_);
v_res_4856_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0(v_await_boxed_4854_, v_extra_boxed_4855_);
v_r_4857_ = lean_box_uint64(v_res_4856_);
return v_r_4857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2(lean_object* v_context_4858_, lean_object* v_d_4859_){
_start:
{
lean_object* v___y_4862_; lean_object* v___y_4863_; 
if (lean_obj_tag(v_d_4859_) == 9)
{
lean_object* v_value_4867_; lean_object* v___x_4868_; 
v_value_4867_ = lean_ctor_get(v_d_4859_, 0);
lean_inc(v_value_4867_);
lean_dec_ref_known(v_d_4859_, 2);
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v_value_4867_);
return v___x_4868_;
}
else
{
lean_object* v___x_4869_; lean_object* v_received_4871_; 
v___x_4869_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4859_) == 9)
{
lean_object* v_value_4885_; lean_object* v_description_4886_; uint8_t v___x_4887_; 
v_value_4885_ = lean_ctor_get(v_d_4859_, 0);
v_description_4886_ = lean_ctor_get(v_d_4859_, 1);
v___x_4887_ = lean_string_dec_eq(v_description_4886_, v___x_4869_);
if (v___x_4887_ == 0)
{
goto v___jp_4883_;
}
else
{
uint32_t v___x_4888_; uint64_t v___x_4889_; lean_object* v___x_4890_; uint32_t v___x_4891_; lean_object* v___x_4892_; 
lean_inc_n(v_value_4885_, 2);
lean_dec_ref_known(v_d_4859_, 2);
v___x_4888_ = 206;
v___x_4889_ = 0ULL;
v___x_4890_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4890_, 0, v_value_4885_);
lean_ctor_set(v___x_4890_, 1, v___x_4869_);
v___x_4891_ = lasm_js_value_handle(v_value_4885_);
lean_dec(v_value_4885_);
v___x_4892_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4888_, v___x_4889_, v___x_4890_, v___x_4891_);
lean_dec_ref_known(v___x_4890_, 2);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; uint8_t v___x_4894_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
lean_inc(v_a_4893_);
lean_dec_ref_known(v___x_4892_, 1);
v___x_4894_ = lean_string_validate_utf8(v_a_4893_);
if (v___x_4894_ == 0)
{
lean_object* v___x_4895_; lean_object* v___x_4896_; 
lean_dec(v_a_4893_);
v___x_4895_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4896_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4895_);
v_received_4871_ = v___x_4896_;
goto v___jp_4870_;
}
else
{
lean_object* v___x_4897_; 
v___x_4897_ = lean_string_from_utf8_unchecked(v_a_4893_);
v_received_4871_ = v___x_4897_;
goto v___jp_4870_;
}
}
else
{
lean_object* v___x_4898_; 
lean_dec_ref_known(v___x_4892_, 1);
v___x_4898_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4871_ = v___x_4898_;
goto v___jp_4870_;
}
}
}
else
{
goto v___jp_4883_;
}
v___jp_4870_:
{
lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; uint8_t v___x_4881_; 
v___x_4872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4873_ = lean_string_append(v___x_4872_, v_context_4858_);
v___x_4874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4875_ = lean_string_append(v___x_4873_, v___x_4874_);
v___x_4876_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0));
v___x_4877_ = lean_string_append(v___x_4875_, v___x_4876_);
v___x_4878_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4879_ = lean_string_append(v___x_4877_, v___x_4878_);
v___x_4880_ = lean_string_append(v___x_4879_, v_received_4871_);
lean_dec_ref(v_received_4871_);
v___x_4881_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4881_ == 0)
{
lean_object* v___x_4882_; 
v___x_4882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4862_ = v___x_4880_;
v___y_4863_ = v___x_4882_;
goto v___jp_4861_;
}
else
{
v___y_4862_ = v___x_4880_;
v___y_4863_ = v___x_4869_;
goto v___jp_4861_;
}
}
v___jp_4883_:
{
lean_object* v___x_4884_; 
v___x_4884_ = l_Lasm_JS_Data_describe(v_d_4859_);
v_received_4871_ = v___x_4884_;
goto v___jp_4870_;
}
}
v___jp_4861_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4864_ = lean_string_append(v___y_4862_, v___y_4863_);
v___x_4865_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4865_, 0, v___x_4864_);
v___x_4866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4865_);
return v___x_4866_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2___boxed(lean_object* v_context_4899_, lean_object* v_d_4900_, lean_object* v_a_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2(v_context_4899_, v_d_4900_);
lean_dec_ref(v_context_4899_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1(lean_object* v_context_4903_, lean_object* v_bytes_4904_){
_start:
{
lean_object* v___x_4906_; 
v___x_4906_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4904_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_object* v_a_4907_; lean_object* v___x_4908_; 
v_a_4907_ = lean_ctor_get(v___x_4906_, 0);
lean_inc(v_a_4907_);
lean_dec_ref_known(v___x_4906_, 1);
v___x_4908_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2(v_context_4903_, v_a_4907_);
return v___x_4908_;
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4916_; 
v_a_4909_ = lean_ctor_get(v___x_4906_, 0);
v_isSharedCheck_4916_ = !lean_is_exclusive(v___x_4906_);
if (v_isSharedCheck_4916_ == 0)
{
v___x_4911_ = v___x_4906_;
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4906_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4914_; 
if (v_isShared_4912_ == 0)
{
v___x_4914_ = v___x_4911_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v_a_4909_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1___boxed(lean_object* v_context_4917_, lean_object* v_bytes_4918_, lean_object* v_a_4919_){
_start:
{
lean_object* v_res_4920_; 
v_res_4920_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1(v_context_4917_, v_bytes_4918_);
lean_dec_ref(v_bytes_4918_);
lean_dec_ref(v_context_4917_);
return v_res_4920_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0(void){
_start:
{
uint64_t v___x_4921_; uint8_t v___x_4922_; uint64_t v___x_4923_; 
v___x_4921_ = 8ULL;
v___x_4922_ = 0;
v___x_4923_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__0(v___x_4922_, v___x_4921_);
return v___x_4923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0(lean_object* v_o_4924_, lean_object* v_name_4925_, lean_object* v_args_4926_){
_start:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; uint64_t v___x_4931_; lean_object* v___x_4932_; 
v___x_4928_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4929_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4929_, 0, v_o_4924_);
lean_ctor_set(v___x_4929_, 1, v___x_4928_);
lean_inc_ref(v_name_4925_);
v___x_4930_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4930_, 0, v_name_4925_);
v___x_4931_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___closed__0);
v___x_4932_ = l_Lasm_JS_Value_invokeRaw(v___x_4929_, v___x_4930_, v_args_4926_, v___x_4931_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4934_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_4935_ = lean_string_append(v___x_4934_, v_name_4925_);
lean_dec_ref(v_name_4925_);
v___x_4936_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1(v___x_4935_, v_a_4933_);
lean_dec(v_a_4933_);
lean_dec_ref(v___x_4935_);
return v___x_4936_;
}
else
{
lean_object* v_a_4937_; lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4944_; 
lean_dec_ref(v_name_4925_);
v_a_4937_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4944_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4944_ == 0)
{
v___x_4939_ = v___x_4932_;
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
else
{
lean_inc(v_a_4937_);
lean_dec(v___x_4932_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
lean_object* v___x_4942_; 
if (v_isShared_4940_ == 0)
{
v___x_4942_ = v___x_4939_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_a_4937_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
return v___x_4942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0___boxed(lean_object* v_o_4945_, lean_object* v_name_4946_, lean_object* v_args_4947_, lean_object* v_a_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0(v_o_4945_, v_name_4946_, v_args_4947_);
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object* v_self_4951_){
_start:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; 
v___x_4953_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_getWriter___closed__0));
v___x_4954_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4955_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0(v_self_4951_, v___x_4953_, v___x_4954_);
return v___x_4955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object* v_self_4956_, lean_object* v_a_4957_){
_start:
{
lean_object* v_res_4958_; 
v_res_4958_ = l_Lasm_JS_Web_WritableStream_getWriter(v_self_4956_);
return v_res_4958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object* v_b_4959_, lean_object* v_args_4960_, uint8_t v_await_4961_){
_start:
{
uint64_t v___y_4964_; uint64_t v___y_4965_; uint64_t v___x_5008_; uint64_t v___y_5010_; 
v___x_5008_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4961_ == 0)
{
uint64_t v___x_5015_; 
v___x_5015_ = 0ULL;
v___y_5010_ = v___x_5015_;
goto v___jp_5009_;
}
else
{
uint64_t v___x_5016_; 
v___x_5016_ = 2ULL;
v___y_5010_ = v___x_5016_;
goto v___jp_5009_;
}
v___jp_4963_:
{
uint64_t v_flags_4966_; uint32_t v___x_4967_; lean_object* v___x_4968_; uint32_t v___x_4969_; lean_object* v___x_4970_; 
v_flags_4966_ = lean_uint64_lor(v___y_4964_, v___y_4965_);
v___x_4967_ = 214;
v___x_4968_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4959_, v_args_4960_);
v___x_4969_ = 0;
v___x_4970_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4967_, v_flags_4966_, v___x_4968_, v___x_4969_);
lean_dec(v___x_4968_);
if (lean_obj_tag(v___x_4970_) == 0)
{
if (lean_obj_tag(v___x_4970_) == 0)
{
lean_object* v_a_4971_; lean_object* v___x_4972_; 
v_a_4971_ = lean_ctor_get(v___x_4970_, 0);
lean_inc(v_a_4971_);
lean_dec_ref_known(v___x_4970_, 1);
v___x_4972_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4971_);
lean_dec(v_a_4971_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v_a_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; 
v_a_4973_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_a_4973_);
lean_dec_ref_known(v___x_4972_, 1);
v___x_4974_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4959_);
v___x_4975_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_WritableStream_getWriter_spec__0_spec__1_spec__2(v___x_4974_, v_a_4973_);
lean_dec_ref(v___x_4974_);
return v___x_4975_;
}
else
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_4983_; 
v_a_4976_ = lean_ctor_get(v___x_4972_, 0);
v_isSharedCheck_4983_ = !lean_is_exclusive(v___x_4972_);
if (v_isSharedCheck_4983_ == 0)
{
v___x_4978_ = v___x_4972_;
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4972_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v___x_4981_; 
if (v_isShared_4979_ == 0)
{
v___x_4981_ = v___x_4978_;
goto v_reusejp_4980_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v_a_4976_);
v___x_4981_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4980_;
}
v_reusejp_4980_:
{
return v___x_4981_;
}
}
}
}
else
{
lean_object* v_a_4984_; lean_object* v___x_4986_; uint8_t v_isShared_4987_; uint8_t v_isSharedCheck_4991_; 
v_a_4984_ = lean_ctor_get(v___x_4970_, 0);
v_isSharedCheck_4991_ = !lean_is_exclusive(v___x_4970_);
if (v_isSharedCheck_4991_ == 0)
{
v___x_4986_ = v___x_4970_;
v_isShared_4987_ = v_isSharedCheck_4991_;
goto v_resetjp_4985_;
}
else
{
lean_inc(v_a_4984_);
lean_dec(v___x_4970_);
v___x_4986_ = lean_box(0);
v_isShared_4987_ = v_isSharedCheck_4991_;
goto v_resetjp_4985_;
}
v_resetjp_4985_:
{
lean_object* v___x_4989_; 
if (v_isShared_4987_ == 0)
{
lean_ctor_set_tag(v___x_4986_, 1);
v___x_4989_ = v___x_4986_;
goto v_reusejp_4988_;
}
else
{
lean_object* v_reuseFailAlloc_4990_; 
v_reuseFailAlloc_4990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4990_, 0, v_a_4984_);
v___x_4989_ = v_reuseFailAlloc_4990_;
goto v_reusejp_4988_;
}
v_reusejp_4988_:
{
return v___x_4989_;
}
}
}
}
else
{
lean_object* v_a_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_5007_; 
v_a_4992_ = lean_ctor_get(v___x_4970_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4970_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_4994_ = v___x_4970_;
v_isShared_4995_ = v_isSharedCheck_5007_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_a_4992_);
lean_dec(v___x_4970_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_5007_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5005_; 
v___x_4996_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4997_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4959_);
v___x_4998_ = lean_string_append(v___x_4996_, v___x_4997_);
lean_dec_ref(v___x_4997_);
v___x_4999_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5000_ = lean_string_append(v___x_4998_, v___x_4999_);
v___x_5001_ = lean_io_error_to_string(v_a_4992_);
v___x_5002_ = lean_string_append(v___x_5000_, v___x_5001_);
lean_dec_ref(v___x_5001_);
v___x_5003_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5003_, 0, v___x_5002_);
if (v_isShared_4995_ == 0)
{
lean_ctor_set(v___x_4994_, 0, v___x_5003_);
v___x_5005_ = v___x_4994_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v___x_5003_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
return v___x_5005_;
}
}
}
}
v___jp_5009_:
{
uint8_t v_construct_5011_; uint64_t v___x_5012_; 
v_construct_5011_ = lean_ctor_get_uint8(v_b_4959_, sizeof(void*)*4);
v___x_5012_ = lean_uint64_lor(v___x_5008_, v___y_5010_);
if (v_construct_5011_ == 0)
{
uint64_t v___x_5013_; 
v___x_5013_ = 0ULL;
v___y_4964_ = v___x_5012_;
v___y_4965_ = v___x_5013_;
goto v___jp_4963_;
}
else
{
uint64_t v___x_5014_; 
v___x_5014_ = 4ULL;
v___y_4964_ = v___x_5012_;
v___y_4965_ = v___x_5014_;
goto v___jp_4963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object* v_b_5017_, lean_object* v_args_5018_, lean_object* v_await_5019_, lean_object* v_a_5020_){
_start:
{
uint8_t v_await_boxed_5021_; lean_object* v_res_5022_; 
v_await_boxed_5021_ = lean_unbox(v_await_5019_);
v_res_5022_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v_b_5017_, v_args_5018_, v_await_boxed_5021_);
lean_dec_ref(v_b_5017_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object* v_stream_5031_){
_start:
{
lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; uint8_t v___x_5040_; lean_object* v___x_5041_; 
v___x_5033_ = lean_unsigned_to_nat(1u);
v___x_5034_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2));
v___x_5035_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5036_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5036_, 0, v_stream_5031_);
lean_ctor_set(v___x_5036_, 1, v___x_5035_);
v___x_5037_ = lean_mk_empty_array_with_capacity(v___x_5033_);
v___x_5038_ = lean_array_push(v___x_5037_, v___x_5036_);
v___x_5039_ = l_Lasm_JS_Web_Support_args(v___x_5038_);
v___x_5040_ = 0;
v___x_5041_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v___x_5034_, v___x_5039_, v___x_5040_);
return v___x_5041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object* v_stream_5042_, lean_object* v_a_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_new(v_stream_5042_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object* v_self_5045_){
_start:
{
lean_object* v___f_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; uint8_t v___x_5050_; lean_object* v_val_5052_; lean_object* v___x_5055_; 
v___f_5047_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_5048_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_5049_ = lean_unsigned_to_nat(0u);
v___x_5050_ = 0;
v___x_5055_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(v_self_5045_, v___x_5048_);
if (lean_obj_tag(v___x_5055_) == 0)
{
lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5063_; 
v_a_5056_ = lean_ctor_get(v___x_5055_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v___x_5055_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5058_ = v___x_5055_;
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5055_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5061_; 
if (v_isShared_5059_ == 0)
{
lean_ctor_set_tag(v___x_5058_, 1);
v___x_5061_ = v___x_5058_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_a_5056_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
v_val_5052_ = v___x_5061_;
goto v___jp_5051_;
}
}
}
else
{
lean_object* v_a_5064_; lean_object* v___x_5066_; uint8_t v_isShared_5067_; uint8_t v_isSharedCheck_5071_; 
v_a_5064_ = lean_ctor_get(v___x_5055_, 0);
v_isSharedCheck_5071_ = !lean_is_exclusive(v___x_5055_);
if (v_isSharedCheck_5071_ == 0)
{
v___x_5066_ = v___x_5055_;
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
else
{
lean_inc(v_a_5064_);
lean_dec(v___x_5055_);
v___x_5066_ = lean_box(0);
v_isShared_5067_ = v_isSharedCheck_5071_;
goto v_resetjp_5065_;
}
v_resetjp_5065_:
{
lean_object* v___x_5069_; 
if (v_isShared_5067_ == 0)
{
lean_ctor_set_tag(v___x_5066_, 0);
v___x_5069_ = v___x_5066_;
goto v_reusejp_5068_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v_a_5064_);
v___x_5069_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5068_;
}
v_reusejp_5068_:
{
v_val_5052_ = v___x_5069_;
goto v___jp_5051_;
}
}
}
v___jp_5051_:
{
lean_object* v___x_5053_; lean_object* v___x_5054_; 
v___x_5053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5053_, 0, v_val_5052_);
v___x_5054_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5049_, v___x_5050_, v___x_5053_, v___f_5047_);
return v___x_5054_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object* v_self_5072_, lean_object* v_a_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(v_self_5072_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object* v_self_5075_){
_start:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___x_5077_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5078_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5075_, v___x_5077_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object* v_self_5079_, lean_object* v_a_5080_){
_start:
{
lean_object* v_res_5081_; 
v_res_5081_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(v_self_5079_);
return v_res_5081_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object* v_self_5083_){
_start:
{
lean_object* v___f_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; uint8_t v___x_5088_; lean_object* v_val_5090_; lean_object* v___x_5093_; 
v___f_5085_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_5086_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0));
v___x_5087_ = lean_unsigned_to_nat(0u);
v___x_5088_ = 0;
v___x_5093_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1(v_self_5083_, v___x_5086_);
if (lean_obj_tag(v___x_5093_) == 0)
{
lean_object* v_a_5094_; lean_object* v___x_5096_; uint8_t v_isShared_5097_; uint8_t v_isSharedCheck_5101_; 
v_a_5094_ = lean_ctor_get(v___x_5093_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v___x_5093_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5096_ = v___x_5093_;
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
else
{
lean_inc(v_a_5094_);
lean_dec(v___x_5093_);
v___x_5096_ = lean_box(0);
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
v_resetjp_5095_:
{
lean_object* v___x_5099_; 
if (v_isShared_5097_ == 0)
{
lean_ctor_set_tag(v___x_5096_, 1);
v___x_5099_ = v___x_5096_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v_a_5094_);
v___x_5099_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
v_val_5090_ = v___x_5099_;
goto v___jp_5089_;
}
}
}
else
{
lean_object* v_a_5102_; lean_object* v___x_5104_; uint8_t v_isShared_5105_; uint8_t v_isSharedCheck_5109_; 
v_a_5102_ = lean_ctor_get(v___x_5093_, 0);
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_5093_);
if (v_isSharedCheck_5109_ == 0)
{
v___x_5104_ = v___x_5093_;
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
else
{
lean_inc(v_a_5102_);
lean_dec(v___x_5093_);
v___x_5104_ = lean_box(0);
v_isShared_5105_ = v_isSharedCheck_5109_;
goto v_resetjp_5103_;
}
v_resetjp_5103_:
{
lean_object* v___x_5107_; 
if (v_isShared_5105_ == 0)
{
lean_ctor_set_tag(v___x_5104_, 0);
v___x_5107_ = v___x_5104_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v_a_5102_);
v___x_5107_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
v_val_5090_ = v___x_5107_;
goto v___jp_5089_;
}
}
}
v___jp_5089_:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; 
v___x_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5091_, 0, v_val_5090_);
v___x_5092_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5087_, v___x_5088_, v___x_5091_, v___f_5085_);
return v___x_5092_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object* v_self_5110_, lean_object* v_a_5111_){
_start:
{
lean_object* v_res_5112_; 
v_res_5112_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(v_self_5110_);
return v_res_5112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object* v_self_5113_, lean_object* v_reason_5114_){
_start:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_5117_ = lean_unsigned_to_nat(1u);
v___x_5118_ = lean_mk_empty_array_with_capacity(v___x_5117_);
v___x_5119_ = lean_array_push(v___x_5118_, v_reason_5114_);
v___x_5120_ = l_Lasm_JS_Web_Support_args(v___x_5119_);
v___x_5121_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5113_, v___x_5116_, v___x_5120_);
return v___x_5121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object* v_self_5122_, lean_object* v_reason_5123_, lean_object* v_a_5124_){
_start:
{
lean_object* v_res_5125_; 
v_res_5125_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(v_self_5122_, v_reason_5123_);
return v_res_5125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object* v_self_5126_){
_start:
{
lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; 
v___x_5128_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_5129_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5130_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5126_, v___x_5128_, v___x_5129_);
return v___x_5130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object* v_self_5131_, lean_object* v_a_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_close(v_self_5131_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object* v_self_5134_){
_start:
{
lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v___x_5136_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_5137_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5138_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5134_, v___x_5136_, v___x_5137_);
return v___x_5138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object* v_self_5139_, lean_object* v_a_5140_){
_start:
{
lean_object* v_res_5141_; 
v_res_5141_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(v_self_5139_);
return v_res_5141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object* v_self_5142_, lean_object* v_chunk_5143_){
_start:
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; 
v___x_5145_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_5146_ = lean_unsigned_to_nat(1u);
v___x_5147_ = lean_mk_empty_array_with_capacity(v___x_5146_);
v___x_5148_ = lean_array_push(v___x_5147_, v_chunk_5143_);
v___x_5149_ = l_Lasm_JS_Web_Support_args(v___x_5148_);
v___x_5150_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5142_, v___x_5145_, v___x_5149_);
return v___x_5150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object* v_self_5151_, lean_object* v_chunk_5152_, lean_object* v_a_5153_){
_start:
{
lean_object* v_res_5154_; 
v_res_5154_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_write(v_self_5151_, v_chunk_5152_);
return v_res_5154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object* v_self_5155_){
_start:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5157_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_5158_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_5155_, v___x_5157_);
return v___x_5158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object* v_self_5159_, lean_object* v_a_5160_){
_start:
{
lean_object* v_res_5161_; 
v_res_5161_ = l_Lasm_JS_Web_WritableStreamDefaultController_signal(v_self_5159_);
return v_res_5161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object* v_self_5162_, lean_object* v_e_5163_){
_start:
{
lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5165_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5166_ = lean_unsigned_to_nat(1u);
v___x_5167_ = lean_mk_empty_array_with_capacity(v___x_5166_);
v___x_5168_ = lean_array_push(v___x_5167_, v_e_5163_);
v___x_5169_ = l_Lasm_JS_Web_Support_args(v___x_5168_);
v___x_5170_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5162_, v___x_5165_, v___x_5169_);
return v___x_5170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object* v_self_5171_, lean_object* v_e_5172_, lean_object* v_a_5173_){
_start:
{
lean_object* v_res_5174_; 
v_res_5174_ = l_Lasm_JS_Web_WritableStreamDefaultController_error(v_self_5171_, v_e_5172_);
return v_res_5174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object* v_context_5175_, lean_object* v_d_5176_){
_start:
{
lean_object* v___y_5179_; lean_object* v___y_5180_; 
if (lean_obj_tag(v_d_5176_) == 9)
{
lean_object* v_value_5184_; lean_object* v___x_5185_; 
v_value_5184_ = lean_ctor_get(v_d_5176_, 0);
lean_inc(v_value_5184_);
lean_dec_ref_known(v_d_5176_, 2);
v___x_5185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5185_, 0, v_value_5184_);
return v___x_5185_;
}
else
{
lean_object* v___x_5186_; lean_object* v_received_5188_; 
v___x_5186_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5176_) == 9)
{
lean_object* v_value_5202_; lean_object* v_description_5203_; uint8_t v___x_5204_; 
v_value_5202_ = lean_ctor_get(v_d_5176_, 0);
v_description_5203_ = lean_ctor_get(v_d_5176_, 1);
v___x_5204_ = lean_string_dec_eq(v_description_5203_, v___x_5186_);
if (v___x_5204_ == 0)
{
goto v___jp_5200_;
}
else
{
uint32_t v___x_5205_; uint64_t v___x_5206_; lean_object* v___x_5207_; uint32_t v___x_5208_; lean_object* v___x_5209_; 
lean_inc_n(v_value_5202_, 2);
lean_dec_ref_known(v_d_5176_, 2);
v___x_5205_ = 206;
v___x_5206_ = 0ULL;
v___x_5207_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5207_, 0, v_value_5202_);
lean_ctor_set(v___x_5207_, 1, v___x_5186_);
v___x_5208_ = lasm_js_value_handle(v_value_5202_);
lean_dec(v_value_5202_);
v___x_5209_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5205_, v___x_5206_, v___x_5207_, v___x_5208_);
lean_dec_ref_known(v___x_5207_, 2);
if (lean_obj_tag(v___x_5209_) == 0)
{
lean_object* v_a_5210_; uint8_t v___x_5211_; 
v_a_5210_ = lean_ctor_get(v___x_5209_, 0);
lean_inc(v_a_5210_);
lean_dec_ref_known(v___x_5209_, 1);
v___x_5211_ = lean_string_validate_utf8(v_a_5210_);
if (v___x_5211_ == 0)
{
lean_object* v___x_5212_; lean_object* v___x_5213_; 
lean_dec(v_a_5210_);
v___x_5212_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5213_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5212_);
v_received_5188_ = v___x_5213_;
goto v___jp_5187_;
}
else
{
lean_object* v___x_5214_; 
v___x_5214_ = lean_string_from_utf8_unchecked(v_a_5210_);
v_received_5188_ = v___x_5214_;
goto v___jp_5187_;
}
}
else
{
lean_object* v___x_5215_; 
lean_dec_ref_known(v___x_5209_, 1);
v___x_5215_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5188_ = v___x_5215_;
goto v___jp_5187_;
}
}
}
else
{
goto v___jp_5200_;
}
v___jp_5187_:
{
lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; uint8_t v___x_5198_; 
v___x_5189_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5190_ = lean_string_append(v___x_5189_, v_context_5175_);
v___x_5191_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5192_ = lean_string_append(v___x_5190_, v___x_5191_);
v___x_5193_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStream___closed__0));
v___x_5194_ = lean_string_append(v___x_5192_, v___x_5193_);
v___x_5195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5196_ = lean_string_append(v___x_5194_, v___x_5195_);
v___x_5197_ = lean_string_append(v___x_5196_, v_received_5188_);
lean_dec_ref(v_received_5188_);
v___x_5198_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5198_ == 0)
{
lean_object* v___x_5199_; 
v___x_5199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5179_ = v___x_5197_;
v___y_5180_ = v___x_5199_;
goto v___jp_5178_;
}
else
{
v___y_5179_ = v___x_5197_;
v___y_5180_ = v___x_5186_;
goto v___jp_5178_;
}
}
v___jp_5200_:
{
lean_object* v___x_5201_; 
v___x_5201_ = l_Lasm_JS_Data_describe(v_d_5176_);
v_received_5188_ = v___x_5201_;
goto v___jp_5187_;
}
}
v___jp_5178_:
{
lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; 
v___x_5181_ = lean_string_append(v___y_5179_, v___y_5180_);
v___x_5182_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5182_, 0, v___x_5181_);
v___x_5183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5183_, 0, v___x_5182_);
return v___x_5183_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object* v_context_5216_, lean_object* v_d_5217_, lean_object* v_a_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v_context_5216_, v_d_5217_);
lean_dec_ref(v_context_5216_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object* v_b_5220_, lean_object* v_args_5221_, uint8_t v_await_5222_){
_start:
{
uint64_t v___y_5225_; uint64_t v___y_5226_; uint64_t v___x_5269_; uint64_t v___y_5271_; 
v___x_5269_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5222_ == 0)
{
uint64_t v___x_5276_; 
v___x_5276_ = 0ULL;
v___y_5271_ = v___x_5276_;
goto v___jp_5270_;
}
else
{
uint64_t v___x_5277_; 
v___x_5277_ = 2ULL;
v___y_5271_ = v___x_5277_;
goto v___jp_5270_;
}
v___jp_5224_:
{
uint64_t v_flags_5227_; uint32_t v___x_5228_; lean_object* v___x_5229_; uint32_t v___x_5230_; lean_object* v___x_5231_; 
v_flags_5227_ = lean_uint64_lor(v___y_5225_, v___y_5226_);
v___x_5228_ = 214;
v___x_5229_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5220_, v_args_5221_);
v___x_5230_ = 0;
v___x_5231_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5228_, v_flags_5227_, v___x_5229_, v___x_5230_);
lean_dec(v___x_5229_);
if (lean_obj_tag(v___x_5231_) == 0)
{
if (lean_obj_tag(v___x_5231_) == 0)
{
lean_object* v_a_5232_; lean_object* v___x_5233_; 
v_a_5232_ = lean_ctor_get(v___x_5231_, 0);
lean_inc(v_a_5232_);
lean_dec_ref_known(v___x_5231_, 1);
v___x_5233_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5232_);
lean_dec(v_a_5232_);
if (lean_obj_tag(v___x_5233_) == 0)
{
lean_object* v_a_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; 
v_a_5234_ = lean_ctor_get(v___x_5233_, 0);
lean_inc(v_a_5234_);
lean_dec_ref_known(v___x_5233_, 1);
v___x_5235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5220_);
v___x_5236_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v___x_5235_, v_a_5234_);
lean_dec_ref(v___x_5235_);
return v___x_5236_;
}
else
{
lean_object* v_a_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5244_; 
v_a_5237_ = lean_ctor_get(v___x_5233_, 0);
v_isSharedCheck_5244_ = !lean_is_exclusive(v___x_5233_);
if (v_isSharedCheck_5244_ == 0)
{
v___x_5239_ = v___x_5233_;
v_isShared_5240_ = v_isSharedCheck_5244_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_a_5237_);
lean_dec(v___x_5233_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5244_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
lean_object* v___x_5242_; 
if (v_isShared_5240_ == 0)
{
v___x_5242_ = v___x_5239_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v_a_5237_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
return v___x_5242_;
}
}
}
}
else
{
lean_object* v_a_5245_; lean_object* v___x_5247_; uint8_t v_isShared_5248_; uint8_t v_isSharedCheck_5252_; 
v_a_5245_ = lean_ctor_get(v___x_5231_, 0);
v_isSharedCheck_5252_ = !lean_is_exclusive(v___x_5231_);
if (v_isSharedCheck_5252_ == 0)
{
v___x_5247_ = v___x_5231_;
v_isShared_5248_ = v_isSharedCheck_5252_;
goto v_resetjp_5246_;
}
else
{
lean_inc(v_a_5245_);
lean_dec(v___x_5231_);
v___x_5247_ = lean_box(0);
v_isShared_5248_ = v_isSharedCheck_5252_;
goto v_resetjp_5246_;
}
v_resetjp_5246_:
{
lean_object* v___x_5250_; 
if (v_isShared_5248_ == 0)
{
lean_ctor_set_tag(v___x_5247_, 1);
v___x_5250_ = v___x_5247_;
goto v_reusejp_5249_;
}
else
{
lean_object* v_reuseFailAlloc_5251_; 
v_reuseFailAlloc_5251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5251_, 0, v_a_5245_);
v___x_5250_ = v_reuseFailAlloc_5251_;
goto v_reusejp_5249_;
}
v_reusejp_5249_:
{
return v___x_5250_;
}
}
}
}
else
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5268_; 
v_a_5253_ = lean_ctor_get(v___x_5231_, 0);
v_isSharedCheck_5268_ = !lean_is_exclusive(v___x_5231_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5255_ = v___x_5231_;
v_isShared_5256_ = v_isSharedCheck_5268_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v___x_5231_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5268_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5266_; 
v___x_5257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5258_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5220_);
v___x_5259_ = lean_string_append(v___x_5257_, v___x_5258_);
lean_dec_ref(v___x_5258_);
v___x_5260_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5261_ = lean_string_append(v___x_5259_, v___x_5260_);
v___x_5262_ = lean_io_error_to_string(v_a_5253_);
v___x_5263_ = lean_string_append(v___x_5261_, v___x_5262_);
lean_dec_ref(v___x_5262_);
v___x_5264_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5264_, 0, v___x_5263_);
if (v_isShared_5256_ == 0)
{
lean_ctor_set(v___x_5255_, 0, v___x_5264_);
v___x_5266_ = v___x_5255_;
goto v_reusejp_5265_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v___x_5264_);
v___x_5266_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5265_;
}
v_reusejp_5265_:
{
return v___x_5266_;
}
}
}
}
v___jp_5270_:
{
uint8_t v_construct_5272_; uint64_t v___x_5273_; 
v_construct_5272_ = lean_ctor_get_uint8(v_b_5220_, sizeof(void*)*4);
v___x_5273_ = lean_uint64_lor(v___x_5269_, v___y_5271_);
if (v_construct_5272_ == 0)
{
uint64_t v___x_5274_; 
v___x_5274_ = 0ULL;
v___y_5225_ = v___x_5273_;
v___y_5226_ = v___x_5274_;
goto v___jp_5224_;
}
else
{
uint64_t v___x_5275_; 
v___x_5275_ = 4ULL;
v___y_5225_ = v___x_5273_;
v___y_5226_ = v___x_5275_;
goto v___jp_5224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object* v_b_5278_, lean_object* v_args_5279_, lean_object* v_await_5280_, lean_object* v_a_5281_){
_start:
{
uint8_t v_await_boxed_5282_; lean_object* v_res_5283_; 
v_await_boxed_5282_ = lean_unbox(v_await_5280_);
v_res_5283_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v_b_5278_, v_args_5279_, v_await_boxed_5282_);
lean_dec_ref(v_b_5278_);
return v_res_5283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object* v_transformer_5292_, lean_object* v_writableStrategy_5293_, lean_object* v_readableStrategy_5294_){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; uint8_t v___x_5305_; lean_object* v___x_5306_; 
v___x_5296_ = lean_unsigned_to_nat(3u);
v___x_5297_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_new___closed__2));
v___x_5298_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_writableStrategy_5293_);
v___x_5299_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_readableStrategy_5294_);
v___x_5300_ = lean_mk_empty_array_with_capacity(v___x_5296_);
v___x_5301_ = lean_array_push(v___x_5300_, v_transformer_5292_);
v___x_5302_ = lean_array_push(v___x_5301_, v___x_5298_);
v___x_5303_ = lean_array_push(v___x_5302_, v___x_5299_);
v___x_5304_ = l_Lasm_JS_Web_Support_args(v___x_5303_);
v___x_5305_ = 0;
v___x_5306_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v___x_5297_, v___x_5304_, v___x_5305_);
return v___x_5306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object* v_transformer_5307_, lean_object* v_writableStrategy_5308_, lean_object* v_readableStrategy_5309_, lean_object* v_a_5310_){
_start:
{
lean_object* v_res_5311_; 
v_res_5311_ = l_Lasm_JS_Web_TransformStream_new(v_transformer_5307_, v_writableStrategy_5308_, v_readableStrategy_5309_);
return v_res_5311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(lean_object* v_o_5312_, lean_object* v_key_5313_){
_start:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
lean_inc_ref(v_key_5313_);
v___x_5315_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5315_, 0, v_key_5313_);
v___x_5316_ = l_Lasm_JS_Wire_encodeIO(v___x_5315_);
lean_dec_ref_known(v___x_5315_, 1);
if (lean_obj_tag(v___x_5316_) == 0)
{
lean_object* v_a_5317_; uint32_t v___x_5318_; uint32_t v___x_5319_; uint64_t v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v_a_5317_ = lean_ctor_get(v___x_5316_, 0);
lean_inc(v_a_5317_);
lean_dec_ref_known(v___x_5316_, 1);
v___x_5318_ = 203;
v___x_5319_ = lasm_js_value_handle(v_o_5312_);
v___x_5320_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5322_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5322_, 0, v_o_5312_);
lean_ctor_set(v___x_5322_, 1, v___x_5321_);
v___x_5323_ = lasm_js_call(v___x_5318_, v___x_5319_, v___x_5320_, v_a_5317_, v___x_5322_);
lean_dec_ref_known(v___x_5322_, 2);
lean_dec(v_a_5317_);
if (lean_obj_tag(v___x_5323_) == 0)
{
lean_object* v_a_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; 
v_a_5324_ = lean_ctor_get(v___x_5323_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v___x_5323_, 1);
v___x_5325_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_5326_ = l_String_quote(v_key_5313_);
v___x_5327_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5327_, 0, v___x_5326_);
v___x_5328_ = lean_unsigned_to_nat(120u);
v___x_5329_ = lean_unsigned_to_nat(0u);
v___x_5330_ = l_Std_Format_pretty(v___x_5327_, v___x_5328_, v___x_5329_, v___x_5329_);
v___x_5331_ = lean_string_append(v___x_5325_, v___x_5330_);
lean_dec_ref(v___x_5330_);
v___x_5332_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__1_spec__2(v___x_5331_, v_a_5324_);
lean_dec(v_a_5324_);
lean_dec_ref(v___x_5331_);
return v___x_5332_;
}
else
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5340_; 
lean_dec_ref(v_key_5313_);
v_a_5333_ = lean_ctor_get(v___x_5323_, 0);
v_isSharedCheck_5340_ = !lean_is_exclusive(v___x_5323_);
if (v_isSharedCheck_5340_ == 0)
{
v___x_5335_ = v___x_5323_;
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5323_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5340_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5338_; 
if (v_isShared_5336_ == 0)
{
v___x_5338_ = v___x_5335_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v_a_5333_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
}
else
{
lean_object* v_a_5341_; lean_object* v___x_5343_; uint8_t v_isShared_5344_; uint8_t v_isSharedCheck_5348_; 
lean_dec_ref(v_key_5313_);
lean_dec(v_o_5312_);
v_a_5341_ = lean_ctor_get(v___x_5316_, 0);
v_isSharedCheck_5348_ = !lean_is_exclusive(v___x_5316_);
if (v_isSharedCheck_5348_ == 0)
{
v___x_5343_ = v___x_5316_;
v_isShared_5344_ = v_isSharedCheck_5348_;
goto v_resetjp_5342_;
}
else
{
lean_inc(v_a_5341_);
lean_dec(v___x_5316_);
v___x_5343_ = lean_box(0);
v_isShared_5344_ = v_isSharedCheck_5348_;
goto v_resetjp_5342_;
}
v_resetjp_5342_:
{
lean_object* v___x_5346_; 
if (v_isShared_5344_ == 0)
{
v___x_5346_ = v___x_5343_;
goto v_reusejp_5345_;
}
else
{
lean_object* v_reuseFailAlloc_5347_; 
v_reuseFailAlloc_5347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5347_, 0, v_a_5341_);
v___x_5346_ = v_reuseFailAlloc_5347_;
goto v_reusejp_5345_;
}
v_reusejp_5345_:
{
return v___x_5346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0___boxed(lean_object* v_o_5349_, lean_object* v_key_5350_, lean_object* v_a_5351_){
_start:
{
lean_object* v_res_5352_; 
v_res_5352_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(v_o_5349_, v_key_5350_);
return v_res_5352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object* v_self_5353_){
_start:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; 
v___x_5355_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_5356_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_readable_spec__0(v_self_5353_, v___x_5355_);
return v___x_5356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object* v_self_5357_, lean_object* v_a_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l_Lasm_JS_Web_TransformStream_readable(v_self_5357_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0(lean_object* v_context_5360_, lean_object* v_bytes_5361_){
_start:
{
lean_object* v___x_5363_; 
v___x_5363_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5361_);
if (lean_obj_tag(v___x_5363_) == 0)
{
lean_object* v_a_5364_; lean_object* v___x_5365_; 
v_a_5364_ = lean_ctor_get(v___x_5363_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5363_, 1);
v___x_5365_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_5360_, v_a_5364_);
return v___x_5365_;
}
else
{
lean_object* v_a_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5373_; 
v_a_5366_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5373_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5373_ == 0)
{
v___x_5368_ = v___x_5363_;
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_a_5366_);
lean_dec(v___x_5363_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v_a_5366_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0___boxed(lean_object* v_context_5374_, lean_object* v_bytes_5375_, lean_object* v_a_5376_){
_start:
{
lean_object* v_res_5377_; 
v_res_5377_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0(v_context_5374_, v_bytes_5375_);
lean_dec_ref(v_bytes_5375_);
lean_dec_ref(v_context_5374_);
return v_res_5377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(lean_object* v_o_5378_, lean_object* v_key_5379_){
_start:
{
lean_object* v___x_5381_; lean_object* v___x_5382_; 
lean_inc_ref(v_key_5379_);
v___x_5381_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5381_, 0, v_key_5379_);
v___x_5382_ = l_Lasm_JS_Wire_encodeIO(v___x_5381_);
lean_dec_ref_known(v___x_5381_, 1);
if (lean_obj_tag(v___x_5382_) == 0)
{
lean_object* v_a_5383_; uint32_t v___x_5384_; uint32_t v___x_5385_; uint64_t v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v_a_5383_ = lean_ctor_get(v___x_5382_, 0);
lean_inc(v_a_5383_);
lean_dec_ref_known(v___x_5382_, 1);
v___x_5384_ = 203;
v___x_5385_ = lasm_js_value_handle(v_o_5378_);
v___x_5386_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5387_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5388_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5388_, 0, v_o_5378_);
lean_ctor_set(v___x_5388_, 1, v___x_5387_);
v___x_5389_ = lasm_js_call(v___x_5384_, v___x_5385_, v___x_5386_, v_a_5383_, v___x_5388_);
lean_dec_ref_known(v___x_5388_, 2);
lean_dec(v_a_5383_);
if (lean_obj_tag(v___x_5389_) == 0)
{
lean_object* v_a_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; 
v_a_5390_ = lean_ctor_get(v___x_5389_, 0);
lean_inc(v_a_5390_);
lean_dec_ref_known(v___x_5389_, 1);
v___x_5391_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_5392_ = l_String_quote(v_key_5379_);
v___x_5393_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5393_, 0, v___x_5392_);
v___x_5394_ = lean_unsigned_to_nat(120u);
v___x_5395_ = lean_unsigned_to_nat(0u);
v___x_5396_ = l_Std_Format_pretty(v___x_5393_, v___x_5394_, v___x_5395_, v___x_5395_);
v___x_5397_ = lean_string_append(v___x_5391_, v___x_5396_);
lean_dec_ref(v___x_5396_);
v___x_5398_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0_spec__0(v___x_5397_, v_a_5390_);
lean_dec(v_a_5390_);
lean_dec_ref(v___x_5397_);
return v___x_5398_;
}
else
{
lean_object* v_a_5399_; lean_object* v___x_5401_; uint8_t v_isShared_5402_; uint8_t v_isSharedCheck_5406_; 
lean_dec_ref(v_key_5379_);
v_a_5399_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5406_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5401_ = v___x_5389_;
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
else
{
lean_inc(v_a_5399_);
lean_dec(v___x_5389_);
v___x_5401_ = lean_box(0);
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
v_resetjp_5400_:
{
lean_object* v___x_5404_; 
if (v_isShared_5402_ == 0)
{
v___x_5404_ = v___x_5401_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5405_; 
v_reuseFailAlloc_5405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5405_, 0, v_a_5399_);
v___x_5404_ = v_reuseFailAlloc_5405_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
return v___x_5404_;
}
}
}
}
else
{
lean_object* v_a_5407_; lean_object* v___x_5409_; uint8_t v_isShared_5410_; uint8_t v_isSharedCheck_5414_; 
lean_dec_ref(v_key_5379_);
lean_dec(v_o_5378_);
v_a_5407_ = lean_ctor_get(v___x_5382_, 0);
v_isSharedCheck_5414_ = !lean_is_exclusive(v___x_5382_);
if (v_isSharedCheck_5414_ == 0)
{
v___x_5409_ = v___x_5382_;
v_isShared_5410_ = v_isSharedCheck_5414_;
goto v_resetjp_5408_;
}
else
{
lean_inc(v_a_5407_);
lean_dec(v___x_5382_);
v___x_5409_ = lean_box(0);
v_isShared_5410_ = v_isSharedCheck_5414_;
goto v_resetjp_5408_;
}
v_resetjp_5408_:
{
lean_object* v___x_5412_; 
if (v_isShared_5410_ == 0)
{
v___x_5412_ = v___x_5409_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5413_; 
v_reuseFailAlloc_5413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5413_, 0, v_a_5407_);
v___x_5412_ = v_reuseFailAlloc_5413_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
return v___x_5412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0___boxed(lean_object* v_o_5415_, lean_object* v_key_5416_, lean_object* v_a_5417_){
_start:
{
lean_object* v_res_5418_; 
v_res_5418_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(v_o_5415_, v_key_5416_);
return v_res_5418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object* v_self_5419_){
_start:
{
lean_object* v___x_5421_; lean_object* v___x_5422_; 
v___x_5421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_5422_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_TransformStream_writable_spec__0(v_self_5419_, v___x_5421_);
return v___x_5422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object* v_self_5423_, lean_object* v_a_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_Lasm_JS_Web_TransformStream_writable(v_self_5423_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object* v_self_5426_){
_start:
{
lean_object* v___x_5428_; lean_object* v___x_5429_; 
v___x_5428_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5429_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5426_, v___x_5428_);
return v___x_5429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object* v_self_5430_, lean_object* v_a_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(v_self_5430_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object* v_self_5433_, lean_object* v_chunk_5434_){
_start:
{
lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5436_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_5437_ = lean_unsigned_to_nat(1u);
v___x_5438_ = lean_mk_empty_array_with_capacity(v___x_5437_);
v___x_5439_ = lean_array_push(v___x_5438_, v_chunk_5434_);
v___x_5440_ = l_Lasm_JS_Web_Support_args(v___x_5439_);
v___x_5441_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5433_, v___x_5436_, v___x_5440_);
return v___x_5441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object* v_self_5442_, lean_object* v_chunk_5443_, lean_object* v_a_5444_){
_start:
{
lean_object* v_res_5445_; 
v_res_5445_ = l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(v_self_5442_, v_chunk_5443_);
return v_res_5445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object* v_self_5446_, lean_object* v_reason_5447_){
_start:
{
lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5449_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5450_ = lean_unsigned_to_nat(1u);
v___x_5451_ = lean_mk_empty_array_with_capacity(v___x_5450_);
v___x_5452_ = lean_array_push(v___x_5451_, v_reason_5447_);
v___x_5453_ = l_Lasm_JS_Web_Support_args(v___x_5452_);
v___x_5454_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5446_, v___x_5449_, v___x_5453_);
return v___x_5454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object* v_self_5455_, lean_object* v_reason_5456_, lean_object* v_a_5457_){
_start:
{
lean_object* v_res_5458_; 
v_res_5458_ = l_Lasm_JS_Web_TransformStreamDefaultController_error(v_self_5455_, v_reason_5456_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object* v_self_5460_){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5462_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0));
v___x_5463_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5464_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5460_, v___x_5462_, v___x_5463_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object* v_self_5465_, lean_object* v_a_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l_Lasm_JS_Web_TransformStreamDefaultController_terminate(v_self_5465_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5468_, lean_object* v_d_5469_){
_start:
{
lean_object* v___y_5472_; lean_object* v___y_5473_; 
if (lean_obj_tag(v_d_5469_) == 9)
{
lean_object* v_value_5477_; lean_object* v___x_5478_; 
v_value_5477_ = lean_ctor_get(v_d_5469_, 0);
lean_inc(v_value_5477_);
lean_dec_ref_known(v_d_5469_, 2);
v___x_5478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5478_, 0, v_value_5477_);
return v___x_5478_;
}
else
{
lean_object* v___x_5479_; lean_object* v_received_5481_; 
v___x_5479_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5469_) == 9)
{
lean_object* v_value_5495_; lean_object* v_description_5496_; uint8_t v___x_5497_; 
v_value_5495_ = lean_ctor_get(v_d_5469_, 0);
v_description_5496_ = lean_ctor_get(v_d_5469_, 1);
v___x_5497_ = lean_string_dec_eq(v_description_5496_, v___x_5479_);
if (v___x_5497_ == 0)
{
goto v___jp_5493_;
}
else
{
uint32_t v___x_5498_; uint64_t v___x_5499_; lean_object* v___x_5500_; uint32_t v___x_5501_; lean_object* v___x_5502_; 
lean_inc_n(v_value_5495_, 2);
lean_dec_ref_known(v_d_5469_, 2);
v___x_5498_ = 206;
v___x_5499_ = 0ULL;
v___x_5500_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5500_, 0, v_value_5495_);
lean_ctor_set(v___x_5500_, 1, v___x_5479_);
v___x_5501_ = lasm_js_value_handle(v_value_5495_);
lean_dec(v_value_5495_);
v___x_5502_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5498_, v___x_5499_, v___x_5500_, v___x_5501_);
lean_dec_ref_known(v___x_5500_, 2);
if (lean_obj_tag(v___x_5502_) == 0)
{
lean_object* v_a_5503_; uint8_t v___x_5504_; 
v_a_5503_ = lean_ctor_get(v___x_5502_, 0);
lean_inc(v_a_5503_);
lean_dec_ref_known(v___x_5502_, 1);
v___x_5504_ = lean_string_validate_utf8(v_a_5503_);
if (v___x_5504_ == 0)
{
lean_object* v___x_5505_; lean_object* v___x_5506_; 
lean_dec(v_a_5503_);
v___x_5505_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5506_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5505_);
v_received_5481_ = v___x_5506_;
goto v___jp_5480_;
}
else
{
lean_object* v___x_5507_; 
v___x_5507_ = lean_string_from_utf8_unchecked(v_a_5503_);
v_received_5481_ = v___x_5507_;
goto v___jp_5480_;
}
}
else
{
lean_object* v___x_5508_; 
lean_dec_ref_known(v___x_5502_, 1);
v___x_5508_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5481_ = v___x_5508_;
goto v___jp_5480_;
}
}
}
else
{
goto v___jp_5493_;
}
v___jp_5480_:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; uint8_t v___x_5491_; 
v___x_5482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5483_ = lean_string_append(v___x_5482_, v_context_5468_);
v___x_5484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5485_ = lean_string_append(v___x_5483_, v___x_5484_);
v___x_5486_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0));
v___x_5487_ = lean_string_append(v___x_5485_, v___x_5486_);
v___x_5488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5489_ = lean_string_append(v___x_5487_, v___x_5488_);
v___x_5490_ = lean_string_append(v___x_5489_, v_received_5481_);
lean_dec_ref(v_received_5481_);
v___x_5491_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5491_ == 0)
{
lean_object* v___x_5492_; 
v___x_5492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5472_ = v___x_5490_;
v___y_5473_ = v___x_5492_;
goto v___jp_5471_;
}
else
{
v___y_5472_ = v___x_5490_;
v___y_5473_ = v___x_5479_;
goto v___jp_5471_;
}
}
v___jp_5493_:
{
lean_object* v___x_5494_; 
v___x_5494_ = l_Lasm_JS_Data_describe(v_d_5469_);
v_received_5481_ = v___x_5494_;
goto v___jp_5480_;
}
}
v___jp_5471_:
{
lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; 
v___x_5474_ = lean_string_append(v___y_5472_, v___y_5473_);
v___x_5475_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5475_, 0, v___x_5474_);
v___x_5476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5476_, 0, v___x_5475_);
return v___x_5476_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5509_, lean_object* v_d_5510_, lean_object* v_a_5511_){
_start:
{
lean_object* v_res_5512_; 
v_res_5512_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v_context_5509_, v_d_5510_);
lean_dec_ref(v_context_5509_);
return v_res_5512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object* v_b_5513_, lean_object* v_args_5514_, uint8_t v_await_5515_){
_start:
{
uint64_t v___y_5518_; uint64_t v___y_5519_; uint64_t v___x_5562_; uint64_t v___y_5564_; 
v___x_5562_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5515_ == 0)
{
uint64_t v___x_5569_; 
v___x_5569_ = 0ULL;
v___y_5564_ = v___x_5569_;
goto v___jp_5563_;
}
else
{
uint64_t v___x_5570_; 
v___x_5570_ = 2ULL;
v___y_5564_ = v___x_5570_;
goto v___jp_5563_;
}
v___jp_5517_:
{
uint64_t v_flags_5520_; uint32_t v___x_5521_; lean_object* v___x_5522_; uint32_t v___x_5523_; lean_object* v___x_5524_; 
v_flags_5520_ = lean_uint64_lor(v___y_5518_, v___y_5519_);
v___x_5521_ = 214;
v___x_5522_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5513_, v_args_5514_);
v___x_5523_ = 0;
v___x_5524_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5521_, v_flags_5520_, v___x_5522_, v___x_5523_);
lean_dec(v___x_5522_);
if (lean_obj_tag(v___x_5524_) == 0)
{
if (lean_obj_tag(v___x_5524_) == 0)
{
lean_object* v_a_5525_; lean_object* v___x_5526_; 
v_a_5525_ = lean_ctor_get(v___x_5524_, 0);
lean_inc(v_a_5525_);
lean_dec_ref_known(v___x_5524_, 1);
v___x_5526_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5525_);
lean_dec(v_a_5525_);
if (lean_obj_tag(v___x_5526_) == 0)
{
lean_object* v_a_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; 
v_a_5527_ = lean_ctor_get(v___x_5526_, 0);
lean_inc(v_a_5527_);
lean_dec_ref_known(v___x_5526_, 1);
v___x_5528_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5513_);
v___x_5529_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v___x_5528_, v_a_5527_);
lean_dec_ref(v___x_5528_);
return v___x_5529_;
}
else
{
lean_object* v_a_5530_; lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5537_; 
v_a_5530_ = lean_ctor_get(v___x_5526_, 0);
v_isSharedCheck_5537_ = !lean_is_exclusive(v___x_5526_);
if (v_isSharedCheck_5537_ == 0)
{
v___x_5532_ = v___x_5526_;
v_isShared_5533_ = v_isSharedCheck_5537_;
goto v_resetjp_5531_;
}
else
{
lean_inc(v_a_5530_);
lean_dec(v___x_5526_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5537_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v___x_5535_; 
if (v_isShared_5533_ == 0)
{
v___x_5535_ = v___x_5532_;
goto v_reusejp_5534_;
}
else
{
lean_object* v_reuseFailAlloc_5536_; 
v_reuseFailAlloc_5536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5536_, 0, v_a_5530_);
v___x_5535_ = v_reuseFailAlloc_5536_;
goto v_reusejp_5534_;
}
v_reusejp_5534_:
{
return v___x_5535_;
}
}
}
}
else
{
lean_object* v_a_5538_; lean_object* v___x_5540_; uint8_t v_isShared_5541_; uint8_t v_isSharedCheck_5545_; 
v_a_5538_ = lean_ctor_get(v___x_5524_, 0);
v_isSharedCheck_5545_ = !lean_is_exclusive(v___x_5524_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5540_ = v___x_5524_;
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
else
{
lean_inc(v_a_5538_);
lean_dec(v___x_5524_);
v___x_5540_ = lean_box(0);
v_isShared_5541_ = v_isSharedCheck_5545_;
goto v_resetjp_5539_;
}
v_resetjp_5539_:
{
lean_object* v___x_5543_; 
if (v_isShared_5541_ == 0)
{
lean_ctor_set_tag(v___x_5540_, 1);
v___x_5543_ = v___x_5540_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v_a_5538_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
return v___x_5543_;
}
}
}
}
else
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5561_; 
v_a_5546_ = lean_ctor_get(v___x_5524_, 0);
v_isSharedCheck_5561_ = !lean_is_exclusive(v___x_5524_);
if (v_isSharedCheck_5561_ == 0)
{
v___x_5548_ = v___x_5524_;
v_isShared_5549_ = v_isSharedCheck_5561_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v___x_5524_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5561_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5559_; 
v___x_5550_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5551_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5513_);
v___x_5552_ = lean_string_append(v___x_5550_, v___x_5551_);
lean_dec_ref(v___x_5551_);
v___x_5553_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5554_ = lean_string_append(v___x_5552_, v___x_5553_);
v___x_5555_ = lean_io_error_to_string(v_a_5546_);
v___x_5556_ = lean_string_append(v___x_5554_, v___x_5555_);
lean_dec_ref(v___x_5555_);
v___x_5557_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5557_, 0, v___x_5556_);
if (v_isShared_5549_ == 0)
{
lean_ctor_set(v___x_5548_, 0, v___x_5557_);
v___x_5559_ = v___x_5548_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v___x_5557_);
v___x_5559_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
return v___x_5559_;
}
}
}
}
v___jp_5563_:
{
uint8_t v_construct_5565_; uint64_t v___x_5566_; 
v_construct_5565_ = lean_ctor_get_uint8(v_b_5513_, sizeof(void*)*4);
v___x_5566_ = lean_uint64_lor(v___x_5562_, v___y_5564_);
if (v_construct_5565_ == 0)
{
uint64_t v___x_5567_; 
v___x_5567_ = 0ULL;
v___y_5518_ = v___x_5566_;
v___y_5519_ = v___x_5567_;
goto v___jp_5517_;
}
else
{
uint64_t v___x_5568_; 
v___x_5568_ = 4ULL;
v___y_5518_ = v___x_5566_;
v___y_5519_ = v___x_5568_;
goto v___jp_5517_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5571_, lean_object* v_args_5572_, lean_object* v_await_5573_, lean_object* v_a_5574_){
_start:
{
uint8_t v_await_boxed_5575_; lean_object* v_res_5576_; 
v_await_boxed_5575_ = lean_unbox(v_await_5573_);
v_res_5576_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v_b_5571_, v_args_5572_, v_await_boxed_5575_);
lean_dec_ref(v_b_5571_);
return v_res_5576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double v_init_5585_){
_start:
{
lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; uint8_t v___x_5597_; lean_object* v___x_5598_; 
v___x_5587_ = lean_unsigned_to_nat(1u);
v___x_5588_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2));
v___x_5589_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5590_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5590_, 0, v_init_5585_);
v___x_5591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5591_, 0, v___x_5589_);
lean_ctor_set(v___x_5591_, 1, v___x_5590_);
v___x_5592_ = lean_mk_empty_array_with_capacity(v___x_5587_);
lean_inc_ref(v___x_5592_);
v___x_5593_ = lean_array_push(v___x_5592_, v___x_5591_);
v___x_5594_ = l_Lasm_JS_Web_Support_fields(v___x_5593_);
lean_dec_ref(v___x_5593_);
v___x_5595_ = lean_array_push(v___x_5592_, v___x_5594_);
v___x_5596_ = l_Lasm_JS_Web_Support_args(v___x_5595_);
v___x_5597_ = 0;
v___x_5598_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v___x_5588_, v___x_5596_, v___x_5597_);
return v___x_5598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object* v_init_5599_, lean_object* v_a_5600_){
_start:
{
double v_init_boxed_5601_; lean_object* v_res_5602_; 
v_init_boxed_5601_ = lean_unbox_float(v_init_5599_);
lean_dec_ref(v_init_5599_);
v_res_5602_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(v_init_boxed_5601_);
return v_res_5602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object* v_self_5603_){
_start:
{
lean_object* v___x_5605_; lean_object* v___x_5606_; 
v___x_5605_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5606_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5603_, v___x_5605_);
return v___x_5606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5607_, lean_object* v_a_5608_){
_start:
{
lean_object* v_res_5609_; 
v_res_5609_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(v_self_5607_);
return v_res_5609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object* v_context_5610_, lean_object* v_d_5611_){
_start:
{
lean_object* v___y_5614_; lean_object* v___y_5615_; 
if (lean_obj_tag(v_d_5611_) == 9)
{
lean_object* v_value_5619_; lean_object* v___x_5620_; 
v_value_5619_ = lean_ctor_get(v_d_5611_, 0);
lean_inc(v_value_5619_);
lean_dec_ref_known(v_d_5611_, 2);
v___x_5620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5620_, 0, v_value_5619_);
return v___x_5620_;
}
else
{
lean_object* v___x_5621_; lean_object* v_received_5623_; 
v___x_5621_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5611_) == 9)
{
lean_object* v_value_5637_; lean_object* v_description_5638_; uint8_t v___x_5639_; 
v_value_5637_ = lean_ctor_get(v_d_5611_, 0);
v_description_5638_ = lean_ctor_get(v_d_5611_, 1);
v___x_5639_ = lean_string_dec_eq(v_description_5638_, v___x_5621_);
if (v___x_5639_ == 0)
{
goto v___jp_5635_;
}
else
{
uint32_t v___x_5640_; uint64_t v___x_5641_; lean_object* v___x_5642_; uint32_t v___x_5643_; lean_object* v___x_5644_; 
lean_inc_n(v_value_5637_, 2);
lean_dec_ref_known(v_d_5611_, 2);
v___x_5640_ = 206;
v___x_5641_ = 0ULL;
v___x_5642_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5642_, 0, v_value_5637_);
lean_ctor_set(v___x_5642_, 1, v___x_5621_);
v___x_5643_ = lasm_js_value_handle(v_value_5637_);
lean_dec(v_value_5637_);
v___x_5644_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5640_, v___x_5641_, v___x_5642_, v___x_5643_);
lean_dec_ref_known(v___x_5642_, 2);
if (lean_obj_tag(v___x_5644_) == 0)
{
lean_object* v_a_5645_; uint8_t v___x_5646_; 
v_a_5645_ = lean_ctor_get(v___x_5644_, 0);
lean_inc(v_a_5645_);
lean_dec_ref_known(v___x_5644_, 1);
v___x_5646_ = lean_string_validate_utf8(v_a_5645_);
if (v___x_5646_ == 0)
{
lean_object* v___x_5647_; lean_object* v___x_5648_; 
lean_dec(v_a_5645_);
v___x_5647_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5648_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5647_);
v_received_5623_ = v___x_5648_;
goto v___jp_5622_;
}
else
{
lean_object* v___x_5649_; 
v___x_5649_ = lean_string_from_utf8_unchecked(v_a_5645_);
v_received_5623_ = v___x_5649_;
goto v___jp_5622_;
}
}
else
{
lean_object* v___x_5650_; 
lean_dec_ref_known(v___x_5644_, 1);
v___x_5650_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5623_ = v___x_5650_;
goto v___jp_5622_;
}
}
}
else
{
goto v___jp_5635_;
}
v___jp_5622_:
{
lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; uint8_t v___x_5633_; 
v___x_5624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5625_ = lean_string_append(v___x_5624_, v_context_5610_);
v___x_5626_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5627_ = lean_string_append(v___x_5625_, v___x_5626_);
v___x_5628_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJSFunction___closed__0));
v___x_5629_ = lean_string_append(v___x_5627_, v___x_5628_);
v___x_5630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5631_ = lean_string_append(v___x_5629_, v___x_5630_);
v___x_5632_ = lean_string_append(v___x_5631_, v_received_5623_);
lean_dec_ref(v_received_5623_);
v___x_5633_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5633_ == 0)
{
lean_object* v___x_5634_; 
v___x_5634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5614_ = v___x_5632_;
v___y_5615_ = v___x_5634_;
goto v___jp_5613_;
}
else
{
v___y_5614_ = v___x_5632_;
v___y_5615_ = v___x_5621_;
goto v___jp_5613_;
}
}
v___jp_5635_:
{
lean_object* v___x_5636_; 
v___x_5636_ = l_Lasm_JS_Data_describe(v_d_5611_);
v_received_5623_ = v___x_5636_;
goto v___jp_5622_;
}
}
v___jp_5613_:
{
lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; 
v___x_5616_ = lean_string_append(v___y_5614_, v___y_5615_);
v___x_5617_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5617_, 0, v___x_5616_);
v___x_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5618_, 0, v___x_5617_);
return v___x_5618_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5651_, lean_object* v_d_5652_, lean_object* v_a_5653_){
_start:
{
lean_object* v_res_5654_; 
v_res_5654_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5651_, v_d_5652_);
lean_dec_ref(v_context_5651_);
return v_res_5654_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object* v_context_5655_, lean_object* v_bytes_5656_){
_start:
{
lean_object* v___x_5658_; 
v___x_5658_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5656_);
if (lean_obj_tag(v___x_5658_) == 0)
{
lean_object* v_a_5659_; lean_object* v___x_5660_; 
v_a_5659_ = lean_ctor_get(v___x_5658_, 0);
lean_inc(v_a_5659_);
lean_dec_ref_known(v___x_5658_, 1);
v___x_5660_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5655_, v_a_5659_);
return v___x_5660_;
}
else
{
lean_object* v_a_5661_; lean_object* v___x_5663_; uint8_t v_isShared_5664_; uint8_t v_isSharedCheck_5668_; 
v_a_5661_ = lean_ctor_get(v___x_5658_, 0);
v_isSharedCheck_5668_ = !lean_is_exclusive(v___x_5658_);
if (v_isSharedCheck_5668_ == 0)
{
v___x_5663_ = v___x_5658_;
v_isShared_5664_ = v_isSharedCheck_5668_;
goto v_resetjp_5662_;
}
else
{
lean_inc(v_a_5661_);
lean_dec(v___x_5658_);
v___x_5663_ = lean_box(0);
v_isShared_5664_ = v_isSharedCheck_5668_;
goto v_resetjp_5662_;
}
v_resetjp_5662_:
{
lean_object* v___x_5666_; 
if (v_isShared_5664_ == 0)
{
v___x_5666_ = v___x_5663_;
goto v_reusejp_5665_;
}
else
{
lean_object* v_reuseFailAlloc_5667_; 
v_reuseFailAlloc_5667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5667_, 0, v_a_5661_);
v___x_5666_ = v_reuseFailAlloc_5667_;
goto v_reusejp_5665_;
}
v_reusejp_5665_:
{
return v___x_5666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object* v_context_5669_, lean_object* v_bytes_5670_, lean_object* v_a_5671_){
_start:
{
lean_object* v_res_5672_; 
v_res_5672_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v_context_5669_, v_bytes_5670_);
lean_dec_ref(v_bytes_5670_);
lean_dec_ref(v_context_5669_);
return v_res_5672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object* v_o_5673_, lean_object* v_key_5674_){
_start:
{
lean_object* v___x_5676_; lean_object* v___x_5677_; 
lean_inc_ref(v_key_5674_);
v___x_5676_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5676_, 0, v_key_5674_);
v___x_5677_ = l_Lasm_JS_Wire_encodeIO(v___x_5676_);
lean_dec_ref_known(v___x_5676_, 1);
if (lean_obj_tag(v___x_5677_) == 0)
{
lean_object* v_a_5678_; uint32_t v___x_5679_; uint32_t v___x_5680_; uint64_t v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; 
v_a_5678_ = lean_ctor_get(v___x_5677_, 0);
lean_inc(v_a_5678_);
lean_dec_ref_known(v___x_5677_, 1);
v___x_5679_ = 203;
v___x_5680_ = lasm_js_value_handle(v_o_5673_);
v___x_5681_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5682_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5683_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5683_, 0, v_o_5673_);
lean_ctor_set(v___x_5683_, 1, v___x_5682_);
v___x_5684_ = lasm_js_call(v___x_5679_, v___x_5680_, v___x_5681_, v_a_5678_, v___x_5683_);
lean_dec_ref_known(v___x_5683_, 2);
lean_dec(v_a_5678_);
if (lean_obj_tag(v___x_5684_) == 0)
{
lean_object* v_a_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; 
v_a_5685_ = lean_ctor_get(v___x_5684_, 0);
lean_inc(v_a_5685_);
lean_dec_ref_known(v___x_5684_, 1);
v___x_5686_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__1___closed__0));
v___x_5687_ = l_String_quote(v_key_5674_);
v___x_5688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5688_, 0, v___x_5687_);
v___x_5689_ = lean_unsigned_to_nat(120u);
v___x_5690_ = lean_unsigned_to_nat(0u);
v___x_5691_ = l_Std_Format_pretty(v___x_5688_, v___x_5689_, v___x_5690_, v___x_5690_);
v___x_5692_ = lean_string_append(v___x_5686_, v___x_5691_);
lean_dec_ref(v___x_5691_);
v___x_5693_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v___x_5692_, v_a_5685_);
lean_dec(v_a_5685_);
lean_dec_ref(v___x_5692_);
return v___x_5693_;
}
else
{
lean_object* v_a_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5701_; 
lean_dec_ref(v_key_5674_);
v_a_5694_ = lean_ctor_get(v___x_5684_, 0);
v_isSharedCheck_5701_ = !lean_is_exclusive(v___x_5684_);
if (v_isSharedCheck_5701_ == 0)
{
v___x_5696_ = v___x_5684_;
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_a_5694_);
lean_dec(v___x_5684_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v___x_5699_; 
if (v_isShared_5697_ == 0)
{
v___x_5699_ = v___x_5696_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v_a_5694_);
v___x_5699_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
return v___x_5699_;
}
}
}
}
else
{
lean_object* v_a_5702_; lean_object* v___x_5704_; uint8_t v_isShared_5705_; uint8_t v_isSharedCheck_5709_; 
lean_dec_ref(v_key_5674_);
lean_dec(v_o_5673_);
v_a_5702_ = lean_ctor_get(v___x_5677_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5677_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5704_ = v___x_5677_;
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
else
{
lean_inc(v_a_5702_);
lean_dec(v___x_5677_);
v___x_5704_ = lean_box(0);
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
v_resetjp_5703_:
{
lean_object* v___x_5707_; 
if (v_isShared_5705_ == 0)
{
v___x_5707_ = v___x_5704_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_a_5702_);
v___x_5707_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
return v___x_5707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object* v_o_5710_, lean_object* v_key_5711_, lean_object* v_a_5712_){
_start:
{
lean_object* v_res_5713_; 
v_res_5713_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_o_5710_, v_key_5711_);
return v_res_5713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object* v_self_5714_){
_start:
{
lean_object* v___x_5716_; lean_object* v___x_5717_; 
v___x_5716_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5717_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5714_, v___x_5716_);
return v___x_5717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object* v_self_5718_, lean_object* v_a_5719_){
_start:
{
lean_object* v_res_5720_; 
v_res_5720_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(v_self_5718_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5721_, lean_object* v_d_5722_){
_start:
{
lean_object* v___y_5725_; lean_object* v___y_5726_; 
if (lean_obj_tag(v_d_5722_) == 9)
{
lean_object* v_value_5730_; lean_object* v___x_5731_; 
v_value_5730_ = lean_ctor_get(v_d_5722_, 0);
lean_inc(v_value_5730_);
lean_dec_ref_known(v_d_5722_, 2);
v___x_5731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5731_, 0, v_value_5730_);
return v___x_5731_;
}
else
{
lean_object* v___x_5732_; lean_object* v_received_5734_; 
v___x_5732_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5722_) == 9)
{
lean_object* v_value_5748_; lean_object* v_description_5749_; uint8_t v___x_5750_; 
v_value_5748_ = lean_ctor_get(v_d_5722_, 0);
v_description_5749_ = lean_ctor_get(v_d_5722_, 1);
v___x_5750_ = lean_string_dec_eq(v_description_5749_, v___x_5732_);
if (v___x_5750_ == 0)
{
goto v___jp_5746_;
}
else
{
uint32_t v___x_5751_; uint64_t v___x_5752_; lean_object* v___x_5753_; uint32_t v___x_5754_; lean_object* v___x_5755_; 
lean_inc_n(v_value_5748_, 2);
lean_dec_ref_known(v_d_5722_, 2);
v___x_5751_ = 206;
v___x_5752_ = 0ULL;
v___x_5753_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5753_, 0, v_value_5748_);
lean_ctor_set(v___x_5753_, 1, v___x_5732_);
v___x_5754_ = lasm_js_value_handle(v_value_5748_);
lean_dec(v_value_5748_);
v___x_5755_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5751_, v___x_5752_, v___x_5753_, v___x_5754_);
lean_dec_ref_known(v___x_5753_, 2);
if (lean_obj_tag(v___x_5755_) == 0)
{
lean_object* v_a_5756_; uint8_t v___x_5757_; 
v_a_5756_ = lean_ctor_get(v___x_5755_, 0);
lean_inc(v_a_5756_);
lean_dec_ref_known(v___x_5755_, 1);
v___x_5757_ = lean_string_validate_utf8(v_a_5756_);
if (v___x_5757_ == 0)
{
lean_object* v___x_5758_; lean_object* v___x_5759_; 
lean_dec(v_a_5756_);
v___x_5758_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5759_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5758_);
v_received_5734_ = v___x_5759_;
goto v___jp_5733_;
}
else
{
lean_object* v___x_5760_; 
v___x_5760_ = lean_string_from_utf8_unchecked(v_a_5756_);
v_received_5734_ = v___x_5760_;
goto v___jp_5733_;
}
}
else
{
lean_object* v___x_5761_; 
lean_dec_ref_known(v___x_5755_, 1);
v___x_5761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5734_ = v___x_5761_;
goto v___jp_5733_;
}
}
}
else
{
goto v___jp_5746_;
}
v___jp_5733_:
{
lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; uint8_t v___x_5744_; 
v___x_5735_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5736_ = lean_string_append(v___x_5735_, v_context_5721_);
v___x_5737_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5738_ = lean_string_append(v___x_5736_, v___x_5737_);
v___x_5739_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0));
v___x_5740_ = lean_string_append(v___x_5738_, v___x_5739_);
v___x_5741_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5742_ = lean_string_append(v___x_5740_, v___x_5741_);
v___x_5743_ = lean_string_append(v___x_5742_, v_received_5734_);
lean_dec_ref(v_received_5734_);
v___x_5744_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5744_ == 0)
{
lean_object* v___x_5745_; 
v___x_5745_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5725_ = v___x_5743_;
v___y_5726_ = v___x_5745_;
goto v___jp_5724_;
}
else
{
v___y_5725_ = v___x_5743_;
v___y_5726_ = v___x_5732_;
goto v___jp_5724_;
}
}
v___jp_5746_:
{
lean_object* v___x_5747_; 
v___x_5747_ = l_Lasm_JS_Data_describe(v_d_5722_);
v_received_5734_ = v___x_5747_;
goto v___jp_5733_;
}
}
v___jp_5724_:
{
lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; 
v___x_5727_ = lean_string_append(v___y_5725_, v___y_5726_);
v___x_5728_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5728_, 0, v___x_5727_);
v___x_5729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5729_, 0, v___x_5728_);
return v___x_5729_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5762_, lean_object* v_d_5763_, lean_object* v_a_5764_){
_start:
{
lean_object* v_res_5765_; 
v_res_5765_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v_context_5762_, v_d_5763_);
lean_dec_ref(v_context_5762_);
return v_res_5765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object* v_b_5766_, lean_object* v_args_5767_, uint8_t v_await_5768_){
_start:
{
uint64_t v___y_5771_; uint64_t v___y_5772_; uint64_t v___x_5815_; uint64_t v___y_5817_; 
v___x_5815_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5768_ == 0)
{
uint64_t v___x_5822_; 
v___x_5822_ = 0ULL;
v___y_5817_ = v___x_5822_;
goto v___jp_5816_;
}
else
{
uint64_t v___x_5823_; 
v___x_5823_ = 2ULL;
v___y_5817_ = v___x_5823_;
goto v___jp_5816_;
}
v___jp_5770_:
{
uint64_t v_flags_5773_; uint32_t v___x_5774_; lean_object* v___x_5775_; uint32_t v___x_5776_; lean_object* v___x_5777_; 
v_flags_5773_ = lean_uint64_lor(v___y_5771_, v___y_5772_);
v___x_5774_ = 214;
v___x_5775_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5766_, v_args_5767_);
v___x_5776_ = 0;
v___x_5777_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5774_, v_flags_5773_, v___x_5775_, v___x_5776_);
lean_dec(v___x_5775_);
if (lean_obj_tag(v___x_5777_) == 0)
{
if (lean_obj_tag(v___x_5777_) == 0)
{
lean_object* v_a_5778_; lean_object* v___x_5779_; 
v_a_5778_ = lean_ctor_get(v___x_5777_, 0);
lean_inc(v_a_5778_);
lean_dec_ref_known(v___x_5777_, 1);
v___x_5779_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5778_);
lean_dec(v_a_5778_);
if (lean_obj_tag(v___x_5779_) == 0)
{
lean_object* v_a_5780_; lean_object* v___x_5781_; lean_object* v___x_5782_; 
v_a_5780_ = lean_ctor_get(v___x_5779_, 0);
lean_inc(v_a_5780_);
lean_dec_ref_known(v___x_5779_, 1);
v___x_5781_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5766_);
v___x_5782_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v___x_5781_, v_a_5780_);
lean_dec_ref(v___x_5781_);
return v___x_5782_;
}
else
{
lean_object* v_a_5783_; lean_object* v___x_5785_; uint8_t v_isShared_5786_; uint8_t v_isSharedCheck_5790_; 
v_a_5783_ = lean_ctor_get(v___x_5779_, 0);
v_isSharedCheck_5790_ = !lean_is_exclusive(v___x_5779_);
if (v_isSharedCheck_5790_ == 0)
{
v___x_5785_ = v___x_5779_;
v_isShared_5786_ = v_isSharedCheck_5790_;
goto v_resetjp_5784_;
}
else
{
lean_inc(v_a_5783_);
lean_dec(v___x_5779_);
v___x_5785_ = lean_box(0);
v_isShared_5786_ = v_isSharedCheck_5790_;
goto v_resetjp_5784_;
}
v_resetjp_5784_:
{
lean_object* v___x_5788_; 
if (v_isShared_5786_ == 0)
{
v___x_5788_ = v___x_5785_;
goto v_reusejp_5787_;
}
else
{
lean_object* v_reuseFailAlloc_5789_; 
v_reuseFailAlloc_5789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5789_, 0, v_a_5783_);
v___x_5788_ = v_reuseFailAlloc_5789_;
goto v_reusejp_5787_;
}
v_reusejp_5787_:
{
return v___x_5788_;
}
}
}
}
else
{
lean_object* v_a_5791_; lean_object* v___x_5793_; uint8_t v_isShared_5794_; uint8_t v_isSharedCheck_5798_; 
v_a_5791_ = lean_ctor_get(v___x_5777_, 0);
v_isSharedCheck_5798_ = !lean_is_exclusive(v___x_5777_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5793_ = v___x_5777_;
v_isShared_5794_ = v_isSharedCheck_5798_;
goto v_resetjp_5792_;
}
else
{
lean_inc(v_a_5791_);
lean_dec(v___x_5777_);
v___x_5793_ = lean_box(0);
v_isShared_5794_ = v_isSharedCheck_5798_;
goto v_resetjp_5792_;
}
v_resetjp_5792_:
{
lean_object* v___x_5796_; 
if (v_isShared_5794_ == 0)
{
lean_ctor_set_tag(v___x_5793_, 1);
v___x_5796_ = v___x_5793_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v_a_5791_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
return v___x_5796_;
}
}
}
}
else
{
lean_object* v_a_5799_; lean_object* v___x_5801_; uint8_t v_isShared_5802_; uint8_t v_isSharedCheck_5814_; 
v_a_5799_ = lean_ctor_get(v___x_5777_, 0);
v_isSharedCheck_5814_ = !lean_is_exclusive(v___x_5777_);
if (v_isSharedCheck_5814_ == 0)
{
v___x_5801_ = v___x_5777_;
v_isShared_5802_ = v_isSharedCheck_5814_;
goto v_resetjp_5800_;
}
else
{
lean_inc(v_a_5799_);
lean_dec(v___x_5777_);
v___x_5801_ = lean_box(0);
v_isShared_5802_ = v_isSharedCheck_5814_;
goto v_resetjp_5800_;
}
v_resetjp_5800_:
{
lean_object* v___x_5803_; lean_object* v___x_5804_; lean_object* v___x_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5812_; 
v___x_5803_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5804_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5766_);
v___x_5805_ = lean_string_append(v___x_5803_, v___x_5804_);
lean_dec_ref(v___x_5804_);
v___x_5806_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5807_ = lean_string_append(v___x_5805_, v___x_5806_);
v___x_5808_ = lean_io_error_to_string(v_a_5799_);
v___x_5809_ = lean_string_append(v___x_5807_, v___x_5808_);
lean_dec_ref(v___x_5808_);
v___x_5810_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5810_, 0, v___x_5809_);
if (v_isShared_5802_ == 0)
{
lean_ctor_set(v___x_5801_, 0, v___x_5810_);
v___x_5812_ = v___x_5801_;
goto v_reusejp_5811_;
}
else
{
lean_object* v_reuseFailAlloc_5813_; 
v_reuseFailAlloc_5813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5813_, 0, v___x_5810_);
v___x_5812_ = v_reuseFailAlloc_5813_;
goto v_reusejp_5811_;
}
v_reusejp_5811_:
{
return v___x_5812_;
}
}
}
}
v___jp_5816_:
{
uint8_t v_construct_5818_; uint64_t v___x_5819_; 
v_construct_5818_ = lean_ctor_get_uint8(v_b_5766_, sizeof(void*)*4);
v___x_5819_ = lean_uint64_lor(v___x_5815_, v___y_5817_);
if (v_construct_5818_ == 0)
{
uint64_t v___x_5820_; 
v___x_5820_ = 0ULL;
v___y_5771_ = v___x_5819_;
v___y_5772_ = v___x_5820_;
goto v___jp_5770_;
}
else
{
uint64_t v___x_5821_; 
v___x_5821_ = 4ULL;
v___y_5771_ = v___x_5819_;
v___y_5772_ = v___x_5821_;
goto v___jp_5770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5824_, lean_object* v_args_5825_, lean_object* v_await_5826_, lean_object* v_a_5827_){
_start:
{
uint8_t v_await_boxed_5828_; lean_object* v_res_5829_; 
v_await_boxed_5828_ = lean_unbox(v_await_5826_);
v_res_5829_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v_b_5824_, v_args_5825_, v_await_boxed_5828_);
lean_dec_ref(v_b_5824_);
return v_res_5829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double v_init_5838_){
_start:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; uint8_t v___x_5850_; lean_object* v___x_5851_; 
v___x_5840_ = lean_unsigned_to_nat(1u);
v___x_5841_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2));
v___x_5842_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5843_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5843_, 0, v_init_5838_);
v___x_5844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5844_, 0, v___x_5842_);
lean_ctor_set(v___x_5844_, 1, v___x_5843_);
v___x_5845_ = lean_mk_empty_array_with_capacity(v___x_5840_);
lean_inc_ref(v___x_5845_);
v___x_5846_ = lean_array_push(v___x_5845_, v___x_5844_);
v___x_5847_ = l_Lasm_JS_Web_Support_fields(v___x_5846_);
lean_dec_ref(v___x_5846_);
v___x_5848_ = lean_array_push(v___x_5845_, v___x_5847_);
v___x_5849_ = l_Lasm_JS_Web_Support_args(v___x_5848_);
v___x_5850_ = 0;
v___x_5851_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v___x_5841_, v___x_5849_, v___x_5850_);
return v___x_5851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object* v_init_5852_, lean_object* v_a_5853_){
_start:
{
double v_init_boxed_5854_; lean_object* v_res_5855_; 
v_init_boxed_5854_ = lean_unbox_float(v_init_5852_);
lean_dec_ref(v_init_5852_);
v_res_5855_ = l_Lasm_JS_Web_CountQueuingStrategy_new(v_init_boxed_5854_);
return v_res_5855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object* v_self_5856_){
_start:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5859_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5856_, v___x_5858_);
return v___x_5859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5860_, lean_object* v_a_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(v_self_5860_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object* v_self_5863_){
_start:
{
lean_object* v___x_5865_; lean_object* v___x_5866_; 
v___x_5865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5866_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5863_, v___x_5865_);
return v___x_5866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object* v_self_5867_, lean_object* v_a_5868_){
_start:
{
lean_object* v_res_5869_; 
v_res_5869_ = l_Lasm_JS_Web_CountQueuingStrategy_size(v_self_5867_);
return v_res_5869_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Dom(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode_default = _init_l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode_default();
lean_mark_persistent(l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode_default);
l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode = _init_l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode();
lean_mark_persistent(l_Lasm_JS_Web_instInhabitedReadableStreamReaderMode);
l_Lasm_JS_Web_instInhabitedReadableStreamType_default = _init_l_Lasm_JS_Web_instInhabitedReadableStreamType_default();
lean_mark_persistent(l_Lasm_JS_Web_instInhabitedReadableStreamType_default);
l_Lasm_JS_Web_instInhabitedReadableStreamType = _init_l_Lasm_JS_Web_instInhabitedReadableStreamType();
lean_mark_persistent(l_Lasm_JS_Web_instInhabitedReadableStreamType);
l_Lasm_JS_Web_instFromJSReadableStreamReadResult = _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult();
lean_mark_persistent(l_Lasm_JS_Web_instFromJSReadableStreamReadResult);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
