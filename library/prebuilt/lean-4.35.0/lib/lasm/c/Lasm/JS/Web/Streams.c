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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(lean_object*, lean_object*, uint8_t);
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
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0_value;
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
static const lean_string_object l_Lasm_JS_Web_WritableStream_getWriter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getWriter"};
static const lean_object* l_Lasm_JS_Web_WritableStream_getWriter___closed__0 = (const lean_object*)&l_Lasm_JS_Web_WritableStream_getWriter___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object*, lean_object*);
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
v___x_2349_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_2345_, v___x_2348_, v___x_2343_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2349_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2349_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
v_a_2358_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2349_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2349_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object* v_asyncIterable_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_res_2368_; 
v_res_2368_ = l_Lasm_JS_Web_ReadableStream_from(v_asyncIterable_2366_);
return v_res_2368_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2369_, lean_object* v_bytes_2370_){
_start:
{
lean_object* v___x_2372_; uint8_t v___x_2373_; lean_object* v_val_2375_; lean_object* v___x_2378_; 
v___x_2372_ = lean_unsigned_to_nat(0u);
v___x_2373_ = 0;
v___x_2378_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2370_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2381_ = v___x_2378_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v___x_2378_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set_tag(v___x_2381_, 1);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2379_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
v_val_2375_ = v___x_2384_;
goto v___jp_2374_;
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
v_a_2387_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2378_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2378_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2392_; 
if (v_isShared_2390_ == 0)
{
lean_ctor_set_tag(v___x_2389_, 0);
v___x_2392_ = v___x_2389_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v_a_2387_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
v_val_2375_ = v___x_2392_;
goto v___jp_2374_;
}
}
}
v___jp_2374_:
{
lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2376_, 0, v_val_2375_);
v___x_2377_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2372_, v___x_2373_, v___x_2376_, v___f_2369_);
return v___x_2377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2395_, lean_object* v_bytes_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(v___f_2395_, v_bytes_2396_);
lean_dec_ref(v_bytes_2396_);
return v_res_2398_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object* v_x_2399_){
_start:
{
lean_object* v_val_2402_; 
if (lean_obj_tag(v_x_2399_) == 0)
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2412_; 
v_a_2404_ = lean_ctor_get(v_x_2399_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2406_ = v_x_2399_;
v_isShared_2407_ = v_isSharedCheck_2412_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v_x_2399_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2412_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
v___x_2409_ = v___x_2406_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2404_);
v___x_2409_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
lean_object* v___x_2410_; 
v___x_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
return v___x_2410_;
}
}
}
else
{
lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2421_; 
v_isSharedCheck_2421_ = !lean_is_exclusive(v_x_2399_);
if (v_isSharedCheck_2421_ == 0)
{
lean_object* v_unused_2422_; 
v_unused_2422_ = lean_ctor_get(v_x_2399_, 0);
lean_dec(v_unused_2422_);
v___x_2414_ = v_x_2399_;
v_isShared_2415_ = v_isSharedCheck_2421_;
goto v_resetjp_2413_;
}
else
{
lean_dec(v_x_2399_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2421_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2416_; lean_object* v_a_2417_; lean_object* v___x_2419_; 
v___x_2416_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_a_2417_);
lean_dec_ref(v___x_2416_);
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 0, v_a_2417_);
v___x_2419_ = v___x_2414_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2417_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
v_val_2402_ = v___x_2419_;
goto v___jp_2401_;
}
}
}
v___jp_2401_:
{
lean_object* v___x_2403_; 
v___x_2403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2403_, 0, v_val_2402_);
return v___x_2403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(v_x_2423_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object* v_failurePrefix_2426_, lean_object* v_x_2427_){
_start:
{
if (lean_obj_tag(v_x_2427_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2440_; 
v_a_2429_ = lean_ctor_get(v_x_2427_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_x_2427_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2431_ = v_x_2427_;
v_isShared_2432_ = v_isSharedCheck_2440_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v_x_2427_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2440_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2433_ = lean_io_error_to_string(v_a_2429_);
v___x_2434_ = lean_string_append(v_failurePrefix_2426_, v___x_2433_);
lean_dec_ref(v___x_2433_);
v___x_2435_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2434_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2435_);
v___x_2437_ = v___x_2431_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2438_; 
v___x_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2438_, 0, v___x_2437_);
return v___x_2438_;
}
}
}
else
{
lean_object* v___x_2441_; 
lean_dec_ref(v_failurePrefix_2426_);
v___x_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2441_, 0, v_x_2427_);
return v___x_2441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_failurePrefix_2442_, lean_object* v_x_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(v_failurePrefix_2442_, v_x_2443_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object* v___f_2446_, lean_object* v_x_2447_){
_start:
{
if (lean_obj_tag(v_x_2447_) == 0)
{
lean_object* v___x_2449_; 
lean_dec_ref(v___f_2446_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_x_2447_);
return v___x_2449_;
}
else
{
lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2461_; 
v_isSharedCheck_2461_ = !lean_is_exclusive(v_x_2447_);
if (v_isSharedCheck_2461_ == 0)
{
lean_object* v_unused_2462_; 
v_unused_2462_ = lean_ctor_get(v_x_2447_, 0);
lean_dec(v_unused_2462_);
v___x_2451_ = v_x_2447_;
v_isShared_2452_ = v_isSharedCheck_2461_;
goto v_resetjp_2450_;
}
else
{
lean_dec(v_x_2447_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2461_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; uint8_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2457_; 
v___x_2453_ = lean_unsigned_to_nat(0u);
v___x_2454_ = 0;
v___x_2455_ = lean_io_promise_new();
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2455_);
v___x_2457_ = v___x_2451_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2455_);
v___x_2457_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2458_, 0, v___x_2457_);
v___x_2459_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2453_, v___x_2454_, v___x_2458_, v___f_2446_);
return v___x_2459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object* v___f_2463_, lean_object* v_x_2464_, lean_object* v___y_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(v___f_2463_, v_x_2464_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object* v___f_2467_, lean_object* v_a_2468_, uint32_t v_op_2469_, uint64_t v_flags_2470_, lean_object* v_payload_2471_, lean_object* v_x_2472_){
_start:
{
if (lean_obj_tag(v_x_2472_) == 0)
{
lean_object* v___x_2474_; 
lean_dec_ref(v___f_2467_);
v___x_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2474_, 0, v_x_2472_);
return v___x_2474_;
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2495_; 
v_a_2475_ = lean_ctor_get(v_x_2472_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v_x_2472_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2477_ = v_x_2472_;
v_isShared_2478_ = v_isSharedCheck_2495_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v_x_2472_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2495_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
uint32_t v___x_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; lean_object* v_val_2483_; lean_object* v___x_2486_; 
v___x_2479_ = 0;
v___x_2480_ = lean_unsigned_to_nat(0u);
v___x_2481_ = 0;
v___x_2486_ = lasm_js_call_into(v_a_2468_, v_op_2469_, v___x_2479_, v_flags_2470_, v_a_2475_, v_payload_2471_);
lean_dec(v_a_2475_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; lean_object* v___x_2489_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 0, v_a_2487_);
v___x_2489_ = v___x_2477_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
v_val_2483_ = v___x_2489_;
goto v___jp_2482_;
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; 
v_a_2491_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2491_);
lean_dec_ref_known(v___x_2486_, 1);
if (v_isShared_2478_ == 0)
{
lean_ctor_set_tag(v___x_2477_, 0);
lean_ctor_set(v___x_2477_, 0, v_a_2491_);
v___x_2493_ = v___x_2477_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
v_val_2483_ = v___x_2493_;
goto v___jp_2482_;
}
}
v___jp_2482_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v_val_2483_);
v___x_2485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2480_, v___x_2481_, v___x_2484_, v___f_2467_);
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object* v___f_2496_, lean_object* v_a_2497_, lean_object* v_op_2498_, lean_object* v_flags_2499_, lean_object* v_payload_2500_, lean_object* v_x_2501_, lean_object* v___y_2502_){
_start:
{
uint32_t v_op_boxed_2503_; uint64_t v_flags_boxed_2504_; lean_object* v_res_2505_; 
v_op_boxed_2503_ = lean_unbox_uint32(v_op_2498_);
lean_dec(v_op_2498_);
v_flags_boxed_2504_ = lean_unbox_uint64(v_flags_2499_);
lean_dec_ref(v_flags_2499_);
v_res_2505_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(v___f_2496_, v_a_2497_, v_op_boxed_2503_, v_flags_boxed_2504_, v_payload_2500_, v_x_2501_);
lean_dec(v_payload_2500_);
lean_dec(v_a_2497_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object* v___x_2506_, uint8_t v___x_2507_, lean_object* v___f_2508_, lean_object* v_a_2509_, uint32_t v_op_2510_, uint64_t v_flags_2511_, lean_object* v_payload_2512_, lean_object* v_x_2513_){
_start:
{
lean_object* v_val_2516_; 
if (lean_obj_tag(v_x_2513_) == 0)
{
lean_object* v___x_2519_; 
lean_dec_ref(v___f_2508_);
lean_dec(v___x_2506_);
v___x_2519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2519_, 0, v_x_2513_);
return v___x_2519_;
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2534_; 
v_a_2520_ = lean_ctor_get(v_x_2513_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v_x_2513_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2522_ = v_x_2513_;
v_isShared_2523_ = v_isSharedCheck_2534_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v_x_2513_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2534_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
uint32_t v___x_2524_; lean_object* v___x_2525_; 
v___x_2524_ = 0;
v___x_2525_ = lasm_js_call_into(v_a_2509_, v_op_2510_, v___x_2524_, v_flags_2511_, v_a_2520_, v_payload_2512_);
lean_dec(v_a_2520_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2526_; lean_object* v___x_2528_; 
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2525_, 1);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v_a_2526_);
v___x_2528_ = v___x_2522_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2526_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
v_val_2516_ = v___x_2528_;
goto v___jp_2515_;
}
}
else
{
lean_object* v_a_2530_; lean_object* v___x_2532_; 
v_a_2530_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2530_);
lean_dec_ref_known(v___x_2525_, 1);
if (v_isShared_2523_ == 0)
{
lean_ctor_set_tag(v___x_2522_, 0);
lean_ctor_set(v___x_2522_, 0, v_a_2530_);
v___x_2532_ = v___x_2522_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v_val_2516_ = v___x_2532_;
goto v___jp_2515_;
}
}
}
}
v___jp_2515_:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2517_, 0, v_val_2516_);
v___x_2518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2506_, v___x_2507_, v___x_2517_, v___f_2508_);
return v___x_2518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v___x_2535_, lean_object* v___x_2536_, lean_object* v___f_2537_, lean_object* v_a_2538_, lean_object* v_op_2539_, lean_object* v_flags_2540_, lean_object* v_payload_2541_, lean_object* v_x_2542_, lean_object* v___y_2543_){
_start:
{
uint8_t v___x_952__boxed_2544_; uint32_t v_op_boxed_2545_; uint64_t v_flags_boxed_2546_; lean_object* v_res_2547_; 
v___x_952__boxed_2544_ = lean_unbox(v___x_2536_);
v_op_boxed_2545_ = lean_unbox_uint32(v_op_2539_);
lean_dec(v_op_2539_);
v_flags_boxed_2546_ = lean_unbox_uint64(v_flags_2540_);
lean_dec_ref(v_flags_2540_);
v_res_2547_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(v___x_2535_, v___x_952__boxed_2544_, v___f_2537_, v_a_2538_, v_op_boxed_2545_, v_flags_boxed_2546_, v_payload_2541_, v_x_2542_);
lean_dec(v_payload_2541_);
lean_dec(v_a_2538_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object* v_a_2548_, lean_object* v_x_2549_){
_start:
{
if (lean_obj_tag(v_x_2549_) == 0)
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2559_; 
v_a_2551_ = lean_ctor_get(v_x_2549_, 0);
v_isSharedCheck_2559_ = !lean_is_exclusive(v_x_2549_);
if (v_isSharedCheck_2559_ == 0)
{
v___x_2553_ = v_x_2549_;
v_isShared_2554_ = v_isSharedCheck_2559_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v_x_2549_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2559_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2557_; 
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
return v___x_2557_;
}
}
}
else
{
lean_object* v___x_2560_; 
lean_dec_ref_known(v_x_2549_, 1);
v___x_2560_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2548_);
return v___x_2560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_2561_, lean_object* v_x_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(v_a_2561_, v_x_2562_);
lean_dec(v_a_2561_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object* v_failurePrefix_2565_, uint32_t v_op_2566_, uint64_t v_flags_2567_, lean_object* v_payload_2568_, lean_object* v___f_2569_, lean_object* v___f_2570_, lean_object* v___f_2571_, lean_object* v_x_2572_){
_start:
{
if (lean_obj_tag(v_x_2572_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2582_; 
lean_dec_ref(v___f_2571_);
lean_dec_ref(v___f_2570_);
lean_dec_ref(v___f_2569_);
lean_dec(v_payload_2568_);
v_a_2574_ = lean_ctor_get(v_x_2572_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v_x_2572_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2576_ = v_x_2572_;
v_isShared_2577_ = v_isSharedCheck_2582_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v_x_2572_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2582_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
return v___x_2580_;
}
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2629_; 
v_a_2583_ = lean_ctor_get(v_x_2572_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v_x_2572_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2585_ = v_x_2572_;
v_isShared_2586_ = v_isSharedCheck_2629_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v_x_2572_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2629_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; 
v___x_2587_ = lean_string_utf8_byte_size(v_failurePrefix_2565_);
v___x_2588_ = lean_unsigned_to_nat(0u);
v___x_2589_ = lean_nat_dec_eq(v___x_2587_, v___x_2588_);
if (v___x_2589_ == 0)
{
lean_object* v___f_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___f_2594_; lean_object* v_val_2596_; lean_object* v___x_2601_; 
lean_dec_ref(v___f_2571_);
lean_inc(v_a_2583_);
v___f_2590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2590_, 0, v_a_2583_);
v___x_2591_ = lean_box(v___x_2589_);
v___x_2592_ = lean_box_uint32(v_op_2566_);
v___x_2593_ = lean_box_uint64(v_flags_2567_);
lean_inc(v_payload_2568_);
v___f_2594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2594_, 0, v___x_2588_);
lean_closure_set(v___f_2594_, 1, v___x_2591_);
lean_closure_set(v___f_2594_, 2, v___f_2590_);
lean_closure_set(v___f_2594_, 3, v_a_2583_);
lean_closure_set(v___f_2594_, 4, v___x_2592_);
lean_closure_set(v___f_2594_, 5, v___x_2593_);
lean_closure_set(v___f_2594_, 6, v_payload_2568_);
v___x_2601_ = l_Lasm_JS_Wire_encodeIO(v_payload_2568_);
lean_dec(v_payload_2568_);
if (lean_obj_tag(v___x_2601_) == 0)
{
lean_object* v_a_2602_; lean_object* v___x_2604_; 
v_a_2602_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2602_);
lean_dec_ref_known(v___x_2601_, 1);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v_a_2602_);
v___x_2604_ = v___x_2585_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
v_val_2596_ = v___x_2604_;
goto v___jp_2595_;
}
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; 
v_a_2606_ = lean_ctor_get(v___x_2601_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2601_, 1);
if (v_isShared_2586_ == 0)
{
lean_ctor_set_tag(v___x_2585_, 0);
lean_ctor_set(v___x_2585_, 0, v_a_2606_);
v___x_2608_ = v___x_2585_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2606_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
v_val_2596_ = v___x_2608_;
goto v___jp_2595_;
}
}
v___jp_2595_:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2597_, 0, v_val_2596_);
v___x_2598_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2588_, v___x_2589_, v___x_2597_, v___f_2594_);
v___x_2599_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2588_, v___x_2589_, v___x_2598_, v___f_2569_);
v___x_2600_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2588_, v___x_2589_, v___x_2599_, v___f_2570_);
return v___x_2600_;
}
}
else
{
lean_object* v___f_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___f_2613_; uint8_t v___x_2614_; lean_object* v_val_2616_; lean_object* v___x_2620_; 
lean_dec_ref(v___f_2570_);
lean_dec_ref(v___f_2569_);
lean_inc(v_a_2583_);
v___f_2610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2610_, 0, v_a_2583_);
v___x_2611_ = lean_box_uint32(v_op_2566_);
v___x_2612_ = lean_box_uint64(v_flags_2567_);
lean_inc(v_payload_2568_);
v___f_2613_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2613_, 0, v___f_2610_);
lean_closure_set(v___f_2613_, 1, v_a_2583_);
lean_closure_set(v___f_2613_, 2, v___x_2611_);
lean_closure_set(v___f_2613_, 3, v___x_2612_);
lean_closure_set(v___f_2613_, 4, v_payload_2568_);
v___x_2614_ = 0;
v___x_2620_ = l_Lasm_JS_Wire_encodeIO(v_payload_2568_);
lean_dec(v_payload_2568_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v_a_2621_; lean_object* v___x_2623_; 
v_a_2621_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2621_);
lean_dec_ref_known(v___x_2620_, 1);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 0, v_a_2621_);
v___x_2623_ = v___x_2585_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2621_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
v_val_2616_ = v___x_2623_;
goto v___jp_2615_;
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; 
v_a_2625_ = lean_ctor_get(v___x_2620_, 0);
lean_inc(v_a_2625_);
lean_dec_ref_known(v___x_2620_, 1);
if (v_isShared_2586_ == 0)
{
lean_ctor_set_tag(v___x_2585_, 0);
lean_ctor_set(v___x_2585_, 0, v_a_2625_);
v___x_2627_ = v___x_2585_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2625_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
v_val_2616_ = v___x_2627_;
goto v___jp_2615_;
}
}
v___jp_2615_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v_val_2616_);
v___x_2618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2588_, v___x_2614_, v___x_2617_, v___f_2613_);
v___x_2619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2588_, v___x_2614_, v___x_2618_, v___f_2571_);
return v___x_2619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_failurePrefix_2630_, lean_object* v_op_2631_, lean_object* v_flags_2632_, lean_object* v_payload_2633_, lean_object* v___f_2634_, lean_object* v___f_2635_, lean_object* v___f_2636_, lean_object* v_x_2637_, lean_object* v___y_2638_){
_start:
{
uint32_t v_op_boxed_2639_; uint64_t v_flags_boxed_2640_; lean_object* v_res_2641_; 
v_op_boxed_2639_ = lean_unbox_uint32(v_op_2631_);
lean_dec(v_op_2631_);
v_flags_boxed_2640_ = lean_unbox_uint64(v_flags_2632_);
lean_dec_ref(v_flags_2632_);
v_res_2641_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(v_failurePrefix_2630_, v_op_boxed_2639_, v_flags_boxed_2640_, v_payload_2633_, v___f_2634_, v___f_2635_, v___f_2636_, v_x_2637_);
lean_dec_ref(v_failurePrefix_2630_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2642_, lean_object* v_x_2643_){
_start:
{
if (lean_obj_tag(v_x_2643_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2653_; 
lean_dec_ref(v___f_2642_);
v_a_2645_ = lean_ctor_get(v_x_2643_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v_x_2643_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2647_ = v_x_2643_;
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v_x_2643_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2653_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
return v___x_2651_;
}
}
}
else
{
lean_object* v_a_2654_; lean_object* v___x_2655_; 
v_a_2654_ = lean_ctor_get(v_x_2643_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v_x_2643_, 1);
v___x_2655_ = lean_apply_2(v___f_2642_, v_a_2654_, lean_box(0));
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2656_, lean_object* v_x_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(v___f_2656_, v_x_2657_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t v_op_2665_, uint64_t v_flags_2666_, lean_object* v_payload_2667_, lean_object* v_failurePrefix_2668_){
_start:
{
lean_object* v___f_2670_; lean_object* v___f_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___f_2674_; lean_object* v___f_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; lean_object* v_val_2679_; lean_object* v___x_2682_; 
v___f_2670_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2668_);
v___f_2671_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2671_, 0, v_failurePrefix_2668_);
v___x_2672_ = lean_box_uint32(v_op_2665_);
v___x_2673_ = lean_box_uint64(v_flags_2666_);
v___f_2674_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2674_, 0, v_failurePrefix_2668_);
lean_closure_set(v___f_2674_, 1, v___x_2672_);
lean_closure_set(v___f_2674_, 2, v___x_2673_);
lean_closure_set(v___f_2674_, 3, v_payload_2667_);
lean_closure_set(v___f_2674_, 4, v___f_2671_);
lean_closure_set(v___f_2674_, 5, v___f_2670_);
lean_closure_set(v___f_2674_, 6, v___f_2670_);
v___f_2675_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2675_, 0, v___f_2674_);
v___x_2676_ = lean_unsigned_to_nat(0u);
v___x_2677_ = 0;
v___x_2682_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2690_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2685_ = v___x_2682_;
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2682_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2690_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set_tag(v___x_2685_, 1);
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
v_val_2679_ = v___x_2688_;
goto v___jp_2678_;
}
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v_a_2691_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2682_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2682_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
lean_ctor_set_tag(v___x_2693_, 0);
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
v_val_2679_ = v___x_2696_;
goto v___jp_2678_;
}
}
}
v___jp_2678_:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_val_2679_);
v___x_2681_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2676_, v___x_2677_, v___x_2680_, v___f_2675_);
return v___x_2681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object* v_op_2699_, lean_object* v_flags_2700_, lean_object* v_payload_2701_, lean_object* v_failurePrefix_2702_, lean_object* v_a_2703_){
_start:
{
uint32_t v_op_boxed_2704_; uint64_t v_flags_boxed_2705_; lean_object* v_res_2706_; 
v_op_boxed_2704_ = lean_unbox_uint32(v_op_2699_);
lean_dec(v_op_2699_);
v_flags_boxed_2705_ = lean_unbox_uint64(v_flags_2700_);
lean_dec_ref(v_flags_2700_);
v_res_2706_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_boxed_2704_, v_flags_boxed_2705_, v_payload_2701_, v_failurePrefix_2702_);
return v_res_2706_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2707_; uint8_t v___x_2708_; uint64_t v___x_2709_; 
v___x_2707_ = 8ULL;
v___x_2708_ = 0;
v___x_2709_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_2708_, v___x_2707_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object* v_o_2710_, lean_object* v_name_2711_, lean_object* v_args_2712_){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; uint32_t v___x_2717_; uint64_t v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2715_, 0, v_o_2710_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_name_2711_);
v___x_2717_ = 205;
v___x_2718_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0);
v___x_2719_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_args_2712_);
v___x_2720_ = lean_unsigned_to_nat(3u);
v___x_2721_ = lean_mk_empty_array_with_capacity(v___x_2720_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2715_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2716_);
v___x_2724_ = lean_array_push(v___x_2723_, v___x_2719_);
v___x_2725_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
v___x_2726_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_2717_, v___x_2718_, v___x_2725_, v___x_2714_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object* v_o_2727_, lean_object* v_name_2728_, lean_object* v_args_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_o_2727_, v_name_2728_, v_args_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object* v_self_2732_, lean_object* v_reason_2733_){
_start:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2735_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2736_ = lean_unsigned_to_nat(1u);
v___x_2737_ = lean_mk_empty_array_with_capacity(v___x_2736_);
v___x_2738_ = lean_array_push(v___x_2737_, v_reason_2733_);
v___x_2739_ = l_Lasm_JS_Web_Support_args(v___x_2738_);
v___x_2740_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2732_, v___x_2735_, v___x_2739_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object* v_self_2741_, lean_object* v_reason_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Lasm_JS_Web_ReadableStream_cancel(v_self_2741_, v_reason_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object* v_context_2745_, uint32_t v_op_2746_, uint64_t v_flags_2747_, lean_object* v_payload_2748_, lean_object* v_failurePrefix_2749_){
_start:
{
lean_object* v___x_2751_; 
v___x_2751_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_2746_, v_flags_2747_, v_payload_2748_, v_failurePrefix_2749_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object* v_context_2752_, lean_object* v_op_2753_, lean_object* v_flags_2754_, lean_object* v_payload_2755_, lean_object* v_failurePrefix_2756_, lean_object* v_a_2757_){
_start:
{
uint32_t v_op_boxed_2758_; uint64_t v_flags_boxed_2759_; lean_object* v_res_2760_; 
v_op_boxed_2758_ = lean_unbox_uint32(v_op_2753_);
lean_dec(v_op_2753_);
v_flags_boxed_2759_ = lean_unbox_uint64(v_flags_2754_);
lean_dec_ref(v_flags_2754_);
v_res_2760_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(v_context_2752_, v_op_boxed_2758_, v_flags_boxed_2759_, v_payload_2755_, v_failurePrefix_2756_);
lean_dec_ref(v_context_2752_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object* v_x_2761_){
_start:
{
if (lean_obj_tag(v_x_2761_) == 0)
{
lean_object* v___x_2762_; 
v___x_2762_ = lean_box(0);
return v___x_2762_;
}
else
{
lean_object* v___x_2763_; 
v___x_2763_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_2763_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object* v_x_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_x_2764_);
lean_dec(v_x_2764_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object* v_x_2766_){
_start:
{
if (lean_obj_tag(v_x_2766_) == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_box(0);
return v___x_2767_;
}
else
{
lean_object* v_val_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v_val_2768_ = lean_ctor_get(v_x_2766_, 0);
v___x_2769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_2770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_val_2768_);
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = lean_unsigned_to_nat(1u);
v___x_2773_ = lean_mk_empty_array_with_capacity(v___x_2772_);
v___x_2774_ = lean_array_push(v___x_2773_, v___x_2771_);
v___x_2775_ = l_Lasm_JS_Web_Support_fields(v___x_2774_);
lean_dec_ref(v___x_2774_);
return v___x_2775_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object* v_x_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_x_2776_);
lean_dec(v_x_2776_);
return v_res_2777_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_2778_; uint64_t v___x_2779_; 
v___x_2778_ = 1;
v___x_2779_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t v_await_2780_, uint64_t v_extra_2781_){
_start:
{
uint64_t v___x_2782_; uint64_t v___y_2784_; 
v___x_2782_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
if (v_await_2780_ == 0)
{
uint64_t v___x_2787_; 
v___x_2787_ = 0ULL;
v___y_2784_ = v___x_2787_;
goto v___jp_2783_;
}
else
{
uint64_t v___x_2788_; 
v___x_2788_ = 2ULL;
v___y_2784_ = v___x_2788_;
goto v___jp_2783_;
}
v___jp_2783_:
{
uint64_t v___x_2785_; uint64_t v___x_2786_; 
v___x_2785_ = lean_uint64_lor(v___x_2782_, v___y_2784_);
v___x_2786_ = lean_uint64_lor(v___x_2785_, v_extra_2781_);
return v___x_2786_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object* v_await_2789_, lean_object* v_extra_2790_){
_start:
{
uint8_t v_await_boxed_2791_; uint64_t v_extra_boxed_2792_; uint64_t v_res_2793_; lean_object* v_r_2794_; 
v_await_boxed_2791_ = lean_unbox(v_await_2789_);
v_extra_boxed_2792_ = lean_unbox_uint64(v_extra_2790_);
lean_dec_ref(v_extra_2790_);
v_res_2793_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v_await_boxed_2791_, v_extra_boxed_2792_);
v_r_2794_ = lean_box_uint64(v_res_2793_);
return v_r_2794_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2795_; uint8_t v___x_2796_; uint64_t v___x_2797_; 
v___x_2795_ = 8ULL;
v___x_2796_ = 0;
v___x_2797_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2796_, v___x_2795_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object* v_o_2799_, lean_object* v_name_2800_, lean_object* v_args_2801_){
_start:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint64_t v___x_2806_; lean_object* v___x_2807_; 
v___x_2803_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2804_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2804_, 0, v_o_2799_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
lean_inc_ref(v_name_2800_);
v___x_2805_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2805_, 0, v_name_2800_);
v___x_2806_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0);
v___x_2807_ = l_Lasm_JS_Value_invokeRaw(v___x_2804_, v___x_2805_, v_args_2801_, v___x_2806_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2810_ = lean_string_append(v___x_2809_, v_name_2800_);
lean_dec_ref(v_name_2800_);
v___x_2811_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2810_, v_a_2808_);
lean_dec(v_a_2808_);
lean_dec_ref(v___x_2810_);
return v___x_2811_;
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec_ref(v_name_2800_);
v_a_2812_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2807_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2807_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object* v_o_2820_, lean_object* v_name_2821_, lean_object* v_args_2822_, lean_object* v_a_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2820_, v_name_2821_, v_args_2822_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object* v_self_2826_, lean_object* v_options_2827_){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2829_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_getReader___closed__0));
v___x_2830_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_options_2827_);
v___x_2831_ = lean_unsigned_to_nat(1u);
v___x_2832_ = lean_mk_empty_array_with_capacity(v___x_2831_);
v___x_2833_ = lean_array_push(v___x_2832_, v___x_2830_);
v___x_2834_ = l_Lasm_JS_Web_Support_args(v___x_2833_);
v___x_2835_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2826_, v___x_2829_, v___x_2834_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object* v_self_2836_, lean_object* v_options_2837_, lean_object* v_a_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_Lasm_JS_Web_ReadableStream_getReader(v_self_2836_, v_options_2837_);
lean_dec(v_options_2837_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object* v_x_2840_){
_start:
{
if (lean_obj_tag(v_x_2840_) == 0)
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_box(0);
return v___x_2841_;
}
else
{
lean_object* v_val_2842_; lean_object* v_preventClose_2843_; lean_object* v_preventAbort_2844_; lean_object* v_preventCancel_2845_; lean_object* v_signal_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v_val_2842_ = lean_ctor_get(v_x_2840_, 0);
v_preventClose_2843_ = lean_ctor_get(v_val_2842_, 0);
v_preventAbort_2844_ = lean_ctor_get(v_val_2842_, 1);
v_preventCancel_2845_ = lean_ctor_get(v_val_2842_, 2);
v_signal_2846_ = lean_ctor_get(v_val_2842_, 3);
v___x_2847_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
v___x_2848_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventClose_2843_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_2851_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventAbort_2844_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_2854_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventCancel_2845_);
v___x_2855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2853_);
lean_ctor_set(v___x_2855_, 1, v___x_2854_);
v___x_2856_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_2857_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2846_);
v___x_2858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = lean_unsigned_to_nat(4u);
v___x_2860_ = lean_mk_empty_array_with_capacity(v___x_2859_);
v___x_2861_ = lean_array_push(v___x_2860_, v___x_2849_);
v___x_2862_ = lean_array_push(v___x_2861_, v___x_2852_);
v___x_2863_ = lean_array_push(v___x_2862_, v___x_2855_);
v___x_2864_ = lean_array_push(v___x_2863_, v___x_2858_);
v___x_2865_ = l_Lasm_JS_Web_Support_fields(v___x_2864_);
lean_dec_ref(v___x_2864_);
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object* v_x_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_x_2866_);
lean_dec(v_x_2866_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object* v_self_2869_, lean_object* v_transform_2870_, lean_object* v_options_2871_){
_start:
{
lean_object* v_readable_2873_; lean_object* v_writable_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2914_; 
v_readable_2873_ = lean_ctor_get(v_transform_2870_, 0);
v_writable_2874_ = lean_ctor_get(v_transform_2870_, 1);
v_isSharedCheck_2914_ = !lean_is_exclusive(v_transform_2870_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2876_ = v_transform_2870_;
v_isShared_2877_ = v_isSharedCheck_2914_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_writable_2874_);
lean_inc(v_readable_2873_);
lean_dec(v_transform_2870_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2914_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2882_; 
v___x_2878_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0));
v___x_2879_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_2880_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_2877_ == 0)
{
lean_ctor_set_tag(v___x_2876_, 9);
lean_ctor_set(v___x_2876_, 1, v___x_2880_);
v___x_2882_ = v___x_2876_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_readable_2873_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v___x_2880_);
v___x_2882_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2879_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
v___x_2884_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_2885_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2885_, 0, v_writable_2874_);
lean_ctor_set(v___x_2885_, 1, v___x_2880_);
v___x_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2884_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = lean_unsigned_to_nat(2u);
v___x_2888_ = lean_mk_empty_array_with_capacity(v___x_2887_);
lean_inc_ref(v___x_2888_);
v___x_2889_ = lean_array_push(v___x_2888_, v___x_2883_);
v___x_2890_ = lean_array_push(v___x_2889_, v___x_2886_);
v___x_2891_ = l_Lasm_JS_Web_Support_fields(v___x_2890_);
lean_dec_ref(v___x_2890_);
v___x_2892_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2871_);
v___x_2893_ = lean_array_push(v___x_2888_, v___x_2891_);
v___x_2894_ = lean_array_push(v___x_2893_, v___x_2892_);
v___x_2895_ = l_Lasm_JS_Web_Support_args(v___x_2894_);
v___x_2896_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2869_, v___x_2878_, v___x_2895_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2896_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2896_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
else
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2912_; 
v_a_2905_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2907_ = v___x_2896_;
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v___x_2896_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2912_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2910_; 
if (v_isShared_2908_ == 0)
{
v___x_2910_ = v___x_2907_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v_a_2905_);
v___x_2910_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
return v___x_2910_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object* v_self_2915_, lean_object* v_transform_2916_, lean_object* v_options_2917_, lean_object* v_a_2918_){
_start:
{
lean_object* v_res_2919_; 
v_res_2919_ = l_Lasm_JS_Web_ReadableStream_pipeThrough(v_self_2915_, v_transform_2916_, v_options_2917_);
lean_dec(v_options_2917_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object* v_self_2921_, lean_object* v_destination_2922_, lean_object* v_options_2923_){
_start:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2925_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0));
v___x_2926_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2927_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2927_, 0, v_destination_2922_);
lean_ctor_set(v___x_2927_, 1, v___x_2926_);
v___x_2928_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2923_);
v___x_2929_ = lean_unsigned_to_nat(2u);
v___x_2930_ = lean_mk_empty_array_with_capacity(v___x_2929_);
v___x_2931_ = lean_array_push(v___x_2930_, v___x_2927_);
v___x_2932_ = lean_array_push(v___x_2931_, v___x_2928_);
v___x_2933_ = l_Lasm_JS_Web_Support_args(v___x_2932_);
v___x_2934_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2921_, v___x_2925_, v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object* v_self_2935_, lean_object* v_destination_2936_, lean_object* v_options_2937_, lean_object* v_a_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Lasm_JS_Web_ReadableStream_pipeTo(v_self_2935_, v_destination_2936_, v_options_2937_);
lean_dec(v_options_2937_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2942_, size_t v_i_2943_, lean_object* v_bs_2944_){
_start:
{
uint8_t v___x_2945_; 
v___x_2945_ = lean_usize_dec_lt(v_i_2943_, v_sz_2942_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_bs_2944_);
return v___x_2946_;
}
else
{
lean_object* v_v_2947_; 
v_v_2947_ = lean_array_uget_borrowed(v_bs_2944_, v_i_2943_);
if (lean_obj_tag(v_v_2947_) == 9)
{
lean_object* v_value_2948_; lean_object* v___x_2949_; lean_object* v_bs_x27_2950_; size_t v___x_2951_; size_t v___x_2952_; lean_object* v___x_2953_; 
v_value_2948_ = lean_ctor_get(v_v_2947_, 0);
lean_inc(v_value_2948_);
v___x_2949_ = lean_unsigned_to_nat(0u);
v_bs_x27_2950_ = lean_array_uset(v_bs_2944_, v_i_2943_, v___x_2949_);
v___x_2951_ = ((size_t)1ULL);
v___x_2952_ = lean_usize_add(v_i_2943_, v___x_2951_);
v___x_2953_ = lean_array_uset(v_bs_x27_2950_, v_i_2943_, v_value_2948_);
v_i_2943_ = v___x_2952_;
v_bs_2944_ = v___x_2953_;
goto _start;
}
else
{
lean_object* v___x_2955_; 
lean_dec_ref(v_bs_2944_);
v___x_2955_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2955_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2956_, lean_object* v_i_2957_, lean_object* v_bs_2958_){
_start:
{
size_t v_sz_boxed_2959_; size_t v_i_boxed_2960_; lean_object* v_res_2961_; 
v_sz_boxed_2959_ = lean_unbox_usize(v_sz_2956_);
lean_dec(v_sz_2956_);
v_i_boxed_2960_ = lean_unbox_usize(v_i_2957_);
lean_dec(v_i_2957_);
v_res_2961_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2959_, v_i_boxed_2960_, v_bs_2958_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object* v_context_2966_, lean_object* v_d_2967_){
_start:
{
lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2976_; lean_object* v_received_2977_; lean_object* v___y_2996_; lean_object* v_a_2999_; 
if (lean_obj_tag(v_d_2967_) == 7)
{
lean_object* v_items_3023_; size_t v_sz_3024_; size_t v___x_3025_; lean_object* v___x_3026_; 
v_items_3023_ = lean_ctor_get(v_d_2967_, 0);
v_sz_3024_ = lean_array_size(v_items_3023_);
v___x_3025_ = ((size_t)0ULL);
lean_inc_ref(v_items_3023_);
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_3024_, v___x_3025_, v_items_3023_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; uint8_t v___x_3031_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
lean_dec_ref_known(v___x_3026_, 1);
v___x_3028_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3));
v___x_3029_ = lean_string_utf8_byte_size(v_a_3027_);
v___x_3030_ = lean_unsigned_to_nat(0u);
v___x_3031_ = lean_nat_dec_eq(v___x_3029_, v___x_3030_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3033_ = lean_string_append(v___x_3032_, v_a_3027_);
lean_dec(v_a_3027_);
v___x_3034_ = lean_string_append(v___x_3028_, v___x_3033_);
lean_dec_ref(v___x_3033_);
v_a_2999_ = v___x_3034_;
goto v___jp_2998_;
}
else
{
lean_dec(v_a_3027_);
v_a_2999_ = v___x_3028_;
goto v___jp_2998_;
}
}
else
{
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3035_; 
v_a_3035_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3026_, 1);
v_a_2999_ = v_a_3035_;
goto v___jp_2998_;
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec_ref_known(v_d_2967_, 1);
v_a_3036_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3026_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3026_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 0);
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v___x_3044_; 
v___x_3044_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v_a_2999_ = v___x_3044_;
goto v___jp_2998_;
}
v___jp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = lean_string_append(v___y_2970_, v___y_2971_);
lean_dec_ref(v___y_2971_);
v___x_2973_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
v___x_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
v___jp_2975_:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2979_ = lean_string_append(v___x_2978_, v_context_2966_);
v___x_2980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2981_ = lean_string_append(v___x_2979_, v___x_2980_);
v___x_2982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0));
v___x_2983_ = lean_string_append(v___x_2981_, v___x_2982_);
v___x_2984_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2985_ = lean_string_append(v___x_2983_, v___x_2984_);
v___x_2986_ = lean_string_append(v___x_2985_, v_received_2977_);
lean_dec_ref(v_received_2977_);
v___x_2987_ = lean_string_utf8_byte_size(v___y_2976_);
v___x_2988_ = lean_unsigned_to_nat(0u);
v___x_2989_ = lean_nat_dec_eq(v___x_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2990_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_2991_ = lean_string_append(v___x_2990_, v___y_2976_);
lean_dec_ref(v___y_2976_);
v___x_2992_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_2993_ = lean_string_append(v___x_2991_, v___x_2992_);
v___y_2970_ = v___x_2986_;
v___y_2971_ = v___x_2993_;
goto v___jp_2969_;
}
else
{
lean_object* v___x_2994_; 
lean_dec_ref(v___y_2976_);
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_2970_ = v___x_2986_;
v___y_2971_ = v___x_2994_;
goto v___jp_2969_;
}
}
v___jp_2995_:
{
lean_object* v___x_2997_; 
v___x_2997_ = l_Lasm_JS_Data_describe(v_d_2967_);
v___y_2976_ = v___y_2996_;
v_received_2977_ = v___x_2997_;
goto v___jp_2975_;
}
v___jp_2998_:
{
if (lean_obj_tag(v_d_2967_) == 9)
{
lean_object* v_value_3000_; lean_object* v_description_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v_value_3000_ = lean_ctor_get(v_d_2967_, 0);
v_description_3001_ = lean_ctor_get(v_d_2967_, 1);
v___x_3002_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3003_ = lean_string_dec_eq(v_description_3001_, v___x_3002_);
if (v___x_3003_ == 0)
{
v___y_2996_ = v_a_2999_;
goto v___jp_2995_;
}
else
{
lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3020_; 
lean_inc(v_value_3000_);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_d_2967_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; lean_object* v_unused_3022_; 
v_unused_3021_ = lean_ctor_get(v_d_2967_, 1);
lean_dec(v_unused_3021_);
v_unused_3022_ = lean_ctor_get(v_d_2967_, 0);
lean_dec(v_unused_3022_);
v___x_3005_ = v_d_2967_;
v_isShared_3006_ = v_isSharedCheck_3020_;
goto v_resetjp_3004_;
}
else
{
lean_dec(v_d_2967_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3020_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
uint32_t v___x_3007_; uint64_t v___x_3008_; lean_object* v___x_3010_; 
v___x_3007_ = 206;
v___x_3008_ = 0ULL;
lean_inc(v_value_3000_);
if (v_isShared_3006_ == 0)
{
lean_ctor_set(v___x_3005_, 1, v___x_3002_);
v___x_3010_ = v___x_3005_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_value_3000_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v___x_3002_);
v___x_3010_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
uint32_t v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = lasm_js_value_handle(v_value_3000_);
lean_dec(v_value_3000_);
v___x_3012_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3007_, v___x_3008_, v___x_3010_, v___x_3011_);
lean_dec_ref(v___x_3010_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; uint8_t v___x_3014_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3012_, 1);
v___x_3014_ = lean_string_validate_utf8(v_a_3013_);
if (v___x_3014_ == 0)
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
lean_dec(v_a_3013_);
v___x_3015_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3016_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3015_);
v___y_2976_ = v_a_2999_;
v_received_2977_ = v___x_3016_;
goto v___jp_2975_;
}
else
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_string_from_utf8_unchecked(v_a_3013_);
v___y_2976_ = v_a_2999_;
v_received_2977_ = v___x_3017_;
goto v___jp_2975_;
}
}
else
{
lean_object* v___x_3018_; 
lean_dec_ref_known(v___x_3012_, 1);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_2976_ = v_a_2999_;
v_received_2977_ = v___x_3018_;
goto v___jp_2975_;
}
}
}
}
}
else
{
v___y_2996_ = v_a_2999_;
goto v___jp_2995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3045_, lean_object* v_d_3046_, lean_object* v_a_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3045_, v_d_3046_);
lean_dec_ref(v_context_3045_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object* v_context_3049_, lean_object* v_bytes_3050_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3050_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3054_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3052_, 1);
v___x_3054_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3049_, v_a_3053_);
return v___x_3054_;
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
v_a_3055_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3052_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3052_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object* v_context_3063_, lean_object* v_bytes_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v_context_3063_, v_bytes_3064_);
lean_dec_ref(v_bytes_3064_);
lean_dec_ref(v_context_3063_);
return v_res_3066_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t v_await_3067_, uint64_t v_extra_3068_){
_start:
{
uint64_t v___x_3069_; uint64_t v___y_3071_; 
v___x_3069_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3067_ == 0)
{
uint64_t v___x_3074_; 
v___x_3074_ = 0ULL;
v___y_3071_ = v___x_3074_;
goto v___jp_3070_;
}
else
{
uint64_t v___x_3075_; 
v___x_3075_ = 2ULL;
v___y_3071_ = v___x_3075_;
goto v___jp_3070_;
}
v___jp_3070_:
{
uint64_t v___x_3072_; uint64_t v___x_3073_; 
v___x_3072_ = lean_uint64_lor(v___x_3069_, v___y_3071_);
v___x_3073_ = lean_uint64_lor(v___x_3072_, v_extra_3068_);
return v___x_3073_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object* v_await_3076_, lean_object* v_extra_3077_){
_start:
{
uint8_t v_await_boxed_3078_; uint64_t v_extra_boxed_3079_; uint64_t v_res_3080_; lean_object* v_r_3081_; 
v_await_boxed_3078_ = lean_unbox(v_await_3076_);
v_extra_boxed_3079_ = lean_unbox_uint64(v_extra_3077_);
lean_dec_ref(v_extra_3077_);
v_res_3080_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v_await_boxed_3078_, v_extra_boxed_3079_);
v_r_3081_ = lean_box_uint64(v_res_3080_);
return v_r_3081_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3082_; uint8_t v___x_3083_; uint64_t v___x_3084_; 
v___x_3082_ = 8ULL;
v___x_3083_ = 0;
v___x_3084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v___x_3083_, v___x_3082_);
return v___x_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object* v_o_3085_, lean_object* v_name_3086_, lean_object* v_args_3087_){
_start:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; uint64_t v___x_3092_; lean_object* v___x_3093_; 
v___x_3089_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3090_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3090_, 0, v_o_3085_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
lean_inc_ref(v_name_3086_);
v___x_3091_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3091_, 0, v_name_3086_);
v___x_3092_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0);
v___x_3093_ = l_Lasm_JS_Value_invokeRaw(v___x_3090_, v___x_3091_, v_args_3087_, v___x_3092_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
lean_inc(v_a_3094_);
lean_dec_ref_known(v___x_3093_, 1);
v___x_3095_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3096_ = lean_string_append(v___x_3095_, v_name_3086_);
lean_dec_ref(v_name_3086_);
v___x_3097_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v___x_3096_, v_a_3094_);
lean_dec(v_a_3094_);
lean_dec_ref(v___x_3096_);
return v___x_3097_;
}
else
{
lean_object* v_a_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
lean_dec_ref(v_name_3086_);
v_a_3098_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v___x_3093_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_a_3098_);
lean_dec(v___x_3093_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_a_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object* v_o_3106_, lean_object* v_name_3107_, lean_object* v_args_3108_, lean_object* v_a_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_o_3106_, v_name_3107_, v_args_3108_);
return v_res_3110_;
}
}
static lean_object* _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2(void){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__1));
v___x_3115_ = l_Lasm_JS_Web_Support_args(v___x_3114_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object* v_self_3116_){
_start:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__0));
v___x_3119_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3120_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_self_3116_, v___x_3118_, v___x_3119_);
return v___x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object* v_self_3121_, lean_object* v_a_3122_){
_start:
{
lean_object* v_res_3123_; 
v_res_3123_ = l_Lasm_JS_Web_ReadableStream_tee(v_self_3121_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object* v_context_3124_, lean_object* v_d_3125_){
_start:
{
lean_object* v___y_3128_; lean_object* v___y_3129_; 
if (lean_obj_tag(v_d_3125_) == 9)
{
lean_object* v_value_3133_; lean_object* v___x_3134_; 
v_value_3133_ = lean_ctor_get(v_d_3125_, 0);
lean_inc(v_value_3133_);
lean_dec_ref_known(v_d_3125_, 2);
v___x_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3134_, 0, v_value_3133_);
return v___x_3134_;
}
else
{
lean_object* v___x_3135_; lean_object* v_received_3137_; 
v___x_3135_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3125_) == 9)
{
lean_object* v_value_3151_; lean_object* v_description_3152_; uint8_t v___x_3153_; 
v_value_3151_ = lean_ctor_get(v_d_3125_, 0);
v_description_3152_ = lean_ctor_get(v_d_3125_, 1);
v___x_3153_ = lean_string_dec_eq(v_description_3152_, v___x_3135_);
if (v___x_3153_ == 0)
{
goto v___jp_3149_;
}
else
{
uint32_t v___x_3154_; uint64_t v___x_3155_; lean_object* v___x_3156_; uint32_t v___x_3157_; lean_object* v___x_3158_; 
lean_inc_n(v_value_3151_, 2);
lean_dec_ref_known(v_d_3125_, 2);
v___x_3154_ = 206;
v___x_3155_ = 0ULL;
v___x_3156_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3156_, 0, v_value_3151_);
lean_ctor_set(v___x_3156_, 1, v___x_3135_);
v___x_3157_ = lasm_js_value_handle(v_value_3151_);
lean_dec(v_value_3151_);
v___x_3158_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3154_, v___x_3155_, v___x_3156_, v___x_3157_);
lean_dec_ref_known(v___x_3156_, 2);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_object* v_a_3159_; uint8_t v___x_3160_; 
v_a_3159_ = lean_ctor_get(v___x_3158_, 0);
lean_inc(v_a_3159_);
lean_dec_ref_known(v___x_3158_, 1);
v___x_3160_ = lean_string_validate_utf8(v_a_3159_);
if (v___x_3160_ == 0)
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
lean_dec(v_a_3159_);
v___x_3161_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3162_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3161_);
v_received_3137_ = v___x_3162_;
goto v___jp_3136_;
}
else
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_string_from_utf8_unchecked(v_a_3159_);
v_received_3137_ = v___x_3163_;
goto v___jp_3136_;
}
}
else
{
lean_object* v___x_3164_; 
lean_dec_ref_known(v___x_3158_, 1);
v___x_3164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3137_ = v___x_3164_;
goto v___jp_3136_;
}
}
}
else
{
goto v___jp_3149_;
}
v___jp_3136_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; uint8_t v___x_3147_; 
v___x_3138_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3139_ = lean_string_append(v___x_3138_, v_context_3124_);
v___x_3140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3141_ = lean_string_append(v___x_3139_, v___x_3140_);
v___x_3142_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0));
v___x_3143_ = lean_string_append(v___x_3141_, v___x_3142_);
v___x_3144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3145_ = lean_string_append(v___x_3143_, v___x_3144_);
v___x_3146_ = lean_string_append(v___x_3145_, v_received_3137_);
lean_dec_ref(v_received_3137_);
v___x_3147_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3147_ == 0)
{
lean_object* v___x_3148_; 
v___x_3148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3128_ = v___x_3146_;
v___y_3129_ = v___x_3148_;
goto v___jp_3127_;
}
else
{
v___y_3128_ = v___x_3146_;
v___y_3129_ = v___x_3135_;
goto v___jp_3127_;
}
}
v___jp_3149_:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Lasm_JS_Data_describe(v_d_3125_);
v_received_3137_ = v___x_3150_;
goto v___jp_3136_;
}
}
v___jp_3127_:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3130_ = lean_string_append(v___y_3128_, v___y_3129_);
v___x_3131_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
v___x_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object* v_context_3165_, lean_object* v_d_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v_context_3165_, v_d_3166_);
lean_dec_ref(v_context_3165_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object* v_b_3169_, lean_object* v_args_3170_, uint8_t v_await_3171_){
_start:
{
uint64_t v___y_3174_; uint64_t v___y_3175_; uint64_t v___x_3218_; uint64_t v___y_3220_; 
v___x_3218_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3171_ == 0)
{
uint64_t v___x_3225_; 
v___x_3225_ = 0ULL;
v___y_3220_ = v___x_3225_;
goto v___jp_3219_;
}
else
{
uint64_t v___x_3226_; 
v___x_3226_ = 2ULL;
v___y_3220_ = v___x_3226_;
goto v___jp_3219_;
}
v___jp_3173_:
{
uint64_t v_flags_3176_; uint32_t v___x_3177_; lean_object* v___x_3178_; uint32_t v___x_3179_; lean_object* v___x_3180_; 
v_flags_3176_ = lean_uint64_lor(v___y_3174_, v___y_3175_);
v___x_3177_ = 214;
v___x_3178_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3169_, v_args_3170_);
v___x_3179_ = 0;
v___x_3180_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3177_, v_flags_3176_, v___x_3178_, v___x_3179_);
lean_dec(v___x_3178_);
if (lean_obj_tag(v___x_3180_) == 0)
{
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_object* v_a_3181_; lean_object* v___x_3182_; 
v_a_3181_ = lean_ctor_get(v___x_3180_, 0);
lean_inc(v_a_3181_);
lean_dec_ref_known(v___x_3180_, 1);
v___x_3182_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3181_);
lean_dec(v_a_3181_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
lean_inc(v_a_3183_);
lean_dec_ref_known(v___x_3182_, 1);
v___x_3184_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3169_);
v___x_3185_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v___x_3184_, v_a_3183_);
lean_dec_ref(v___x_3184_);
return v___x_3185_;
}
else
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3193_; 
v_a_3186_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3188_ = v___x_3182_;
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3182_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3193_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3191_; 
if (v_isShared_3189_ == 0)
{
v___x_3191_ = v___x_3188_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_a_3186_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
}
else
{
lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
v_a_3194_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___x_3180_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___x_3180_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set_tag(v___x_3196_, 1);
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3217_; 
v_a_3202_ = lean_ctor_get(v___x_3180_, 0);
v_isSharedCheck_3217_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3217_ == 0)
{
v___x_3204_ = v___x_3180_;
v_isShared_3205_ = v_isSharedCheck_3217_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3180_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3217_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3215_; 
v___x_3206_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3207_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3169_);
v___x_3208_ = lean_string_append(v___x_3206_, v___x_3207_);
lean_dec_ref(v___x_3207_);
v___x_3209_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3210_ = lean_string_append(v___x_3208_, v___x_3209_);
v___x_3211_ = lean_io_error_to_string(v_a_3202_);
v___x_3212_ = lean_string_append(v___x_3210_, v___x_3211_);
lean_dec_ref(v___x_3211_);
v___x_3213_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3213_);
v___x_3215_ = v___x_3204_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3213_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
}
v___jp_3219_:
{
uint8_t v_construct_3221_; uint64_t v___x_3222_; 
v_construct_3221_ = lean_ctor_get_uint8(v_b_3169_, sizeof(void*)*4);
v___x_3222_ = lean_uint64_lor(v___x_3218_, v___y_3220_);
if (v_construct_3221_ == 0)
{
uint64_t v___x_3223_; 
v___x_3223_ = 0ULL;
v___y_3174_ = v___x_3222_;
v___y_3175_ = v___x_3223_;
goto v___jp_3173_;
}
else
{
uint64_t v___x_3224_; 
v___x_3224_ = 4ULL;
v___y_3174_ = v___x_3222_;
v___y_3175_ = v___x_3224_;
goto v___jp_3173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object* v_b_3227_, lean_object* v_args_3228_, lean_object* v_await_3229_, lean_object* v_a_3230_){
_start:
{
uint8_t v_await_boxed_3231_; lean_object* v_res_3232_; 
v_await_boxed_3231_ = lean_unbox(v_await_3229_);
v_res_3232_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v_b_3227_, v_args_3228_, v_await_boxed_3231_);
lean_dec_ref(v_b_3227_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object* v_stream_3241_){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; lean_object* v___x_3251_; 
v___x_3243_ = lean_unsigned_to_nat(1u);
v___x_3244_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2));
v___x_3245_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3246_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3246_, 0, v_stream_3241_);
lean_ctor_set(v___x_3246_, 1, v___x_3245_);
v___x_3247_ = lean_mk_empty_array_with_capacity(v___x_3243_);
v___x_3248_ = lean_array_push(v___x_3247_, v___x_3246_);
v___x_3249_ = l_Lasm_JS_Web_Support_args(v___x_3248_);
v___x_3250_ = 0;
v___x_3251_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v___x_3244_, v___x_3249_, v___x_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object* v_stream_3252_, lean_object* v_a_3253_){
_start:
{
lean_object* v_res_3254_; 
v_res_3254_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_new(v_stream_3252_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object* v___f_3255_, lean_object* v_a_3256_, lean_object* v___x_3257_, lean_object* v_x_3258_){
_start:
{
if (lean_obj_tag(v_x_3258_) == 0)
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3268_; 
lean_dec_ref(v___f_3255_);
v_a_3260_ = lean_ctor_get(v_x_3258_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v_x_3258_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3262_ = v_x_3258_;
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v_x_3258_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
lean_object* v___x_3266_; 
v___x_3266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
return v___x_3266_;
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3288_; 
v_a_3269_ = lean_ctor_get(v_x_3258_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_x_3258_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3271_ = v_x_3258_;
v_isShared_3272_ = v_isSharedCheck_3288_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v_x_3258_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3288_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; uint8_t v___x_3274_; lean_object* v_val_3276_; lean_object* v___x_3279_; 
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = 0;
v___x_3279_ = lasm_js_await_into(v_a_3256_, v_a_3269_, v___x_3257_);
lean_dec(v_a_3269_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3282_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
lean_inc(v_a_3280_);
lean_dec_ref_known(v___x_3279_, 1);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v_a_3280_);
v___x_3282_ = v___x_3271_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3280_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
v_val_3276_ = v___x_3282_;
goto v___jp_3275_;
}
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; 
v_a_3284_ = lean_ctor_get(v___x_3279_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3279_, 1);
if (v_isShared_3272_ == 0)
{
lean_ctor_set_tag(v___x_3271_, 0);
lean_ctor_set(v___x_3271_, 0, v_a_3284_);
v___x_3286_ = v___x_3271_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3284_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
v_val_3276_ = v___x_3286_;
goto v___jp_3275_;
}
}
v___jp_3275_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3277_, 0, v_val_3276_);
v___x_3278_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3273_, v___x_3274_, v___x_3277_, v___f_3255_);
return v___x_3278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object* v___f_3289_, lean_object* v_a_3290_, lean_object* v___x_3291_, lean_object* v_x_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(v___f_3289_, v_a_3290_, v___x_3291_, v_x_3292_);
lean_dec(v___x_3291_);
lean_dec(v_a_3290_);
return v_res_3294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object* v_a_3295_, lean_object* v___f_3296_, lean_object* v_x_3297_){
_start:
{
if (lean_obj_tag(v_x_3297_) == 0)
{
lean_object* v___x_3299_; 
lean_dec_ref(v___f_3296_);
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v_x_3297_);
return v___x_3299_;
}
else
{
lean_object* v___x_3300_; uint8_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; 
lean_dec_ref_known(v_x_3297_, 1);
v___x_3300_ = lean_unsigned_to_nat(0u);
v___x_3301_ = 0;
v___x_3302_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3295_);
v___x_3303_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3300_, v___x_3301_, v___x_3302_, v___f_3296_);
return v___x_3303_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object* v_a_3304_, lean_object* v___f_3305_, lean_object* v_x_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(v_a_3304_, v___f_3305_, v_x_3306_);
lean_dec(v_a_3304_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object* v___f_3309_, lean_object* v_v_3310_, lean_object* v_x_3311_){
_start:
{
if (lean_obj_tag(v_x_3311_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3321_; 
lean_dec(v_v_3310_);
lean_dec_ref(v___f_3309_);
v_a_3313_ = lean_ctor_get(v_x_3311_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v_x_3311_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3315_ = v_x_3311_;
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v_x_3311_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
lean_object* v___x_3319_; 
v___x_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
return v___x_3319_;
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3345_; 
v_a_3322_ = lean_ctor_get(v_x_3311_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_x_3311_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3324_ = v_x_3311_;
v_isShared_3325_ = v_isSharedCheck_3345_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v_x_3311_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3345_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___f_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; lean_object* v_val_3333_; lean_object* v___x_3336_; 
lean_inc(v_a_3322_);
v___f_3326_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3326_, 0, v_a_3322_);
lean_closure_set(v___f_3326_, 1, v___f_3309_);
v___x_3327_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3328_, 0, v_v_3310_);
lean_ctor_set(v___x_3328_, 1, v___x_3327_);
lean_inc_ref(v___x_3328_);
v___f_3329_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3329_, 0, v___f_3326_);
lean_closure_set(v___f_3329_, 1, v_a_3322_);
lean_closure_set(v___f_3329_, 2, v___x_3328_);
v___x_3330_ = lean_unsigned_to_nat(0u);
v___x_3331_ = 0;
v___x_3336_ = l_Lasm_JS_Wire_encodeIO(v___x_3328_);
lean_dec_ref_known(v___x_3328_, 2);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3337_);
lean_dec_ref_known(v___x_3336_, 1);
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 0, v_a_3337_);
v___x_3339_ = v___x_3324_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
v_val_3333_ = v___x_3339_;
goto v___jp_3332_;
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; 
v_a_3341_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3336_, 1);
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 0);
lean_ctor_set(v___x_3324_, 0, v_a_3341_);
v___x_3343_ = v___x_3324_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3341_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
v_val_3333_ = v___x_3343_;
goto v___jp_3332_;
}
}
v___jp_3332_:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3334_, 0, v_val_3333_);
v___x_3335_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3330_, v___x_3331_, v___x_3334_, v___f_3329_);
return v___x_3335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object* v___f_3346_, lean_object* v_v_3347_, lean_object* v_x_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(v___f_3346_, v_v_3347_, v_x_3348_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object* v___f_3351_, lean_object* v_x_3352_){
_start:
{
if (lean_obj_tag(v_x_3352_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3362_; 
lean_dec_ref(v___f_3351_);
v_a_3354_ = lean_ctor_get(v_x_3352_, 0);
v_isSharedCheck_3362_ = !lean_is_exclusive(v_x_3352_);
if (v_isSharedCheck_3362_ == 0)
{
v___x_3356_ = v_x_3352_;
v_isShared_3357_ = v_isSharedCheck_3362_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v_x_3352_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3362_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3360_; 
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
return v___x_3360_;
}
}
}
else
{
lean_object* v_a_3363_; lean_object* v___x_3365_; uint8_t v_isShared_3366_; uint8_t v_isSharedCheck_3382_; 
v_a_3363_ = lean_ctor_get(v_x_3352_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_x_3352_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3365_ = v_x_3352_;
v_isShared_3366_ = v_isSharedCheck_3382_;
goto v_resetjp_3364_;
}
else
{
lean_inc(v_a_3363_);
lean_dec(v_x_3352_);
v___x_3365_ = lean_box(0);
v_isShared_3366_ = v_isSharedCheck_3382_;
goto v_resetjp_3364_;
}
v_resetjp_3364_:
{
lean_object* v___x_3367_; uint8_t v___x_3368_; lean_object* v_val_3370_; lean_object* v___x_3373_; 
v___x_3367_ = lean_unsigned_to_nat(0u);
v___x_3368_ = 0;
v___x_3373_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3363_);
lean_dec(v_a_3363_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3376_; 
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3373_, 1);
if (v_isShared_3366_ == 0)
{
lean_ctor_set(v___x_3365_, 0, v_a_3374_);
v___x_3376_ = v___x_3365_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3374_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
v_val_3370_ = v___x_3376_;
goto v___jp_3369_;
}
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3380_; 
v_a_3378_ = lean_ctor_get(v___x_3373_, 0);
lean_inc(v_a_3378_);
lean_dec_ref_known(v___x_3373_, 1);
if (v_isShared_3366_ == 0)
{
lean_ctor_set_tag(v___x_3365_, 0);
lean_ctor_set(v___x_3365_, 0, v_a_3378_);
v___x_3380_ = v___x_3365_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3378_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
v_val_3370_ = v___x_3380_;
goto v___jp_3369_;
}
}
v___jp_3369_:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_val_3370_);
v___x_3372_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3367_, v___x_3368_, v___x_3371_, v___f_3351_);
return v___x_3372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object* v___f_3383_, lean_object* v_x_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(v___f_3383_, v_x_3384_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object* v_v_3389_){
_start:
{
lean_object* v___f_3391_; lean_object* v___f_3392_; lean_object* v___f_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; lean_object* v_val_3397_; lean_object* v___x_3400_; 
v___f_3391_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0));
v___f_3392_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3392_, 0, v___f_3391_);
lean_closure_set(v___f_3392_, 1, v_v_3389_);
v___f_3393_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3393_, 0, v___f_3392_);
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = 0;
v___x_3400_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v_a_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3408_; 
v_a_3401_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3408_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3403_ = v___x_3400_;
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_a_3401_);
lean_dec(v___x_3400_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3408_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3406_; 
if (v_isShared_3404_ == 0)
{
lean_ctor_set_tag(v___x_3403_, 1);
v___x_3406_ = v___x_3403_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3401_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
v_val_3397_ = v___x_3406_;
goto v___jp_3396_;
}
}
}
else
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3416_; 
v_a_3409_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3411_ = v___x_3400_;
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3400_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set_tag(v___x_3411_, 0);
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_a_3409_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
v_val_3397_ = v___x_3414_;
goto v___jp_3396_;
}
}
}
v___jp_3396_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3398_, 0, v_val_3397_);
v___x_3399_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3394_, v___x_3395_, v___x_3398_, v___f_3393_);
return v___x_3399_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object* v_v_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_v_3417_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object* v_x_3420_){
_start:
{
if (lean_obj_tag(v_x_3420_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3430_; 
v_a_3422_ = lean_ctor_get(v_x_3420_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v_x_3420_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3424_ = v_x_3420_;
v_isShared_3425_ = v_isSharedCheck_3430_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v_x_3420_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3430_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3428_; 
v___x_3428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3428_, 0, v___x_3427_);
return v___x_3428_;
}
}
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3432_; 
v_a_3431_ = lean_ctor_get(v_x_3420_, 0);
lean_inc(v_a_3431_);
lean_dec_ref_known(v_x_3420_, 1);
v___x_3432_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3431_);
return v___x_3432_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object* v_x_3433_, lean_object* v___y_3434_){
_start:
{
lean_object* v_res_3435_; 
v_res_3435_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(v_x_3433_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object* v_self_3438_){
_start:
{
lean_object* v___f_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; uint8_t v___x_3443_; lean_object* v_val_3445_; lean_object* v___x_3448_; 
v___f_3440_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3442_ = lean_unsigned_to_nat(0u);
v___x_3443_ = 0;
v___x_3448_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_3438_, v___x_3441_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3448_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
lean_ctor_set_tag(v___x_3451_, 1);
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
v_val_3445_ = v___x_3454_;
goto v___jp_3444_;
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
v_a_3457_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3448_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3448_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
lean_ctor_set_tag(v___x_3459_, 0);
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
v_val_3445_ = v___x_3462_;
goto v___jp_3444_;
}
}
}
v___jp_3444_:
{
lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v_val_3445_);
v___x_3447_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3442_, v___x_3443_, v___x_3446_, v___f_3440_);
return v___x_3447_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object* v_self_3465_, lean_object* v_a_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(v_self_3465_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_3468_, uint32_t v_op_3469_, uint64_t v_flags_3470_, lean_object* v_payload_3471_, lean_object* v___f_3472_, lean_object* v___f_3473_, lean_object* v___f_3474_, lean_object* v_x_3475_){
_start:
{
if (lean_obj_tag(v_x_3475_) == 0)
{
lean_object* v_a_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3485_; 
lean_dec_ref(v___f_3474_);
lean_dec_ref(v___f_3473_);
lean_dec_ref(v___f_3472_);
lean_dec(v_payload_3471_);
v_a_3477_ = lean_ctor_get(v_x_3475_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3479_ = v_x_3475_;
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_a_3477_);
lean_dec(v_x_3475_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3485_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v___x_3482_; 
if (v_isShared_3480_ == 0)
{
v___x_3482_ = v___x_3479_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3477_);
v___x_3482_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3483_; 
v___x_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3482_);
return v___x_3483_;
}
}
}
else
{
lean_object* v_a_3486_; lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3532_; 
v_a_3486_ = lean_ctor_get(v_x_3475_, 0);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_x_3475_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3488_ = v_x_3475_;
v_isShared_3489_ = v_isSharedCheck_3532_;
goto v_resetjp_3487_;
}
else
{
lean_inc(v_a_3486_);
lean_dec(v_x_3475_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3532_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v___x_3490_ = lean_string_utf8_byte_size(v_failurePrefix_3468_);
v___x_3491_ = lean_unsigned_to_nat(0u);
v___x_3492_ = lean_nat_dec_eq(v___x_3490_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___f_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___f_3497_; lean_object* v_val_3499_; lean_object* v___x_3504_; 
lean_dec_ref(v___f_3474_);
lean_inc(v_a_3486_);
v___f_3493_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3493_, 0, v_a_3486_);
v___x_3494_ = lean_box(v___x_3492_);
v___x_3495_ = lean_box_uint32(v_op_3469_);
v___x_3496_ = lean_box_uint64(v_flags_3470_);
lean_inc(v_payload_3471_);
v___f_3497_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3497_, 0, v___x_3491_);
lean_closure_set(v___f_3497_, 1, v___x_3494_);
lean_closure_set(v___f_3497_, 2, v___f_3493_);
lean_closure_set(v___f_3497_, 3, v_a_3486_);
lean_closure_set(v___f_3497_, 4, v___x_3495_);
lean_closure_set(v___f_3497_, 5, v___x_3496_);
lean_closure_set(v___f_3497_, 6, v_payload_3471_);
v___x_3504_ = l_Lasm_JS_Wire_encodeIO(v_payload_3471_);
lean_dec(v_payload_3471_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3504_, 1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v_a_3505_);
v___x_3507_ = v___x_3488_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3505_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
v_val_3499_ = v___x_3507_;
goto v___jp_3498_;
}
}
else
{
lean_object* v_a_3509_; lean_object* v___x_3511_; 
v_a_3509_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3504_, 1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set_tag(v___x_3488_, 0);
lean_ctor_set(v___x_3488_, 0, v_a_3509_);
v___x_3511_ = v___x_3488_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
v_val_3499_ = v___x_3511_;
goto v___jp_3498_;
}
}
v___jp_3498_:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_val_3499_);
v___x_3501_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3492_, v___x_3500_, v___f_3497_);
v___x_3502_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3492_, v___x_3501_, v___f_3472_);
v___x_3503_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3492_, v___x_3502_, v___f_3473_);
return v___x_3503_;
}
}
else
{
lean_object* v___f_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___f_3516_; uint8_t v___x_3517_; lean_object* v_val_3519_; lean_object* v___x_3523_; 
lean_dec_ref(v___f_3473_);
lean_dec_ref(v___f_3472_);
lean_inc(v_a_3486_);
v___f_3513_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3513_, 0, v_a_3486_);
v___x_3514_ = lean_box_uint32(v_op_3469_);
v___x_3515_ = lean_box_uint64(v_flags_3470_);
lean_inc(v_payload_3471_);
v___f_3516_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3516_, 0, v___f_3513_);
lean_closure_set(v___f_3516_, 1, v_a_3486_);
lean_closure_set(v___f_3516_, 2, v___x_3514_);
lean_closure_set(v___f_3516_, 3, v___x_3515_);
lean_closure_set(v___f_3516_, 4, v_payload_3471_);
v___x_3517_ = 0;
v___x_3523_ = l_Lasm_JS_Wire_encodeIO(v_payload_3471_);
lean_dec(v_payload_3471_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v_a_3524_; lean_object* v___x_3526_; 
v_a_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3524_);
lean_dec_ref_known(v___x_3523_, 1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 0, v_a_3524_);
v___x_3526_ = v___x_3488_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
v_val_3519_ = v___x_3526_;
goto v___jp_3518_;
}
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; 
v_a_3528_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_a_3528_);
lean_dec_ref_known(v___x_3523_, 1);
if (v_isShared_3489_ == 0)
{
lean_ctor_set_tag(v___x_3488_, 0);
lean_ctor_set(v___x_3488_, 0, v_a_3528_);
v___x_3530_ = v___x_3488_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_a_3528_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
v_val_3519_ = v___x_3530_;
goto v___jp_3518_;
}
}
v___jp_3518_:
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3520_, 0, v_val_3519_);
v___x_3521_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3517_, v___x_3520_, v___f_3516_);
v___x_3522_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3491_, v___x_3517_, v___x_3521_, v___f_3474_);
return v___x_3522_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_3533_, lean_object* v_op_3534_, lean_object* v_flags_3535_, lean_object* v_payload_3536_, lean_object* v___f_3537_, lean_object* v___f_3538_, lean_object* v___f_3539_, lean_object* v_x_3540_, lean_object* v___y_3541_){
_start:
{
uint32_t v_op_boxed_3542_; uint64_t v_flags_boxed_3543_; lean_object* v_res_3544_; 
v_op_boxed_3542_ = lean_unbox_uint32(v_op_3534_);
lean_dec(v_op_3534_);
v_flags_boxed_3543_ = lean_unbox_uint64(v_flags_3535_);
lean_dec_ref(v_flags_3535_);
v_res_3544_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(v_failurePrefix_3533_, v_op_boxed_3542_, v_flags_boxed_3543_, v_payload_3536_, v___f_3537_, v___f_3538_, v___f_3539_, v_x_3540_);
lean_dec_ref(v_failurePrefix_3533_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object* v___f_3545_, lean_object* v_x_3546_){
_start:
{
if (lean_obj_tag(v_x_3546_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3556_; 
lean_dec_ref(v___f_3545_);
v_a_3548_ = lean_ctor_get(v_x_3546_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v_x_3546_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3550_ = v_x_3546_;
v_isShared_3551_ = v_isSharedCheck_3556_;
goto v_resetjp_3549_;
}
else
{
lean_inc(v_a_3548_);
lean_dec(v_x_3546_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3556_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3553_; 
if (v_isShared_3551_ == 0)
{
v___x_3553_ = v___x_3550_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3548_);
v___x_3553_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
lean_object* v___x_3554_; 
v___x_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3553_);
return v___x_3554_;
}
}
}
else
{
lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3568_; 
v_isSharedCheck_3568_ = !lean_is_exclusive(v_x_3546_);
if (v_isSharedCheck_3568_ == 0)
{
lean_object* v_unused_3569_; 
v_unused_3569_ = lean_ctor_get(v_x_3546_, 0);
lean_dec(v_unused_3569_);
v___x_3558_ = v_x_3546_;
v_isShared_3559_ = v_isSharedCheck_3568_;
goto v_resetjp_3557_;
}
else
{
lean_dec(v_x_3546_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3568_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; uint8_t v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3560_ = lean_unsigned_to_nat(0u);
v___x_3561_ = 0;
v___x_3562_ = lean_io_promise_new();
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 0, v___x_3562_);
v___x_3564_ = v___x_3558_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
v___x_3566_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3560_, v___x_3561_, v___x_3565_, v___f_3545_);
return v___x_3566_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object* v___f_3570_, lean_object* v_x_3571_, lean_object* v___y_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(v___f_3570_, v_x_3571_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object* v___f_3574_, lean_object* v_bytes_3575_){
_start:
{
lean_object* v___x_3577_; uint8_t v___x_3578_; lean_object* v_val_3580_; lean_object* v___x_3583_; 
v___x_3577_ = lean_unsigned_to_nat(0u);
v___x_3578_ = 0;
v___x_3583_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3575_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3591_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3586_ = v___x_3583_;
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_a_3584_);
lean_dec(v___x_3583_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v___x_3589_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set_tag(v___x_3586_, 1);
v___x_3589_ = v___x_3586_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3584_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
v_val_3580_ = v___x_3589_;
goto v___jp_3579_;
}
}
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
v_a_3592_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v___x_3583_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3583_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 0);
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
v_val_3580_ = v___x_3597_;
goto v___jp_3579_;
}
}
}
v___jp_3579_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3581_, 0, v_val_3580_);
v___x_3582_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3577_, v___x_3578_, v___x_3581_, v___f_3574_);
return v___x_3582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3600_, lean_object* v_bytes_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(v___f_3600_, v_bytes_3601_);
lean_dec_ref(v_bytes_3601_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3613_, lean_object* v_key_3614_){
_start:
{
if (lean_obj_tag(v_d_3613_) == 8)
{
lean_object* v___x_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3646_; 
v___x_3617_ = l_Lasm_JS_Data_field(v_d_3613_, v_key_3614_);
v_isSharedCheck_3646_ = !lean_is_exclusive(v_d_3613_);
if (v_isSharedCheck_3646_ == 0)
{
lean_object* v_unused_3647_; 
v_unused_3647_ = lean_ctor_get(v_d_3613_, 0);
lean_dec(v_unused_3647_);
v___x_3619_ = v_d_3613_;
v_isShared_3620_ = v_isSharedCheck_3646_;
goto v_resetjp_3618_;
}
else
{
lean_dec(v_d_3613_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3646_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
switch(lean_obj_tag(v___x_3617_))
{
case 1:
{
lean_del_object(v___x_3619_);
goto v___jp_3615_;
}
case 0:
{
lean_del_object(v___x_3619_);
goto v___jp_3615_;
}
default: 
{
if (lean_obj_tag(v___x_3617_) == 2)
{
uint8_t v_b_3621_; lean_object* v___x_3622_; lean_object* v___x_3624_; 
v_b_3621_ = lean_ctor_get_uint8(v___x_3617_, 0);
lean_dec_ref_known(v___x_3617_, 0);
v___x_3622_ = lean_box(v_b_3621_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 1);
lean_ctor_set(v___x_3619_, 0, v___x_3622_);
v___x_3624_ = v___x_3619_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v___x_3622_);
v___x_3624_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
lean_object* v___x_3625_; 
v___x_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
}
else
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; 
v___x_3627_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3628_ = lean_string_append(v___x_3627_, v_key_3614_);
v___x_3629_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3630_ = lean_string_append(v___x_3628_, v___x_3629_);
v___x_3631_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_3632_ = lean_string_append(v___x_3630_, v___x_3631_);
v___x_3633_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3634_ = lean_string_append(v___x_3632_, v___x_3633_);
v___x_3635_ = l_Lasm_JS_Data_describe(v___x_3617_);
v___x_3636_ = lean_string_append(v___x_3634_, v___x_3635_);
lean_dec_ref(v___x_3635_);
v___x_3637_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3637_ == 0)
{
lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3641_; 
v___x_3638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___x_3639_ = lean_string_append(v___x_3636_, v___x_3638_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3639_);
v___x_3641_ = v___x_3619_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
else
{
lean_object* v___x_3644_; 
if (v_isShared_3620_ == 0)
{
lean_ctor_set_tag(v___x_3619_, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3636_);
v___x_3644_ = v___x_3619_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v___x_3636_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3648_; 
lean_dec(v_d_3613_);
v___x_3648_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6));
return v___x_3648_;
}
v___jp_3615_:
{
lean_object* v___x_3616_; 
v___x_3616_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3616_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3649_, lean_object* v_key_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3649_, v_key_3650_);
lean_dec_ref(v_key_3650_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3654_, lean_object* v_key_3655_){
_start:
{
if (lean_obj_tag(v_d_3654_) == 8)
{
lean_object* v___x_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
v___x_3656_ = l_Lasm_JS_Data_field(v_d_3654_, v_key_3655_);
v_isSharedCheck_3663_ = !lean_is_exclusive(v_d_3654_);
if (v_isSharedCheck_3663_ == 0)
{
lean_object* v_unused_3664_; 
v_unused_3664_ = lean_ctor_get(v_d_3654_, 0);
lean_dec(v_unused_3664_);
v___x_3658_ = v_d_3654_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_dec(v_d_3654_);
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
lean_ctor_set(v___x_3658_, 0, v___x_3656_);
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v___x_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
else
{
lean_object* v___x_3665_; 
lean_dec(v_d_3654_);
v___x_3665_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3665_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3666_, lean_object* v_key_3667_){
_start:
{
lean_object* v_res_3668_; 
v_res_3668_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3666_, v_key_3667_);
lean_dec_ref(v_key_3667_);
return v_res_3668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object* v_context_3669_, lean_object* v_d_3670_){
_start:
{
lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v___y_3679_; lean_object* v_received_3680_; lean_object* v___y_3699_; lean_object* v_a_3702_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3726_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
lean_inc(v_d_3670_);
v___x_3727_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3670_, v___x_3726_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v_a_3728_; 
v_a_3728_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3728_);
lean_dec_ref_known(v___x_3727_, 1);
v_a_3702_ = v_a_3728_;
goto v___jp_3701_;
}
else
{
lean_object* v_a_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v_a_3729_ = lean_ctor_get(v___x_3727_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3727_, 1);
v___x_3730_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
lean_inc(v_d_3670_);
v___x_3731_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3670_, v___x_3730_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; 
lean_dec(v_a_3729_);
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v___x_3731_, 1);
v_a_3702_ = v_a_3732_;
goto v___jp_3701_;
}
else
{
lean_object* v_a_3733_; lean_object* v___x_3735_; uint8_t v_isShared_3736_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_d_3670_);
v_a_3733_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3735_ = v___x_3731_;
v_isShared_3736_ = v_isSharedCheck_3741_;
goto v_resetjp_3734_;
}
else
{
lean_inc(v_a_3733_);
lean_dec(v___x_3731_);
v___x_3735_ = lean_box(0);
v_isShared_3736_ = v_isSharedCheck_3741_;
goto v_resetjp_3734_;
}
v_resetjp_3734_:
{
lean_object* v___x_3737_; lean_object* v___x_3739_; 
v___x_3737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3737_, 0, v_a_3729_);
lean_ctor_set(v___x_3737_, 1, v_a_3733_);
if (v_isShared_3736_ == 0)
{
lean_ctor_set_tag(v___x_3735_, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3737_);
v___x_3739_ = v___x_3735_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v___x_3737_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
v___jp_3672_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3675_ = lean_string_append(v___y_3673_, v___y_3674_);
lean_dec_ref(v___y_3674_);
v___x_3676_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
v___x_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
return v___x_3677_;
}
v___jp_3678_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; 
v___x_3681_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3682_ = lean_string_append(v___x_3681_, v_context_3669_);
v___x_3683_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3684_ = lean_string_append(v___x_3682_, v___x_3683_);
v___x_3685_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___x_3686_ = lean_string_append(v___x_3684_, v___x_3685_);
v___x_3687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3688_ = lean_string_append(v___x_3686_, v___x_3687_);
v___x_3689_ = lean_string_append(v___x_3688_, v_received_3680_);
lean_dec_ref(v_received_3680_);
v___x_3690_ = lean_string_utf8_byte_size(v___y_3679_);
v___x_3691_ = lean_unsigned_to_nat(0u);
v___x_3692_ = lean_nat_dec_eq(v___x_3690_, v___x_3691_);
if (v___x_3692_ == 0)
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3693_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3694_ = lean_string_append(v___x_3693_, v___y_3679_);
lean_dec_ref(v___y_3679_);
v___x_3695_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3696_ = lean_string_append(v___x_3694_, v___x_3695_);
v___y_3673_ = v___x_3689_;
v___y_3674_ = v___x_3696_;
goto v___jp_3672_;
}
else
{
lean_object* v___x_3697_; 
lean_dec_ref(v___y_3679_);
v___x_3697_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3673_ = v___x_3689_;
v___y_3674_ = v___x_3697_;
goto v___jp_3672_;
}
}
v___jp_3698_:
{
lean_object* v___x_3700_; 
v___x_3700_ = l_Lasm_JS_Data_describe(v_d_3670_);
v___y_3679_ = v___y_3699_;
v_received_3680_ = v___x_3700_;
goto v___jp_3678_;
}
v___jp_3701_:
{
if (lean_obj_tag(v_d_3670_) == 9)
{
lean_object* v_value_3703_; lean_object* v_description_3704_; lean_object* v___x_3705_; uint8_t v___x_3706_; 
v_value_3703_ = lean_ctor_get(v_d_3670_, 0);
v_description_3704_ = lean_ctor_get(v_d_3670_, 1);
v___x_3705_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3706_ = lean_string_dec_eq(v_description_3704_, v___x_3705_);
if (v___x_3706_ == 0)
{
v___y_3699_ = v_a_3702_;
goto v___jp_3698_;
}
else
{
lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3723_; 
lean_inc(v_value_3703_);
v_isSharedCheck_3723_ = !lean_is_exclusive(v_d_3670_);
if (v_isSharedCheck_3723_ == 0)
{
lean_object* v_unused_3724_; lean_object* v_unused_3725_; 
v_unused_3724_ = lean_ctor_get(v_d_3670_, 1);
lean_dec(v_unused_3724_);
v_unused_3725_ = lean_ctor_get(v_d_3670_, 0);
lean_dec(v_unused_3725_);
v___x_3708_ = v_d_3670_;
v_isShared_3709_ = v_isSharedCheck_3723_;
goto v_resetjp_3707_;
}
else
{
lean_dec(v_d_3670_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3723_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
uint32_t v___x_3710_; uint64_t v___x_3711_; lean_object* v___x_3713_; 
v___x_3710_ = 206;
v___x_3711_ = 0ULL;
lean_inc(v_value_3703_);
if (v_isShared_3709_ == 0)
{
lean_ctor_set(v___x_3708_, 1, v___x_3705_);
v___x_3713_ = v___x_3708_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3722_; 
v_reuseFailAlloc_3722_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3722_, 0, v_value_3703_);
lean_ctor_set(v_reuseFailAlloc_3722_, 1, v___x_3705_);
v___x_3713_ = v_reuseFailAlloc_3722_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
uint32_t v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = lasm_js_value_handle(v_value_3703_);
lean_dec(v_value_3703_);
v___x_3715_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3710_, v___x_3711_, v___x_3713_, v___x_3714_);
lean_dec_ref(v___x_3713_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; uint8_t v___x_3717_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_a_3716_);
lean_dec_ref_known(v___x_3715_, 1);
v___x_3717_ = lean_string_validate_utf8(v_a_3716_);
if (v___x_3717_ == 0)
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
lean_dec(v_a_3716_);
v___x_3718_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3719_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3718_);
v___y_3679_ = v_a_3702_;
v_received_3680_ = v___x_3719_;
goto v___jp_3678_;
}
else
{
lean_object* v___x_3720_; 
v___x_3720_ = lean_string_from_utf8_unchecked(v_a_3716_);
v___y_3679_ = v_a_3702_;
v_received_3680_ = v___x_3720_;
goto v___jp_3678_;
}
}
else
{
lean_object* v___x_3721_; 
lean_dec_ref_known(v___x_3715_, 1);
v___x_3721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3679_ = v_a_3702_;
v_received_3680_ = v___x_3721_;
goto v___jp_3678_;
}
}
}
}
}
else
{
v___y_3699_ = v_a_3702_;
goto v___jp_3698_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3742_, lean_object* v_d_3743_, lean_object* v_a_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3742_, v_d_3743_);
lean_dec_ref(v_context_3742_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object* v_context_3746_, lean_object* v_x_3747_){
_start:
{
lean_object* v_val_3750_; 
if (lean_obj_tag(v_x_3747_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3760_; 
v_a_3752_ = lean_ctor_get(v_x_3747_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v_x_3747_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3754_ = v_x_3747_;
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v_x_3747_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3760_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
lean_object* v___x_3758_; 
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
return v___x_3758_;
}
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3774_; 
v_a_3761_ = lean_ctor_get(v_x_3747_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v_x_3747_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3763_ = v_x_3747_;
v_isShared_3764_ = v_isSharedCheck_3774_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v_x_3747_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3774_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3746_, v_a_3761_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3766_);
lean_dec_ref_known(v___x_3765_, 1);
if (v_isShared_3764_ == 0)
{
lean_ctor_set(v___x_3763_, 0, v_a_3766_);
v___x_3768_ = v___x_3763_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_a_3766_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
v_val_3750_ = v___x_3768_;
goto v___jp_3749_;
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; 
v_a_3770_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3770_);
lean_dec_ref_known(v___x_3765_, 1);
if (v_isShared_3764_ == 0)
{
lean_ctor_set_tag(v___x_3763_, 0);
lean_ctor_set(v___x_3763_, 0, v_a_3770_);
v___x_3772_ = v___x_3763_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3770_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
v_val_3750_ = v___x_3772_;
goto v___jp_3749_;
}
}
}
}
v___jp_3749_:
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3751_, 0, v_val_3750_);
return v___x_3751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3775_, lean_object* v_x_3776_, lean_object* v___y_3777_){
_start:
{
lean_object* v_res_3778_; 
v_res_3778_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(v_context_3775_, v_x_3776_);
lean_dec_ref(v_context_3775_);
return v_res_3778_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object* v___f_3779_, lean_object* v_x_3780_){
_start:
{
if (lean_obj_tag(v_x_3780_) == 0)
{
lean_object* v_a_3782_; lean_object* v___x_3784_; uint8_t v_isShared_3785_; uint8_t v_isSharedCheck_3790_; 
lean_dec_ref(v___f_3779_);
v_a_3782_ = lean_ctor_get(v_x_3780_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v_x_3780_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3784_ = v_x_3780_;
v_isShared_3785_ = v_isSharedCheck_3790_;
goto v_resetjp_3783_;
}
else
{
lean_inc(v_a_3782_);
lean_dec(v_x_3780_);
v___x_3784_ = lean_box(0);
v_isShared_3785_ = v_isSharedCheck_3790_;
goto v_resetjp_3783_;
}
v_resetjp_3783_:
{
lean_object* v___x_3787_; 
if (v_isShared_3785_ == 0)
{
v___x_3787_ = v___x_3784_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3782_);
v___x_3787_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3788_; 
v___x_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
return v___x_3788_;
}
}
}
else
{
lean_object* v_a_3791_; lean_object* v___x_3792_; 
v_a_3791_ = lean_ctor_get(v_x_3780_, 0);
lean_inc(v_a_3791_);
lean_dec_ref_known(v_x_3780_, 1);
v___x_3792_ = lean_apply_2(v___f_3779_, v_a_3791_, lean_box(0));
return v___x_3792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3793_, lean_object* v_x_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(v___f_3793_, v_x_3794_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object* v_context_3797_, uint32_t v_op_3798_, uint64_t v_flags_3799_, lean_object* v_payload_3800_, lean_object* v_failurePrefix_3801_){
_start:
{
lean_object* v___f_3803_; lean_object* v___f_3804_; lean_object* v___f_3805_; lean_object* v___f_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___f_3809_; lean_object* v___f_3810_; lean_object* v___x_3811_; uint8_t v___x_3812_; lean_object* v_val_3814_; lean_object* v___x_3817_; 
v___f_3803_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3803_, 0, v_context_3797_);
v___f_3804_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3804_, 0, v___f_3803_);
v___f_3805_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3805_, 0, v___f_3804_);
lean_inc_ref(v_failurePrefix_3801_);
v___f_3806_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3806_, 0, v_failurePrefix_3801_);
v___x_3807_ = lean_box_uint32(v_op_3798_);
v___x_3808_ = lean_box_uint64(v_flags_3799_);
lean_inc_ref(v___f_3805_);
v___f_3809_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3809_, 0, v_failurePrefix_3801_);
lean_closure_set(v___f_3809_, 1, v___x_3807_);
lean_closure_set(v___f_3809_, 2, v___x_3808_);
lean_closure_set(v___f_3809_, 3, v_payload_3800_);
lean_closure_set(v___f_3809_, 4, v___f_3806_);
lean_closure_set(v___f_3809_, 5, v___f_3805_);
lean_closure_set(v___f_3809_, 6, v___f_3805_);
v___f_3810_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3810_, 0, v___f_3809_);
v___x_3811_ = lean_unsigned_to_nat(0u);
v___x_3812_ = 0;
v___x_3817_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3817_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3817_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
lean_ctor_set_tag(v___x_3820_, 1);
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
v_val_3814_ = v___x_3823_;
goto v___jp_3813_;
}
}
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
v_a_3826_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3817_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3817_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set_tag(v___x_3828_, 0);
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
v_val_3814_ = v___x_3831_;
goto v___jp_3813_;
}
}
}
v___jp_3813_:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3815_, 0, v_val_3814_);
v___x_3816_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3811_, v___x_3812_, v___x_3815_, v___f_3810_);
return v___x_3816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object* v_context_3834_, lean_object* v_op_3835_, lean_object* v_flags_3836_, lean_object* v_payload_3837_, lean_object* v_failurePrefix_3838_, lean_object* v_a_3839_){
_start:
{
uint32_t v_op_boxed_3840_; uint64_t v_flags_boxed_3841_; lean_object* v_res_3842_; 
v_op_boxed_3840_ = lean_unbox_uint32(v_op_3835_);
lean_dec(v_op_3835_);
v_flags_boxed_3841_ = lean_unbox_uint64(v_flags_3836_);
lean_dec_ref(v_flags_3836_);
v_res_3842_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v_context_3834_, v_op_boxed_3840_, v_flags_boxed_3841_, v_payload_3837_, v_failurePrefix_3838_);
return v_res_3842_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t v_await_3843_, uint64_t v_extra_3844_){
_start:
{
uint64_t v___x_3845_; uint64_t v___y_3847_; 
v___x_3845_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3843_ == 0)
{
uint64_t v___x_3850_; 
v___x_3850_ = 0ULL;
v___y_3847_ = v___x_3850_;
goto v___jp_3846_;
}
else
{
uint64_t v___x_3851_; 
v___x_3851_ = 2ULL;
v___y_3847_ = v___x_3851_;
goto v___jp_3846_;
}
v___jp_3846_:
{
uint64_t v___x_3848_; uint64_t v___x_3849_; 
v___x_3848_ = lean_uint64_lor(v___x_3845_, v___y_3847_);
v___x_3849_ = lean_uint64_lor(v___x_3848_, v_extra_3844_);
return v___x_3849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object* v_await_3852_, lean_object* v_extra_3853_){
_start:
{
uint8_t v_await_boxed_3854_; uint64_t v_extra_boxed_3855_; uint64_t v_res_3856_; lean_object* v_r_3857_; 
v_await_boxed_3854_ = lean_unbox(v_await_3852_);
v_extra_boxed_3855_ = lean_unbox_uint64(v_extra_3853_);
lean_dec_ref(v_extra_3853_);
v_res_3856_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v_await_boxed_3854_, v_extra_boxed_3855_);
v_r_3857_ = lean_box_uint64(v_res_3856_);
return v_r_3857_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3858_; uint8_t v___x_3859_; uint64_t v___x_3860_; 
v___x_3858_ = 8ULL;
v___x_3859_ = 0;
v___x_3860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v___x_3859_, v___x_3858_);
return v___x_3860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object* v_o_3861_, lean_object* v_name_3862_, lean_object* v_args_3863_){
_start:
{
lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; uint32_t v___x_3870_; uint64_t v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3865_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3866_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3866_, 0, v_o_3861_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
lean_inc_ref(v_name_3862_);
v___x_3867_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3867_, 0, v_name_3862_);
v___x_3868_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3869_ = lean_string_append(v___x_3868_, v_name_3862_);
lean_dec_ref(v_name_3862_);
v___x_3870_ = 205;
v___x_3871_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0);
v___x_3872_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_args_3863_);
v___x_3873_ = lean_unsigned_to_nat(3u);
v___x_3874_ = lean_mk_empty_array_with_capacity(v___x_3873_);
v___x_3875_ = lean_array_push(v___x_3874_, v___x_3866_);
v___x_3876_ = lean_array_push(v___x_3875_, v___x_3867_);
v___x_3877_ = lean_array_push(v___x_3876_, v___x_3872_);
v___x_3878_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3877_);
v___x_3879_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v___x_3869_, v___x_3870_, v___x_3871_, v___x_3878_, v___x_3865_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object* v_o_3880_, lean_object* v_name_3881_, lean_object* v_args_3882_, lean_object* v___y_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_o_3880_, v_name_3881_, v_args_3882_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object* v_self_3886_){
_start:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3888_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_3889_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3890_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_3886_, v___x_3888_, v___x_3889_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object* v_self_3891_, lean_object* v_a_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_read(v_self_3891_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object* v_self_3895_){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3897_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_3898_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3899_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3895_, v___x_3897_, v___x_3898_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object* v_self_3900_, lean_object* v_a_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(v_self_3900_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object* v_self_3903_, lean_object* v_reason_3904_){
_start:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3906_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_3907_ = lean_unsigned_to_nat(1u);
v___x_3908_ = lean_mk_empty_array_with_capacity(v___x_3907_);
v___x_3909_ = lean_array_push(v___x_3908_, v_reason_3904_);
v___x_3910_ = l_Lasm_JS_Web_Support_args(v___x_3909_);
v___x_3911_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3903_, v___x_3906_, v___x_3910_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object* v_self_3912_, lean_object* v_reason_3913_, lean_object* v_a_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(v_self_3912_, v_reason_3913_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object* v_context_3916_, lean_object* v_d_3917_){
_start:
{
lean_object* v___y_3920_; lean_object* v___y_3921_; 
if (lean_obj_tag(v_d_3917_) == 9)
{
lean_object* v_value_3925_; lean_object* v___x_3926_; 
v_value_3925_ = lean_ctor_get(v_d_3917_, 0);
lean_inc(v_value_3925_);
lean_dec_ref_known(v_d_3917_, 2);
v___x_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3926_, 0, v_value_3925_);
return v___x_3926_;
}
else
{
lean_object* v___x_3927_; lean_object* v_received_3929_; 
v___x_3927_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3917_) == 9)
{
lean_object* v_value_3943_; lean_object* v_description_3944_; uint8_t v___x_3945_; 
v_value_3943_ = lean_ctor_get(v_d_3917_, 0);
v_description_3944_ = lean_ctor_get(v_d_3917_, 1);
v___x_3945_ = lean_string_dec_eq(v_description_3944_, v___x_3927_);
if (v___x_3945_ == 0)
{
goto v___jp_3941_;
}
else
{
uint32_t v___x_3946_; uint64_t v___x_3947_; lean_object* v___x_3948_; uint32_t v___x_3949_; lean_object* v___x_3950_; 
lean_inc_n(v_value_3943_, 2);
lean_dec_ref_known(v_d_3917_, 2);
v___x_3946_ = 206;
v___x_3947_ = 0ULL;
v___x_3948_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3948_, 0, v_value_3943_);
lean_ctor_set(v___x_3948_, 1, v___x_3927_);
v___x_3949_ = lasm_js_value_handle(v_value_3943_);
lean_dec(v_value_3943_);
v___x_3950_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3946_, v___x_3947_, v___x_3948_, v___x_3949_);
lean_dec_ref_known(v___x_3948_, 2);
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_object* v_a_3951_; uint8_t v___x_3952_; 
v_a_3951_ = lean_ctor_get(v___x_3950_, 0);
lean_inc(v_a_3951_);
lean_dec_ref_known(v___x_3950_, 1);
v___x_3952_ = lean_string_validate_utf8(v_a_3951_);
if (v___x_3952_ == 0)
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
lean_dec(v_a_3951_);
v___x_3953_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3954_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3953_);
v_received_3929_ = v___x_3954_;
goto v___jp_3928_;
}
else
{
lean_object* v___x_3955_; 
v___x_3955_ = lean_string_from_utf8_unchecked(v_a_3951_);
v_received_3929_ = v___x_3955_;
goto v___jp_3928_;
}
}
else
{
lean_object* v___x_3956_; 
lean_dec_ref_known(v___x_3950_, 1);
v___x_3956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3929_ = v___x_3956_;
goto v___jp_3928_;
}
}
}
else
{
goto v___jp_3941_;
}
v___jp_3928_:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; uint8_t v___x_3939_; 
v___x_3930_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3931_ = lean_string_append(v___x_3930_, v_context_3916_);
v___x_3932_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3933_ = lean_string_append(v___x_3931_, v___x_3932_);
v___x_3934_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0));
v___x_3935_ = lean_string_append(v___x_3933_, v___x_3934_);
v___x_3936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3937_ = lean_string_append(v___x_3935_, v___x_3936_);
v___x_3938_ = lean_string_append(v___x_3937_, v_received_3929_);
lean_dec_ref(v_received_3929_);
v___x_3939_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3939_ == 0)
{
lean_object* v___x_3940_; 
v___x_3940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3920_ = v___x_3938_;
v___y_3921_ = v___x_3940_;
goto v___jp_3919_;
}
else
{
v___y_3920_ = v___x_3938_;
v___y_3921_ = v___x_3927_;
goto v___jp_3919_;
}
}
v___jp_3941_:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lasm_JS_Data_describe(v_d_3917_);
v_received_3929_ = v___x_3942_;
goto v___jp_3928_;
}
}
v___jp_3919_:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3922_ = lean_string_append(v___y_3920_, v___y_3921_);
v___x_3923_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
v___x_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
return v___x_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object* v_context_3957_, lean_object* v_d_3958_, lean_object* v_a_3959_){
_start:
{
lean_object* v_res_3960_; 
v_res_3960_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v_context_3957_, v_d_3958_);
lean_dec_ref(v_context_3957_);
return v_res_3960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object* v_b_3961_, lean_object* v_args_3962_, uint8_t v_await_3963_){
_start:
{
uint64_t v___y_3966_; uint64_t v___y_3967_; uint64_t v___x_4010_; uint64_t v___y_4012_; 
v___x_4010_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3963_ == 0)
{
uint64_t v___x_4017_; 
v___x_4017_ = 0ULL;
v___y_4012_ = v___x_4017_;
goto v___jp_4011_;
}
else
{
uint64_t v___x_4018_; 
v___x_4018_ = 2ULL;
v___y_4012_ = v___x_4018_;
goto v___jp_4011_;
}
v___jp_3965_:
{
uint64_t v_flags_3968_; uint32_t v___x_3969_; lean_object* v___x_3970_; uint32_t v___x_3971_; lean_object* v___x_3972_; 
v_flags_3968_ = lean_uint64_lor(v___y_3966_, v___y_3967_);
v___x_3969_ = 214;
v___x_3970_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3961_, v_args_3962_);
v___x_3971_ = 0;
v___x_3972_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3969_, v_flags_3968_, v___x_3970_, v___x_3971_);
lean_dec(v___x_3970_);
if (lean_obj_tag(v___x_3972_) == 0)
{
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v_a_3973_; lean_object* v___x_3974_; 
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_a_3973_);
lean_dec_ref_known(v___x_3972_, 1);
v___x_3974_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3973_);
lean_dec(v_a_3973_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref_known(v___x_3974_, 1);
v___x_3976_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3961_);
v___x_3977_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v___x_3976_, v_a_3975_);
lean_dec_ref(v___x_3976_);
return v___x_3977_;
}
else
{
lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
v_a_3978_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3974_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3974_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
v_a_3986_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3972_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3972_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
lean_ctor_set_tag(v___x_3988_, 1);
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4009_; 
v_a_3994_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_3996_ = v___x_3972_;
v_isShared_3997_ = v_isSharedCheck_4009_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3972_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4009_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4007_; 
v___x_3998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3999_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3961_);
v___x_4000_ = lean_string_append(v___x_3998_, v___x_3999_);
lean_dec_ref(v___x_3999_);
v___x_4001_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4002_ = lean_string_append(v___x_4000_, v___x_4001_);
v___x_4003_ = lean_io_error_to_string(v_a_3994_);
v___x_4004_ = lean_string_append(v___x_4002_, v___x_4003_);
lean_dec_ref(v___x_4003_);
v___x_4005_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4004_);
if (v_isShared_3997_ == 0)
{
lean_ctor_set(v___x_3996_, 0, v___x_4005_);
v___x_4007_ = v___x_3996_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v___x_4005_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
v___jp_4011_:
{
uint8_t v_construct_4013_; uint64_t v___x_4014_; 
v_construct_4013_ = lean_ctor_get_uint8(v_b_3961_, sizeof(void*)*4);
v___x_4014_ = lean_uint64_lor(v___x_4010_, v___y_4012_);
if (v_construct_4013_ == 0)
{
uint64_t v___x_4015_; 
v___x_4015_ = 0ULL;
v___y_3966_ = v___x_4014_;
v___y_3967_ = v___x_4015_;
goto v___jp_3965_;
}
else
{
uint64_t v___x_4016_; 
v___x_4016_ = 4ULL;
v___y_3966_ = v___x_4014_;
v___y_3967_ = v___x_4016_;
goto v___jp_3965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object* v_b_4019_, lean_object* v_args_4020_, lean_object* v_await_4021_, lean_object* v_a_4022_){
_start:
{
uint8_t v_await_boxed_4023_; lean_object* v_res_4024_; 
v_await_boxed_4023_ = lean_unbox(v_await_4021_);
v_res_4024_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v_b_4019_, v_args_4020_, v_await_boxed_4023_);
lean_dec_ref(v_b_4019_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object* v_stream_4033_){
_start:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; uint8_t v___x_4042_; lean_object* v___x_4043_; 
v___x_4035_ = lean_unsigned_to_nat(1u);
v___x_4036_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2));
v___x_4037_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4038_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4038_, 0, v_stream_4033_);
lean_ctor_set(v___x_4038_, 1, v___x_4037_);
v___x_4039_ = lean_mk_empty_array_with_capacity(v___x_4035_);
v___x_4040_ = lean_array_push(v___x_4039_, v___x_4038_);
v___x_4041_ = l_Lasm_JS_Web_Support_args(v___x_4040_);
v___x_4042_ = 0;
v___x_4043_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v___x_4036_, v___x_4041_, v___x_4042_);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object* v_stream_4044_, lean_object* v_a_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_new(v_stream_4044_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object* v_self_4047_){
_start:
{
lean_object* v___f_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; uint8_t v___x_4052_; lean_object* v_val_4054_; lean_object* v___x_4057_; 
v___f_4049_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4050_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4051_ = lean_unsigned_to_nat(0u);
v___x_4052_ = 0;
v___x_4057_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_4047_, v___x_4050_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4057_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4057_);
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
v_val_4054_ = v___x_4063_;
goto v___jp_4053_;
}
}
}
else
{
lean_object* v_a_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4073_; 
v_a_4066_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4073_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4073_ == 0)
{
v___x_4068_ = v___x_4057_;
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_a_4066_);
lean_dec(v___x_4057_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4073_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4071_; 
if (v_isShared_4069_ == 0)
{
lean_ctor_set_tag(v___x_4068_, 0);
v___x_4071_ = v___x_4068_;
goto v_reusejp_4070_;
}
else
{
lean_object* v_reuseFailAlloc_4072_; 
v_reuseFailAlloc_4072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4072_, 0, v_a_4066_);
v___x_4071_ = v_reuseFailAlloc_4072_;
goto v_reusejp_4070_;
}
v_reusejp_4070_:
{
v_val_4054_ = v___x_4071_;
goto v___jp_4053_;
}
}
}
v___jp_4053_:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; 
v___x_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4055_, 0, v_val_4054_);
v___x_4056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4051_, v___x_4052_, v___x_4055_, v___f_4049_);
return v___x_4056_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object* v_self_4074_, lean_object* v_a_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(v_self_4074_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object* v_x_4077_){
_start:
{
if (lean_obj_tag(v_x_4077_) == 0)
{
lean_object* v___x_4078_; 
v___x_4078_ = lean_box(0);
return v___x_4078_;
}
else
{
lean_object* v_val_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4092_; 
v_val_4079_ = lean_ctor_get(v_x_4077_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v_x_4077_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4081_ = v_x_4077_;
v_isShared_4082_ = v_isSharedCheck_4092_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_val_4079_);
lean_dec(v_x_4077_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4092_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; uint8_t v___x_4086_; 
v___x_4083_ = lean_nat_to_int(v_val_4079_);
v___x_4084_ = lean_nat_abs(v___x_4083_);
v___x_4085_ = lean_cstr_to_nat("9007199254740991");
v___x_4086_ = lean_nat_dec_le(v___x_4084_, v___x_4085_);
lean_dec(v___x_4084_);
if (v___x_4086_ == 0)
{
lean_object* v___x_4088_; 
if (v_isShared_4082_ == 0)
{
lean_ctor_set_tag(v___x_4081_, 5);
lean_ctor_set(v___x_4081_, 0, v___x_4083_);
v___x_4088_ = v___x_4081_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v___x_4083_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
else
{
double v___x_4090_; lean_object* v___x_4091_; 
lean_del_object(v___x_4081_);
v___x_4090_ = l_Float_ofInt(v___x_4083_);
lean_dec(v___x_4083_);
v___x_4091_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4091_, 0, v___x_4090_);
return v___x_4091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object* v_x_4093_){
_start:
{
if (lean_obj_tag(v_x_4093_) == 0)
{
lean_object* v___x_4094_; 
v___x_4094_ = lean_box(0);
return v___x_4094_;
}
else
{
lean_object* v_val_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v_val_4095_ = lean_ctor_get(v_x_4093_, 0);
lean_inc(v_val_4095_);
lean_dec_ref_known(v_x_4093_, 1);
v___x_4096_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_4097_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_4095_);
v___x_4098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4096_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = lean_unsigned_to_nat(1u);
v___x_4100_ = lean_mk_empty_array_with_capacity(v___x_4099_);
v___x_4101_ = lean_array_push(v___x_4100_, v___x_4098_);
v___x_4102_ = l_Lasm_JS_Web_Support_fields(v___x_4101_);
lean_dec_ref(v___x_4101_);
return v___x_4102_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object* v_self_4103_, lean_object* v_view_4104_, lean_object* v_options_4105_){
_start:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4107_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_4108_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4108_, 0, v_view_4104_);
v___x_4109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(v_options_4105_);
v___x_4110_ = lean_unsigned_to_nat(2u);
v___x_4111_ = lean_mk_empty_array_with_capacity(v___x_4110_);
v___x_4112_ = lean_array_push(v___x_4111_, v___x_4108_);
v___x_4113_ = lean_array_push(v___x_4112_, v___x_4109_);
v___x_4114_ = l_Lasm_JS_Web_Support_args(v___x_4113_);
v___x_4115_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_4103_, v___x_4107_, v___x_4114_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object* v_self_4116_, lean_object* v_view_4117_, lean_object* v_options_4118_, lean_object* v_a_4119_){
_start:
{
lean_object* v_res_4120_; 
v_res_4120_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_read(v_self_4116_, v_view_4117_, v_options_4118_);
return v_res_4120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object* v_self_4121_){
_start:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4123_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4124_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4125_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4121_, v___x_4123_, v___x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object* v_self_4126_, lean_object* v_a_4127_){
_start:
{
lean_object* v_res_4128_; 
v_res_4128_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(v_self_4126_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object* v_self_4129_, lean_object* v_reason_4130_){
_start:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; 
v___x_4132_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_4133_ = lean_unsigned_to_nat(1u);
v___x_4134_ = lean_mk_empty_array_with_capacity(v___x_4133_);
v___x_4135_ = lean_array_push(v___x_4134_, v_reason_4130_);
v___x_4136_ = l_Lasm_JS_Web_Support_args(v___x_4135_);
v___x_4137_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4129_, v___x_4132_, v___x_4136_);
return v___x_4137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object* v_self_4138_, lean_object* v_reason_4139_, lean_object* v_a_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(v_self_4138_, v_reason_4139_);
return v_res_4141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object* v_context_4143_, lean_object* v_d_4144_){
_start:
{
lean_object* v___y_4150_; lean_object* v___y_4151_; 
switch(lean_obj_tag(v_d_4144_))
{
case 1:
{
goto v___jp_4146_;
}
case 0:
{
goto v___jp_4146_;
}
default: 
{
if (lean_obj_tag(v_d_4144_) == 3)
{
double v_n_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_n_4155_ = lean_ctor_get_float(v_d_4144_, 0);
lean_dec_ref_known(v_d_4144_, 0);
v___x_4156_ = lean_box_float(v_n_4155_);
v___x_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4157_, 0, v___x_4156_);
v___x_4158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
return v___x_4158_;
}
else
{
lean_object* v___x_4159_; lean_object* v_received_4161_; 
v___x_4159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4144_) == 9)
{
lean_object* v_value_4175_; lean_object* v_description_4176_; uint8_t v___x_4177_; 
v_value_4175_ = lean_ctor_get(v_d_4144_, 0);
v_description_4176_ = lean_ctor_get(v_d_4144_, 1);
v___x_4177_ = lean_string_dec_eq(v_description_4176_, v___x_4159_);
if (v___x_4177_ == 0)
{
goto v___jp_4173_;
}
else
{
uint32_t v___x_4178_; uint64_t v___x_4179_; lean_object* v___x_4180_; uint32_t v___x_4181_; lean_object* v___x_4182_; 
lean_inc_n(v_value_4175_, 2);
lean_dec_ref_known(v_d_4144_, 2);
v___x_4178_ = 206;
v___x_4179_ = 0ULL;
v___x_4180_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4180_, 0, v_value_4175_);
lean_ctor_set(v___x_4180_, 1, v___x_4159_);
v___x_4181_ = lasm_js_value_handle(v_value_4175_);
lean_dec(v_value_4175_);
v___x_4182_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4178_, v___x_4179_, v___x_4180_, v___x_4181_);
lean_dec_ref_known(v___x_4180_, 2);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; uint8_t v___x_4184_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4183_);
lean_dec_ref_known(v___x_4182_, 1);
v___x_4184_ = lean_string_validate_utf8(v_a_4183_);
if (v___x_4184_ == 0)
{
lean_object* v___x_4185_; lean_object* v___x_4186_; 
lean_dec(v_a_4183_);
v___x_4185_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4186_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4185_);
v_received_4161_ = v___x_4186_;
goto v___jp_4160_;
}
else
{
lean_object* v___x_4187_; 
v___x_4187_ = lean_string_from_utf8_unchecked(v_a_4183_);
v_received_4161_ = v___x_4187_;
goto v___jp_4160_;
}
}
else
{
lean_object* v___x_4188_; 
lean_dec_ref_known(v___x_4182_, 1);
v___x_4188_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4161_ = v___x_4188_;
goto v___jp_4160_;
}
}
}
else
{
goto v___jp_4173_;
}
v___jp_4160_:
{
lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; uint8_t v___x_4171_; 
v___x_4162_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4163_ = lean_string_append(v___x_4162_, v_context_4143_);
v___x_4164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4165_ = lean_string_append(v___x_4163_, v___x_4164_);
v___x_4166_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0));
v___x_4167_ = lean_string_append(v___x_4165_, v___x_4166_);
v___x_4168_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4169_ = lean_string_append(v___x_4167_, v___x_4168_);
v___x_4170_ = lean_string_append(v___x_4169_, v_received_4161_);
lean_dec_ref(v_received_4161_);
v___x_4171_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4171_ == 0)
{
lean_object* v___x_4172_; 
v___x_4172_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4150_ = v___x_4170_;
v___y_4151_ = v___x_4172_;
goto v___jp_4149_;
}
else
{
v___y_4150_ = v___x_4170_;
v___y_4151_ = v___x_4159_;
goto v___jp_4149_;
}
}
v___jp_4173_:
{
lean_object* v___x_4174_; 
v___x_4174_ = l_Lasm_JS_Data_describe(v_d_4144_);
v_received_4161_ = v___x_4174_;
goto v___jp_4160_;
}
}
}
}
v___jp_4146_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
v___x_4147_ = lean_box(0);
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4147_);
return v___x_4148_;
}
v___jp_4149_:
{
lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4152_ = lean_string_append(v___y_4150_, v___y_4151_);
v___x_4153_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4152_);
v___x_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
return v___x_4154_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4189_, lean_object* v_d_4190_, lean_object* v_a_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4189_, v_d_4190_);
lean_dec_ref(v_context_4189_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object* v_context_4193_, lean_object* v_bytes_4194_){
_start:
{
lean_object* v___x_4196_; 
v___x_4196_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4194_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; lean_object* v___x_4198_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
lean_dec_ref_known(v___x_4196_, 1);
v___x_4198_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4193_, v_a_4197_);
return v___x_4198_;
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
v_a_4199_ = lean_ctor_get(v___x_4196_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4196_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4196_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object* v_context_4207_, lean_object* v_bytes_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v_res_4210_; 
v_res_4210_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v_context_4207_, v_bytes_4208_);
lean_dec_ref(v_bytes_4208_);
lean_dec_ref(v_context_4207_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object* v_o_4212_, lean_object* v_key_4213_){
_start:
{
lean_object* v_k_4215_; lean_object* v___x_4216_; 
v_k_4215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4215_, 0, v_key_4213_);
v___x_4216_ = l_Lasm_JS_Wire_encodeIO(v_k_4215_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v_a_4217_; uint32_t v___x_4218_; uint32_t v___x_4219_; uint64_t v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v_a_4217_ = lean_ctor_get(v___x_4216_, 0);
lean_inc(v_a_4217_);
lean_dec_ref_known(v___x_4216_, 1);
v___x_4218_ = 203;
v___x_4219_ = lasm_js_value_handle(v_o_4212_);
v___x_4220_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4221_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4222_, 0, v_o_4212_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___x_4223_ = lean_unsigned_to_nat(2u);
v___x_4224_ = lean_mk_empty_array_with_capacity(v___x_4223_);
lean_inc_ref(v_k_4215_);
v___x_4225_ = lean_array_push(v___x_4224_, v_k_4215_);
v___x_4226_ = lean_array_push(v___x_4225_, v___x_4222_);
v___x_4227_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
v___x_4228_ = lasm_js_call(v___x_4218_, v___x_4219_, v___x_4220_, v_a_4217_, v___x_4227_);
lean_dec_ref_known(v___x_4227_, 1);
lean_dec(v_a_4217_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_object* v_a_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v_a_4229_ = lean_ctor_get(v___x_4228_, 0);
lean_inc(v_a_4229_);
lean_dec_ref_known(v___x_4228_, 1);
v___x_4230_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4231_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4215_);
v___x_4232_ = lean_string_append(v___x_4230_, v___x_4231_);
lean_dec_ref(v___x_4231_);
v___x_4233_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v___x_4232_, v_a_4229_);
lean_dec(v_a_4229_);
lean_dec_ref(v___x_4232_);
return v___x_4233_;
}
else
{
lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4241_; 
lean_dec_ref_known(v_k_4215_, 1);
v_a_4234_ = lean_ctor_get(v___x_4228_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4228_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4236_ = v___x_4228_;
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v___x_4228_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4239_; 
if (v_isShared_4237_ == 0)
{
v___x_4239_ = v___x_4236_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v_a_4234_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
}
else
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4249_; 
lean_dec_ref_known(v_k_4215_, 1);
lean_dec(v_o_4212_);
v_a_4242_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4244_ = v___x_4216_;
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v___x_4216_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v___x_4247_; 
if (v_isShared_4245_ == 0)
{
v___x_4247_ = v___x_4244_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_a_4242_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object* v_o_4250_, lean_object* v_key_4251_, lean_object* v_a_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_o_4250_, v_key_4251_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object* v_self_4255_){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4257_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4258_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4255_, v___x_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object* v_self_4259_, lean_object* v_a_4260_){
_start:
{
lean_object* v_res_4261_; 
v_res_4261_ = l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(v_self_4259_);
return v_res_4261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object* v_self_4262_){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4264_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4265_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4266_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4262_, v___x_4264_, v___x_4265_);
return v___x_4266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object* v_self_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lasm_JS_Web_ReadableStreamDefaultController_close(v_self_4267_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object* v_self_4271_, lean_object* v_chunk_4272_){
_start:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4274_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4275_ = lean_unsigned_to_nat(1u);
v___x_4276_ = lean_mk_empty_array_with_capacity(v___x_4275_);
v___x_4277_ = lean_array_push(v___x_4276_, v_chunk_4272_);
v___x_4278_ = l_Lasm_JS_Web_Support_args(v___x_4277_);
v___x_4279_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4271_, v___x_4274_, v___x_4278_);
return v___x_4279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object* v_self_4280_, lean_object* v_chunk_4281_, lean_object* v_a_4282_){
_start:
{
lean_object* v_res_4283_; 
v_res_4283_ = l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(v_self_4280_, v_chunk_4281_);
return v_res_4283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object* v_self_4285_, lean_object* v_e_4286_){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; 
v___x_4288_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4289_ = lean_unsigned_to_nat(1u);
v___x_4290_ = lean_mk_empty_array_with_capacity(v___x_4289_);
v___x_4291_ = lean_array_push(v___x_4290_, v_e_4286_);
v___x_4292_ = l_Lasm_JS_Web_Support_args(v___x_4291_);
v___x_4293_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4285_, v___x_4288_, v___x_4292_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object* v_self_4294_, lean_object* v_e_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_Lasm_JS_Web_ReadableStreamDefaultController_error(v_self_4294_, v_e_4295_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object* v_context_4299_, lean_object* v_d_4300_){
_start:
{
lean_object* v___y_4306_; lean_object* v___y_4307_; 
switch(lean_obj_tag(v_d_4300_))
{
case 1:
{
goto v___jp_4302_;
}
case 0:
{
goto v___jp_4302_;
}
default: 
{
if (lean_obj_tag(v_d_4300_) == 9)
{
lean_object* v_value_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v_value_4311_ = lean_ctor_get(v_d_4300_, 0);
lean_inc(v_value_4311_);
lean_dec_ref_known(v_d_4300_, 2);
v___x_4312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4312_, 0, v_value_4311_);
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
return v___x_4313_;
}
else
{
lean_object* v___x_4314_; lean_object* v_received_4316_; 
v___x_4314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4300_) == 9)
{
lean_object* v_value_4330_; lean_object* v_description_4331_; uint8_t v___x_4332_; 
v_value_4330_ = lean_ctor_get(v_d_4300_, 0);
v_description_4331_ = lean_ctor_get(v_d_4300_, 1);
v___x_4332_ = lean_string_dec_eq(v_description_4331_, v___x_4314_);
if (v___x_4332_ == 0)
{
goto v___jp_4328_;
}
else
{
uint32_t v___x_4333_; uint64_t v___x_4334_; lean_object* v___x_4335_; uint32_t v___x_4336_; lean_object* v___x_4337_; 
lean_inc_n(v_value_4330_, 2);
lean_dec_ref_known(v_d_4300_, 2);
v___x_4333_ = 206;
v___x_4334_ = 0ULL;
v___x_4335_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4335_, 0, v_value_4330_);
lean_ctor_set(v___x_4335_, 1, v___x_4314_);
v___x_4336_ = lasm_js_value_handle(v_value_4330_);
lean_dec(v_value_4330_);
v___x_4337_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4333_, v___x_4334_, v___x_4335_, v___x_4336_);
lean_dec_ref_known(v___x_4335_, 2);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; uint8_t v___x_4339_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v___x_4337_, 1);
v___x_4339_ = lean_string_validate_utf8(v_a_4338_);
if (v___x_4339_ == 0)
{
lean_object* v___x_4340_; lean_object* v___x_4341_; 
lean_dec(v_a_4338_);
v___x_4340_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4341_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4340_);
v_received_4316_ = v___x_4341_;
goto v___jp_4315_;
}
else
{
lean_object* v___x_4342_; 
v___x_4342_ = lean_string_from_utf8_unchecked(v_a_4338_);
v_received_4316_ = v___x_4342_;
goto v___jp_4315_;
}
}
else
{
lean_object* v___x_4343_; 
lean_dec_ref_known(v___x_4337_, 1);
v___x_4343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4316_ = v___x_4343_;
goto v___jp_4315_;
}
}
}
else
{
goto v___jp_4328_;
}
v___jp_4315_:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; uint8_t v___x_4326_; 
v___x_4317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4318_ = lean_string_append(v___x_4317_, v_context_4299_);
v___x_4319_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4320_ = lean_string_append(v___x_4318_, v___x_4319_);
v___x_4321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0));
v___x_4322_ = lean_string_append(v___x_4320_, v___x_4321_);
v___x_4323_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4324_ = lean_string_append(v___x_4322_, v___x_4323_);
v___x_4325_ = lean_string_append(v___x_4324_, v_received_4316_);
lean_dec_ref(v_received_4316_);
v___x_4326_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; 
v___x_4327_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4306_ = v___x_4325_;
v___y_4307_ = v___x_4327_;
goto v___jp_4305_;
}
else
{
v___y_4306_ = v___x_4325_;
v___y_4307_ = v___x_4314_;
goto v___jp_4305_;
}
}
v___jp_4328_:
{
lean_object* v___x_4329_; 
v___x_4329_ = l_Lasm_JS_Data_describe(v_d_4300_);
v_received_4316_ = v___x_4329_;
goto v___jp_4315_;
}
}
}
}
v___jp_4302_:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = lean_box(0);
v___x_4304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4303_);
return v___x_4304_;
}
v___jp_4305_:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4308_ = lean_string_append(v___y_4306_, v___y_4307_);
v___x_4309_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4308_);
v___x_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4310_, 0, v___x_4309_);
return v___x_4310_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4344_, lean_object* v_d_4345_, lean_object* v_a_4346_){
_start:
{
lean_object* v_res_4347_; 
v_res_4347_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4344_, v_d_4345_);
lean_dec_ref(v_context_4344_);
return v_res_4347_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object* v_context_4348_, lean_object* v_bytes_4349_){
_start:
{
lean_object* v___x_4351_; 
v___x_4351_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4349_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v___x_4353_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc(v_a_4352_);
lean_dec_ref_known(v___x_4351_, 1);
v___x_4353_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4348_, v_a_4352_);
return v___x_4353_;
}
else
{
lean_object* v_a_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4361_; 
v_a_4354_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4356_ = v___x_4351_;
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_a_4354_);
lean_dec(v___x_4351_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4361_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4359_; 
if (v_isShared_4357_ == 0)
{
v___x_4359_ = v___x_4356_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_a_4354_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object* v_context_4362_, lean_object* v_bytes_4363_, lean_object* v_a_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v_context_4362_, v_bytes_4363_);
lean_dec_ref(v_bytes_4363_);
lean_dec_ref(v_context_4362_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object* v_o_4366_, lean_object* v_key_4367_){
_start:
{
lean_object* v_k_4369_; lean_object* v___x_4370_; 
v_k_4369_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4369_, 0, v_key_4367_);
v___x_4370_ = l_Lasm_JS_Wire_encodeIO(v_k_4369_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; uint32_t v___x_4372_; uint32_t v___x_4373_; uint64_t v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
lean_inc(v_a_4371_);
lean_dec_ref_known(v___x_4370_, 1);
v___x_4372_ = 203;
v___x_4373_ = lasm_js_value_handle(v_o_4366_);
v___x_4374_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4376_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4376_, 0, v_o_4366_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
v___x_4377_ = lean_unsigned_to_nat(2u);
v___x_4378_ = lean_mk_empty_array_with_capacity(v___x_4377_);
lean_inc_ref(v_k_4369_);
v___x_4379_ = lean_array_push(v___x_4378_, v_k_4369_);
v___x_4380_ = lean_array_push(v___x_4379_, v___x_4376_);
v___x_4381_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4380_);
v___x_4382_ = lasm_js_call(v___x_4372_, v___x_4373_, v___x_4374_, v_a_4371_, v___x_4381_);
lean_dec_ref_known(v___x_4381_, 1);
lean_dec(v_a_4371_);
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
lean_inc(v_a_4383_);
lean_dec_ref_known(v___x_4382_, 1);
v___x_4384_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4385_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4369_);
v___x_4386_ = lean_string_append(v___x_4384_, v___x_4385_);
lean_dec_ref(v___x_4385_);
v___x_4387_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v___x_4386_, v_a_4383_);
lean_dec(v_a_4383_);
lean_dec_ref(v___x_4386_);
return v___x_4387_;
}
else
{
lean_object* v_a_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4395_; 
lean_dec_ref_known(v_k_4369_, 1);
v_a_4388_ = lean_ctor_get(v___x_4382_, 0);
v_isSharedCheck_4395_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4390_ = v___x_4382_;
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_a_4388_);
lean_dec(v___x_4382_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4393_; 
if (v_isShared_4391_ == 0)
{
v___x_4393_ = v___x_4390_;
goto v_reusejp_4392_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_a_4388_);
v___x_4393_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4392_;
}
v_reusejp_4392_:
{
return v___x_4393_;
}
}
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4403_; 
lean_dec_ref_known(v_k_4369_, 1);
lean_dec(v_o_4366_);
v_a_4396_ = lean_ctor_get(v___x_4370_, 0);
v_isSharedCheck_4403_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4403_ == 0)
{
v___x_4398_ = v___x_4370_;
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v___x_4370_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4403_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4401_; 
if (v_isShared_4399_ == 0)
{
v___x_4401_ = v___x_4398_;
goto v_reusejp_4400_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v_a_4396_);
v___x_4401_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4400_;
}
v_reusejp_4400_:
{
return v___x_4401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object* v_o_4404_, lean_object* v_key_4405_, lean_object* v_a_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_o_4404_, v_key_4405_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object* v_self_4409_){
_start:
{
lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4411_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0));
v___x_4412_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_self_4409_, v___x_4411_);
return v___x_4412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object* v_self_4413_, lean_object* v_a_4414_){
_start:
{
lean_object* v_res_4415_; 
v_res_4415_ = l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(v_self_4413_);
return v_res_4415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object* v_self_4416_){
_start:
{
lean_object* v___x_4418_; lean_object* v___x_4419_; 
v___x_4418_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4419_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4416_, v___x_4418_);
return v___x_4419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object* v_self_4420_, lean_object* v_a_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(v_self_4420_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object* v_self_4423_){
_start:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4425_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4426_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4427_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4423_, v___x_4425_, v___x_4426_);
return v___x_4427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object* v_self_4428_, lean_object* v_a_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_Lasm_JS_Web_ReadableByteStreamController_close(v_self_4428_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object* v_self_4431_, lean_object* v_chunk_4432_){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; 
v___x_4434_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4435_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4435_, 0, v_chunk_4432_);
v___x_4436_ = lean_unsigned_to_nat(1u);
v___x_4437_ = lean_mk_empty_array_with_capacity(v___x_4436_);
v___x_4438_ = lean_array_push(v___x_4437_, v___x_4435_);
v___x_4439_ = l_Lasm_JS_Web_Support_args(v___x_4438_);
v___x_4440_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4431_, v___x_4434_, v___x_4439_);
return v___x_4440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object* v_self_4441_, lean_object* v_chunk_4442_, lean_object* v_a_4443_){
_start:
{
lean_object* v_res_4444_; 
v_res_4444_ = l_Lasm_JS_Web_ReadableByteStreamController_enqueue(v_self_4441_, v_chunk_4442_);
return v_res_4444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object* v_self_4445_, lean_object* v_e_4446_){
_start:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
v___x_4448_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4449_ = lean_unsigned_to_nat(1u);
v___x_4450_ = lean_mk_empty_array_with_capacity(v___x_4449_);
v___x_4451_ = lean_array_push(v___x_4450_, v_e_4446_);
v___x_4452_ = l_Lasm_JS_Web_Support_args(v___x_4451_);
v___x_4453_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4445_, v___x_4448_, v___x_4452_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object* v_self_4454_, lean_object* v_e_4455_, lean_object* v_a_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Lasm_JS_Web_ReadableByteStreamController_error(v_self_4454_, v_e_4455_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object* v_context_4459_, lean_object* v_d_4460_){
_start:
{
lean_object* v___y_4466_; lean_object* v___y_4467_; 
switch(lean_obj_tag(v_d_4460_))
{
case 1:
{
goto v___jp_4462_;
}
case 0:
{
goto v___jp_4462_;
}
default: 
{
if (lean_obj_tag(v_d_4460_) == 6)
{
lean_object* v_b_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v_b_4471_ = lean_ctor_get(v_d_4460_, 0);
lean_inc_ref(v_b_4471_);
lean_dec_ref_known(v_d_4460_, 1);
v___x_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4472_, 0, v_b_4471_);
v___x_4473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4472_);
return v___x_4473_;
}
else
{
lean_object* v___x_4474_; lean_object* v_received_4476_; 
v___x_4474_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4460_) == 9)
{
lean_object* v_value_4490_; lean_object* v_description_4491_; uint8_t v___x_4492_; 
v_value_4490_ = lean_ctor_get(v_d_4460_, 0);
v_description_4491_ = lean_ctor_get(v_d_4460_, 1);
v___x_4492_ = lean_string_dec_eq(v_description_4491_, v___x_4474_);
if (v___x_4492_ == 0)
{
goto v___jp_4488_;
}
else
{
uint32_t v___x_4493_; uint64_t v___x_4494_; lean_object* v___x_4495_; uint32_t v___x_4496_; lean_object* v___x_4497_; 
lean_inc_n(v_value_4490_, 2);
lean_dec_ref_known(v_d_4460_, 2);
v___x_4493_ = 206;
v___x_4494_ = 0ULL;
v___x_4495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4495_, 0, v_value_4490_);
lean_ctor_set(v___x_4495_, 1, v___x_4474_);
v___x_4496_ = lasm_js_value_handle(v_value_4490_);
lean_dec(v_value_4490_);
v___x_4497_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4493_, v___x_4494_, v___x_4495_, v___x_4496_);
lean_dec_ref_known(v___x_4495_, 2);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v_a_4498_; uint8_t v___x_4499_; 
v_a_4498_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_a_4498_);
lean_dec_ref_known(v___x_4497_, 1);
v___x_4499_ = lean_string_validate_utf8(v_a_4498_);
if (v___x_4499_ == 0)
{
lean_object* v___x_4500_; lean_object* v___x_4501_; 
lean_dec(v_a_4498_);
v___x_4500_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4501_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4500_);
v_received_4476_ = v___x_4501_;
goto v___jp_4475_;
}
else
{
lean_object* v___x_4502_; 
v___x_4502_ = lean_string_from_utf8_unchecked(v_a_4498_);
v_received_4476_ = v___x_4502_;
goto v___jp_4475_;
}
}
else
{
lean_object* v___x_4503_; 
lean_dec_ref_known(v___x_4497_, 1);
v___x_4503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4476_ = v___x_4503_;
goto v___jp_4475_;
}
}
}
else
{
goto v___jp_4488_;
}
v___jp_4475_:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; uint8_t v___x_4486_; 
v___x_4477_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4478_ = lean_string_append(v___x_4477_, v_context_4459_);
v___x_4479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4480_ = lean_string_append(v___x_4478_, v___x_4479_);
v___x_4481_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0));
v___x_4482_ = lean_string_append(v___x_4480_, v___x_4481_);
v___x_4483_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4484_ = lean_string_append(v___x_4482_, v___x_4483_);
v___x_4485_ = lean_string_append(v___x_4484_, v_received_4476_);
lean_dec_ref(v_received_4476_);
v___x_4486_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4486_ == 0)
{
lean_object* v___x_4487_; 
v___x_4487_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4466_ = v___x_4485_;
v___y_4467_ = v___x_4487_;
goto v___jp_4465_;
}
else
{
v___y_4466_ = v___x_4485_;
v___y_4467_ = v___x_4474_;
goto v___jp_4465_;
}
}
v___jp_4488_:
{
lean_object* v___x_4489_; 
v___x_4489_ = l_Lasm_JS_Data_describe(v_d_4460_);
v_received_4476_ = v___x_4489_;
goto v___jp_4475_;
}
}
}
}
v___jp_4462_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4463_ = lean_box(0);
v___x_4464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4463_);
return v___x_4464_;
}
v___jp_4465_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4468_ = lean_string_append(v___y_4466_, v___y_4467_);
v___x_4469_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
v___x_4470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4470_, 0, v___x_4469_);
return v___x_4470_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4504_, lean_object* v_d_4505_, lean_object* v_a_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4504_, v_d_4505_);
lean_dec_ref(v_context_4504_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object* v_context_4508_, lean_object* v_bytes_4509_){
_start:
{
lean_object* v___x_4511_; 
v___x_4511_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4509_);
if (lean_obj_tag(v___x_4511_) == 0)
{
lean_object* v_a_4512_; lean_object* v___x_4513_; 
v_a_4512_ = lean_ctor_get(v___x_4511_, 0);
lean_inc(v_a_4512_);
lean_dec_ref_known(v___x_4511_, 1);
v___x_4513_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4508_, v_a_4512_);
return v___x_4513_;
}
else
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4521_; 
v_a_4514_ = lean_ctor_get(v___x_4511_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v___x_4511_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4516_ = v___x_4511_;
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4511_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4517_ == 0)
{
v___x_4519_ = v___x_4516_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_a_4514_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
return v___x_4519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object* v_context_4522_, lean_object* v_bytes_4523_, lean_object* v_a_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v_context_4522_, v_bytes_4523_);
lean_dec_ref(v_bytes_4523_);
lean_dec_ref(v_context_4522_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object* v_o_4526_, lean_object* v_key_4527_){
_start:
{
lean_object* v_k_4529_; lean_object* v___x_4530_; 
v_k_4529_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4529_, 0, v_key_4527_);
v___x_4530_ = l_Lasm_JS_Wire_encodeIO(v_k_4529_);
if (lean_obj_tag(v___x_4530_) == 0)
{
lean_object* v_a_4531_; uint32_t v___x_4532_; uint32_t v___x_4533_; uint64_t v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v_a_4531_ = lean_ctor_get(v___x_4530_, 0);
lean_inc(v_a_4531_);
lean_dec_ref_known(v___x_4530_, 1);
v___x_4532_ = 203;
v___x_4533_ = lasm_js_value_handle(v_o_4526_);
v___x_4534_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4535_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4536_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4536_, 0, v_o_4526_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___x_4537_ = lean_unsigned_to_nat(2u);
v___x_4538_ = lean_mk_empty_array_with_capacity(v___x_4537_);
lean_inc_ref(v_k_4529_);
v___x_4539_ = lean_array_push(v___x_4538_, v_k_4529_);
v___x_4540_ = lean_array_push(v___x_4539_, v___x_4536_);
v___x_4541_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4541_, 0, v___x_4540_);
v___x_4542_ = lasm_js_call(v___x_4532_, v___x_4533_, v___x_4534_, v_a_4531_, v___x_4541_);
lean_dec_ref_known(v___x_4541_, 1);
lean_dec(v_a_4531_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
v___x_4544_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4545_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4529_);
v___x_4546_ = lean_string_append(v___x_4544_, v___x_4545_);
lean_dec_ref(v___x_4545_);
v___x_4547_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v___x_4546_, v_a_4543_);
lean_dec(v_a_4543_);
lean_dec_ref(v___x_4546_);
return v___x_4547_;
}
else
{
lean_object* v_a_4548_; lean_object* v___x_4550_; uint8_t v_isShared_4551_; uint8_t v_isSharedCheck_4555_; 
lean_dec_ref_known(v_k_4529_, 1);
v_a_4548_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4550_ = v___x_4542_;
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
else
{
lean_inc(v_a_4548_);
lean_dec(v___x_4542_);
v___x_4550_ = lean_box(0);
v_isShared_4551_ = v_isSharedCheck_4555_;
goto v_resetjp_4549_;
}
v_resetjp_4549_:
{
lean_object* v___x_4553_; 
if (v_isShared_4551_ == 0)
{
v___x_4553_ = v___x_4550_;
goto v_reusejp_4552_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v_a_4548_);
v___x_4553_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4552_;
}
v_reusejp_4552_:
{
return v___x_4553_;
}
}
}
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
lean_dec_ref_known(v_k_4529_, 1);
lean_dec(v_o_4526_);
v_a_4556_ = lean_ctor_get(v___x_4530_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4530_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4530_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4530_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object* v_o_4564_, lean_object* v_key_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_o_4564_, v_key_4565_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object* v_self_4569_){
_start:
{
lean_object* v___x_4571_; lean_object* v___x_4572_; 
v___x_4571_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0));
v___x_4572_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_self_4569_, v___x_4571_);
return v___x_4572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object* v_self_4573_, lean_object* v_a_4574_){
_start:
{
lean_object* v_res_4575_; 
v_res_4575_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(v_self_4573_);
return v_res_4575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object* v_self_4577_, lean_object* v_bytesWritten_4578_){
_start:
{
lean_object* v___x_4580_; lean_object* v___y_4582_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; 
v___x_4580_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0));
v___x_4588_ = lean_nat_to_int(v_bytesWritten_4578_);
v___x_4589_ = lean_nat_abs(v___x_4588_);
v___x_4590_ = lean_cstr_to_nat("9007199254740991");
v___x_4591_ = lean_nat_dec_le(v___x_4589_, v___x_4590_);
lean_dec(v___x_4589_);
if (v___x_4591_ == 0)
{
lean_object* v___x_4592_; 
v___x_4592_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4588_);
v___y_4582_ = v___x_4592_;
goto v___jp_4581_;
}
else
{
double v___x_4593_; lean_object* v___x_4594_; 
v___x_4593_ = l_Float_ofInt(v___x_4588_);
lean_dec(v___x_4588_);
v___x_4594_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4594_, 0, v___x_4593_);
v___y_4582_ = v___x_4594_;
goto v___jp_4581_;
}
v___jp_4581_:
{
lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4583_ = lean_unsigned_to_nat(1u);
v___x_4584_ = lean_mk_empty_array_with_capacity(v___x_4583_);
v___x_4585_ = lean_array_push(v___x_4584_, v___y_4582_);
v___x_4586_ = l_Lasm_JS_Web_Support_args(v___x_4585_);
v___x_4587_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4577_, v___x_4580_, v___x_4586_);
return v___x_4587_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object* v_self_4595_, lean_object* v_bytesWritten_4596_, lean_object* v_a_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(v_self_4595_, v_bytesWritten_4596_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object* v_self_4600_, lean_object* v_view_4601_){
_start:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4603_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0));
v___x_4604_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4604_, 0, v_view_4601_);
v___x_4605_ = lean_unsigned_to_nat(1u);
v___x_4606_ = lean_mk_empty_array_with_capacity(v___x_4605_);
v___x_4607_ = lean_array_push(v___x_4606_, v___x_4604_);
v___x_4608_ = l_Lasm_JS_Web_Support_args(v___x_4607_);
v___x_4609_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4600_, v___x_4603_, v___x_4608_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object* v_self_4610_, lean_object* v_view_4611_, lean_object* v_a_4612_){
_start:
{
lean_object* v_res_4613_; 
v_res_4613_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(v_self_4610_, v_view_4611_);
return v_res_4613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object* v_context_4614_, lean_object* v_d_4615_){
_start:
{
lean_object* v___y_4618_; lean_object* v___y_4619_; 
if (lean_obj_tag(v_d_4615_) == 9)
{
lean_object* v_value_4623_; lean_object* v___x_4624_; 
v_value_4623_ = lean_ctor_get(v_d_4615_, 0);
lean_inc(v_value_4623_);
lean_dec_ref_known(v_d_4615_, 2);
v___x_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4624_, 0, v_value_4623_);
return v___x_4624_;
}
else
{
lean_object* v___x_4625_; lean_object* v_received_4627_; 
v___x_4625_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4615_) == 9)
{
lean_object* v_value_4641_; lean_object* v_description_4642_; uint8_t v___x_4643_; 
v_value_4641_ = lean_ctor_get(v_d_4615_, 0);
v_description_4642_ = lean_ctor_get(v_d_4615_, 1);
v___x_4643_ = lean_string_dec_eq(v_description_4642_, v___x_4625_);
if (v___x_4643_ == 0)
{
goto v___jp_4639_;
}
else
{
uint32_t v___x_4644_; uint64_t v___x_4645_; lean_object* v___x_4646_; uint32_t v___x_4647_; lean_object* v___x_4648_; 
lean_inc_n(v_value_4641_, 2);
lean_dec_ref_known(v_d_4615_, 2);
v___x_4644_ = 206;
v___x_4645_ = 0ULL;
v___x_4646_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4646_, 0, v_value_4641_);
lean_ctor_set(v___x_4646_, 1, v___x_4625_);
v___x_4647_ = lasm_js_value_handle(v_value_4641_);
lean_dec(v_value_4641_);
v___x_4648_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4644_, v___x_4645_, v___x_4646_, v___x_4647_);
lean_dec_ref_known(v___x_4646_, 2);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; uint8_t v___x_4650_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
lean_inc(v_a_4649_);
lean_dec_ref_known(v___x_4648_, 1);
v___x_4650_ = lean_string_validate_utf8(v_a_4649_);
if (v___x_4650_ == 0)
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
lean_dec(v_a_4649_);
v___x_4651_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4652_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4651_);
v_received_4627_ = v___x_4652_;
goto v___jp_4626_;
}
else
{
lean_object* v___x_4653_; 
v___x_4653_ = lean_string_from_utf8_unchecked(v_a_4649_);
v_received_4627_ = v___x_4653_;
goto v___jp_4626_;
}
}
else
{
lean_object* v___x_4654_; 
lean_dec_ref_known(v___x_4648_, 1);
v___x_4654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4627_ = v___x_4654_;
goto v___jp_4626_;
}
}
}
else
{
goto v___jp_4639_;
}
v___jp_4626_:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; uint8_t v___x_4637_; 
v___x_4628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4629_ = lean_string_append(v___x_4628_, v_context_4614_);
v___x_4630_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4631_ = lean_string_append(v___x_4629_, v___x_4630_);
v___x_4632_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStream___closed__0));
v___x_4633_ = lean_string_append(v___x_4631_, v___x_4632_);
v___x_4634_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4635_ = lean_string_append(v___x_4633_, v___x_4634_);
v___x_4636_ = lean_string_append(v___x_4635_, v_received_4627_);
lean_dec_ref(v_received_4627_);
v___x_4637_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4637_ == 0)
{
lean_object* v___x_4638_; 
v___x_4638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4618_ = v___x_4636_;
v___y_4619_ = v___x_4638_;
goto v___jp_4617_;
}
else
{
v___y_4618_ = v___x_4636_;
v___y_4619_ = v___x_4625_;
goto v___jp_4617_;
}
}
v___jp_4639_:
{
lean_object* v___x_4640_; 
v___x_4640_ = l_Lasm_JS_Data_describe(v_d_4615_);
v_received_4627_ = v___x_4640_;
goto v___jp_4626_;
}
}
v___jp_4617_:
{
lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; 
v___x_4620_ = lean_string_append(v___y_4618_, v___y_4619_);
v___x_4621_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4621_, 0, v___x_4620_);
v___x_4622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
return v___x_4622_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object* v_context_4655_, lean_object* v_d_4656_, lean_object* v_a_4657_){
_start:
{
lean_object* v_res_4658_; 
v_res_4658_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_4655_, v_d_4656_);
lean_dec_ref(v_context_4655_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object* v_b_4659_, lean_object* v_args_4660_, uint8_t v_await_4661_){
_start:
{
uint64_t v___y_4664_; uint64_t v___y_4665_; uint64_t v___x_4708_; uint64_t v___y_4710_; 
v___x_4708_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4661_ == 0)
{
uint64_t v___x_4715_; 
v___x_4715_ = 0ULL;
v___y_4710_ = v___x_4715_;
goto v___jp_4709_;
}
else
{
uint64_t v___x_4716_; 
v___x_4716_ = 2ULL;
v___y_4710_ = v___x_4716_;
goto v___jp_4709_;
}
v___jp_4663_:
{
uint64_t v_flags_4666_; uint32_t v___x_4667_; lean_object* v___x_4668_; uint32_t v___x_4669_; lean_object* v___x_4670_; 
v_flags_4666_ = lean_uint64_lor(v___y_4664_, v___y_4665_);
v___x_4667_ = 214;
v___x_4668_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4659_, v_args_4660_);
v___x_4669_ = 0;
v___x_4670_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4667_, v_flags_4666_, v___x_4668_, v___x_4669_);
lean_dec(v___x_4668_);
if (lean_obj_tag(v___x_4670_) == 0)
{
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v_a_4671_; lean_object* v___x_4672_; 
v_a_4671_ = lean_ctor_get(v___x_4670_, 0);
lean_inc(v_a_4671_);
lean_dec_ref_known(v___x_4670_, 1);
v___x_4672_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4671_);
lean_dec(v_a_4671_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
lean_inc(v_a_4673_);
lean_dec_ref_known(v___x_4672_, 1);
v___x_4674_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4659_);
v___x_4675_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v___x_4674_, v_a_4673_);
lean_dec_ref(v___x_4674_);
return v___x_4675_;
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
v_a_4676_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4672_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4672_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
else
{
lean_object* v_a_4684_; lean_object* v___x_4686_; uint8_t v_isShared_4687_; uint8_t v_isSharedCheck_4691_; 
v_a_4684_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4691_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4691_ == 0)
{
v___x_4686_ = v___x_4670_;
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
else
{
lean_inc(v_a_4684_);
lean_dec(v___x_4670_);
v___x_4686_ = lean_box(0);
v_isShared_4687_ = v_isSharedCheck_4691_;
goto v_resetjp_4685_;
}
v_resetjp_4685_:
{
lean_object* v___x_4689_; 
if (v_isShared_4687_ == 0)
{
lean_ctor_set_tag(v___x_4686_, 1);
v___x_4689_ = v___x_4686_;
goto v_reusejp_4688_;
}
else
{
lean_object* v_reuseFailAlloc_4690_; 
v_reuseFailAlloc_4690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4690_, 0, v_a_4684_);
v___x_4689_ = v_reuseFailAlloc_4690_;
goto v_reusejp_4688_;
}
v_reusejp_4688_:
{
return v___x_4689_;
}
}
}
}
else
{
lean_object* v_a_4692_; lean_object* v___x_4694_; uint8_t v_isShared_4695_; uint8_t v_isSharedCheck_4707_; 
v_a_4692_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4694_ = v___x_4670_;
v_isShared_4695_ = v_isSharedCheck_4707_;
goto v_resetjp_4693_;
}
else
{
lean_inc(v_a_4692_);
lean_dec(v___x_4670_);
v___x_4694_ = lean_box(0);
v_isShared_4695_ = v_isSharedCheck_4707_;
goto v_resetjp_4693_;
}
v_resetjp_4693_:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4705_; 
v___x_4696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4697_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4659_);
v___x_4698_ = lean_string_append(v___x_4696_, v___x_4697_);
lean_dec_ref(v___x_4697_);
v___x_4699_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4700_ = lean_string_append(v___x_4698_, v___x_4699_);
v___x_4701_ = lean_io_error_to_string(v_a_4692_);
v___x_4702_ = lean_string_append(v___x_4700_, v___x_4701_);
lean_dec_ref(v___x_4701_);
v___x_4703_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4703_, 0, v___x_4702_);
if (v_isShared_4695_ == 0)
{
lean_ctor_set(v___x_4694_, 0, v___x_4703_);
v___x_4705_ = v___x_4694_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v___x_4703_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
v___jp_4709_:
{
uint8_t v_construct_4711_; uint64_t v___x_4712_; 
v_construct_4711_ = lean_ctor_get_uint8(v_b_4659_, sizeof(void*)*4);
v___x_4712_ = lean_uint64_lor(v___x_4708_, v___y_4710_);
if (v_construct_4711_ == 0)
{
uint64_t v___x_4713_; 
v___x_4713_ = 0ULL;
v___y_4664_ = v___x_4712_;
v___y_4665_ = v___x_4713_;
goto v___jp_4663_;
}
else
{
uint64_t v___x_4714_; 
v___x_4714_ = 4ULL;
v___y_4664_ = v___x_4712_;
v___y_4665_ = v___x_4714_;
goto v___jp_4663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object* v_b_4717_, lean_object* v_args_4718_, lean_object* v_await_4719_, lean_object* v_a_4720_){
_start:
{
uint8_t v_await_boxed_4721_; lean_object* v_res_4722_; 
v_await_boxed_4721_ = lean_unbox(v_await_4719_);
v_res_4722_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v_b_4717_, v_args_4718_, v_await_boxed_4721_);
lean_dec_ref(v_b_4717_);
return v_res_4722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object* v_underlyingSink_4731_, lean_object* v_strategy_4732_){
_start:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; uint8_t v___x_4741_; lean_object* v___x_4742_; 
v___x_4734_ = lean_unsigned_to_nat(2u);
v___x_4735_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_new___closed__2));
v___x_4736_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_4732_);
v___x_4737_ = lean_mk_empty_array_with_capacity(v___x_4734_);
v___x_4738_ = lean_array_push(v___x_4737_, v_underlyingSink_4731_);
v___x_4739_ = lean_array_push(v___x_4738_, v___x_4736_);
v___x_4740_ = l_Lasm_JS_Web_Support_args(v___x_4739_);
v___x_4741_ = 0;
v___x_4742_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v___x_4735_, v___x_4740_, v___x_4741_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object* v_underlyingSink_4743_, lean_object* v_strategy_4744_, lean_object* v_a_4745_){
_start:
{
lean_object* v_res_4746_; 
v_res_4746_ = l_Lasm_JS_Web_WritableStream_new(v_underlyingSink_4743_, v_strategy_4744_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object* v_self_4747_){
_start:
{
lean_object* v___x_4749_; lean_object* v___x_4750_; 
v___x_4749_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_4750_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4747_, v___x_4749_);
return v___x_4750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object* v_self_4751_, lean_object* v_a_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l_Lasm_JS_Web_WritableStream_locked(v_self_4751_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object* v_self_4754_, lean_object* v_reason_4755_){
_start:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4757_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_4758_ = lean_unsigned_to_nat(1u);
v___x_4759_ = lean_mk_empty_array_with_capacity(v___x_4758_);
v___x_4760_ = lean_array_push(v___x_4759_, v_reason_4755_);
v___x_4761_ = l_Lasm_JS_Web_Support_args(v___x_4760_);
v___x_4762_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4754_, v___x_4757_, v___x_4761_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object* v_self_4763_, lean_object* v_reason_4764_, lean_object* v_a_4765_){
_start:
{
lean_object* v_res_4766_; 
v_res_4766_ = l_Lasm_JS_Web_WritableStream_abort(v_self_4763_, v_reason_4764_);
return v_res_4766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object* v_self_4767_){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; 
v___x_4769_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4770_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4771_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4767_, v___x_4769_, v___x_4770_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object* v_self_4772_, lean_object* v_a_4773_){
_start:
{
lean_object* v_res_4774_; 
v_res_4774_ = l_Lasm_JS_Web_WritableStream_close(v_self_4772_);
return v_res_4774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object* v_self_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; 
v___x_4778_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_getWriter___closed__0));
v___x_4779_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4780_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_4776_, v___x_4778_, v___x_4779_);
if (lean_obj_tag(v___x_4780_) == 0)
{
lean_object* v_a_4781_; lean_object* v___x_4783_; uint8_t v_isShared_4784_; uint8_t v_isSharedCheck_4788_; 
v_a_4781_ = lean_ctor_get(v___x_4780_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4780_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4783_ = v___x_4780_;
v_isShared_4784_ = v_isSharedCheck_4788_;
goto v_resetjp_4782_;
}
else
{
lean_inc(v_a_4781_);
lean_dec(v___x_4780_);
v___x_4783_ = lean_box(0);
v_isShared_4784_ = v_isSharedCheck_4788_;
goto v_resetjp_4782_;
}
v_resetjp_4782_:
{
lean_object* v___x_4786_; 
if (v_isShared_4784_ == 0)
{
v___x_4786_ = v___x_4783_;
goto v_reusejp_4785_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v_a_4781_);
v___x_4786_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4785_;
}
v_reusejp_4785_:
{
return v___x_4786_;
}
}
}
else
{
lean_object* v_a_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4796_; 
v_a_4789_ = lean_ctor_get(v___x_4780_, 0);
v_isSharedCheck_4796_ = !lean_is_exclusive(v___x_4780_);
if (v_isSharedCheck_4796_ == 0)
{
v___x_4791_ = v___x_4780_;
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_a_4789_);
lean_dec(v___x_4780_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4796_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v___x_4794_; 
if (v_isShared_4792_ == 0)
{
v___x_4794_ = v___x_4791_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4795_; 
v_reuseFailAlloc_4795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4795_, 0, v_a_4789_);
v___x_4794_ = v_reuseFailAlloc_4795_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
return v___x_4794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object* v_self_4797_, lean_object* v_a_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Lasm_JS_Web_WritableStream_getWriter(v_self_4797_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object* v_context_4800_, lean_object* v_d_4801_){
_start:
{
lean_object* v___y_4804_; lean_object* v___y_4805_; 
if (lean_obj_tag(v_d_4801_) == 9)
{
lean_object* v_value_4809_; lean_object* v___x_4810_; 
v_value_4809_ = lean_ctor_get(v_d_4801_, 0);
lean_inc(v_value_4809_);
lean_dec_ref_known(v_d_4801_, 2);
v___x_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4810_, 0, v_value_4809_);
return v___x_4810_;
}
else
{
lean_object* v___x_4811_; lean_object* v_received_4813_; 
v___x_4811_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4801_) == 9)
{
lean_object* v_value_4827_; lean_object* v_description_4828_; uint8_t v___x_4829_; 
v_value_4827_ = lean_ctor_get(v_d_4801_, 0);
v_description_4828_ = lean_ctor_get(v_d_4801_, 1);
v___x_4829_ = lean_string_dec_eq(v_description_4828_, v___x_4811_);
if (v___x_4829_ == 0)
{
goto v___jp_4825_;
}
else
{
uint32_t v___x_4830_; uint64_t v___x_4831_; lean_object* v___x_4832_; uint32_t v___x_4833_; lean_object* v___x_4834_; 
lean_inc_n(v_value_4827_, 2);
lean_dec_ref_known(v_d_4801_, 2);
v___x_4830_ = 206;
v___x_4831_ = 0ULL;
v___x_4832_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4832_, 0, v_value_4827_);
lean_ctor_set(v___x_4832_, 1, v___x_4811_);
v___x_4833_ = lasm_js_value_handle(v_value_4827_);
lean_dec(v_value_4827_);
v___x_4834_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4830_, v___x_4831_, v___x_4832_, v___x_4833_);
lean_dec_ref_known(v___x_4832_, 2);
if (lean_obj_tag(v___x_4834_) == 0)
{
lean_object* v_a_4835_; uint8_t v___x_4836_; 
v_a_4835_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_a_4835_);
lean_dec_ref_known(v___x_4834_, 1);
v___x_4836_ = lean_string_validate_utf8(v_a_4835_);
if (v___x_4836_ == 0)
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
lean_dec(v_a_4835_);
v___x_4837_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4838_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4837_);
v_received_4813_ = v___x_4838_;
goto v___jp_4812_;
}
else
{
lean_object* v___x_4839_; 
v___x_4839_ = lean_string_from_utf8_unchecked(v_a_4835_);
v_received_4813_ = v___x_4839_;
goto v___jp_4812_;
}
}
else
{
lean_object* v___x_4840_; 
lean_dec_ref_known(v___x_4834_, 1);
v___x_4840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4813_ = v___x_4840_;
goto v___jp_4812_;
}
}
}
else
{
goto v___jp_4825_;
}
v___jp_4812_:
{
lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; uint8_t v___x_4823_; 
v___x_4814_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4815_ = lean_string_append(v___x_4814_, v_context_4800_);
v___x_4816_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4817_ = lean_string_append(v___x_4815_, v___x_4816_);
v___x_4818_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0));
v___x_4819_ = lean_string_append(v___x_4817_, v___x_4818_);
v___x_4820_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4821_ = lean_string_append(v___x_4819_, v___x_4820_);
v___x_4822_ = lean_string_append(v___x_4821_, v_received_4813_);
lean_dec_ref(v_received_4813_);
v___x_4823_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4823_ == 0)
{
lean_object* v___x_4824_; 
v___x_4824_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4804_ = v___x_4822_;
v___y_4805_ = v___x_4824_;
goto v___jp_4803_;
}
else
{
v___y_4804_ = v___x_4822_;
v___y_4805_ = v___x_4811_;
goto v___jp_4803_;
}
}
v___jp_4825_:
{
lean_object* v___x_4826_; 
v___x_4826_ = l_Lasm_JS_Data_describe(v_d_4801_);
v_received_4813_ = v___x_4826_;
goto v___jp_4812_;
}
}
v___jp_4803_:
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4806_ = lean_string_append(v___y_4804_, v___y_4805_);
v___x_4807_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
v___x_4808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4807_);
return v___x_4808_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object* v_context_4841_, lean_object* v_d_4842_, lean_object* v_a_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v_context_4841_, v_d_4842_);
lean_dec_ref(v_context_4841_);
return v_res_4844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object* v_b_4845_, lean_object* v_args_4846_, uint8_t v_await_4847_){
_start:
{
uint64_t v___y_4850_; uint64_t v___y_4851_; uint64_t v___x_4894_; uint64_t v___y_4896_; 
v___x_4894_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4847_ == 0)
{
uint64_t v___x_4901_; 
v___x_4901_ = 0ULL;
v___y_4896_ = v___x_4901_;
goto v___jp_4895_;
}
else
{
uint64_t v___x_4902_; 
v___x_4902_ = 2ULL;
v___y_4896_ = v___x_4902_;
goto v___jp_4895_;
}
v___jp_4849_:
{
uint64_t v_flags_4852_; uint32_t v___x_4853_; lean_object* v___x_4854_; uint32_t v___x_4855_; lean_object* v___x_4856_; 
v_flags_4852_ = lean_uint64_lor(v___y_4850_, v___y_4851_);
v___x_4853_ = 214;
v___x_4854_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4845_, v_args_4846_);
v___x_4855_ = 0;
v___x_4856_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4853_, v_flags_4852_, v___x_4854_, v___x_4855_);
lean_dec(v___x_4854_);
if (lean_obj_tag(v___x_4856_) == 0)
{
if (lean_obj_tag(v___x_4856_) == 0)
{
lean_object* v_a_4857_; lean_object* v___x_4858_; 
v_a_4857_ = lean_ctor_get(v___x_4856_, 0);
lean_inc(v_a_4857_);
lean_dec_ref_known(v___x_4856_, 1);
v___x_4858_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4857_);
lean_dec(v_a_4857_);
if (lean_obj_tag(v___x_4858_) == 0)
{
lean_object* v_a_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; 
v_a_4859_ = lean_ctor_get(v___x_4858_, 0);
lean_inc(v_a_4859_);
lean_dec_ref_known(v___x_4858_, 1);
v___x_4860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4845_);
v___x_4861_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v___x_4860_, v_a_4859_);
lean_dec_ref(v___x_4860_);
return v___x_4861_;
}
else
{
lean_object* v_a_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4869_; 
v_a_4862_ = lean_ctor_get(v___x_4858_, 0);
v_isSharedCheck_4869_ = !lean_is_exclusive(v___x_4858_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4864_ = v___x_4858_;
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_a_4862_);
lean_dec(v___x_4858_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4867_; 
if (v_isShared_4865_ == 0)
{
v___x_4867_ = v___x_4864_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_a_4862_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
return v___x_4867_;
}
}
}
}
else
{
lean_object* v_a_4870_; lean_object* v___x_4872_; uint8_t v_isShared_4873_; uint8_t v_isSharedCheck_4877_; 
v_a_4870_ = lean_ctor_get(v___x_4856_, 0);
v_isSharedCheck_4877_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4877_ == 0)
{
v___x_4872_ = v___x_4856_;
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
else
{
lean_inc(v_a_4870_);
lean_dec(v___x_4856_);
v___x_4872_ = lean_box(0);
v_isShared_4873_ = v_isSharedCheck_4877_;
goto v_resetjp_4871_;
}
v_resetjp_4871_:
{
lean_object* v___x_4875_; 
if (v_isShared_4873_ == 0)
{
lean_ctor_set_tag(v___x_4872_, 1);
v___x_4875_ = v___x_4872_;
goto v_reusejp_4874_;
}
else
{
lean_object* v_reuseFailAlloc_4876_; 
v_reuseFailAlloc_4876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4876_, 0, v_a_4870_);
v___x_4875_ = v_reuseFailAlloc_4876_;
goto v_reusejp_4874_;
}
v_reusejp_4874_:
{
return v___x_4875_;
}
}
}
}
else
{
lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4893_; 
v_a_4878_ = lean_ctor_get(v___x_4856_, 0);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___x_4856_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4880_ = v___x_4856_;
v_isShared_4881_ = v_isSharedCheck_4893_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_dec(v___x_4856_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4893_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4891_; 
v___x_4882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4883_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4845_);
v___x_4884_ = lean_string_append(v___x_4882_, v___x_4883_);
lean_dec_ref(v___x_4883_);
v___x_4885_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4886_ = lean_string_append(v___x_4884_, v___x_4885_);
v___x_4887_ = lean_io_error_to_string(v_a_4878_);
v___x_4888_ = lean_string_append(v___x_4886_, v___x_4887_);
lean_dec_ref(v___x_4887_);
v___x_4889_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4889_, 0, v___x_4888_);
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 0, v___x_4889_);
v___x_4891_ = v___x_4880_;
goto v_reusejp_4890_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v___x_4889_);
v___x_4891_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4890_;
}
v_reusejp_4890_:
{
return v___x_4891_;
}
}
}
}
v___jp_4895_:
{
uint8_t v_construct_4897_; uint64_t v___x_4898_; 
v_construct_4897_ = lean_ctor_get_uint8(v_b_4845_, sizeof(void*)*4);
v___x_4898_ = lean_uint64_lor(v___x_4894_, v___y_4896_);
if (v_construct_4897_ == 0)
{
uint64_t v___x_4899_; 
v___x_4899_ = 0ULL;
v___y_4850_ = v___x_4898_;
v___y_4851_ = v___x_4899_;
goto v___jp_4849_;
}
else
{
uint64_t v___x_4900_; 
v___x_4900_ = 4ULL;
v___y_4850_ = v___x_4898_;
v___y_4851_ = v___x_4900_;
goto v___jp_4849_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object* v_b_4903_, lean_object* v_args_4904_, lean_object* v_await_4905_, lean_object* v_a_4906_){
_start:
{
uint8_t v_await_boxed_4907_; lean_object* v_res_4908_; 
v_await_boxed_4907_ = lean_unbox(v_await_4905_);
v_res_4908_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v_b_4903_, v_args_4904_, v_await_boxed_4907_);
lean_dec_ref(v_b_4903_);
return v_res_4908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object* v_stream_4917_){
_start:
{
lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; uint8_t v___x_4926_; lean_object* v___x_4927_; 
v___x_4919_ = lean_unsigned_to_nat(1u);
v___x_4920_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2));
v___x_4921_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4922_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4922_, 0, v_stream_4917_);
lean_ctor_set(v___x_4922_, 1, v___x_4921_);
v___x_4923_ = lean_mk_empty_array_with_capacity(v___x_4919_);
v___x_4924_ = lean_array_push(v___x_4923_, v___x_4922_);
v___x_4925_ = l_Lasm_JS_Web_Support_args(v___x_4924_);
v___x_4926_ = 0;
v___x_4927_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v___x_4920_, v___x_4925_, v___x_4926_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object* v_stream_4928_, lean_object* v_a_4929_){
_start:
{
lean_object* v_res_4930_; 
v_res_4930_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_new(v_stream_4928_);
return v_res_4930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object* v_self_4931_){
_start:
{
lean_object* v___f_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; uint8_t v___x_4936_; lean_object* v_val_4938_; lean_object* v___x_4941_; 
v___f_4933_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4934_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4935_ = lean_unsigned_to_nat(0u);
v___x_4936_ = 0;
v___x_4941_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_4931_, v___x_4934_);
if (lean_obj_tag(v___x_4941_) == 0)
{
lean_object* v_a_4942_; lean_object* v___x_4944_; uint8_t v_isShared_4945_; uint8_t v_isSharedCheck_4949_; 
v_a_4942_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4944_ = v___x_4941_;
v_isShared_4945_ = v_isSharedCheck_4949_;
goto v_resetjp_4943_;
}
else
{
lean_inc(v_a_4942_);
lean_dec(v___x_4941_);
v___x_4944_ = lean_box(0);
v_isShared_4945_ = v_isSharedCheck_4949_;
goto v_resetjp_4943_;
}
v_resetjp_4943_:
{
lean_object* v___x_4947_; 
if (v_isShared_4945_ == 0)
{
lean_ctor_set_tag(v___x_4944_, 1);
v___x_4947_ = v___x_4944_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v_a_4942_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
v_val_4938_ = v___x_4947_;
goto v___jp_4937_;
}
}
}
else
{
lean_object* v_a_4950_; lean_object* v___x_4952_; uint8_t v_isShared_4953_; uint8_t v_isSharedCheck_4957_; 
v_a_4950_ = lean_ctor_get(v___x_4941_, 0);
v_isSharedCheck_4957_ = !lean_is_exclusive(v___x_4941_);
if (v_isSharedCheck_4957_ == 0)
{
v___x_4952_ = v___x_4941_;
v_isShared_4953_ = v_isSharedCheck_4957_;
goto v_resetjp_4951_;
}
else
{
lean_inc(v_a_4950_);
lean_dec(v___x_4941_);
v___x_4952_ = lean_box(0);
v_isShared_4953_ = v_isSharedCheck_4957_;
goto v_resetjp_4951_;
}
v_resetjp_4951_:
{
lean_object* v___x_4955_; 
if (v_isShared_4953_ == 0)
{
lean_ctor_set_tag(v___x_4952_, 0);
v___x_4955_ = v___x_4952_;
goto v_reusejp_4954_;
}
else
{
lean_object* v_reuseFailAlloc_4956_; 
v_reuseFailAlloc_4956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4956_, 0, v_a_4950_);
v___x_4955_ = v_reuseFailAlloc_4956_;
goto v_reusejp_4954_;
}
v_reusejp_4954_:
{
v_val_4938_ = v___x_4955_;
goto v___jp_4937_;
}
}
}
v___jp_4937_:
{
lean_object* v___x_4939_; lean_object* v___x_4940_; 
v___x_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4939_, 0, v_val_4938_);
v___x_4940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4935_, v___x_4936_, v___x_4939_, v___f_4933_);
return v___x_4940_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object* v_self_4958_, lean_object* v_a_4959_){
_start:
{
lean_object* v_res_4960_; 
v_res_4960_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(v_self_4958_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object* v_self_4961_){
_start:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; 
v___x_4963_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4964_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4961_, v___x_4963_);
return v___x_4964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object* v_self_4965_, lean_object* v_a_4966_){
_start:
{
lean_object* v_res_4967_; 
v_res_4967_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(v_self_4965_);
return v_res_4967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object* v_self_4969_){
_start:
{
lean_object* v___f_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; uint8_t v___x_4974_; lean_object* v_val_4976_; lean_object* v___x_4979_; 
v___f_4971_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4972_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0));
v___x_4973_ = lean_unsigned_to_nat(0u);
v___x_4974_ = 0;
v___x_4979_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_4969_, v___x_4972_);
if (lean_obj_tag(v___x_4979_) == 0)
{
lean_object* v_a_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_4987_; 
v_a_4980_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_4987_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4982_ = v___x_4979_;
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_a_4980_);
lean_dec(v___x_4979_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
lean_object* v___x_4985_; 
if (v_isShared_4983_ == 0)
{
lean_ctor_set_tag(v___x_4982_, 1);
v___x_4985_ = v___x_4982_;
goto v_reusejp_4984_;
}
else
{
lean_object* v_reuseFailAlloc_4986_; 
v_reuseFailAlloc_4986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4986_, 0, v_a_4980_);
v___x_4985_ = v_reuseFailAlloc_4986_;
goto v_reusejp_4984_;
}
v_reusejp_4984_:
{
v_val_4976_ = v___x_4985_;
goto v___jp_4975_;
}
}
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
v_a_4988_ = lean_ctor_get(v___x_4979_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4979_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4979_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
lean_ctor_set_tag(v___x_4990_, 0);
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
v_val_4976_ = v___x_4993_;
goto v___jp_4975_;
}
}
}
v___jp_4975_:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4977_, 0, v_val_4976_);
v___x_4978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4973_, v___x_4974_, v___x_4977_, v___f_4971_);
return v___x_4978_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object* v_self_4996_, lean_object* v_a_4997_){
_start:
{
lean_object* v_res_4998_; 
v_res_4998_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(v_self_4996_);
return v_res_4998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object* v_self_4999_, lean_object* v_reason_5000_){
_start:
{
lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; 
v___x_5002_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_5003_ = lean_unsigned_to_nat(1u);
v___x_5004_ = lean_mk_empty_array_with_capacity(v___x_5003_);
v___x_5005_ = lean_array_push(v___x_5004_, v_reason_5000_);
v___x_5006_ = l_Lasm_JS_Web_Support_args(v___x_5005_);
v___x_5007_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4999_, v___x_5002_, v___x_5006_);
return v___x_5007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object* v_self_5008_, lean_object* v_reason_5009_, lean_object* v_a_5010_){
_start:
{
lean_object* v_res_5011_; 
v_res_5011_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(v_self_5008_, v_reason_5009_);
return v_res_5011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object* v_self_5012_){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5014_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_5015_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5016_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5012_, v___x_5014_, v___x_5015_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object* v_self_5017_, lean_object* v_a_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_close(v_self_5017_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object* v_self_5020_){
_start:
{
lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; 
v___x_5022_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_5023_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5024_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5020_, v___x_5022_, v___x_5023_);
return v___x_5024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object* v_self_5025_, lean_object* v_a_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(v_self_5025_);
return v_res_5027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object* v_self_5028_, lean_object* v_chunk_5029_){
_start:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v___x_5031_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_5032_ = lean_unsigned_to_nat(1u);
v___x_5033_ = lean_mk_empty_array_with_capacity(v___x_5032_);
v___x_5034_ = lean_array_push(v___x_5033_, v_chunk_5029_);
v___x_5035_ = l_Lasm_JS_Web_Support_args(v___x_5034_);
v___x_5036_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5028_, v___x_5031_, v___x_5035_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object* v_self_5037_, lean_object* v_chunk_5038_, lean_object* v_a_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_write(v_self_5037_, v_chunk_5038_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object* v_self_5041_){
_start:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; 
v___x_5043_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_5044_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_5041_, v___x_5043_);
if (lean_obj_tag(v___x_5044_) == 0)
{
lean_object* v_a_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5052_; 
v_a_5045_ = lean_ctor_get(v___x_5044_, 0);
v_isSharedCheck_5052_ = !lean_is_exclusive(v___x_5044_);
if (v_isSharedCheck_5052_ == 0)
{
v___x_5047_ = v___x_5044_;
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
else
{
lean_inc(v_a_5045_);
lean_dec(v___x_5044_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5052_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5050_; 
if (v_isShared_5048_ == 0)
{
v___x_5050_ = v___x_5047_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5051_; 
v_reuseFailAlloc_5051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5051_, 0, v_a_5045_);
v___x_5050_ = v_reuseFailAlloc_5051_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
return v___x_5050_;
}
}
}
else
{
lean_object* v_a_5053_; lean_object* v___x_5055_; uint8_t v_isShared_5056_; uint8_t v_isSharedCheck_5060_; 
v_a_5053_ = lean_ctor_get(v___x_5044_, 0);
v_isSharedCheck_5060_ = !lean_is_exclusive(v___x_5044_);
if (v_isSharedCheck_5060_ == 0)
{
v___x_5055_ = v___x_5044_;
v_isShared_5056_ = v_isSharedCheck_5060_;
goto v_resetjp_5054_;
}
else
{
lean_inc(v_a_5053_);
lean_dec(v___x_5044_);
v___x_5055_ = lean_box(0);
v_isShared_5056_ = v_isSharedCheck_5060_;
goto v_resetjp_5054_;
}
v_resetjp_5054_:
{
lean_object* v___x_5058_; 
if (v_isShared_5056_ == 0)
{
v___x_5058_ = v___x_5055_;
goto v_reusejp_5057_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v_a_5053_);
v___x_5058_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5057_;
}
v_reusejp_5057_:
{
return v___x_5058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object* v_self_5061_, lean_object* v_a_5062_){
_start:
{
lean_object* v_res_5063_; 
v_res_5063_ = l_Lasm_JS_Web_WritableStreamDefaultController_signal(v_self_5061_);
return v_res_5063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object* v_self_5064_, lean_object* v_e_5065_){
_start:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; 
v___x_5067_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5068_ = lean_unsigned_to_nat(1u);
v___x_5069_ = lean_mk_empty_array_with_capacity(v___x_5068_);
v___x_5070_ = lean_array_push(v___x_5069_, v_e_5065_);
v___x_5071_ = l_Lasm_JS_Web_Support_args(v___x_5070_);
v___x_5072_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5064_, v___x_5067_, v___x_5071_);
return v___x_5072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object* v_self_5073_, lean_object* v_e_5074_, lean_object* v_a_5075_){
_start:
{
lean_object* v_res_5076_; 
v_res_5076_ = l_Lasm_JS_Web_WritableStreamDefaultController_error(v_self_5073_, v_e_5074_);
return v_res_5076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object* v_context_5077_, lean_object* v_d_5078_){
_start:
{
lean_object* v___y_5081_; lean_object* v___y_5082_; 
if (lean_obj_tag(v_d_5078_) == 9)
{
lean_object* v_value_5086_; lean_object* v___x_5087_; 
v_value_5086_ = lean_ctor_get(v_d_5078_, 0);
lean_inc(v_value_5086_);
lean_dec_ref_known(v_d_5078_, 2);
v___x_5087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5087_, 0, v_value_5086_);
return v___x_5087_;
}
else
{
lean_object* v___x_5088_; lean_object* v_received_5090_; 
v___x_5088_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5078_) == 9)
{
lean_object* v_value_5104_; lean_object* v_description_5105_; uint8_t v___x_5106_; 
v_value_5104_ = lean_ctor_get(v_d_5078_, 0);
v_description_5105_ = lean_ctor_get(v_d_5078_, 1);
v___x_5106_ = lean_string_dec_eq(v_description_5105_, v___x_5088_);
if (v___x_5106_ == 0)
{
goto v___jp_5102_;
}
else
{
uint32_t v___x_5107_; uint64_t v___x_5108_; lean_object* v___x_5109_; uint32_t v___x_5110_; lean_object* v___x_5111_; 
lean_inc_n(v_value_5104_, 2);
lean_dec_ref_known(v_d_5078_, 2);
v___x_5107_ = 206;
v___x_5108_ = 0ULL;
v___x_5109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5109_, 0, v_value_5104_);
lean_ctor_set(v___x_5109_, 1, v___x_5088_);
v___x_5110_ = lasm_js_value_handle(v_value_5104_);
lean_dec(v_value_5104_);
v___x_5111_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5107_, v___x_5108_, v___x_5109_, v___x_5110_);
lean_dec_ref_known(v___x_5109_, 2);
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5112_; uint8_t v___x_5113_; 
v_a_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5112_);
lean_dec_ref_known(v___x_5111_, 1);
v___x_5113_ = lean_string_validate_utf8(v_a_5112_);
if (v___x_5113_ == 0)
{
lean_object* v___x_5114_; lean_object* v___x_5115_; 
lean_dec(v_a_5112_);
v___x_5114_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5115_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5114_);
v_received_5090_ = v___x_5115_;
goto v___jp_5089_;
}
else
{
lean_object* v___x_5116_; 
v___x_5116_ = lean_string_from_utf8_unchecked(v_a_5112_);
v_received_5090_ = v___x_5116_;
goto v___jp_5089_;
}
}
else
{
lean_object* v___x_5117_; 
lean_dec_ref_known(v___x_5111_, 1);
v___x_5117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5090_ = v___x_5117_;
goto v___jp_5089_;
}
}
}
else
{
goto v___jp_5102_;
}
v___jp_5089_:
{
lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; uint8_t v___x_5100_; 
v___x_5091_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5092_ = lean_string_append(v___x_5091_, v_context_5077_);
v___x_5093_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5094_ = lean_string_append(v___x_5092_, v___x_5093_);
v___x_5095_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStream___closed__0));
v___x_5096_ = lean_string_append(v___x_5094_, v___x_5095_);
v___x_5097_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5098_ = lean_string_append(v___x_5096_, v___x_5097_);
v___x_5099_ = lean_string_append(v___x_5098_, v_received_5090_);
lean_dec_ref(v_received_5090_);
v___x_5100_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5100_ == 0)
{
lean_object* v___x_5101_; 
v___x_5101_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5081_ = v___x_5099_;
v___y_5082_ = v___x_5101_;
goto v___jp_5080_;
}
else
{
v___y_5081_ = v___x_5099_;
v___y_5082_ = v___x_5088_;
goto v___jp_5080_;
}
}
v___jp_5102_:
{
lean_object* v___x_5103_; 
v___x_5103_ = l_Lasm_JS_Data_describe(v_d_5078_);
v_received_5090_ = v___x_5103_;
goto v___jp_5089_;
}
}
v___jp_5080_:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; 
v___x_5083_ = lean_string_append(v___y_5081_, v___y_5082_);
v___x_5084_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5084_, 0, v___x_5083_);
v___x_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5084_);
return v___x_5085_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object* v_context_5118_, lean_object* v_d_5119_, lean_object* v_a_5120_){
_start:
{
lean_object* v_res_5121_; 
v_res_5121_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v_context_5118_, v_d_5119_);
lean_dec_ref(v_context_5118_);
return v_res_5121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object* v_b_5122_, lean_object* v_args_5123_, uint8_t v_await_5124_){
_start:
{
uint64_t v___y_5127_; uint64_t v___y_5128_; uint64_t v___x_5171_; uint64_t v___y_5173_; 
v___x_5171_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5124_ == 0)
{
uint64_t v___x_5178_; 
v___x_5178_ = 0ULL;
v___y_5173_ = v___x_5178_;
goto v___jp_5172_;
}
else
{
uint64_t v___x_5179_; 
v___x_5179_ = 2ULL;
v___y_5173_ = v___x_5179_;
goto v___jp_5172_;
}
v___jp_5126_:
{
uint64_t v_flags_5129_; uint32_t v___x_5130_; lean_object* v___x_5131_; uint32_t v___x_5132_; lean_object* v___x_5133_; 
v_flags_5129_ = lean_uint64_lor(v___y_5127_, v___y_5128_);
v___x_5130_ = 214;
v___x_5131_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5122_, v_args_5123_);
v___x_5132_ = 0;
v___x_5133_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5130_, v_flags_5129_, v___x_5131_, v___x_5132_);
lean_dec(v___x_5131_);
if (lean_obj_tag(v___x_5133_) == 0)
{
if (lean_obj_tag(v___x_5133_) == 0)
{
lean_object* v_a_5134_; lean_object* v___x_5135_; 
v_a_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_a_5134_);
lean_dec_ref_known(v___x_5133_, 1);
v___x_5135_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5134_);
lean_dec(v_a_5134_);
if (lean_obj_tag(v___x_5135_) == 0)
{
lean_object* v_a_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
v_a_5136_ = lean_ctor_get(v___x_5135_, 0);
lean_inc(v_a_5136_);
lean_dec_ref_known(v___x_5135_, 1);
v___x_5137_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5122_);
v___x_5138_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v___x_5137_, v_a_5136_);
lean_dec_ref(v___x_5137_);
return v___x_5138_;
}
else
{
lean_object* v_a_5139_; lean_object* v___x_5141_; uint8_t v_isShared_5142_; uint8_t v_isSharedCheck_5146_; 
v_a_5139_ = lean_ctor_get(v___x_5135_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v___x_5135_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5141_ = v___x_5135_;
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
else
{
lean_inc(v_a_5139_);
lean_dec(v___x_5135_);
v___x_5141_ = lean_box(0);
v_isShared_5142_ = v_isSharedCheck_5146_;
goto v_resetjp_5140_;
}
v_resetjp_5140_:
{
lean_object* v___x_5144_; 
if (v_isShared_5142_ == 0)
{
v___x_5144_ = v___x_5141_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5139_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
return v___x_5144_;
}
}
}
}
else
{
lean_object* v_a_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5154_; 
v_a_5147_ = lean_ctor_get(v___x_5133_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v___x_5133_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5149_ = v___x_5133_;
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_a_5147_);
lean_dec(v___x_5133_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5154_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5152_; 
if (v_isShared_5150_ == 0)
{
lean_ctor_set_tag(v___x_5149_, 1);
v___x_5152_ = v___x_5149_;
goto v_reusejp_5151_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v_a_5147_);
v___x_5152_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5151_;
}
v_reusejp_5151_:
{
return v___x_5152_;
}
}
}
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5170_; 
v_a_5155_ = lean_ctor_get(v___x_5133_, 0);
v_isSharedCheck_5170_ = !lean_is_exclusive(v___x_5133_);
if (v_isSharedCheck_5170_ == 0)
{
v___x_5157_ = v___x_5133_;
v_isShared_5158_ = v_isSharedCheck_5170_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v___x_5133_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5170_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5168_; 
v___x_5159_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5160_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5122_);
v___x_5161_ = lean_string_append(v___x_5159_, v___x_5160_);
lean_dec_ref(v___x_5160_);
v___x_5162_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5163_ = lean_string_append(v___x_5161_, v___x_5162_);
v___x_5164_ = lean_io_error_to_string(v_a_5155_);
v___x_5165_ = lean_string_append(v___x_5163_, v___x_5164_);
lean_dec_ref(v___x_5164_);
v___x_5166_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5166_, 0, v___x_5165_);
if (v_isShared_5158_ == 0)
{
lean_ctor_set(v___x_5157_, 0, v___x_5166_);
v___x_5168_ = v___x_5157_;
goto v_reusejp_5167_;
}
else
{
lean_object* v_reuseFailAlloc_5169_; 
v_reuseFailAlloc_5169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5169_, 0, v___x_5166_);
v___x_5168_ = v_reuseFailAlloc_5169_;
goto v_reusejp_5167_;
}
v_reusejp_5167_:
{
return v___x_5168_;
}
}
}
}
v___jp_5172_:
{
uint8_t v_construct_5174_; uint64_t v___x_5175_; 
v_construct_5174_ = lean_ctor_get_uint8(v_b_5122_, sizeof(void*)*4);
v___x_5175_ = lean_uint64_lor(v___x_5171_, v___y_5173_);
if (v_construct_5174_ == 0)
{
uint64_t v___x_5176_; 
v___x_5176_ = 0ULL;
v___y_5127_ = v___x_5175_;
v___y_5128_ = v___x_5176_;
goto v___jp_5126_;
}
else
{
uint64_t v___x_5177_; 
v___x_5177_ = 4ULL;
v___y_5127_ = v___x_5175_;
v___y_5128_ = v___x_5177_;
goto v___jp_5126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object* v_b_5180_, lean_object* v_args_5181_, lean_object* v_await_5182_, lean_object* v_a_5183_){
_start:
{
uint8_t v_await_boxed_5184_; lean_object* v_res_5185_; 
v_await_boxed_5184_ = lean_unbox(v_await_5182_);
v_res_5185_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v_b_5180_, v_args_5181_, v_await_boxed_5184_);
lean_dec_ref(v_b_5180_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object* v_transformer_5194_, lean_object* v_writableStrategy_5195_, lean_object* v_readableStrategy_5196_){
_start:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; uint8_t v___x_5207_; lean_object* v___x_5208_; 
v___x_5198_ = lean_unsigned_to_nat(3u);
v___x_5199_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_new___closed__2));
v___x_5200_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_writableStrategy_5195_);
v___x_5201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_readableStrategy_5196_);
v___x_5202_ = lean_mk_empty_array_with_capacity(v___x_5198_);
v___x_5203_ = lean_array_push(v___x_5202_, v_transformer_5194_);
v___x_5204_ = lean_array_push(v___x_5203_, v___x_5200_);
v___x_5205_ = lean_array_push(v___x_5204_, v___x_5201_);
v___x_5206_ = l_Lasm_JS_Web_Support_args(v___x_5205_);
v___x_5207_ = 0;
v___x_5208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v___x_5199_, v___x_5206_, v___x_5207_);
return v___x_5208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object* v_transformer_5209_, lean_object* v_writableStrategy_5210_, lean_object* v_readableStrategy_5211_, lean_object* v_a_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lasm_JS_Web_TransformStream_new(v_transformer_5209_, v_writableStrategy_5210_, v_readableStrategy_5211_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object* v_self_5214_){
_start:
{
lean_object* v___x_5216_; lean_object* v___x_5217_; 
v___x_5216_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_5217_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_5214_, v___x_5216_);
if (lean_obj_tag(v___x_5217_) == 0)
{
lean_object* v_a_5218_; lean_object* v___x_5220_; uint8_t v_isShared_5221_; uint8_t v_isSharedCheck_5225_; 
v_a_5218_ = lean_ctor_get(v___x_5217_, 0);
v_isSharedCheck_5225_ = !lean_is_exclusive(v___x_5217_);
if (v_isSharedCheck_5225_ == 0)
{
v___x_5220_ = v___x_5217_;
v_isShared_5221_ = v_isSharedCheck_5225_;
goto v_resetjp_5219_;
}
else
{
lean_inc(v_a_5218_);
lean_dec(v___x_5217_);
v___x_5220_ = lean_box(0);
v_isShared_5221_ = v_isSharedCheck_5225_;
goto v_resetjp_5219_;
}
v_resetjp_5219_:
{
lean_object* v___x_5223_; 
if (v_isShared_5221_ == 0)
{
v___x_5223_ = v___x_5220_;
goto v_reusejp_5222_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v_a_5218_);
v___x_5223_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5222_;
}
v_reusejp_5222_:
{
return v___x_5223_;
}
}
}
else
{
lean_object* v_a_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5233_; 
v_a_5226_ = lean_ctor_get(v___x_5217_, 0);
v_isSharedCheck_5233_ = !lean_is_exclusive(v___x_5217_);
if (v_isSharedCheck_5233_ == 0)
{
v___x_5228_ = v___x_5217_;
v_isShared_5229_ = v_isSharedCheck_5233_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_a_5226_);
lean_dec(v___x_5217_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5233_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___x_5231_; 
if (v_isShared_5229_ == 0)
{
v___x_5231_ = v___x_5228_;
goto v_reusejp_5230_;
}
else
{
lean_object* v_reuseFailAlloc_5232_; 
v_reuseFailAlloc_5232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5232_, 0, v_a_5226_);
v___x_5231_ = v_reuseFailAlloc_5232_;
goto v_reusejp_5230_;
}
v_reusejp_5230_:
{
return v___x_5231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object* v_self_5234_, lean_object* v_a_5235_){
_start:
{
lean_object* v_res_5236_; 
v_res_5236_ = l_Lasm_JS_Web_TransformStream_readable(v_self_5234_);
return v_res_5236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object* v_self_5237_){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; 
v___x_5239_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_5240_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_AbortController_signal_spec__0(v_self_5237_, v___x_5239_);
if (lean_obj_tag(v___x_5240_) == 0)
{
lean_object* v_a_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5248_; 
v_a_5241_ = lean_ctor_get(v___x_5240_, 0);
v_isSharedCheck_5248_ = !lean_is_exclusive(v___x_5240_);
if (v_isSharedCheck_5248_ == 0)
{
v___x_5243_ = v___x_5240_;
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_a_5241_);
lean_dec(v___x_5240_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5248_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v___x_5246_; 
if (v_isShared_5244_ == 0)
{
v___x_5246_ = v___x_5243_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5247_; 
v_reuseFailAlloc_5247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5247_, 0, v_a_5241_);
v___x_5246_ = v_reuseFailAlloc_5247_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
return v___x_5246_;
}
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5256_; 
v_a_5249_ = lean_ctor_get(v___x_5240_, 0);
v_isSharedCheck_5256_ = !lean_is_exclusive(v___x_5240_);
if (v_isSharedCheck_5256_ == 0)
{
v___x_5251_ = v___x_5240_;
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5240_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5256_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
lean_object* v___x_5254_; 
if (v_isShared_5252_ == 0)
{
v___x_5254_ = v___x_5251_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v_a_5249_);
v___x_5254_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
return v___x_5254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object* v_self_5257_, lean_object* v_a_5258_){
_start:
{
lean_object* v_res_5259_; 
v_res_5259_ = l_Lasm_JS_Web_TransformStream_writable(v_self_5257_);
return v_res_5259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object* v_self_5260_){
_start:
{
lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5262_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5263_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5260_, v___x_5262_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object* v_self_5264_, lean_object* v_a_5265_){
_start:
{
lean_object* v_res_5266_; 
v_res_5266_ = l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(v_self_5264_);
return v_res_5266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object* v_self_5267_, lean_object* v_chunk_5268_){
_start:
{
lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
v___x_5270_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_5271_ = lean_unsigned_to_nat(1u);
v___x_5272_ = lean_mk_empty_array_with_capacity(v___x_5271_);
v___x_5273_ = lean_array_push(v___x_5272_, v_chunk_5268_);
v___x_5274_ = l_Lasm_JS_Web_Support_args(v___x_5273_);
v___x_5275_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5267_, v___x_5270_, v___x_5274_);
return v___x_5275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object* v_self_5276_, lean_object* v_chunk_5277_, lean_object* v_a_5278_){
_start:
{
lean_object* v_res_5279_; 
v_res_5279_ = l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(v_self_5276_, v_chunk_5277_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object* v_self_5280_, lean_object* v_reason_5281_){
_start:
{
lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; 
v___x_5283_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5284_ = lean_unsigned_to_nat(1u);
v___x_5285_ = lean_mk_empty_array_with_capacity(v___x_5284_);
v___x_5286_ = lean_array_push(v___x_5285_, v_reason_5281_);
v___x_5287_ = l_Lasm_JS_Web_Support_args(v___x_5286_);
v___x_5288_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5280_, v___x_5283_, v___x_5287_);
return v___x_5288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object* v_self_5289_, lean_object* v_reason_5290_, lean_object* v_a_5291_){
_start:
{
lean_object* v_res_5292_; 
v_res_5292_ = l_Lasm_JS_Web_TransformStreamDefaultController_error(v_self_5289_, v_reason_5290_);
return v_res_5292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object* v_self_5294_){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5296_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0));
v___x_5297_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5298_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5294_, v___x_5296_, v___x_5297_);
return v___x_5298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object* v_self_5299_, lean_object* v_a_5300_){
_start:
{
lean_object* v_res_5301_; 
v_res_5301_ = l_Lasm_JS_Web_TransformStreamDefaultController_terminate(v_self_5299_);
return v_res_5301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5302_, lean_object* v_d_5303_){
_start:
{
lean_object* v___y_5306_; lean_object* v___y_5307_; 
if (lean_obj_tag(v_d_5303_) == 9)
{
lean_object* v_value_5311_; lean_object* v___x_5312_; 
v_value_5311_ = lean_ctor_get(v_d_5303_, 0);
lean_inc(v_value_5311_);
lean_dec_ref_known(v_d_5303_, 2);
v___x_5312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5312_, 0, v_value_5311_);
return v___x_5312_;
}
else
{
lean_object* v___x_5313_; lean_object* v_received_5315_; 
v___x_5313_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5303_) == 9)
{
lean_object* v_value_5329_; lean_object* v_description_5330_; uint8_t v___x_5331_; 
v_value_5329_ = lean_ctor_get(v_d_5303_, 0);
v_description_5330_ = lean_ctor_get(v_d_5303_, 1);
v___x_5331_ = lean_string_dec_eq(v_description_5330_, v___x_5313_);
if (v___x_5331_ == 0)
{
goto v___jp_5327_;
}
else
{
uint32_t v___x_5332_; uint64_t v___x_5333_; lean_object* v___x_5334_; uint32_t v___x_5335_; lean_object* v___x_5336_; 
lean_inc_n(v_value_5329_, 2);
lean_dec_ref_known(v_d_5303_, 2);
v___x_5332_ = 206;
v___x_5333_ = 0ULL;
v___x_5334_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5334_, 0, v_value_5329_);
lean_ctor_set(v___x_5334_, 1, v___x_5313_);
v___x_5335_ = lasm_js_value_handle(v_value_5329_);
lean_dec(v_value_5329_);
v___x_5336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5332_, v___x_5333_, v___x_5334_, v___x_5335_);
lean_dec_ref_known(v___x_5334_, 2);
if (lean_obj_tag(v___x_5336_) == 0)
{
lean_object* v_a_5337_; uint8_t v___x_5338_; 
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
lean_inc(v_a_5337_);
lean_dec_ref_known(v___x_5336_, 1);
v___x_5338_ = lean_string_validate_utf8(v_a_5337_);
if (v___x_5338_ == 0)
{
lean_object* v___x_5339_; lean_object* v___x_5340_; 
lean_dec(v_a_5337_);
v___x_5339_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5340_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5339_);
v_received_5315_ = v___x_5340_;
goto v___jp_5314_;
}
else
{
lean_object* v___x_5341_; 
v___x_5341_ = lean_string_from_utf8_unchecked(v_a_5337_);
v_received_5315_ = v___x_5341_;
goto v___jp_5314_;
}
}
else
{
lean_object* v___x_5342_; 
lean_dec_ref_known(v___x_5336_, 1);
v___x_5342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5315_ = v___x_5342_;
goto v___jp_5314_;
}
}
}
else
{
goto v___jp_5327_;
}
v___jp_5314_:
{
lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; uint8_t v___x_5325_; 
v___x_5316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5317_ = lean_string_append(v___x_5316_, v_context_5302_);
v___x_5318_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5319_ = lean_string_append(v___x_5317_, v___x_5318_);
v___x_5320_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0));
v___x_5321_ = lean_string_append(v___x_5319_, v___x_5320_);
v___x_5322_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5323_ = lean_string_append(v___x_5321_, v___x_5322_);
v___x_5324_ = lean_string_append(v___x_5323_, v_received_5315_);
lean_dec_ref(v_received_5315_);
v___x_5325_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5325_ == 0)
{
lean_object* v___x_5326_; 
v___x_5326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5306_ = v___x_5324_;
v___y_5307_ = v___x_5326_;
goto v___jp_5305_;
}
else
{
v___y_5306_ = v___x_5324_;
v___y_5307_ = v___x_5313_;
goto v___jp_5305_;
}
}
v___jp_5327_:
{
lean_object* v___x_5328_; 
v___x_5328_ = l_Lasm_JS_Data_describe(v_d_5303_);
v_received_5315_ = v___x_5328_;
goto v___jp_5314_;
}
}
v___jp_5305_:
{
lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
v___x_5308_ = lean_string_append(v___y_5306_, v___y_5307_);
v___x_5309_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5308_);
v___x_5310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5310_, 0, v___x_5309_);
return v___x_5310_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5343_, lean_object* v_d_5344_, lean_object* v_a_5345_){
_start:
{
lean_object* v_res_5346_; 
v_res_5346_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v_context_5343_, v_d_5344_);
lean_dec_ref(v_context_5343_);
return v_res_5346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object* v_b_5347_, lean_object* v_args_5348_, uint8_t v_await_5349_){
_start:
{
uint64_t v___y_5352_; uint64_t v___y_5353_; uint64_t v___x_5396_; uint64_t v___y_5398_; 
v___x_5396_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5349_ == 0)
{
uint64_t v___x_5403_; 
v___x_5403_ = 0ULL;
v___y_5398_ = v___x_5403_;
goto v___jp_5397_;
}
else
{
uint64_t v___x_5404_; 
v___x_5404_ = 2ULL;
v___y_5398_ = v___x_5404_;
goto v___jp_5397_;
}
v___jp_5351_:
{
uint64_t v_flags_5354_; uint32_t v___x_5355_; lean_object* v___x_5356_; uint32_t v___x_5357_; lean_object* v___x_5358_; 
v_flags_5354_ = lean_uint64_lor(v___y_5352_, v___y_5353_);
v___x_5355_ = 214;
v___x_5356_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5347_, v_args_5348_);
v___x_5357_ = 0;
v___x_5358_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5355_, v_flags_5354_, v___x_5356_, v___x_5357_);
lean_dec(v___x_5356_);
if (lean_obj_tag(v___x_5358_) == 0)
{
if (lean_obj_tag(v___x_5358_) == 0)
{
lean_object* v_a_5359_; lean_object* v___x_5360_; 
v_a_5359_ = lean_ctor_get(v___x_5358_, 0);
lean_inc(v_a_5359_);
lean_dec_ref_known(v___x_5358_, 1);
v___x_5360_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5359_);
lean_dec(v_a_5359_);
if (lean_obj_tag(v___x_5360_) == 0)
{
lean_object* v_a_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; 
v_a_5361_ = lean_ctor_get(v___x_5360_, 0);
lean_inc(v_a_5361_);
lean_dec_ref_known(v___x_5360_, 1);
v___x_5362_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5347_);
v___x_5363_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v___x_5362_, v_a_5361_);
lean_dec_ref(v___x_5362_);
return v___x_5363_;
}
else
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
v_a_5364_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5360_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5360_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
}
else
{
lean_object* v_a_5372_; lean_object* v___x_5374_; uint8_t v_isShared_5375_; uint8_t v_isSharedCheck_5379_; 
v_a_5372_ = lean_ctor_get(v___x_5358_, 0);
v_isSharedCheck_5379_ = !lean_is_exclusive(v___x_5358_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5374_ = v___x_5358_;
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
else
{
lean_inc(v_a_5372_);
lean_dec(v___x_5358_);
v___x_5374_ = lean_box(0);
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
v_resetjp_5373_:
{
lean_object* v___x_5377_; 
if (v_isShared_5375_ == 0)
{
lean_ctor_set_tag(v___x_5374_, 1);
v___x_5377_ = v___x_5374_;
goto v_reusejp_5376_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v_a_5372_);
v___x_5377_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5376_;
}
v_reusejp_5376_:
{
return v___x_5377_;
}
}
}
}
else
{
lean_object* v_a_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5395_; 
v_a_5380_ = lean_ctor_get(v___x_5358_, 0);
v_isSharedCheck_5395_ = !lean_is_exclusive(v___x_5358_);
if (v_isSharedCheck_5395_ == 0)
{
v___x_5382_ = v___x_5358_;
v_isShared_5383_ = v_isSharedCheck_5395_;
goto v_resetjp_5381_;
}
else
{
lean_inc(v_a_5380_);
lean_dec(v___x_5358_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5395_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5393_; 
v___x_5384_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5385_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5347_);
v___x_5386_ = lean_string_append(v___x_5384_, v___x_5385_);
lean_dec_ref(v___x_5385_);
v___x_5387_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5388_ = lean_string_append(v___x_5386_, v___x_5387_);
v___x_5389_ = lean_io_error_to_string(v_a_5380_);
v___x_5390_ = lean_string_append(v___x_5388_, v___x_5389_);
lean_dec_ref(v___x_5389_);
v___x_5391_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5391_, 0, v___x_5390_);
if (v_isShared_5383_ == 0)
{
lean_ctor_set(v___x_5382_, 0, v___x_5391_);
v___x_5393_ = v___x_5382_;
goto v_reusejp_5392_;
}
else
{
lean_object* v_reuseFailAlloc_5394_; 
v_reuseFailAlloc_5394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5394_, 0, v___x_5391_);
v___x_5393_ = v_reuseFailAlloc_5394_;
goto v_reusejp_5392_;
}
v_reusejp_5392_:
{
return v___x_5393_;
}
}
}
}
v___jp_5397_:
{
uint8_t v_construct_5399_; uint64_t v___x_5400_; 
v_construct_5399_ = lean_ctor_get_uint8(v_b_5347_, sizeof(void*)*4);
v___x_5400_ = lean_uint64_lor(v___x_5396_, v___y_5398_);
if (v_construct_5399_ == 0)
{
uint64_t v___x_5401_; 
v___x_5401_ = 0ULL;
v___y_5352_ = v___x_5400_;
v___y_5353_ = v___x_5401_;
goto v___jp_5351_;
}
else
{
uint64_t v___x_5402_; 
v___x_5402_ = 4ULL;
v___y_5352_ = v___x_5400_;
v___y_5353_ = v___x_5402_;
goto v___jp_5351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5405_, lean_object* v_args_5406_, lean_object* v_await_5407_, lean_object* v_a_5408_){
_start:
{
uint8_t v_await_boxed_5409_; lean_object* v_res_5410_; 
v_await_boxed_5409_ = lean_unbox(v_await_5407_);
v_res_5410_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v_b_5405_, v_args_5406_, v_await_boxed_5409_);
lean_dec_ref(v_b_5405_);
return v_res_5410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double v_init_5419_){
_start:
{
lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; uint8_t v___x_5431_; lean_object* v___x_5432_; 
v___x_5421_ = lean_unsigned_to_nat(1u);
v___x_5422_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2));
v___x_5423_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5424_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5424_, 0, v_init_5419_);
v___x_5425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5425_, 0, v___x_5423_);
lean_ctor_set(v___x_5425_, 1, v___x_5424_);
v___x_5426_ = lean_mk_empty_array_with_capacity(v___x_5421_);
lean_inc_ref(v___x_5426_);
v___x_5427_ = lean_array_push(v___x_5426_, v___x_5425_);
v___x_5428_ = l_Lasm_JS_Web_Support_fields(v___x_5427_);
lean_dec_ref(v___x_5427_);
v___x_5429_ = lean_array_push(v___x_5426_, v___x_5428_);
v___x_5430_ = l_Lasm_JS_Web_Support_args(v___x_5429_);
v___x_5431_ = 0;
v___x_5432_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v___x_5422_, v___x_5430_, v___x_5431_);
return v___x_5432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object* v_init_5433_, lean_object* v_a_5434_){
_start:
{
double v_init_boxed_5435_; lean_object* v_res_5436_; 
v_init_boxed_5435_ = lean_unbox_float(v_init_5433_);
lean_dec_ref(v_init_5433_);
v_res_5436_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(v_init_boxed_5435_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object* v_self_5437_){
_start:
{
lean_object* v___x_5439_; lean_object* v___x_5440_; 
v___x_5439_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5440_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5437_, v___x_5439_);
return v___x_5440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5441_, lean_object* v_a_5442_){
_start:
{
lean_object* v_res_5443_; 
v_res_5443_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(v_self_5441_);
return v_res_5443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object* v_context_5444_, lean_object* v_d_5445_){
_start:
{
lean_object* v___y_5448_; lean_object* v___y_5449_; 
if (lean_obj_tag(v_d_5445_) == 9)
{
lean_object* v_value_5453_; lean_object* v___x_5454_; 
v_value_5453_ = lean_ctor_get(v_d_5445_, 0);
lean_inc(v_value_5453_);
lean_dec_ref_known(v_d_5445_, 2);
v___x_5454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5454_, 0, v_value_5453_);
return v___x_5454_;
}
else
{
lean_object* v___x_5455_; lean_object* v_received_5457_; 
v___x_5455_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5445_) == 9)
{
lean_object* v_value_5471_; lean_object* v_description_5472_; uint8_t v___x_5473_; 
v_value_5471_ = lean_ctor_get(v_d_5445_, 0);
v_description_5472_ = lean_ctor_get(v_d_5445_, 1);
v___x_5473_ = lean_string_dec_eq(v_description_5472_, v___x_5455_);
if (v___x_5473_ == 0)
{
goto v___jp_5469_;
}
else
{
uint32_t v___x_5474_; uint64_t v___x_5475_; lean_object* v___x_5476_; uint32_t v___x_5477_; lean_object* v___x_5478_; 
lean_inc_n(v_value_5471_, 2);
lean_dec_ref_known(v_d_5445_, 2);
v___x_5474_ = 206;
v___x_5475_ = 0ULL;
v___x_5476_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5476_, 0, v_value_5471_);
lean_ctor_set(v___x_5476_, 1, v___x_5455_);
v___x_5477_ = lasm_js_value_handle(v_value_5471_);
lean_dec(v_value_5471_);
v___x_5478_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5474_, v___x_5475_, v___x_5476_, v___x_5477_);
lean_dec_ref_known(v___x_5476_, 2);
if (lean_obj_tag(v___x_5478_) == 0)
{
lean_object* v_a_5479_; uint8_t v___x_5480_; 
v_a_5479_ = lean_ctor_get(v___x_5478_, 0);
lean_inc(v_a_5479_);
lean_dec_ref_known(v___x_5478_, 1);
v___x_5480_ = lean_string_validate_utf8(v_a_5479_);
if (v___x_5480_ == 0)
{
lean_object* v___x_5481_; lean_object* v___x_5482_; 
lean_dec(v_a_5479_);
v___x_5481_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5482_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5481_);
v_received_5457_ = v___x_5482_;
goto v___jp_5456_;
}
else
{
lean_object* v___x_5483_; 
v___x_5483_ = lean_string_from_utf8_unchecked(v_a_5479_);
v_received_5457_ = v___x_5483_;
goto v___jp_5456_;
}
}
else
{
lean_object* v___x_5484_; 
lean_dec_ref_known(v___x_5478_, 1);
v___x_5484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5457_ = v___x_5484_;
goto v___jp_5456_;
}
}
}
else
{
goto v___jp_5469_;
}
v___jp_5456_:
{
lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; uint8_t v___x_5467_; 
v___x_5458_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5459_ = lean_string_append(v___x_5458_, v_context_5444_);
v___x_5460_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5461_ = lean_string_append(v___x_5459_, v___x_5460_);
v___x_5462_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJSFunction___closed__0));
v___x_5463_ = lean_string_append(v___x_5461_, v___x_5462_);
v___x_5464_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5465_ = lean_string_append(v___x_5463_, v___x_5464_);
v___x_5466_ = lean_string_append(v___x_5465_, v_received_5457_);
lean_dec_ref(v_received_5457_);
v___x_5467_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5467_ == 0)
{
lean_object* v___x_5468_; 
v___x_5468_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5448_ = v___x_5466_;
v___y_5449_ = v___x_5468_;
goto v___jp_5447_;
}
else
{
v___y_5448_ = v___x_5466_;
v___y_5449_ = v___x_5455_;
goto v___jp_5447_;
}
}
v___jp_5469_:
{
lean_object* v___x_5470_; 
v___x_5470_ = l_Lasm_JS_Data_describe(v_d_5445_);
v_received_5457_ = v___x_5470_;
goto v___jp_5456_;
}
}
v___jp_5447_:
{
lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; 
v___x_5450_ = lean_string_append(v___y_5448_, v___y_5449_);
v___x_5451_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5450_);
v___x_5452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5451_);
return v___x_5452_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5485_, lean_object* v_d_5486_, lean_object* v_a_5487_){
_start:
{
lean_object* v_res_5488_; 
v_res_5488_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5485_, v_d_5486_);
lean_dec_ref(v_context_5485_);
return v_res_5488_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object* v_context_5489_, lean_object* v_bytes_5490_){
_start:
{
lean_object* v___x_5492_; 
v___x_5492_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5490_);
if (lean_obj_tag(v___x_5492_) == 0)
{
lean_object* v_a_5493_; lean_object* v___x_5494_; 
v_a_5493_ = lean_ctor_get(v___x_5492_, 0);
lean_inc(v_a_5493_);
lean_dec_ref_known(v___x_5492_, 1);
v___x_5494_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5489_, v_a_5493_);
return v___x_5494_;
}
else
{
lean_object* v_a_5495_; lean_object* v___x_5497_; uint8_t v_isShared_5498_; uint8_t v_isSharedCheck_5502_; 
v_a_5495_ = lean_ctor_get(v___x_5492_, 0);
v_isSharedCheck_5502_ = !lean_is_exclusive(v___x_5492_);
if (v_isSharedCheck_5502_ == 0)
{
v___x_5497_ = v___x_5492_;
v_isShared_5498_ = v_isSharedCheck_5502_;
goto v_resetjp_5496_;
}
else
{
lean_inc(v_a_5495_);
lean_dec(v___x_5492_);
v___x_5497_ = lean_box(0);
v_isShared_5498_ = v_isSharedCheck_5502_;
goto v_resetjp_5496_;
}
v_resetjp_5496_:
{
lean_object* v___x_5500_; 
if (v_isShared_5498_ == 0)
{
v___x_5500_ = v___x_5497_;
goto v_reusejp_5499_;
}
else
{
lean_object* v_reuseFailAlloc_5501_; 
v_reuseFailAlloc_5501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5501_, 0, v_a_5495_);
v___x_5500_ = v_reuseFailAlloc_5501_;
goto v_reusejp_5499_;
}
v_reusejp_5499_:
{
return v___x_5500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object* v_context_5503_, lean_object* v_bytes_5504_, lean_object* v_a_5505_){
_start:
{
lean_object* v_res_5506_; 
v_res_5506_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v_context_5503_, v_bytes_5504_);
lean_dec_ref(v_bytes_5504_);
lean_dec_ref(v_context_5503_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object* v_o_5507_, lean_object* v_key_5508_){
_start:
{
lean_object* v_k_5510_; lean_object* v___x_5511_; 
v_k_5510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5510_, 0, v_key_5508_);
v___x_5511_ = l_Lasm_JS_Wire_encodeIO(v_k_5510_);
if (lean_obj_tag(v___x_5511_) == 0)
{
lean_object* v_a_5512_; uint32_t v___x_5513_; uint32_t v___x_5514_; uint64_t v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; 
v_a_5512_ = lean_ctor_get(v___x_5511_, 0);
lean_inc(v_a_5512_);
lean_dec_ref_known(v___x_5511_, 1);
v___x_5513_ = 203;
v___x_5514_ = lasm_js_value_handle(v_o_5507_);
v___x_5515_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5516_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5517_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5517_, 0, v_o_5507_);
lean_ctor_set(v___x_5517_, 1, v___x_5516_);
v___x_5518_ = lean_unsigned_to_nat(2u);
v___x_5519_ = lean_mk_empty_array_with_capacity(v___x_5518_);
lean_inc_ref(v_k_5510_);
v___x_5520_ = lean_array_push(v___x_5519_, v_k_5510_);
v___x_5521_ = lean_array_push(v___x_5520_, v___x_5517_);
v___x_5522_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5522_, 0, v___x_5521_);
v___x_5523_ = lasm_js_call(v___x_5513_, v___x_5514_, v___x_5515_, v_a_5512_, v___x_5522_);
lean_dec_ref_known(v___x_5522_, 1);
lean_dec(v_a_5512_);
if (lean_obj_tag(v___x_5523_) == 0)
{
lean_object* v_a_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; 
v_a_5524_ = lean_ctor_get(v___x_5523_, 0);
lean_inc(v_a_5524_);
lean_dec_ref_known(v___x_5523_, 1);
v___x_5525_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_5526_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5510_);
v___x_5527_ = lean_string_append(v___x_5525_, v___x_5526_);
lean_dec_ref(v___x_5526_);
v___x_5528_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v___x_5527_, v_a_5524_);
lean_dec(v_a_5524_);
lean_dec_ref(v___x_5527_);
return v___x_5528_;
}
else
{
lean_object* v_a_5529_; lean_object* v___x_5531_; uint8_t v_isShared_5532_; uint8_t v_isSharedCheck_5536_; 
lean_dec_ref_known(v_k_5510_, 1);
v_a_5529_ = lean_ctor_get(v___x_5523_, 0);
v_isSharedCheck_5536_ = !lean_is_exclusive(v___x_5523_);
if (v_isSharedCheck_5536_ == 0)
{
v___x_5531_ = v___x_5523_;
v_isShared_5532_ = v_isSharedCheck_5536_;
goto v_resetjp_5530_;
}
else
{
lean_inc(v_a_5529_);
lean_dec(v___x_5523_);
v___x_5531_ = lean_box(0);
v_isShared_5532_ = v_isSharedCheck_5536_;
goto v_resetjp_5530_;
}
v_resetjp_5530_:
{
lean_object* v___x_5534_; 
if (v_isShared_5532_ == 0)
{
v___x_5534_ = v___x_5531_;
goto v_reusejp_5533_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v_a_5529_);
v___x_5534_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5533_;
}
v_reusejp_5533_:
{
return v___x_5534_;
}
}
}
}
else
{
lean_object* v_a_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5544_; 
lean_dec_ref_known(v_k_5510_, 1);
lean_dec(v_o_5507_);
v_a_5537_ = lean_ctor_get(v___x_5511_, 0);
v_isSharedCheck_5544_ = !lean_is_exclusive(v___x_5511_);
if (v_isSharedCheck_5544_ == 0)
{
v___x_5539_ = v___x_5511_;
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_a_5537_);
lean_dec(v___x_5511_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5542_; 
if (v_isShared_5540_ == 0)
{
v___x_5542_ = v___x_5539_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_a_5537_);
v___x_5542_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
return v___x_5542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object* v_o_5545_, lean_object* v_key_5546_, lean_object* v_a_5547_){
_start:
{
lean_object* v_res_5548_; 
v_res_5548_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_o_5545_, v_key_5546_);
return v_res_5548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object* v_self_5549_){
_start:
{
lean_object* v___x_5551_; lean_object* v___x_5552_; 
v___x_5551_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5552_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5549_, v___x_5551_);
return v___x_5552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object* v_self_5553_, lean_object* v_a_5554_){
_start:
{
lean_object* v_res_5555_; 
v_res_5555_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(v_self_5553_);
return v_res_5555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5556_, lean_object* v_d_5557_){
_start:
{
lean_object* v___y_5560_; lean_object* v___y_5561_; 
if (lean_obj_tag(v_d_5557_) == 9)
{
lean_object* v_value_5565_; lean_object* v___x_5566_; 
v_value_5565_ = lean_ctor_get(v_d_5557_, 0);
lean_inc(v_value_5565_);
lean_dec_ref_known(v_d_5557_, 2);
v___x_5566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5566_, 0, v_value_5565_);
return v___x_5566_;
}
else
{
lean_object* v___x_5567_; lean_object* v_received_5569_; 
v___x_5567_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5557_) == 9)
{
lean_object* v_value_5583_; lean_object* v_description_5584_; uint8_t v___x_5585_; 
v_value_5583_ = lean_ctor_get(v_d_5557_, 0);
v_description_5584_ = lean_ctor_get(v_d_5557_, 1);
v___x_5585_ = lean_string_dec_eq(v_description_5584_, v___x_5567_);
if (v___x_5585_ == 0)
{
goto v___jp_5581_;
}
else
{
uint32_t v___x_5586_; uint64_t v___x_5587_; lean_object* v___x_5588_; uint32_t v___x_5589_; lean_object* v___x_5590_; 
lean_inc_n(v_value_5583_, 2);
lean_dec_ref_known(v_d_5557_, 2);
v___x_5586_ = 206;
v___x_5587_ = 0ULL;
v___x_5588_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5588_, 0, v_value_5583_);
lean_ctor_set(v___x_5588_, 1, v___x_5567_);
v___x_5589_ = lasm_js_value_handle(v_value_5583_);
lean_dec(v_value_5583_);
v___x_5590_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5586_, v___x_5587_, v___x_5588_, v___x_5589_);
lean_dec_ref_known(v___x_5588_, 2);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; uint8_t v___x_5592_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
lean_inc(v_a_5591_);
lean_dec_ref_known(v___x_5590_, 1);
v___x_5592_ = lean_string_validate_utf8(v_a_5591_);
if (v___x_5592_ == 0)
{
lean_object* v___x_5593_; lean_object* v___x_5594_; 
lean_dec(v_a_5591_);
v___x_5593_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5594_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5593_);
v_received_5569_ = v___x_5594_;
goto v___jp_5568_;
}
else
{
lean_object* v___x_5595_; 
v___x_5595_ = lean_string_from_utf8_unchecked(v_a_5591_);
v_received_5569_ = v___x_5595_;
goto v___jp_5568_;
}
}
else
{
lean_object* v___x_5596_; 
lean_dec_ref_known(v___x_5590_, 1);
v___x_5596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5569_ = v___x_5596_;
goto v___jp_5568_;
}
}
}
else
{
goto v___jp_5581_;
}
v___jp_5568_:
{
lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; uint8_t v___x_5579_; 
v___x_5570_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5571_ = lean_string_append(v___x_5570_, v_context_5556_);
v___x_5572_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5573_ = lean_string_append(v___x_5571_, v___x_5572_);
v___x_5574_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0));
v___x_5575_ = lean_string_append(v___x_5573_, v___x_5574_);
v___x_5576_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5577_ = lean_string_append(v___x_5575_, v___x_5576_);
v___x_5578_ = lean_string_append(v___x_5577_, v_received_5569_);
lean_dec_ref(v_received_5569_);
v___x_5579_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5579_ == 0)
{
lean_object* v___x_5580_; 
v___x_5580_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5560_ = v___x_5578_;
v___y_5561_ = v___x_5580_;
goto v___jp_5559_;
}
else
{
v___y_5560_ = v___x_5578_;
v___y_5561_ = v___x_5567_;
goto v___jp_5559_;
}
}
v___jp_5581_:
{
lean_object* v___x_5582_; 
v___x_5582_ = l_Lasm_JS_Data_describe(v_d_5557_);
v_received_5569_ = v___x_5582_;
goto v___jp_5568_;
}
}
v___jp_5559_:
{
lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; 
v___x_5562_ = lean_string_append(v___y_5560_, v___y_5561_);
v___x_5563_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5563_, 0, v___x_5562_);
v___x_5564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5564_, 0, v___x_5563_);
return v___x_5564_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5597_, lean_object* v_d_5598_, lean_object* v_a_5599_){
_start:
{
lean_object* v_res_5600_; 
v_res_5600_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v_context_5597_, v_d_5598_);
lean_dec_ref(v_context_5597_);
return v_res_5600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object* v_b_5601_, lean_object* v_args_5602_, uint8_t v_await_5603_){
_start:
{
uint64_t v___y_5606_; uint64_t v___y_5607_; uint64_t v___x_5650_; uint64_t v___y_5652_; 
v___x_5650_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5603_ == 0)
{
uint64_t v___x_5657_; 
v___x_5657_ = 0ULL;
v___y_5652_ = v___x_5657_;
goto v___jp_5651_;
}
else
{
uint64_t v___x_5658_; 
v___x_5658_ = 2ULL;
v___y_5652_ = v___x_5658_;
goto v___jp_5651_;
}
v___jp_5605_:
{
uint64_t v_flags_5608_; uint32_t v___x_5609_; lean_object* v___x_5610_; uint32_t v___x_5611_; lean_object* v___x_5612_; 
v_flags_5608_ = lean_uint64_lor(v___y_5606_, v___y_5607_);
v___x_5609_ = 214;
v___x_5610_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5601_, v_args_5602_);
v___x_5611_ = 0;
v___x_5612_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5609_, v_flags_5608_, v___x_5610_, v___x_5611_);
lean_dec(v___x_5610_);
if (lean_obj_tag(v___x_5612_) == 0)
{
if (lean_obj_tag(v___x_5612_) == 0)
{
lean_object* v_a_5613_; lean_object* v___x_5614_; 
v_a_5613_ = lean_ctor_get(v___x_5612_, 0);
lean_inc(v_a_5613_);
lean_dec_ref_known(v___x_5612_, 1);
v___x_5614_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5613_);
lean_dec(v_a_5613_);
if (lean_obj_tag(v___x_5614_) == 0)
{
lean_object* v_a_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; 
v_a_5615_ = lean_ctor_get(v___x_5614_, 0);
lean_inc(v_a_5615_);
lean_dec_ref_known(v___x_5614_, 1);
v___x_5616_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5601_);
v___x_5617_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v___x_5616_, v_a_5615_);
lean_dec_ref(v___x_5616_);
return v___x_5617_;
}
else
{
lean_object* v_a_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5625_; 
v_a_5618_ = lean_ctor_get(v___x_5614_, 0);
v_isSharedCheck_5625_ = !lean_is_exclusive(v___x_5614_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5620_ = v___x_5614_;
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_a_5618_);
lean_dec(v___x_5614_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5625_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5623_; 
if (v_isShared_5621_ == 0)
{
v___x_5623_ = v___x_5620_;
goto v_reusejp_5622_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_a_5618_);
v___x_5623_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5622_;
}
v_reusejp_5622_:
{
return v___x_5623_;
}
}
}
}
else
{
lean_object* v_a_5626_; lean_object* v___x_5628_; uint8_t v_isShared_5629_; uint8_t v_isSharedCheck_5633_; 
v_a_5626_ = lean_ctor_get(v___x_5612_, 0);
v_isSharedCheck_5633_ = !lean_is_exclusive(v___x_5612_);
if (v_isSharedCheck_5633_ == 0)
{
v___x_5628_ = v___x_5612_;
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
else
{
lean_inc(v_a_5626_);
lean_dec(v___x_5612_);
v___x_5628_ = lean_box(0);
v_isShared_5629_ = v_isSharedCheck_5633_;
goto v_resetjp_5627_;
}
v_resetjp_5627_:
{
lean_object* v___x_5631_; 
if (v_isShared_5629_ == 0)
{
lean_ctor_set_tag(v___x_5628_, 1);
v___x_5631_ = v___x_5628_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v_a_5626_);
v___x_5631_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
return v___x_5631_;
}
}
}
}
else
{
lean_object* v_a_5634_; lean_object* v___x_5636_; uint8_t v_isShared_5637_; uint8_t v_isSharedCheck_5649_; 
v_a_5634_ = lean_ctor_get(v___x_5612_, 0);
v_isSharedCheck_5649_ = !lean_is_exclusive(v___x_5612_);
if (v_isSharedCheck_5649_ == 0)
{
v___x_5636_ = v___x_5612_;
v_isShared_5637_ = v_isSharedCheck_5649_;
goto v_resetjp_5635_;
}
else
{
lean_inc(v_a_5634_);
lean_dec(v___x_5612_);
v___x_5636_ = lean_box(0);
v_isShared_5637_ = v_isSharedCheck_5649_;
goto v_resetjp_5635_;
}
v_resetjp_5635_:
{
lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5647_; 
v___x_5638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5639_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5601_);
v___x_5640_ = lean_string_append(v___x_5638_, v___x_5639_);
lean_dec_ref(v___x_5639_);
v___x_5641_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5642_ = lean_string_append(v___x_5640_, v___x_5641_);
v___x_5643_ = lean_io_error_to_string(v_a_5634_);
v___x_5644_ = lean_string_append(v___x_5642_, v___x_5643_);
lean_dec_ref(v___x_5643_);
v___x_5645_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5645_, 0, v___x_5644_);
if (v_isShared_5637_ == 0)
{
lean_ctor_set(v___x_5636_, 0, v___x_5645_);
v___x_5647_ = v___x_5636_;
goto v_reusejp_5646_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v___x_5645_);
v___x_5647_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5646_;
}
v_reusejp_5646_:
{
return v___x_5647_;
}
}
}
}
v___jp_5651_:
{
uint8_t v_construct_5653_; uint64_t v___x_5654_; 
v_construct_5653_ = lean_ctor_get_uint8(v_b_5601_, sizeof(void*)*4);
v___x_5654_ = lean_uint64_lor(v___x_5650_, v___y_5652_);
if (v_construct_5653_ == 0)
{
uint64_t v___x_5655_; 
v___x_5655_ = 0ULL;
v___y_5606_ = v___x_5654_;
v___y_5607_ = v___x_5655_;
goto v___jp_5605_;
}
else
{
uint64_t v___x_5656_; 
v___x_5656_ = 4ULL;
v___y_5606_ = v___x_5654_;
v___y_5607_ = v___x_5656_;
goto v___jp_5605_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5659_, lean_object* v_args_5660_, lean_object* v_await_5661_, lean_object* v_a_5662_){
_start:
{
uint8_t v_await_boxed_5663_; lean_object* v_res_5664_; 
v_await_boxed_5663_ = lean_unbox(v_await_5661_);
v_res_5664_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v_b_5659_, v_args_5660_, v_await_boxed_5663_);
lean_dec_ref(v_b_5659_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double v_init_5673_){
_start:
{
lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; uint8_t v___x_5685_; lean_object* v___x_5686_; 
v___x_5675_ = lean_unsigned_to_nat(1u);
v___x_5676_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2));
v___x_5677_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5678_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5678_, 0, v_init_5673_);
v___x_5679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5679_, 0, v___x_5677_);
lean_ctor_set(v___x_5679_, 1, v___x_5678_);
v___x_5680_ = lean_mk_empty_array_with_capacity(v___x_5675_);
lean_inc_ref(v___x_5680_);
v___x_5681_ = lean_array_push(v___x_5680_, v___x_5679_);
v___x_5682_ = l_Lasm_JS_Web_Support_fields(v___x_5681_);
lean_dec_ref(v___x_5681_);
v___x_5683_ = lean_array_push(v___x_5680_, v___x_5682_);
v___x_5684_ = l_Lasm_JS_Web_Support_args(v___x_5683_);
v___x_5685_ = 0;
v___x_5686_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v___x_5676_, v___x_5684_, v___x_5685_);
return v___x_5686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object* v_init_5687_, lean_object* v_a_5688_){
_start:
{
double v_init_boxed_5689_; lean_object* v_res_5690_; 
v_init_boxed_5689_ = lean_unbox_float(v_init_5687_);
lean_dec_ref(v_init_5687_);
v_res_5690_ = l_Lasm_JS_Web_CountQueuingStrategy_new(v_init_boxed_5689_);
return v_res_5690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object* v_self_5691_){
_start:
{
lean_object* v___x_5693_; lean_object* v___x_5694_; 
v___x_5693_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5694_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5691_, v___x_5693_);
return v___x_5694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5695_, lean_object* v_a_5696_){
_start:
{
lean_object* v_res_5697_; 
v_res_5697_ = l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(v_self_5695_);
return v_res_5697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object* v_self_5698_){
_start:
{
lean_object* v___x_5700_; lean_object* v___x_5701_; 
v___x_5700_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5701_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5698_, v___x_5700_);
return v___x_5701_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object* v_self_5702_, lean_object* v_a_5703_){
_start:
{
lean_object* v_res_5704_; 
v_res_5704_ = l_Lasm_JS_Web_CountQueuingStrategy_size(v_self_5702_);
return v_res_5704_;
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
