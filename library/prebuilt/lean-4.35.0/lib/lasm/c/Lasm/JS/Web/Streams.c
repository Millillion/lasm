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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
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
lean_object* v___f_332_; lean_object* v___f_333_; lean_object* v___f_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___f_332_ = ((lean_object*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___closed__0));
v___f_333_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_333_, 0, v_f_330_);
lean_closure_set(v___f_333_, 1, v___f_332_);
v___f_334_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_334_, 0, v___f_333_);
v___x_335_ = lean_unsigned_to_nat(0u);
v___x_336_ = l_Lasm_JS_Function_ofFn(v___f_334_, v___x_335_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofFn___boxed(lean_object* v_f_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_Web_QueuingStrategySize_ofFn(v_f_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0(lean_object* v_f_356_, lean_object* v_args_357_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_362_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_357_, v___x_359_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref(v___x_360_);
v___x_362_ = lean_apply_2(v_f_356_, v_a_361_, lean_box(0));
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_372_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_372_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_372_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_372_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; double v___x_368_; lean_object* v___x_370_; 
v___x_367_ = lean_alloc_ctor(3, 0, 8);
v___x_368_ = lean_unbox_float(v_a_363_);
lean_dec(v_a_363_);
lean_ctor_set_float(v___x_367_, 0, v___x_368_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_367_);
v___x_370_ = v___x_365_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_367_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
else
{
lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_373_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_380_ == 0)
{
v___x_375_ = v___x_362_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_362_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_373_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0___boxed(lean_object* v_f_381_, lean_object* v_args_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0(v_f_381_, v_args_382_);
lean_dec_ref(v_args_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn(lean_object* v_f_385_){
_start:
{
lean_object* v___f_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___f_387_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_387_, 0, v_f_385_);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = l_Lasm_JS_Function_ofSyncFn(v___f_387_, v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
v_a_398_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_389_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_389_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn___boxed(lean_object* v_f_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lasm_JS_Web_QueuingStrategySize_ofSyncFn(v_f_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0(lean_object* v___f_411_, lean_object* v___f_412_, lean_object* v_d_413_){
_start:
{
lean_object* v_highWaterMark_414_; lean_object* v_size_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_432_; 
v_highWaterMark_414_ = lean_ctor_get(v_d_413_, 0);
v_size_415_ = lean_ctor_get(v_d_413_, 1);
v_isSharedCheck_432_ = !lean_is_exclusive(v_d_413_);
if (v_isSharedCheck_432_ == 0)
{
v___x_417_ = v_d_413_;
v_isShared_418_ = v_isSharedCheck_432_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_size_415_);
lean_inc(v_highWaterMark_414_);
lean_dec(v_d_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_432_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_419_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_420_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_411_, v_highWaterMark_414_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 1, v___x_420_);
lean_ctor_set(v___x_417_, 0, v___x_419_);
v___x_422_ = v___x_417_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v___x_420_);
v___x_422_ = v_reuseFailAlloc_431_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_423_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_424_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_412_, v_size_415_);
v___x_425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_423_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = lean_unsigned_to_nat(2u);
v___x_427_ = lean_mk_empty_array_with_capacity(v___x_426_);
v___x_428_ = lean_array_push(v___x_427_, v___x_422_);
v___x_429_ = lean_array_push(v___x_428_, v___x_425_);
v___x_430_ = l_Lasm_JS_Web_Support_fields(v___x_429_);
lean_dec_ref(v___x_429_);
return v___x_430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0(lean_object* v___f_439_, lean_object* v_d_440_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_441_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_442_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_439_, v_d_440_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_mk_empty_array_with_capacity(v___x_444_);
v___x_446_ = lean_array_push(v___x_445_, v___x_443_);
v___x_447_ = l_Lasm_JS_Web_Support_fields(v___x_446_);
lean_dec_ref(v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0(lean_object* v_d_453_){
_start:
{
lean_object* v_readable_454_; lean_object* v_writable_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_473_; 
v_readable_454_ = lean_ctor_get(v_d_453_, 0);
v_writable_455_ = lean_ctor_get(v_d_453_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_d_453_);
if (v_isSharedCheck_473_ == 0)
{
v___x_457_ = v_d_453_;
v_isShared_458_ = v_isSharedCheck_473_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_writable_455_);
lean_inc(v_readable_454_);
lean_dec(v_d_453_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_473_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
v___x_459_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_458_ == 0)
{
lean_ctor_set_tag(v___x_457_, 9);
lean_ctor_set(v___x_457_, 1, v___x_460_);
v___x_462_ = v___x_457_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_readable_454_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_472_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___x_459_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_465_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_465_, 0, v_writable_455_);
lean_ctor_set(v___x_465_, 1, v___x_460_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = lean_unsigned_to_nat(2u);
v___x_468_ = lean_mk_empty_array_with_capacity(v___x_467_);
v___x_469_ = lean_array_push(v___x_468_, v___x_463_);
v___x_470_ = lean_array_push(v___x_469_, v___x_466_);
v___x_471_ = l_Lasm_JS_Web_Support_fields(v___x_470_);
lean_dec_ref(v___x_470_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0(lean_object* v___f_480_, lean_object* v___f_481_, lean_object* v_d_482_){
_start:
{
lean_object* v_preventClose_483_; lean_object* v_preventAbort_484_; lean_object* v_preventCancel_485_; lean_object* v_signal_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_preventClose_483_ = lean_ctor_get(v_d_482_, 0);
lean_inc(v_preventClose_483_);
v_preventAbort_484_ = lean_ctor_get(v_d_482_, 1);
lean_inc(v_preventAbort_484_);
v_preventCancel_485_ = lean_ctor_get(v_d_482_, 2);
lean_inc(v_preventCancel_485_);
v_signal_486_ = lean_ctor_get(v_d_482_, 3);
lean_inc(v_signal_486_);
lean_dec_ref(v_d_482_);
v___x_487_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_480_, 2);
v___x_488_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_480_, v_preventClose_483_);
v___x_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_491_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_480_, v_preventAbort_484_);
v___x_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_494_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_480_, v_preventCancel_485_);
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_493_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_497_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_481_, v_signal_486_);
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = lean_unsigned_to_nat(4u);
v___x_500_ = lean_mk_empty_array_with_capacity(v___x_499_);
v___x_501_ = lean_array_push(v___x_500_, v___x_489_);
v___x_502_ = lean_array_push(v___x_501_, v___x_492_);
v___x_503_ = lean_array_push(v___x_502_, v___x_495_);
v___x_504_ = lean_array_push(v___x_503_, v___x_498_);
v___x_505_ = l_Lasm_JS_Web_Support_fields(v___x_504_);
lean_dec_ref(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0(lean_object* v___x_514_, lean_object* v___x_515_, lean_object* v_d_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
v___x_518_ = l_Lasm_JS_readField___redArg(v___x_514_, v_d_516_, v___x_517_);
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v___x_515_);
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_a_527_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_518_, 1);
v___x_528_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
v___x_529_ = l_Lasm_JS_readField___redArg(v___x_515_, v_d_516_, v___x_528_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_537_; 
lean_dec(v_a_527_);
v_a_530_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_537_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_537_ == 0)
{
v___x_532_ = v___x_529_;
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_529_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_537_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_535_; 
if (v_isShared_533_ == 0)
{
v___x_535_ = v___x_532_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_a_530_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_546_; 
v_a_538_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_546_ == 0)
{
v___x_540_ = v___x_529_;
v_isShared_541_ = v_isSharedCheck_546_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_529_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_546_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_a_527_);
lean_ctor_set(v___x_542_, 1, v_a_538_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_542_);
v___x_544_ = v___x_540_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___boxed(lean_object* v___x_547_, lean_object* v___x_548_, lean_object* v_d_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0(v___x_547_, v___x_548_, v_d_549_);
lean_dec(v_d_549_);
return v_res_550_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = l_Lasm_JS_instFromJSBool;
v___x_552_ = l_Lasm_JS_instFromJSOption___redArg(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___f_555_; 
v___x_553_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__0);
v___x_554_ = l_Lasm_JS_instFromJSData;
v___f_555_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_555_, 0, v___x_554_);
lean_closure_set(v___f_555_, 1, v___x_553_);
return v___f_555_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3(void){
_start:
{
uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___f_559_; lean_object* v___x_560_; 
v___x_557_ = 0;
v___x_558_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___f_559_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__1);
v___x_560_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_560_, 0, v___f_559_);
lean_ctor_set(v___x_560_, 1, v___x_558_);
lean_ctor_set_uint8(v___x_560_, sizeof(void*)*2, v___x_557_);
return v___x_560_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult(void){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_obj_once(&l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3, &l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3_once, _init_l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__3);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0(lean_object* v___f_563_, lean_object* v_d_564_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_565_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_566_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_563_, v_d_564_);
v___x_567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_565_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_unsigned_to_nat(1u);
v___x_569_ = lean_mk_empty_array_with_capacity(v___x_568_);
v___x_570_ = lean_array_push(v___x_569_, v___x_567_);
v___x_571_ = l_Lasm_JS_Web_Support_fields(v___x_570_);
lean_dec_ref(v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0(double v_d_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_577_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_578_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_578_, 0, v_d_576_);
v___x_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_577_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = lean_unsigned_to_nat(1u);
v___x_581_ = lean_mk_empty_array_with_capacity(v___x_580_);
v___x_582_ = lean_array_push(v___x_581_, v___x_579_);
v___x_583_ = l_Lasm_JS_Web_Support_fields(v___x_582_);
lean_dec_ref(v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0___boxed(lean_object* v_d_584_){
_start:
{
double v_d_boxed_585_; lean_object* v_res_586_; 
v_d_boxed_585_ = lean_unbox_float(v_d_584_);
lean_dec_ref(v_d_584_);
v_res_586_ = l_Lasm_JS_Web_instToJSQueuingStrategyInit___lam__0(v_d_boxed_585_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0(lean_object* v_x_596_){
_start:
{
lean_object* v___x_598_; 
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v_x_596_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__0___boxed(lean_object* v_x_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lasm_JS_Web_JSFunction_ofFn___lam__0(v_x_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1(lean_object* v_f_602_, lean_object* v___f_603_, lean_object* v_args_604_){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = lean_array_get_size(v_args_604_);
v___x_608_ = l_Array_extract___redArg(v_args_604_, v___x_606_, v___x_607_);
v___x_609_ = 0;
v___x_610_ = lean_apply_2(v_f_602_, v___x_608_, lean_box(0));
v___x_611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_606_, v___x_609_, v___x_610_, v___f_603_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___lam__1___boxed(lean_object* v_f_612_, lean_object* v___f_613_, lean_object* v_args_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_JS_Web_JSFunction_ofFn___lam__1(v_f_612_, v___f_613_, v_args_614_);
lean_dec_ref(v_args_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn(lean_object* v_f_618_){
_start:
{
lean_object* v___f_620_; lean_object* v___f_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___f_620_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_621_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_JSFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_621_, 0, v_f_618_);
lean_closure_set(v___f_621_, 1, v___f_620_);
v___x_622_ = lean_unsigned_to_nat(0u);
v___x_623_ = l_Lasm_JS_Function_ofFn(v___f_621_, v___x_622_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
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
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_a_632_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_623_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_623_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofFn___boxed(lean_object* v_f_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lasm_JS_Web_JSFunction_ofFn(v_f_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0(lean_object* v_f_643_, lean_object* v_args_644_){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_647_ = lean_array_get_size(v_args_644_);
v___x_648_ = l_Array_extract___redArg(v_args_644_, v___x_646_, v___x_647_);
v___x_649_ = lean_apply_2(v_f_643_, v___x_648_, lean_box(0));
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_650_, lean_object* v_args_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0(v_f_650_, v_args_651_);
lean_dec_ref(v_args_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn(lean_object* v_f_654_){
_start:
{
lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___f_656_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_JSFunction_ofSyncFn___lam__0___boxed), 3, 1);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_JSFunction_ofSyncFn___boxed(lean_object* v_f_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lasm_JS_Web_JSFunction_ofSyncFn(v_f_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1(lean_object* v_f_685_, lean_object* v___f_686_, lean_object* v_x_687_){
_start:
{
if (lean_obj_tag(v_x_687_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v___f_686_);
lean_dec_ref(v_f_685_);
v_a_689_ = lean_ctor_get(v_x_687_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v_x_687_);
if (v_isSharedCheck_697_ == 0)
{
v___x_691_ = v_x_687_;
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v_x_687_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_697_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_696_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
return v___x_695_;
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_699_; uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v_a_698_ = lean_ctor_get(v_x_687_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v_x_687_, 1);
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = 0;
v___x_701_ = lean_apply_2(v_f_685_, v_a_698_, lean_box(0));
v___x_702_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_699_, v___x_700_, v___x_701_, v___f_686_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed(lean_object* v_f_703_, lean_object* v___f_704_, lean_object* v_x_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1(v_f_703_, v___f_704_, v_x_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(lean_object* v_args_709_, lean_object* v_i_710_){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_712_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_713_ = lean_unsigned_to_nat(1u);
v___x_714_ = lean_nat_add(v_i_710_, v___x_713_);
v___x_715_ = l_Nat_reprFast(v___x_714_);
v___x_716_ = lean_string_append(v___x_712_, v___x_715_);
lean_dec_ref(v___x_715_);
v___x_717_ = lean_array_get_size(v_args_709_);
v___x_718_ = lean_nat_dec_lt(v_i_710_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = lean_box(0);
v___x_720_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_716_, v___x_719_);
lean_dec_ref(v___x_716_);
return v___x_720_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_array_fget_borrowed(v_args_709_, v_i_710_);
lean_inc(v___x_721_);
v___x_722_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_716_, v___x_721_);
lean_dec_ref(v___x_716_);
return v___x_722_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___boxed(lean_object* v_args_723_, lean_object* v_i_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_723_, v_i_724_);
lean_dec(v_i_724_);
lean_dec_ref(v_args_723_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0(lean_object* v___f_727_, lean_object* v_args_728_){
_start:
{
lean_object* v___x_730_; uint8_t v___x_731_; lean_object* v_val_733_; lean_object* v___x_736_; 
v___x_730_ = lean_unsigned_to_nat(0u);
v___x_731_ = 0;
v___x_736_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_728_, v___x_730_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 1);
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
v_val_733_ = v___x_742_;
goto v___jp_732_;
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_a_745_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_736_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_736_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 0);
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
v_val_733_ = v___x_750_;
goto v___jp_732_;
}
}
}
v___jp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v_val_733_);
v___x_735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_730_, v___x_731_, v___x_734_, v___f_727_);
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed(lean_object* v___f_753_, lean_object* v_args_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0(v___f_753_, v_args_754_);
lean_dec_ref(v_args_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn(lean_object* v_f_757_){
_start:
{
lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___f_759_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_760_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_760_, 0, v_f_757_);
lean_closure_set(v___f_760_, 1, v___f_759_);
v___f_761_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_761_, 0, v___f_760_);
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = l_Lasm_JS_Function_ofFn(v___f_761_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v_a_772_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_763_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_763_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___boxed(lean_object* v_f_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn(v_f_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0(lean_object* v_f_783_, lean_object* v_args_784_){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(0u);
v___x_787_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_784_, v___x_786_);
if (lean_obj_tag(v___x_787_) == 0)
{
lean_object* v_a_788_; lean_object* v___x_789_; 
v_a_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_787_, 1);
v___x_789_ = lean_apply_2(v_f_783_, v_a_788_, lean_box(0));
return v___x_789_;
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v_f_783_);
v_a_790_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_787_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_787_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_798_, lean_object* v_args_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0(v_f_798_, v_args_799_);
lean_dec_ref(v_args_799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn(lean_object* v_f_802_){
_start:
{
lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___f_804_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_804_, 0, v_f_802_);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = l_Lasm_JS_Function_ofSyncFn(v___f_804_, v___x_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
v_a_815_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_806_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_806_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn___boxed(lean_object* v_f_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofSyncFn(v_f_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0(lean_object* v_x_837_){
_start:
{
if (lean_obj_tag(v_x_837_) == 0)
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_847_; 
v_a_839_ = lean_ctor_get(v_x_837_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_837_);
if (v_isSharedCheck_847_ == 0)
{
v___x_841_ = v_x_837_;
v_isShared_842_ = v_isSharedCheck_847_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v_x_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_847_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
return v___x_845_;
}
}
}
else
{
lean_object* v___x_848_; 
lean_dec_ref_known(v_x_837_, 1);
v___x_848_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___closed__1));
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0___boxed(lean_object* v_x_849_, lean_object* v___y_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__0(v_x_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1(lean_object* v_f_852_, lean_object* v___f_853_, lean_object* v_x_854_){
_start:
{
if (lean_obj_tag(v_x_854_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_864_; 
lean_dec_ref(v___f_853_);
lean_dec_ref(v_f_852_);
v_a_856_ = lean_ctor_get(v_x_854_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v_x_854_);
if (v_isSharedCheck_864_ == 0)
{
v___x_858_ = v_x_854_;
v_isShared_859_ = v_isSharedCheck_864_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v_x_854_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_864_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_863_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_862_; 
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_866_; uint8_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_865_ = lean_ctor_get(v_x_854_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v_x_854_, 1);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = 0;
v___x_868_ = lean_apply_2(v_f_852_, v_a_865_, lean_box(0));
v___x_869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_866_, v___x_867_, v___x_868_, v___f_853_);
return v___x_869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed(lean_object* v_f_870_, lean_object* v___f_871_, lean_object* v_x_872_, lean_object* v___y_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1(v_f_870_, v___f_871_, v_x_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn(lean_object* v_f_876_){
_start:
{
lean_object* v___f_878_; lean_object* v___f_879_; lean_object* v___f_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___f_878_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_879_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_879_, 0, v_f_876_);
lean_closure_set(v___f_879_, 1, v___f_878_);
v___f_880_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_880_, 0, v___f_879_);
v___x_881_ = lean_unsigned_to_nat(0u);
v___x_882_ = l_Lasm_JS_Function_ofFn(v___f_880_, v___x_881_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_882_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_882_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_a_891_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_882_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_882_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___boxed(lean_object* v_f_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn(v_f_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0(lean_object* v_f_902_, lean_object* v_args_903_){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0(v_args_903_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_908_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = lean_apply_2(v_f_902_, v_a_907_, lean_box(0));
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_916_; 
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_916_ == 0)
{
lean_object* v_unused_917_; 
v_unused_917_ = lean_ctor_get(v___x_908_, 0);
lean_dec(v_unused_917_);
v___x_910_ = v___x_908_;
v_isShared_911_ = v_isSharedCheck_916_;
goto v_resetjp_909_;
}
else
{
lean_dec(v___x_908_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_916_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_914_; 
v___x_912_ = lean_box(0);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 0, v___x_912_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_912_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
v_a_918_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_908_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_908_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v_f_902_);
v_a_926_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_906_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_906_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_934_, lean_object* v_args_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0(v_f_934_, v_args_935_);
lean_dec_ref(v_args_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn(lean_object* v_f_938_){
_start:
{
lean_object* v___f_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___f_940_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_940_, 0, v_f_938_);
v___x_941_ = lean_unsigned_to_nat(0u);
v___x_942_ = l_Lasm_JS_Function_ofSyncFn(v___f_940_, v___x_941_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
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
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
v_a_951_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_942_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_942_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn___boxed(lean_object* v_f_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofSyncFn(v_f_959_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1(lean_object* v_f_969_, lean_object* v___f_970_, lean_object* v_x_971_){
_start:
{
if (lean_obj_tag(v_x_971_) == 0)
{
lean_object* v___x_973_; 
lean_dec_ref(v___f_970_);
lean_dec_ref(v_f_969_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v_x_971_);
return v___x_973_;
}
else
{
lean_object* v_a_974_; lean_object* v___x_975_; uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_a_974_ = lean_ctor_get(v_x_971_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v_x_971_, 1);
v___x_975_ = lean_unsigned_to_nat(0u);
v___x_976_ = 0;
v___x_977_ = lean_apply_2(v_f_969_, v_a_974_, lean_box(0));
v___x_978_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_975_, v___x_976_, v___x_977_, v___f_970_);
return v___x_978_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed(lean_object* v_f_979_, lean_object* v___f_980_, lean_object* v_x_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1(v_f_979_, v___f_980_, v_x_981_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn(lean_object* v_f_984_){
_start:
{
lean_object* v___f_986_; lean_object* v___f_987_; lean_object* v___f_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___f_986_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_987_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_987_, 0, v_f_984_);
lean_closure_set(v___f_987_, 1, v___f_986_);
v___f_988_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_988_, 0, v___f_987_);
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = l_Lasm_JS_Function_ofFn(v___f_988_, v___x_989_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_a_999_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_990_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_990_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___boxed(lean_object* v_f_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn(v_f_1007_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0(lean_object* v_f_1010_, lean_object* v_args_1011_){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v_a_1015_; lean_object* v___x_1016_; 
v___x_1013_ = lean_unsigned_to_nat(0u);
v___x_1014_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1011_, v___x_1013_);
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref(v___x_1014_);
v___x_1016_ = lean_apply_2(v_f_1010_, v_a_1015_, lean_box(0));
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1024_; 
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; 
v_unused_1025_ = lean_ctor_get(v___x_1016_, 0);
lean_dec(v_unused_1025_);
v___x_1018_ = v___x_1016_;
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
else
{
lean_dec(v___x_1016_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1024_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = lean_box(0);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
v_a_1026_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_1016_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1016_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1034_, lean_object* v_args_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0(v_f_1034_, v_args_1035_);
lean_dec_ref(v_args_1035_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn(lean_object* v_f_1038_){
_start:
{
lean_object* v___f_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___f_1040_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1040_, 0, v_f_1038_);
v___x_1041_ = lean_unsigned_to_nat(0u);
v___x_1042_ = l_Lasm_JS_Function_ofSyncFn(v___f_1040_, v___x_1041_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
v_a_1051_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1042_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1042_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___boxed(lean_object* v_f_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn(v_f_1059_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0(lean_object* v___f_1067_, lean_object* v___f_1068_, lean_object* v___f_1069_, lean_object* v___f_1070_, lean_object* v___f_1071_, lean_object* v_d_1072_){
_start:
{
lean_object* v_start_1073_; lean_object* v_pull_1074_; lean_object* v_cancel_1075_; lean_object* v_type_1076_; lean_object* v_autoAllocateChunkSize_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_start_1073_ = lean_ctor_get(v_d_1072_, 0);
lean_inc(v_start_1073_);
v_pull_1074_ = lean_ctor_get(v_d_1072_, 1);
lean_inc(v_pull_1074_);
v_cancel_1075_ = lean_ctor_get(v_d_1072_, 2);
lean_inc(v_cancel_1075_);
v_type_1076_ = lean_ctor_get(v_d_1072_, 3);
lean_inc(v_type_1076_);
v_autoAllocateChunkSize_1077_ = lean_ctor_get(v_d_1072_, 4);
lean_inc(v_autoAllocateChunkSize_1077_);
lean_dec_ref(v_d_1072_);
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_1079_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1067_, v_start_1073_);
v___x_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__1));
v___x_1082_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1068_, v_pull_1074_);
v___x_1083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1081_);
lean_ctor_set(v___x_1083_, 1, v___x_1082_);
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_1085_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1069_, v_cancel_1075_);
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3));
v___x_1088_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1070_, v_type_1076_);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__4));
v___x_1091_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1071_, v_autoAllocateChunkSize_1077_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = lean_unsigned_to_nat(5u);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1093_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1080_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1083_);
v___x_1097_ = lean_array_push(v___x_1096_, v___x_1086_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1089_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1092_);
v___x_1100_ = l_Lasm_JS_Web_Support_fields(v___x_1099_);
lean_dec_ref(v___x_1099_);
return v___x_1100_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_1117_ = lean_string_utf8_byte_size(v___x_1116_);
return v___x_1117_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___x_1119_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__3);
v___x_1120_ = lean_nat_dec_eq(v___x_1119_, v___x_1118_);
return v___x_1120_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__8));
v___x_1126_ = lean_unsigned_to_nat(46u);
v___x_1127_ = lean_unsigned_to_nat(193u);
v___x_1128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__7));
v___x_1129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__6));
v___x_1130_ = l_mkPanicMessageWithDecl(v___x_1129_, v___x_1128_, v___x_1127_, v___x_1126_, v___x_1125_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1132_, lean_object* v_d_1133_){
_start:
{
lean_object* v___y_1136_; lean_object* v___y_1137_; 
if (lean_obj_tag(v_d_1133_) == 9)
{
lean_object* v_value_1141_; lean_object* v___x_1142_; 
v_value_1141_ = lean_ctor_get(v_d_1133_, 0);
lean_inc(v_value_1141_);
lean_dec_ref_known(v_d_1133_, 2);
v___x_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1142_, 0, v_value_1141_);
return v___x_1142_;
}
else
{
lean_object* v___x_1143_; lean_object* v_received_1145_; 
v___x_1143_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_1133_) == 9)
{
lean_object* v_value_1159_; lean_object* v_description_1160_; uint8_t v___x_1161_; 
v_value_1159_ = lean_ctor_get(v_d_1133_, 0);
v_description_1160_ = lean_ctor_get(v_d_1133_, 1);
v___x_1161_ = lean_string_dec_eq(v_description_1160_, v___x_1143_);
if (v___x_1161_ == 0)
{
goto v___jp_1157_;
}
else
{
uint32_t v___x_1162_; uint64_t v___x_1163_; lean_object* v___x_1164_; uint32_t v___x_1165_; lean_object* v___x_1166_; 
lean_inc_n(v_value_1159_, 2);
lean_dec_ref_known(v_d_1133_, 2);
v___x_1162_ = 206;
v___x_1163_ = 0ULL;
v___x_1164_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1164_, 0, v_value_1159_);
lean_ctor_set(v___x_1164_, 1, v___x_1143_);
v___x_1165_ = lasm_js_value_handle(v_value_1159_);
lean_dec(v_value_1159_);
v___x_1166_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1162_, v___x_1163_, v___x_1164_, v___x_1165_);
lean_dec_ref_known(v___x_1164_, 2);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; uint8_t v___x_1168_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref_known(v___x_1166_, 1);
v___x_1168_ = lean_string_validate_utf8(v_a_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec(v_a_1167_);
v___x_1169_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1170_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1169_);
v_received_1145_ = v___x_1170_;
goto v___jp_1144_;
}
else
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_string_from_utf8_unchecked(v_a_1167_);
v_received_1145_ = v___x_1171_;
goto v___jp_1144_;
}
}
else
{
lean_object* v___x_1172_; 
lean_dec_ref_known(v___x_1166_, 1);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_1145_ = v___x_1172_;
goto v___jp_1144_;
}
}
}
else
{
goto v___jp_1157_;
}
v___jp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1147_ = lean_string_append(v___x_1146_, v_context_1132_);
v___x_1148_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1149_ = lean_string_append(v___x_1147_, v___x_1148_);
v___x_1150_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultController___closed__0));
v___x_1151_ = lean_string_append(v___x_1149_, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1153_ = lean_string_append(v___x_1151_, v___x_1152_);
v___x_1154_ = lean_string_append(v___x_1153_, v_received_1145_);
lean_dec_ref(v_received_1145_);
v___x_1155_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_1136_ = v___x_1154_;
v___y_1137_ = v___x_1156_;
goto v___jp_1135_;
}
else
{
v___y_1136_ = v___x_1154_;
v___y_1137_ = v___x_1143_;
goto v___jp_1135_;
}
}
v___jp_1157_:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lasm_JS_Data_describe(v_d_1133_);
v_received_1145_ = v___x_1158_;
goto v___jp_1144_;
}
}
v___jp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_string_append(v___y_1136_, v___y_1137_);
v___x_1139_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
v___x_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1140_, 0, v___x_1139_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1173_, lean_object* v_d_1174_, lean_object* v_a_1175_){
_start:
{
lean_object* v_res_1176_; 
v_res_1176_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v_context_1173_, v_d_1174_);
lean_dec_ref(v_context_1173_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(lean_object* v_args_1177_, lean_object* v_i_1178_){
_start:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1180_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1181_ = lean_unsigned_to_nat(1u);
v___x_1182_ = lean_nat_add(v_i_1178_, v___x_1181_);
v___x_1183_ = l_Nat_reprFast(v___x_1182_);
v___x_1184_ = lean_string_append(v___x_1180_, v___x_1183_);
lean_dec_ref(v___x_1183_);
v___x_1185_ = lean_array_get_size(v_args_1177_);
v___x_1186_ = lean_nat_dec_lt(v_i_1178_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_box(0);
v___x_1188_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1184_, v___x_1187_);
lean_dec_ref(v___x_1184_);
return v___x_1188_;
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = lean_array_fget_borrowed(v_args_1177_, v_i_1178_);
lean_inc(v___x_1189_);
v___x_1190_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0(v___x_1184_, v___x_1189_);
lean_dec_ref(v___x_1184_);
return v___x_1190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1191_, lean_object* v_i_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1191_, v_i_1192_);
lean_dec(v_i_1192_);
lean_dec_ref(v_args_1191_);
return v_res_1194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(lean_object* v___f_1195_, lean_object* v_args_1196_){
_start:
{
lean_object* v___x_1198_; uint8_t v___x_1199_; lean_object* v_val_1201_; lean_object* v___x_1204_; 
v___x_1198_ = lean_unsigned_to_nat(0u);
v___x_1199_ = 0;
v___x_1204_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1196_, v___x_1198_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
v_val_1201_ = v___x_1210_;
goto v___jp_1200_;
}
}
}
else
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
v_a_1213_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1204_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1204_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set_tag(v___x_1215_, 0);
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
v_val_1201_ = v___x_1218_;
goto v___jp_1200_;
}
}
}
v___jp_1200_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_val_1201_);
v___x_1203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1198_, v___x_1199_, v___x_1202_, v___f_1195_);
return v___x_1203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1221_, lean_object* v_args_1222_, lean_object* v___y_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2(v___f_1221_, v_args_1222_);
lean_dec_ref(v_args_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(lean_object* v_f_1225_){
_start:
{
lean_object* v___f_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___f_1227_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1228_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1228_, 0, v_f_1225_);
lean_closure_set(v___f_1228_, 1, v___f_1227_);
v___f_1229_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1229_, 0, v___f_1228_);
v___x_1230_ = lean_unsigned_to_nat(0u);
v___x_1231_ = l_Lasm_JS_Function_ofFn(v___f_1229_, v___x_1230_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
v_a_1240_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1231_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1231_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn___boxed(lean_object* v_f_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn(v_f_1248_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(lean_object* v_f_1251_, lean_object* v_args_1252_){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lean_unsigned_to_nat(0u);
v___x_1255_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1252_, v___x_1254_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1257_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1257_ = lean_apply_2(v_f_1251_, v_a_1256_, lean_box(0));
return v___x_1257_;
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec_ref(v_f_1251_);
v_a_1258_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1255_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1255_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1266_, lean_object* v_args_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0(v_f_1266_, v_args_1267_);
lean_dec_ref(v_args_1267_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(lean_object* v_f_1270_){
_start:
{
lean_object* v___f_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___f_1272_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1272_, 0, v_f_1270_);
v___x_1273_ = lean_unsigned_to_nat(0u);
v___x_1274_ = l_Lasm_JS_Function_ofSyncFn(v___f_1272_, v___x_1273_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1274_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1274_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1274_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1274_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn___boxed(lean_object* v_f_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Web_UnderlyingSinkStartCallback_ofSyncFn(v_f_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(lean_object* v_f_1301_, lean_object* v_a_1302_, lean_object* v___f_1303_, lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1304_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
lean_dec_ref(v___f_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_f_1301_);
v_a_1306_ = lean_ctor_get(v_x_1304_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1304_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v_x_1304_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v_x_1304_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1316_; uint8_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_a_1315_ = lean_ctor_get(v_x_1304_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v_x_1304_, 1);
v___x_1316_ = lean_unsigned_to_nat(0u);
v___x_1317_ = 0;
v___x_1318_ = lean_apply_3(v_f_1301_, v_a_1302_, v_a_1315_, lean_box(0));
v___x_1319_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1316_, v___x_1317_, v___x_1318_, v___f_1303_);
return v___x_1319_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed(lean_object* v_f_1320_, lean_object* v_a_1321_, lean_object* v___f_1322_, lean_object* v_x_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1(v_f_1320_, v_a_1321_, v___f_1322_, v_x_1323_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(lean_object* v_f_1326_, lean_object* v___f_1327_, lean_object* v_args_1328_, lean_object* v_x_1329_){
_start:
{
if (lean_obj_tag(v_x_1329_) == 0)
{
lean_object* v___x_1331_; 
lean_dec_ref(v___f_1327_);
lean_dec_ref(v_f_1326_);
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v_x_1329_);
return v___x_1331_;
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1353_; 
v_a_1332_ = lean_ctor_get(v_x_1329_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_x_1329_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1334_ = v_x_1329_;
v_isShared_1335_ = v_isSharedCheck_1353_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v_x_1329_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1353_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___f_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; lean_object* v_val_1341_; lean_object* v___x_1344_; 
v___f_1336_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1336_, 0, v_f_1326_);
lean_closure_set(v___f_1336_, 1, v_a_1332_);
lean_closure_set(v___f_1336_, 2, v___f_1327_);
v___x_1337_ = lean_unsigned_to_nat(1u);
v___x_1338_ = lean_unsigned_to_nat(0u);
v___x_1339_ = 0;
v___x_1344_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1328_, v___x_1337_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 0, v_a_1345_);
v___x_1347_ = v___x_1334_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
v_val_1341_ = v___x_1347_;
goto v___jp_1340_;
}
}
else
{
lean_object* v_a_1349_; lean_object* v___x_1351_; 
v_a_1349_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1344_, 1);
if (v_isShared_1335_ == 0)
{
lean_ctor_set_tag(v___x_1334_, 0);
lean_ctor_set(v___x_1334_, 0, v_a_1349_);
v___x_1351_ = v___x_1334_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
v_val_1341_ = v___x_1351_;
goto v___jp_1340_;
}
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1342_, 0, v_val_1341_);
v___x_1343_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1338_, v___x_1339_, v___x_1342_, v___f_1336_);
return v___x_1343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed(lean_object* v_f_1354_, lean_object* v___f_1355_, lean_object* v_args_1356_, lean_object* v_x_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0(v_f_1354_, v___f_1355_, v_args_1356_, v_x_1357_);
lean_dec_ref(v_args_1356_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(lean_object* v_f_1360_, lean_object* v___f_1361_, lean_object* v_args_1362_){
_start:
{
lean_object* v___f_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; lean_object* v_val_1368_; lean_object* v___x_1371_; lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_inc_ref(v_args_1362_);
v___f_1364_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1364_, 0, v_f_1360_);
lean_closure_set(v___f_1364_, 1, v___f_1361_);
lean_closure_set(v___f_1364_, 2, v_args_1362_);
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = 0;
v___x_1371_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1362_, v___x_1365_);
lean_dec_ref(v_args_1362_);
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1371_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_val_1368_);
v___x_1370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1365_, v___x_1366_, v___x_1369_, v___f_1364_);
return v___x_1370_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 1);
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
v_val_1368_ = v___x_1377_;
goto v___jp_1367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed(lean_object* v_f_1380_, lean_object* v___f_1381_, lean_object* v_args_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2(v_f_1380_, v___f_1381_, v_args_1382_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(lean_object* v_f_1385_){
_start:
{
lean_object* v___f_1387_; lean_object* v___f_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___f_1387_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1388_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_1388_, 0, v_f_1385_);
lean_closure_set(v___f_1388_, 1, v___f_1387_);
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = l_Lasm_JS_Function_ofFn(v___f_1388_, v___x_1389_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1390_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1390_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
v_a_1399_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1390_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1390_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___boxed(lean_object* v_f_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v_res_1409_; 
v_res_1409_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn(v_f_1407_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(lean_object* v_f_1410_, lean_object* v_args_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v_a_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1413_ = lean_unsigned_to_nat(0u);
v___x_1414_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1411_, v___x_1413_);
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
lean_inc(v_a_1415_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = lean_unsigned_to_nat(1u);
v___x_1417_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0(v_args_1411_, v___x_1416_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = lean_apply_3(v_f_1410_, v_a_1415_, v_a_1418_, lean_box(0));
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1427_; 
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1427_ == 0)
{
lean_object* v_unused_1428_; 
v_unused_1428_ = lean_ctor_get(v___x_1419_, 0);
lean_dec(v_unused_1428_);
v___x_1421_ = v___x_1419_;
v_isShared_1422_ = v_isSharedCheck_1427_;
goto v_resetjp_1420_;
}
else
{
lean_dec(v___x_1419_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1427_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1423_ = lean_box(0);
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 0, v___x_1423_);
v___x_1425_ = v___x_1421_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
else
{
lean_object* v_a_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1436_; 
v_a_1429_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1431_ = v___x_1419_;
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_a_1429_);
lean_dec(v___x_1419_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1436_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1432_ == 0)
{
v___x_1434_ = v___x_1431_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v_a_1429_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
lean_dec(v_a_1415_);
lean_dec_ref(v_f_1410_);
v_a_1437_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1417_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1417_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1445_, lean_object* v_args_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0(v_f_1445_, v_args_1446_);
lean_dec_ref(v_args_1446_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(lean_object* v_f_1449_){
_start:
{
lean_object* v___f_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___f_1451_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1451_, 0, v_f_1449_);
v___x_1452_ = lean_unsigned_to_nat(0u);
v___x_1453_ = l_Lasm_JS_Function_ofSyncFn(v___f_1451_, v___x_1452_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
v_a_1462_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1453_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1453_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn___boxed(lean_object* v_f_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofSyncFn(v_f_1470_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(lean_object* v_f_1480_, lean_object* v___f_1481_, lean_object* v_x_1482_){
_start:
{
lean_object* v___x_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = 0;
v___x_1486_ = lean_apply_1(v_f_1480_, lean_box(0));
v___x_1487_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1484_, v___x_1485_, v___x_1486_, v___f_1481_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed(lean_object* v_f_1488_, lean_object* v___f_1489_, lean_object* v_x_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1(v_f_1488_, v___f_1489_, v_x_1490_);
lean_dec_ref(v_x_1490_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(lean_object* v_f_1493_){
_start:
{
lean_object* v___f_1495_; lean_object* v___f_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___f_1495_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1496_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1496_, 0, v_f_1493_);
lean_closure_set(v___f_1496_, 1, v___f_1495_);
v___x_1497_ = lean_unsigned_to_nat(0u);
v___x_1498_ = l_Lasm_JS_Function_ofFn(v___f_1496_, v___x_1497_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1498_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1498_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1514_; 
v_a_1507_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1509_ = v___x_1498_;
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1498_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1514_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn___boxed(lean_object* v_f_1515_, lean_object* v_a_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofFn(v_f_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(lean_object* v_f_1518_, lean_object* v_x_1519_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = lean_apply_1(v_f_1518_, lean_box(0));
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1529_; 
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1529_ == 0)
{
lean_object* v_unused_1530_; 
v_unused_1530_ = lean_ctor_get(v___x_1521_, 0);
lean_dec(v_unused_1530_);
v___x_1523_ = v___x_1521_;
v_isShared_1524_ = v_isSharedCheck_1529_;
goto v_resetjp_1522_;
}
else
{
lean_dec(v___x_1521_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1529_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v___x_1527_; 
v___x_1525_ = lean_box(0);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1525_);
v___x_1527_ = v___x_1523_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v___x_1525_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
v_a_1531_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1521_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1521_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1539_, lean_object* v_x_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0(v_f_1539_, v_x_1540_);
lean_dec_ref(v_x_1540_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(lean_object* v_f_1543_){
_start:
{
lean_object* v___f_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___f_1545_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1545_, 0, v_f_1543_);
v___x_1546_ = lean_unsigned_to_nat(0u);
v___x_1547_ = l_Lasm_JS_Function_ofSyncFn(v___f_1545_, v___x_1546_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1547_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1547_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
v_a_1556_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1547_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1547_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn___boxed(lean_object* v_f_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l_Lasm_JS_Web_UnderlyingSinkCloseCallback_ofSyncFn(v_f_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(lean_object* v_f_1574_){
_start:
{
lean_object* v___f_1576_; lean_object* v___f_1577_; lean_object* v___f_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___f_1576_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1577_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1577_, 0, v_f_1574_);
lean_closure_set(v___f_1577_, 1, v___f_1576_);
v___f_1578_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1578_, 0, v___f_1577_);
v___x_1579_ = lean_unsigned_to_nat(0u);
v___x_1580_ = l_Lasm_JS_Function_ofFn(v___f_1578_, v___x_1579_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
v_a_1589_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1580_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1580_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn___boxed(lean_object* v_f_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofFn(v_f_1597_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(lean_object* v_f_1600_){
_start:
{
lean_object* v___f_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___f_1602_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1602_, 0, v_f_1600_);
v___x_1603_ = lean_unsigned_to_nat(0u);
v___x_1604_ = l_Lasm_JS_Function_ofSyncFn(v___f_1602_, v___x_1603_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1612_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1607_ = v___x_1604_;
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1604_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1605_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
else
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
v_a_1613_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1615_ = v___x_1604_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v___x_1604_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn___boxed(lean_object* v_f_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Lasm_JS_Web_UnderlyingSinkAbortCallback_ofSyncFn(v_f_1621_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0(lean_object* v___f_1627_, lean_object* v___f_1628_, lean_object* v___f_1629_, lean_object* v___f_1630_, lean_object* v_d_1631_){
_start:
{
lean_object* v_start_1632_; lean_object* v_write_1633_; lean_object* v_close_1634_; lean_object* v_abort_1635_; lean_object* v_type_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_start_1632_ = lean_ctor_get(v_d_1631_, 0);
lean_inc(v_start_1632_);
v_write_1633_ = lean_ctor_get(v_d_1631_, 1);
lean_inc(v_write_1633_);
v_close_1634_ = lean_ctor_get(v_d_1631_, 2);
lean_inc(v_close_1634_);
v_abort_1635_ = lean_ctor_get(v_d_1631_, 3);
lean_inc(v_abort_1635_);
v_type_1636_ = lean_ctor_get(v_d_1631_, 4);
lean_inc(v_type_1636_);
lean_dec_ref(v_d_1631_);
v___x_1637_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_1638_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1627_, v_start_1632_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1637_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_1641_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1628_, v_write_1633_);
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1640_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_1644_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1629_, v_close_1634_);
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1643_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
v___x_1646_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_1647_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1630_, v_abort_1635_);
v___x_1648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1648_, 0, v___x_1646_);
lean_ctor_set(v___x_1648_, 1, v___x_1647_);
v___x_1649_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__3));
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1649_);
lean_ctor_set(v___x_1650_, 1, v_type_1636_);
v___x_1651_ = lean_unsigned_to_nat(5u);
v___x_1652_ = lean_mk_empty_array_with_capacity(v___x_1651_);
v___x_1653_ = lean_array_push(v___x_1652_, v___x_1639_);
v___x_1654_ = lean_array_push(v___x_1653_, v___x_1642_);
v___x_1655_ = lean_array_push(v___x_1654_, v___x_1645_);
v___x_1656_ = lean_array_push(v___x_1655_, v___x_1648_);
v___x_1657_ = lean_array_push(v___x_1656_, v___x_1650_);
v___x_1658_ = l_Lasm_JS_Web_Support_fields(v___x_1657_);
lean_dec_ref(v___x_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(lean_object* v_context_1669_, lean_object* v_d_1670_){
_start:
{
lean_object* v___y_1673_; lean_object* v___y_1674_; 
if (lean_obj_tag(v_d_1670_) == 9)
{
lean_object* v_value_1678_; lean_object* v___x_1679_; 
v_value_1678_ = lean_ctor_get(v_d_1670_, 0);
lean_inc(v_value_1678_);
lean_dec_ref_known(v_d_1670_, 2);
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_value_1678_);
return v___x_1679_;
}
else
{
lean_object* v___x_1680_; lean_object* v_received_1682_; 
v___x_1680_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_1670_) == 9)
{
lean_object* v_value_1696_; lean_object* v_description_1697_; uint8_t v___x_1698_; 
v_value_1696_ = lean_ctor_get(v_d_1670_, 0);
v_description_1697_ = lean_ctor_get(v_d_1670_, 1);
v___x_1698_ = lean_string_dec_eq(v_description_1697_, v___x_1680_);
if (v___x_1698_ == 0)
{
goto v___jp_1694_;
}
else
{
uint32_t v___x_1699_; uint64_t v___x_1700_; lean_object* v___x_1701_; uint32_t v___x_1702_; lean_object* v___x_1703_; 
lean_inc_n(v_value_1696_, 2);
lean_dec_ref_known(v_d_1670_, 2);
v___x_1699_ = 206;
v___x_1700_ = 0ULL;
v___x_1701_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1701_, 0, v_value_1696_);
lean_ctor_set(v___x_1701_, 1, v___x_1680_);
v___x_1702_ = lasm_js_value_handle(v_value_1696_);
lean_dec(v_value_1696_);
v___x_1703_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1699_, v___x_1700_, v___x_1701_, v___x_1702_);
lean_dec_ref_known(v___x_1701_, 2);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; uint8_t v___x_1705_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = lean_string_validate_utf8(v_a_1704_);
if (v___x_1705_ == 0)
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
lean_dec(v_a_1704_);
v___x_1706_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1707_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1706_);
v_received_1682_ = v___x_1707_;
goto v___jp_1681_;
}
else
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_string_from_utf8_unchecked(v_a_1704_);
v_received_1682_ = v___x_1708_;
goto v___jp_1681_;
}
}
else
{
lean_object* v___x_1709_; 
lean_dec_ref_known(v___x_1703_, 1);
v___x_1709_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_1682_ = v___x_1709_;
goto v___jp_1681_;
}
}
}
else
{
goto v___jp_1694_;
}
v___jp_1681_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; uint8_t v___x_1692_; 
v___x_1683_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1684_ = lean_string_append(v___x_1683_, v_context_1669_);
v___x_1685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1686_ = lean_string_append(v___x_1684_, v___x_1685_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStreamDefaultController___closed__0));
v___x_1688_ = lean_string_append(v___x_1686_, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1690_ = lean_string_append(v___x_1688_, v___x_1689_);
v___x_1691_ = lean_string_append(v___x_1690_, v_received_1682_);
lean_dec_ref(v_received_1682_);
v___x_1692_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; 
v___x_1693_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_1673_ = v___x_1691_;
v___y_1674_ = v___x_1693_;
goto v___jp_1672_;
}
else
{
v___y_1673_ = v___x_1691_;
v___y_1674_ = v___x_1680_;
goto v___jp_1672_;
}
}
v___jp_1694_:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lasm_JS_Data_describe(v_d_1670_);
v_received_1682_ = v___x_1695_;
goto v___jp_1681_;
}
}
v___jp_1672_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = lean_string_append(v___y_1673_, v___y_1674_);
v___x_1676_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
v___x_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1710_, lean_object* v_d_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v_context_1710_, v_d_1711_);
lean_dec_ref(v_context_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(lean_object* v_args_1714_, lean_object* v_i_1715_){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1717_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn_spec__0___closed__0));
v___x_1718_ = lean_unsigned_to_nat(1u);
v___x_1719_ = lean_nat_add(v_i_1715_, v___x_1718_);
v___x_1720_ = l_Nat_reprFast(v___x_1719_);
v___x_1721_ = lean_string_append(v___x_1717_, v___x_1720_);
lean_dec_ref(v___x_1720_);
v___x_1722_ = lean_array_get_size(v_args_1714_);
v___x_1723_ = lean_nat_dec_lt(v_i_1715_, v___x_1722_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = lean_box(0);
v___x_1725_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1721_, v___x_1724_);
lean_dec_ref(v___x_1721_);
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_array_fget_borrowed(v_args_1714_, v_i_1715_);
lean_inc(v___x_1726_);
v___x_1727_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0_spec__0(v___x_1721_, v___x_1726_);
lean_dec_ref(v___x_1721_);
return v___x_1727_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0___boxed(lean_object* v_args_1728_, lean_object* v_i_1729_, lean_object* v_a_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1728_, v_i_1729_);
lean_dec(v_i_1729_);
lean_dec_ref(v_args_1728_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(lean_object* v___f_1732_, lean_object* v_args_1733_){
_start:
{
lean_object* v___x_1735_; uint8_t v___x_1736_; lean_object* v_val_1738_; lean_object* v___x_1741_; 
v___x_1735_ = lean_unsigned_to_nat(0u);
v___x_1736_ = 0;
v___x_1741_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1733_, v___x_1735_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
v_a_1742_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1741_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1741_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
lean_ctor_set_tag(v___x_1744_, 1);
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
v_val_1738_ = v___x_1747_;
goto v___jp_1737_;
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
v_a_1750_ = lean_ctor_get(v___x_1741_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1741_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1741_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
lean_ctor_set_tag(v___x_1752_, 0);
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
v_val_1738_ = v___x_1755_;
goto v___jp_1737_;
}
}
}
v___jp_1737_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v_val_1738_);
v___x_1740_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1735_, v___x_1736_, v___x_1739_, v___f_1732_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed(lean_object* v___f_1758_, lean_object* v_args_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2(v___f_1758_, v_args_1759_);
lean_dec_ref(v_args_1759_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn(lean_object* v_f_1762_){
_start:
{
lean_object* v___f_1764_; lean_object* v___f_1765_; lean_object* v___f_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___f_1764_ = ((lean_object*)(l_Lasm_JS_Web_JSFunction_ofFn___closed__0));
v___f_1765_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceStartCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1765_, 0, v_f_1762_);
lean_closure_set(v___f_1765_, 1, v___f_1764_);
v___f_1766_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1766_, 0, v___f_1765_);
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = l_Lasm_JS_Function_ofFn(v___f_1766_, v___x_1767_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1771_ = v___x_1768_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_a_1769_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
v_a_1777_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1768_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1768_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofFn___boxed(lean_object* v_f_1785_, lean_object* v_a_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lasm_JS_Web_TransformerStartCallback_ofFn(v_f_1785_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(lean_object* v_f_1788_, lean_object* v_args_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1789_, v___x_1791_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = lean_apply_2(v_f_1788_, v_a_1793_, lean_box(0));
return v___x_1794_;
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec_ref(v_f_1788_);
v_a_1795_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1792_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1792_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1803_, lean_object* v_args_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v_res_1806_; 
v_res_1806_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0(v_f_1803_, v_args_1804_);
lean_dec_ref(v_args_1804_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(lean_object* v_f_1807_){
_start:
{
lean_object* v___f_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___f_1809_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1809_, 0, v_f_1807_);
v___x_1810_ = lean_unsigned_to_nat(0u);
v___x_1811_ = l_Lasm_JS_Function_ofSyncFn(v___f_1809_, v___x_1810_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
v_a_1820_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1811_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1811_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn___boxed(lean_object* v_f_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lasm_JS_Web_TransformerStartCallback_ofSyncFn(v_f_1828_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(lean_object* v_f_1838_, lean_object* v___f_1839_, lean_object* v_args_1840_, lean_object* v_x_1841_){
_start:
{
if (lean_obj_tag(v_x_1841_) == 0)
{
lean_object* v___x_1843_; 
lean_dec_ref(v___f_1839_);
lean_dec_ref(v_f_1838_);
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v_x_1841_);
return v___x_1843_;
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1865_; 
v_a_1844_ = lean_ctor_get(v_x_1841_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_x_1841_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1846_ = v_x_1841_;
v_isShared_1847_ = v_isSharedCheck_1865_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v_x_1841_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1865_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___f_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; uint8_t v___x_1851_; lean_object* v_val_1853_; lean_object* v___x_1856_; 
v___f_1848_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSinkWriteCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1848_, 0, v_f_1838_);
lean_closure_set(v___f_1848_, 1, v_a_1844_);
lean_closure_set(v___f_1848_, 2, v___f_1839_);
v___x_1849_ = lean_unsigned_to_nat(1u);
v___x_1850_ = lean_unsigned_to_nat(0u);
v___x_1851_ = 0;
v___x_1856_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1840_, v___x_1849_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1859_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 0, v_a_1857_);
v___x_1859_ = v___x_1846_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
v_val_1853_ = v___x_1859_;
goto v___jp_1852_;
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; 
v_a_1861_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1861_);
lean_dec_ref_known(v___x_1856_, 1);
if (v_isShared_1847_ == 0)
{
lean_ctor_set_tag(v___x_1846_, 0);
lean_ctor_set(v___x_1846_, 0, v_a_1861_);
v___x_1863_ = v___x_1846_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
v_val_1853_ = v___x_1863_;
goto v___jp_1852_;
}
}
v___jp_1852_:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_val_1853_);
v___x_1855_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1850_, v___x_1851_, v___x_1854_, v___f_1848_);
return v___x_1855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed(lean_object* v_f_1866_, lean_object* v___f_1867_, lean_object* v_args_1868_, lean_object* v_x_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2(v_f_1866_, v___f_1867_, v_args_1868_, v_x_1869_);
lean_dec_ref(v_args_1868_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(lean_object* v_f_1872_, lean_object* v___f_1873_, lean_object* v_args_1874_){
_start:
{
lean_object* v___f_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; lean_object* v_val_1880_; lean_object* v___x_1883_; lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_inc_ref(v_args_1874_);
v___f_1876_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_1876_, 0, v_f_1872_);
lean_closure_set(v___f_1876_, 1, v___f_1873_);
lean_closure_set(v___f_1876_, 2, v_args_1874_);
v___x_1877_ = lean_unsigned_to_nat(0u);
v___x_1878_ = 0;
v___x_1883_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1874_, v___x_1877_);
lean_dec_ref(v_args_1874_);
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1883_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1883_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v___jp_1879_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_val_1880_);
v___x_1882_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1877_, v___x_1878_, v___x_1881_, v___f_1876_);
return v___x_1882_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
lean_ctor_set_tag(v___x_1886_, 1);
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
v_val_1880_ = v___x_1889_;
goto v___jp_1879_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed(lean_object* v_f_1892_, lean_object* v___f_1893_, lean_object* v_args_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0(v_f_1892_, v___f_1893_, v_args_1894_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn(lean_object* v_f_1897_){
_start:
{
lean_object* v___f_1899_; lean_object* v___f_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___f_1899_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1900_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofFn___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1900_, 0, v_f_1897_);
lean_closure_set(v___f_1900_, 1, v___f_1899_);
v___x_1901_ = lean_unsigned_to_nat(0u);
v___x_1902_ = l_Lasm_JS_Function_ofFn(v___f_1900_, v___x_1901_);
if (lean_obj_tag(v___x_1902_) == 0)
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
v_a_1903_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1902_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1902_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
v_a_1911_ = lean_ctor_get(v___x_1902_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1902_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1902_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1902_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofFn___boxed(lean_object* v_f_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lasm_JS_Web_TransformerTransformCallback_ofFn(v_f_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(lean_object* v_f_1922_, lean_object* v_args_1923_){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v_a_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1925_ = lean_unsigned_to_nat(0u);
v___x_1926_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_1923_, v___x_1925_);
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref(v___x_1926_);
v___x_1928_ = lean_unsigned_to_nat(1u);
v___x_1929_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_1923_, v___x_1928_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1931_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v___x_1931_ = lean_apply_3(v_f_1922_, v_a_1927_, v_a_1930_, lean_box(0));
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1939_; 
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1939_ == 0)
{
lean_object* v_unused_1940_; 
v_unused_1940_ = lean_ctor_get(v___x_1931_, 0);
lean_dec(v_unused_1940_);
v___x_1933_ = v___x_1931_;
v_isShared_1934_ = v_isSharedCheck_1939_;
goto v_resetjp_1932_;
}
else
{
lean_dec(v___x_1931_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1939_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1937_; 
v___x_1935_ = lean_box(0);
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1935_);
v___x_1937_ = v___x_1933_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
v_a_1941_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1931_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1931_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
lean_dec(v_a_1927_);
lean_dec_ref(v_f_1922_);
v_a_1949_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1929_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1929_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1957_, lean_object* v_args_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0(v_f_1957_, v_args_1958_);
lean_dec_ref(v_args_1958_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(lean_object* v_f_1961_){
_start:
{
lean_object* v___f_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___f_1963_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1963_, 0, v_f_1961_);
v___x_1964_ = lean_unsigned_to_nat(0u);
v___x_1965_ = l_Lasm_JS_Function_ofSyncFn(v___f_1963_, v___x_1964_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
v_a_1974_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1965_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1965_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn___boxed(lean_object* v_f_1982_, lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lasm_JS_Web_TransformerTransformCallback_ofSyncFn(v_f_1982_);
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn(lean_object* v_f_1992_){
_start:
{
lean_object* v___f_1994_; lean_object* v___f_1995_; lean_object* v___f_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___f_1994_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_1995_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1995_, 0, v_f_1992_);
lean_closure_set(v___f_1995_, 1, v___f_1994_);
v___f_1996_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerStartCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1996_, 0, v___f_1995_);
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_1998_ = l_Lasm_JS_Function_ofFn(v___f_1996_, v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
return v___x_2004_;
}
}
}
else
{
lean_object* v_a_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_a_2007_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_1998_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_a_2007_);
lean_dec(v___x_1998_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofFn___boxed(lean_object* v_f_2015_, lean_object* v_a_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lasm_JS_Web_TransformerFlushCallback_ofFn(v_f_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(lean_object* v_f_2018_, lean_object* v_args_2019_){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_unsigned_to_nat(0u);
v___x_2022_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_TransformerStartCallback_ofFn_spec__0(v_args_2019_, v___x_2021_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v_a_2023_; lean_object* v___x_2024_; 
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref_known(v___x_2022_, 1);
v___x_2024_ = lean_apply_2(v_f_2018_, v_a_2023_, lean_box(0));
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2032_; 
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v___x_2024_, 0);
lean_dec(v_unused_2033_);
v___x_2026_ = v___x_2024_;
v_isShared_2027_ = v_isSharedCheck_2032_;
goto v_resetjp_2025_;
}
else
{
lean_dec(v___x_2024_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2032_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2028_; lean_object* v___x_2030_; 
v___x_2028_ = lean_box(0);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 0, v___x_2028_);
v___x_2030_ = v___x_2026_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
else
{
lean_object* v_a_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2041_; 
v_a_2034_ = lean_ctor_get(v___x_2024_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2036_ = v___x_2024_;
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_a_2034_);
lean_dec(v___x_2024_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2041_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2039_; 
if (v_isShared_2037_ == 0)
{
v___x_2039_ = v___x_2036_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2034_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
lean_dec_ref(v_f_2018_);
v_a_2042_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2044_ = v___x_2022_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2022_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_2050_, lean_object* v_args_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0(v_f_2050_, v_args_2051_);
lean_dec_ref(v_args_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(lean_object* v_f_2054_){
_start:
{
lean_object* v___f_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___f_2056_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2056_, 0, v_f_2054_);
v___x_2057_ = lean_unsigned_to_nat(0u);
v___x_2058_ = l_Lasm_JS_Function_ofSyncFn(v___f_2056_, v___x_2057_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2058_);
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
v_reuseFailAlloc_2065_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
v_a_2067_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2058_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2058_);
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
v_reuseFailAlloc_2073_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn___boxed(lean_object* v_f_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lasm_JS_Web_TransformerFlushCallback_ofSyncFn(v_f_2075_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn(lean_object* v_f_2085_){
_start:
{
lean_object* v___f_2087_; lean_object* v___f_2088_; lean_object* v___f_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___f_2087_ = ((lean_object*)(l_Lasm_JS_Web_UnderlyingSourcePullCallback_ofFn___closed__0));
v___f_2088_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2088_, 0, v_f_2085_);
lean_closure_set(v___f_2088_, 1, v___f_2087_);
v___f_2089_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_QueuingStrategySize_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2089_, 0, v___f_2088_);
v___x_2090_ = lean_unsigned_to_nat(0u);
v___x_2091_ = l_Lasm_JS_Function_ofFn(v___f_2089_, v___x_2090_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
else
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2107_; 
v_a_2100_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2107_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2102_ = v___x_2091_;
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2091_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2107_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v___x_2105_; 
if (v_isShared_2103_ == 0)
{
v___x_2105_ = v___x_2102_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_a_2100_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofFn___boxed(lean_object* v_f_2108_, lean_object* v_a_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lasm_JS_Web_TransformerCancelCallback_ofFn(v_f_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(lean_object* v_f_2111_){
_start:
{
lean_object* v___f_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
v___f_2113_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_UnderlyingSourceCancelCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2113_, 0, v_f_2111_);
v___x_2114_ = lean_unsigned_to_nat(0u);
v___x_2115_ = l_Lasm_JS_Function_ofSyncFn(v___f_2113_, v___x_2114_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v___x_2115_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2115_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
v_a_2124_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2115_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2115_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn___boxed(lean_object* v_f_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lasm_JS_Web_TransformerCancelCallback_ofSyncFn(v_f_2132_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTransformer___lam__0(lean_object* v___f_2139_, lean_object* v___f_2140_, lean_object* v___f_2141_, lean_object* v___f_2142_, lean_object* v_d_2143_){
_start:
{
lean_object* v_start_2144_; lean_object* v_transform_2145_; lean_object* v_flush_2146_; lean_object* v_cancel_2147_; lean_object* v_readableType_2148_; lean_object* v_writableType_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v_start_2144_ = lean_ctor_get(v_d_2143_, 0);
lean_inc(v_start_2144_);
v_transform_2145_ = lean_ctor_get(v_d_2143_, 1);
lean_inc(v_transform_2145_);
v_flush_2146_ = lean_ctor_get(v_d_2143_, 2);
lean_inc(v_flush_2146_);
v_cancel_2147_ = lean_ctor_get(v_d_2143_, 3);
lean_inc(v_cancel_2147_);
v_readableType_2148_ = lean_ctor_get(v_d_2143_, 4);
lean_inc(v_readableType_2148_);
v_writableType_2149_ = lean_ctor_get(v_d_2143_, 5);
lean_inc(v_writableType_2149_);
lean_dec_ref(v_d_2143_);
v___x_2150_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__0));
v___x_2151_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2139_, v_start_2144_);
v___x_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2152_, 0, v___x_2150_);
lean_ctor_set(v___x_2152_, 1, v___x_2151_);
v___x_2153_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__0));
v___x_2154_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2140_, v_transform_2145_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2153_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__1));
v___x_2157_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2141_, v_flush_2146_);
v___x_2158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2156_);
lean_ctor_set(v___x_2158_, 1, v___x_2157_);
v___x_2159_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2160_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_2142_, v_cancel_2147_);
v___x_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__2));
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2162_);
lean_ctor_set(v___x_2163_, 1, v_readableType_2148_);
v___x_2164_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTransformer___lam__0___closed__3));
v___x_2165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
lean_ctor_set(v___x_2165_, 1, v_writableType_2149_);
v___x_2166_ = lean_unsigned_to_nat(6u);
v___x_2167_ = lean_mk_empty_array_with_capacity(v___x_2166_);
v___x_2168_ = lean_array_push(v___x_2167_, v___x_2152_);
v___x_2169_ = lean_array_push(v___x_2168_, v___x_2155_);
v___x_2170_ = lean_array_push(v___x_2169_, v___x_2158_);
v___x_2171_ = lean_array_push(v___x_2170_, v___x_2161_);
v___x_2172_ = lean_array_push(v___x_2171_, v___x_2163_);
v___x_2173_ = lean_array_push(v___x_2172_, v___x_2165_);
v___x_2174_ = l_Lasm_JS_Web_Support_fields(v___x_2173_);
lean_dec_ref(v___x_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(lean_object* v_context_2178_, lean_object* v_d_2179_){
_start:
{
lean_object* v___y_2182_; lean_object* v___y_2183_; 
if (lean_obj_tag(v_d_2179_) == 9)
{
lean_object* v_value_2187_; lean_object* v___x_2188_; 
v_value_2187_ = lean_ctor_get(v_d_2179_, 0);
lean_inc(v_value_2187_);
lean_dec_ref_known(v_d_2179_, 2);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v_value_2187_);
return v___x_2188_;
}
else
{
lean_object* v___x_2189_; lean_object* v_received_2191_; 
v___x_2189_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_2179_) == 9)
{
lean_object* v_value_2205_; lean_object* v_description_2206_; uint8_t v___x_2207_; 
v_value_2205_ = lean_ctor_get(v_d_2179_, 0);
v_description_2206_ = lean_ctor_get(v_d_2179_, 1);
v___x_2207_ = lean_string_dec_eq(v_description_2206_, v___x_2189_);
if (v___x_2207_ == 0)
{
goto v___jp_2203_;
}
else
{
uint32_t v___x_2208_; uint64_t v___x_2209_; lean_object* v___x_2210_; uint32_t v___x_2211_; lean_object* v___x_2212_; 
lean_inc_n(v_value_2205_, 2);
lean_dec_ref_known(v_d_2179_, 2);
v___x_2208_ = 206;
v___x_2209_ = 0ULL;
v___x_2210_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2210_, 0, v_value_2205_);
lean_ctor_set(v___x_2210_, 1, v___x_2189_);
v___x_2211_ = lasm_js_value_handle(v_value_2205_);
lean_dec(v_value_2205_);
v___x_2212_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2208_, v___x_2209_, v___x_2210_, v___x_2211_);
lean_dec_ref_known(v___x_2210_, 2);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; uint8_t v___x_2214_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = lean_string_validate_utf8(v_a_2213_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec(v_a_2213_);
v___x_2215_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_2216_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2215_);
v_received_2191_ = v___x_2216_;
goto v___jp_2190_;
}
else
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_string_from_utf8_unchecked(v_a_2213_);
v_received_2191_ = v___x_2217_;
goto v___jp_2190_;
}
}
else
{
lean_object* v___x_2218_; 
lean_dec_ref_known(v___x_2212_, 1);
v___x_2218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_2191_ = v___x_2218_;
goto v___jp_2190_;
}
}
}
else
{
goto v___jp_2203_;
}
v___jp_2190_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; uint8_t v___x_2201_; 
v___x_2192_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2193_ = lean_string_append(v___x_2192_, v_context_2178_);
v___x_2194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2195_ = lean_string_append(v___x_2193_, v___x_2194_);
v___x_2196_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStream___closed__1));
v___x_2197_ = lean_string_append(v___x_2195_, v___x_2196_);
v___x_2198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2199_ = lean_string_append(v___x_2197_, v___x_2198_);
v___x_2200_ = lean_string_append(v___x_2199_, v_received_2191_);
lean_dec_ref(v_received_2191_);
v___x_2201_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_2201_ == 0)
{
lean_object* v___x_2202_; 
v___x_2202_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_2182_ = v___x_2200_;
v___y_2183_ = v___x_2202_;
goto v___jp_2181_;
}
else
{
v___y_2182_ = v___x_2200_;
v___y_2183_ = v___x_2189_;
goto v___jp_2181_;
}
}
v___jp_2203_:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lasm_JS_Data_describe(v_d_2179_);
v_received_2191_ = v___x_2204_;
goto v___jp_2190_;
}
}
v___jp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2184_ = lean_string_append(v___y_2182_, v___y_2183_);
v___x_2185_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
return v___x_2186_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3___boxed(lean_object* v_context_2219_, lean_object* v_d_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v_context_2219_, v_d_2220_);
lean_dec_ref(v_context_2219_);
return v_res_2222_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_2224_; uint64_t v___x_2225_; 
v___x_2224_ = 0;
v___x_2225_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(lean_object* v_b_2226_, lean_object* v_args_2227_, uint8_t v_await_2228_){
_start:
{
uint64_t v___y_2231_; uint64_t v___y_2232_; uint64_t v___x_2275_; uint64_t v___y_2277_; 
v___x_2275_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_2228_ == 0)
{
uint64_t v___x_2282_; 
v___x_2282_ = 0ULL;
v___y_2277_ = v___x_2282_;
goto v___jp_2276_;
}
else
{
uint64_t v___x_2283_; 
v___x_2283_ = 2ULL;
v___y_2277_ = v___x_2283_;
goto v___jp_2276_;
}
v___jp_2230_:
{
uint64_t v_flags_2233_; uint32_t v___x_2234_; lean_object* v___x_2235_; uint32_t v___x_2236_; lean_object* v___x_2237_; 
v_flags_2233_ = lean_uint64_lor(v___y_2231_, v___y_2232_);
v___x_2234_ = 214;
v___x_2235_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2226_, v_args_2227_);
v___x_2236_ = 0;
v___x_2237_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2234_, v_flags_2233_, v___x_2235_, v___x_2236_);
lean_dec(v___x_2235_);
if (lean_obj_tag(v___x_2237_) == 0)
{
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2239_; 
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_a_2238_);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2239_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2238_);
lean_dec(v_a_2238_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref_known(v___x_2239_, 1);
v___x_2241_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2226_);
v___x_2242_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1_spec__3(v___x_2241_, v_a_2240_);
lean_dec_ref(v___x_2241_);
return v___x_2242_;
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
v_a_2243_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2239_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2239_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
v_a_2251_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2237_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2237_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
lean_ctor_set_tag(v___x_2253_, 1);
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2274_; 
v_a_2259_ = lean_ctor_get(v___x_2237_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2237_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2261_ = v___x_2237_;
v_isShared_2262_ = v_isSharedCheck_2274_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2237_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2274_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2272_; 
v___x_2263_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2264_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2226_);
v___x_2265_ = lean_string_append(v___x_2263_, v___x_2264_);
lean_dec_ref(v___x_2264_);
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_2267_ = lean_string_append(v___x_2265_, v___x_2266_);
v___x_2268_ = lean_io_error_to_string(v_a_2259_);
v___x_2269_ = lean_string_append(v___x_2267_, v___x_2268_);
lean_dec_ref(v___x_2268_);
v___x_2270_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
if (v_isShared_2262_ == 0)
{
lean_ctor_set(v___x_2261_, 0, v___x_2270_);
v___x_2272_ = v___x_2261_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2270_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
v___jp_2276_:
{
uint8_t v_construct_2278_; uint64_t v___x_2279_; 
v_construct_2278_ = lean_ctor_get_uint8(v_b_2226_, sizeof(void*)*4);
v___x_2279_ = lean_uint64_lor(v___x_2275_, v___y_2277_);
if (v_construct_2278_ == 0)
{
uint64_t v___x_2280_; 
v___x_2280_ = 0ULL;
v___y_2231_ = v___x_2279_;
v___y_2232_ = v___x_2280_;
goto v___jp_2230_;
}
else
{
uint64_t v___x_2281_; 
v___x_2281_ = 4ULL;
v___y_2231_ = v___x_2279_;
v___y_2232_ = v___x_2281_;
goto v___jp_2230_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___boxed(lean_object* v_b_2284_, lean_object* v_args_2285_, lean_object* v_await_2286_, lean_object* v_a_2287_){
_start:
{
uint8_t v_await_boxed_2288_; lean_object* v_res_2289_; 
v_await_boxed_2288_ = lean_unbox(v_await_2286_);
v_res_2289_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v_b_2284_, v_args_2285_, v_await_boxed_2288_);
lean_dec_ref(v_b_2284_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(lean_object* v_x_2290_){
_start:
{
if (lean_obj_tag(v_x_2290_) == 0)
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_box(0);
return v___x_2291_;
}
else
{
lean_object* v_val_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v_val_2292_ = lean_ctor_get(v_x_2290_, 0);
v___x_2293_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
lean_inc(v_val_2292_);
v___x_2294_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2294_, 0, v_val_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1___boxed(lean_object* v_x_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_x_2295_);
lean_dec(v_x_2295_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object* v_x_2297_){
_start:
{
if (lean_obj_tag(v_x_2297_) == 0)
{
lean_object* v___x_2298_; 
v___x_2298_ = lean_box(0);
return v___x_2298_;
}
else
{
lean_object* v_val_2299_; lean_object* v___x_2300_; double v___x_2301_; 
v_val_2299_ = lean_ctor_get(v_x_2297_, 0);
v___x_2300_ = lean_alloc_ctor(3, 0, 8);
v___x_2301_ = lean_unbox_float(v_val_2299_);
lean_ctor_set_float(v___x_2300_, 0, v___x_2301_);
return v___x_2300_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0___boxed(lean_object* v_x_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_x_2302_);
lean_dec(v_x_2302_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(lean_object* v_x_2304_){
_start:
{
if (lean_obj_tag(v_x_2304_) == 0)
{
lean_object* v___x_2305_; 
v___x_2305_ = lean_box(0);
return v___x_2305_;
}
else
{
lean_object* v_val_2306_; lean_object* v_highWaterMark_2307_; lean_object* v_size_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2325_; 
v_val_2306_ = lean_ctor_get(v_x_2304_, 0);
lean_inc(v_val_2306_);
lean_dec_ref_known(v_x_2304_, 1);
v_highWaterMark_2307_ = lean_ctor_get(v_val_2306_, 0);
v_size_2308_ = lean_ctor_get(v_val_2306_, 1);
v_isSharedCheck_2325_ = !lean_is_exclusive(v_val_2306_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2310_ = v_val_2306_;
v_isShared_2311_ = v_isSharedCheck_2325_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_size_2308_);
lean_inc(v_highWaterMark_2307_);
lean_dec(v_val_2306_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2325_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2315_; 
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_2313_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_highWaterMark_2307_);
lean_dec(v_highWaterMark_2307_);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 1, v___x_2313_);
lean_ctor_set(v___x_2310_, 0, v___x_2312_);
v___x_2315_ = v___x_2310_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2312_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2316_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_2317_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__1(v_size_2308_);
lean_dec(v_size_2308_);
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_unsigned_to_nat(2u);
v___x_2320_ = lean_mk_empty_array_with_capacity(v___x_2319_);
v___x_2321_ = lean_array_push(v___x_2320_, v___x_2315_);
v___x_2322_ = lean_array_push(v___x_2321_, v___x_2318_);
v___x_2323_ = l_Lasm_JS_Web_Support_fields(v___x_2322_);
lean_dec_ref(v___x_2322_);
return v___x_2323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new(lean_object* v_underlyingSource_2335_, lean_object* v_strategy_2336_){
_start:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; lean_object* v___x_2346_; 
v___x_2338_ = lean_unsigned_to_nat(2u);
v___x_2339_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_new___closed__3));
v___x_2340_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_2336_);
v___x_2341_ = lean_mk_empty_array_with_capacity(v___x_2338_);
v___x_2342_ = lean_array_push(v___x_2341_, v_underlyingSource_2335_);
v___x_2343_ = lean_array_push(v___x_2342_, v___x_2340_);
v___x_2344_ = l_Lasm_JS_Web_Support_args(v___x_2343_);
v___x_2345_ = 0;
v___x_2346_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1(v___x_2339_, v___x_2344_, v___x_2345_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_new___boxed(lean_object* v_underlyingSource_2347_, lean_object* v_strategy_2348_, lean_object* v_a_2349_){
_start:
{
lean_object* v_res_2350_; 
v_res_2350_ = l_Lasm_JS_Web_ReadableStream_new(v_underlyingSource_2347_, v_strategy_2348_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked(lean_object* v_self_2352_){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_2355_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_2352_, v___x_2354_);
return v___x_2355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_locked___boxed(lean_object* v_self_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = l_Lasm_JS_Web_ReadableStream_locked(v_self_2356_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from(lean_object* v_asyncIterable_2367_){
_start:
{
uint8_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2369_ = 0;
v___x_2370_ = lean_unsigned_to_nat(1u);
v___x_2371_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_from___closed__2));
v___x_2372_ = lean_mk_empty_array_with_capacity(v___x_2370_);
v___x_2373_ = lean_array_push(v___x_2372_, v_asyncIterable_2367_);
v___x_2374_ = l_Lasm_JS_Web_Support_args(v___x_2373_);
v___x_2375_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2371_, v___x_2374_, v___x_2369_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_a_2384_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2375_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2375_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_from___boxed(lean_object* v_asyncIterable_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lasm_JS_Web_ReadableStream_from(v_asyncIterable_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(lean_object* v___f_2395_, lean_object* v_bytes_2396_){
_start:
{
lean_object* v___x_2398_; uint8_t v___x_2399_; lean_object* v_val_2401_; lean_object* v___x_2404_; 
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = 0;
v___x_2404_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2396_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set_tag(v___x_2407_, 1);
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
v_val_2401_ = v___x_2410_;
goto v___jp_2400_;
}
}
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
v_a_2413_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2415_ = v___x_2404_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2404_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
lean_ctor_set_tag(v___x_2415_, 0);
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2413_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
v_val_2401_ = v___x_2418_;
goto v___jp_2400_;
}
}
}
v___jp_2400_:
{
lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_val_2401_);
v___x_2403_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2398_, v___x_2399_, v___x_2402_, v___f_2395_);
return v___x_2403_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v___f_2421_, lean_object* v_bytes_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__1(v___f_2421_, v_bytes_2422_);
lean_dec_ref(v_bytes_2422_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(lean_object* v_x_2425_){
_start:
{
lean_object* v_val_2428_; 
if (lean_obj_tag(v_x_2425_) == 0)
{
lean_object* v_a_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2438_; 
v_a_2430_ = lean_ctor_get(v_x_2425_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2432_ = v_x_2425_;
v_isShared_2433_ = v_isSharedCheck_2438_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_a_2430_);
lean_dec(v_x_2425_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2438_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2435_; 
if (v_isShared_2433_ == 0)
{
v___x_2435_ = v___x_2432_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2430_);
v___x_2435_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
return v___x_2436_;
}
}
}
else
{
lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_2447_; 
v_isSharedCheck_2447_ = !lean_is_exclusive(v_x_2425_);
if (v_isSharedCheck_2447_ == 0)
{
lean_object* v_unused_2448_; 
v_unused_2448_ = lean_ctor_get(v_x_2425_, 0);
lean_dec(v_unused_2448_);
v___x_2440_ = v_x_2425_;
v_isShared_2441_ = v_isSharedCheck_2447_;
goto v_resetjp_2439_;
}
else
{
lean_dec(v_x_2425_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_2447_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
lean_object* v___x_2442_; lean_object* v_a_2443_; lean_object* v___x_2445_; 
v___x_2442_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref(v___x_2442_);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v_a_2443_);
v___x_2445_ = v___x_2440_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2443_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
v_val_2428_ = v___x_2445_;
goto v___jp_2427_;
}
}
}
v___jp_2427_:
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2429_, 0, v_val_2428_);
return v___x_2429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_x_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__0(v_x_2449_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(lean_object* v_failurePrefix_2452_, lean_object* v_x_2453_){
_start:
{
if (lean_obj_tag(v_x_2453_) == 0)
{
lean_object* v_a_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2466_; 
v_a_2455_ = lean_ctor_get(v_x_2453_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v_x_2453_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2457_ = v_x_2453_;
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_a_2455_);
lean_dec(v_x_2453_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2466_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2459_ = lean_io_error_to_string(v_a_2455_);
v___x_2460_ = lean_string_append(v_failurePrefix_2452_, v___x_2459_);
lean_dec_ref(v___x_2459_);
v___x_2461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2460_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v___x_2461_);
v___x_2463_ = v___x_2457_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; 
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
else
{
lean_object* v___x_2467_; 
lean_dec_ref(v_failurePrefix_2452_);
v___x_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2467_, 0, v_x_2453_);
return v___x_2467_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed(lean_object* v_failurePrefix_2468_, lean_object* v_x_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4(v_failurePrefix_2468_, v_x_2469_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(lean_object* v___f_2472_, lean_object* v_x_2473_){
_start:
{
if (lean_obj_tag(v_x_2473_) == 0)
{
lean_object* v___x_2475_; 
lean_dec_ref(v___f_2472_);
v___x_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2475_, 0, v_x_2473_);
return v___x_2475_;
}
else
{
lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2487_; 
v_isSharedCheck_2487_ = !lean_is_exclusive(v_x_2473_);
if (v_isSharedCheck_2487_ == 0)
{
lean_object* v_unused_2488_; 
v_unused_2488_ = lean_ctor_get(v_x_2473_, 0);
lean_dec(v_unused_2488_);
v___x_2477_ = v_x_2473_;
v_isShared_2478_ = v_isSharedCheck_2487_;
goto v_resetjp_2476_;
}
else
{
lean_dec(v_x_2473_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2487_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2479_; uint8_t v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2479_ = lean_unsigned_to_nat(0u);
v___x_2480_ = 0;
v___x_2481_ = lean_io_promise_new();
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 0, v___x_2481_);
v___x_2483_ = v___x_2477_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2483_);
v___x_2485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2479_, v___x_2480_, v___x_2484_, v___f_2472_);
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed(lean_object* v___f_2489_, lean_object* v_x_2490_, lean_object* v___y_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8(v___f_2489_, v_x_2490_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(lean_object* v___f_2493_, lean_object* v_a_2494_, uint32_t v_op_2495_, uint64_t v_flags_2496_, lean_object* v_payload_2497_, lean_object* v_x_2498_){
_start:
{
if (lean_obj_tag(v_x_2498_) == 0)
{
lean_object* v___x_2500_; 
lean_dec_ref(v___f_2493_);
v___x_2500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_x_2498_);
return v___x_2500_;
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2521_; 
v_a_2501_ = lean_ctor_get(v_x_2498_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v_x_2498_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2503_ = v_x_2498_;
v_isShared_2504_ = v_isSharedCheck_2521_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v_x_2498_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2521_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
uint32_t v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; lean_object* v_val_2509_; lean_object* v___x_2512_; 
v___x_2505_ = 0;
v___x_2506_ = lean_unsigned_to_nat(0u);
v___x_2507_ = 0;
v___x_2512_ = lasm_js_call_into(v_a_2494_, v_op_2495_, v___x_2505_, v_flags_2496_, v_a_2501_, v_payload_2497_);
lean_dec(v_a_2501_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2515_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
if (v_isShared_2504_ == 0)
{
lean_ctor_set(v___x_2503_, 0, v_a_2513_);
v___x_2515_ = v___x_2503_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2513_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
v_val_2509_ = v___x_2515_;
goto v___jp_2508_;
}
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2519_; 
v_a_2517_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2512_, 1);
if (v_isShared_2504_ == 0)
{
lean_ctor_set_tag(v___x_2503_, 0);
lean_ctor_set(v___x_2503_, 0, v_a_2517_);
v___x_2519_ = v___x_2503_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2517_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
v_val_2509_ = v___x_2519_;
goto v___jp_2508_;
}
}
v___jp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_val_2509_);
v___x_2511_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2506_, v___x_2507_, v___x_2510_, v___f_2493_);
return v___x_2511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed(lean_object* v___f_2522_, lean_object* v_a_2523_, lean_object* v_op_2524_, lean_object* v_flags_2525_, lean_object* v_payload_2526_, lean_object* v_x_2527_, lean_object* v___y_2528_){
_start:
{
uint32_t v_op_boxed_2529_; uint64_t v_flags_boxed_2530_; lean_object* v_res_2531_; 
v_op_boxed_2529_ = lean_unbox_uint32(v_op_2524_);
lean_dec(v_op_2524_);
v_flags_boxed_2530_ = lean_unbox_uint64(v_flags_2525_);
lean_dec_ref(v_flags_2525_);
v_res_2531_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7(v___f_2522_, v_a_2523_, v_op_boxed_2529_, v_flags_boxed_2530_, v_payload_2526_, v_x_2527_);
lean_dec(v_payload_2526_);
lean_dec(v_a_2523_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(lean_object* v___x_2532_, uint8_t v___x_2533_, lean_object* v___f_2534_, lean_object* v_a_2535_, uint32_t v_op_2536_, uint64_t v_flags_2537_, lean_object* v_payload_2538_, lean_object* v_x_2539_){
_start:
{
lean_object* v_val_2542_; 
if (lean_obj_tag(v_x_2539_) == 0)
{
lean_object* v___x_2545_; 
lean_dec_ref(v___f_2534_);
lean_dec(v___x_2532_);
v___x_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2545_, 0, v_x_2539_);
return v___x_2545_;
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2560_; 
v_a_2546_ = lean_ctor_get(v_x_2539_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_x_2539_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2548_ = v_x_2539_;
v_isShared_2549_ = v_isSharedCheck_2560_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v_x_2539_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2560_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
uint32_t v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = 0;
v___x_2551_ = lasm_js_call_into(v_a_2535_, v_op_2536_, v___x_2550_, v_flags_2537_, v_a_2546_, v_payload_2538_);
lean_dec(v_a_2546_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v_a_2552_);
v___x_2554_ = v___x_2548_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2552_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
v_val_2542_ = v___x_2554_;
goto v___jp_2541_;
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; 
v_a_2556_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2556_);
lean_dec_ref_known(v___x_2551_, 1);
if (v_isShared_2549_ == 0)
{
lean_ctor_set_tag(v___x_2548_, 0);
lean_ctor_set(v___x_2548_, 0, v_a_2556_);
v___x_2558_ = v___x_2548_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2556_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
v_val_2542_ = v___x_2558_;
goto v___jp_2541_;
}
}
}
}
v___jp_2541_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2543_, 0, v_val_2542_);
v___x_2544_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2532_, v___x_2533_, v___x_2543_, v___f_2534_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed(lean_object* v___x_2561_, lean_object* v___x_2562_, lean_object* v___f_2563_, lean_object* v_a_2564_, lean_object* v_op_2565_, lean_object* v_flags_2566_, lean_object* v_payload_2567_, lean_object* v_x_2568_, lean_object* v___y_2569_){
_start:
{
uint8_t v___x_952__boxed_2570_; uint32_t v_op_boxed_2571_; uint64_t v_flags_boxed_2572_; lean_object* v_res_2573_; 
v___x_952__boxed_2570_ = lean_unbox(v___x_2562_);
v_op_boxed_2571_ = lean_unbox_uint32(v_op_2565_);
lean_dec(v_op_2565_);
v_flags_boxed_2572_ = lean_unbox_uint64(v_flags_2566_);
lean_dec_ref(v_flags_2566_);
v_res_2573_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5(v___x_2561_, v___x_952__boxed_2570_, v___f_2563_, v_a_2564_, v_op_boxed_2571_, v_flags_boxed_2572_, v_payload_2567_, v_x_2568_);
lean_dec(v_payload_2567_);
lean_dec(v_a_2564_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(lean_object* v_a_2574_, lean_object* v_x_2575_){
_start:
{
if (lean_obj_tag(v_x_2575_) == 0)
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2585_; 
v_a_2577_ = lean_ctor_get(v_x_2575_, 0);
v_isSharedCheck_2585_ = !lean_is_exclusive(v_x_2575_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2579_ = v_x_2575_;
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v_x_2575_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2585_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
lean_object* v___x_2583_; 
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
return v___x_2583_;
}
}
}
else
{
lean_object* v___x_2586_; 
lean_dec_ref_known(v_x_2575_, 1);
v___x_2586_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2574_);
return v___x_2586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v_a_2587_, lean_object* v_x_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3(v_a_2587_, v_x_2588_);
lean_dec(v_a_2587_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(lean_object* v_failurePrefix_2591_, uint32_t v_op_2592_, uint64_t v_flags_2593_, lean_object* v_payload_2594_, lean_object* v___f_2595_, lean_object* v___f_2596_, lean_object* v___f_2597_, lean_object* v_x_2598_){
_start:
{
if (lean_obj_tag(v_x_2598_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2602_; uint8_t v_isShared_2603_; uint8_t v_isSharedCheck_2608_; 
lean_dec_ref(v___f_2597_);
lean_dec_ref(v___f_2596_);
lean_dec_ref(v___f_2595_);
lean_dec(v_payload_2594_);
v_a_2600_ = lean_ctor_get(v_x_2598_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v_x_2598_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2602_ = v_x_2598_;
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
else
{
lean_inc(v_a_2600_);
lean_dec(v_x_2598_);
v___x_2602_ = lean_box(0);
v_isShared_2603_ = v_isSharedCheck_2608_;
goto v_resetjp_2601_;
}
v_resetjp_2601_:
{
lean_object* v___x_2605_; 
if (v_isShared_2603_ == 0)
{
v___x_2605_ = v___x_2602_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_a_2600_);
v___x_2605_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
lean_object* v___x_2606_; 
v___x_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
return v___x_2606_;
}
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2655_; 
v_a_2609_ = lean_ctor_get(v_x_2598_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v_x_2598_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2611_ = v_x_2598_;
v_isShared_2612_ = v_isSharedCheck_2655_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v_x_2598_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2655_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; uint8_t v___x_2615_; 
v___x_2613_ = lean_string_utf8_byte_size(v_failurePrefix_2591_);
v___x_2614_ = lean_unsigned_to_nat(0u);
v___x_2615_ = lean_nat_dec_eq(v___x_2613_, v___x_2614_);
if (v___x_2615_ == 0)
{
lean_object* v___f_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___f_2620_; lean_object* v_val_2622_; lean_object* v___x_2627_; 
lean_dec_ref(v___f_2597_);
lean_inc(v_a_2609_);
v___f_2616_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2616_, 0, v_a_2609_);
v___x_2617_ = lean_box(v___x_2615_);
v___x_2618_ = lean_box_uint32(v_op_2592_);
v___x_2619_ = lean_box_uint64(v_flags_2593_);
lean_inc(v_payload_2594_);
v___f_2620_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2620_, 0, v___x_2614_);
lean_closure_set(v___f_2620_, 1, v___x_2617_);
lean_closure_set(v___f_2620_, 2, v___f_2616_);
lean_closure_set(v___f_2620_, 3, v_a_2609_);
lean_closure_set(v___f_2620_, 4, v___x_2618_);
lean_closure_set(v___f_2620_, 5, v___x_2619_);
lean_closure_set(v___f_2620_, 6, v_payload_2594_);
v___x_2627_ = l_Lasm_JS_Wire_encodeIO(v_payload_2594_);
lean_dec(v_payload_2594_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; lean_object* v___x_2630_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v_a_2628_);
v___x_2630_ = v___x_2611_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2628_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
v_val_2622_ = v___x_2630_;
goto v___jp_2621_;
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; 
v_a_2632_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2627_, 1);
if (v_isShared_2612_ == 0)
{
lean_ctor_set_tag(v___x_2611_, 0);
lean_ctor_set(v___x_2611_, 0, v_a_2632_);
v___x_2634_ = v___x_2611_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v_a_2632_);
v___x_2634_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
v_val_2622_ = v___x_2634_;
goto v___jp_2621_;
}
}
v___jp_2621_:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2623_, 0, v_val_2622_);
v___x_2624_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2614_, v___x_2615_, v___x_2623_, v___f_2620_);
v___x_2625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2614_, v___x_2615_, v___x_2624_, v___f_2595_);
v___x_2626_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2614_, v___x_2615_, v___x_2625_, v___f_2596_);
return v___x_2626_;
}
}
else
{
lean_object* v___f_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___f_2639_; uint8_t v___x_2640_; lean_object* v_val_2642_; lean_object* v___x_2646_; 
lean_dec_ref(v___f_2596_);
lean_dec_ref(v___f_2595_);
lean_inc(v_a_2609_);
v___f_2636_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2636_, 0, v_a_2609_);
v___x_2637_ = lean_box_uint32(v_op_2592_);
v___x_2638_ = lean_box_uint64(v_flags_2593_);
lean_inc(v_payload_2594_);
v___f_2639_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2639_, 0, v___f_2636_);
lean_closure_set(v___f_2639_, 1, v_a_2609_);
lean_closure_set(v___f_2639_, 2, v___x_2637_);
lean_closure_set(v___f_2639_, 3, v___x_2638_);
lean_closure_set(v___f_2639_, 4, v_payload_2594_);
v___x_2640_ = 0;
v___x_2646_ = l_Lasm_JS_Wire_encodeIO(v_payload_2594_);
lean_dec(v_payload_2594_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; lean_object* v___x_2649_; 
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2646_, 1);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v_a_2647_);
v___x_2649_ = v___x_2611_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2647_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
v_val_2642_ = v___x_2649_;
goto v___jp_2641_;
}
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2653_; 
v_a_2651_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2646_, 1);
if (v_isShared_2612_ == 0)
{
lean_ctor_set_tag(v___x_2611_, 0);
lean_ctor_set(v___x_2611_, 0, v_a_2651_);
v___x_2653_ = v___x_2611_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2651_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
v_val_2642_ = v___x_2653_;
goto v___jp_2641_;
}
}
v___jp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2643_, 0, v_val_2642_);
v___x_2644_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2614_, v___x_2640_, v___x_2643_, v___f_2639_);
v___x_2645_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2614_, v___x_2640_, v___x_2644_, v___f_2597_);
return v___x_2645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_failurePrefix_2656_, lean_object* v_op_2657_, lean_object* v_flags_2658_, lean_object* v_payload_2659_, lean_object* v___f_2660_, lean_object* v___f_2661_, lean_object* v___f_2662_, lean_object* v_x_2663_, lean_object* v___y_2664_){
_start:
{
uint32_t v_op_boxed_2665_; uint64_t v_flags_boxed_2666_; lean_object* v_res_2667_; 
v_op_boxed_2665_ = lean_unbox_uint32(v_op_2657_);
lean_dec(v_op_2657_);
v_flags_boxed_2666_ = lean_unbox_uint64(v_flags_2658_);
lean_dec_ref(v_flags_2658_);
v_res_2667_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6(v_failurePrefix_2656_, v_op_boxed_2665_, v_flags_boxed_2666_, v_payload_2659_, v___f_2660_, v___f_2661_, v___f_2662_, v_x_2663_);
lean_dec_ref(v_failurePrefix_2656_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2668_, lean_object* v_x_2669_){
_start:
{
if (lean_obj_tag(v_x_2669_) == 0)
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2679_; 
lean_dec_ref(v___f_2668_);
v_a_2671_ = lean_ctor_get(v_x_2669_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_x_2669_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2673_ = v_x_2669_;
v_isShared_2674_ = v_isSharedCheck_2679_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v_x_2669_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2679_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2676_);
return v___x_2677_;
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2681_; 
v_a_2680_ = lean_ctor_get(v_x_2669_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v_x_2669_, 1);
v___x_2681_ = lean_apply_2(v___f_2668_, v_a_2680_, lean_box(0));
return v___x_2681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2682_, lean_object* v_x_2683_, lean_object* v___y_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__2(v___f_2682_, v_x_2683_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(uint32_t v_op_2691_, uint64_t v_flags_2692_, lean_object* v_payload_2693_, lean_object* v_failurePrefix_2694_){
_start:
{
lean_object* v___f_2696_; lean_object* v___f_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___x_2702_; uint8_t v___x_2703_; lean_object* v_val_2705_; lean_object* v___x_2708_; 
v___f_2696_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___closed__2));
lean_inc_ref(v_failurePrefix_2694_);
v___f_2697_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2697_, 0, v_failurePrefix_2694_);
v___x_2698_ = lean_box_uint32(v_op_2691_);
v___x_2699_ = lean_box_uint64(v_flags_2692_);
v___f_2700_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2700_, 0, v_failurePrefix_2694_);
lean_closure_set(v___f_2700_, 1, v___x_2698_);
lean_closure_set(v___f_2700_, 2, v___x_2699_);
lean_closure_set(v___f_2700_, 3, v_payload_2693_);
lean_closure_set(v___f_2700_, 4, v___f_2697_);
lean_closure_set(v___f_2700_, 5, v___f_2696_);
lean_closure_set(v___f_2700_, 6, v___f_2696_);
v___f_2701_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_2701_, 0, v___f_2700_);
v___x_2702_ = lean_unsigned_to_nat(0u);
v___x_2703_ = 0;
v___x_2708_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2708_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2708_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
lean_ctor_set_tag(v___x_2711_, 1);
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
v_val_2705_ = v___x_2714_;
goto v___jp_2704_;
}
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
v_a_2717_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2708_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2708_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
lean_ctor_set_tag(v___x_2719_, 0);
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
v_val_2705_ = v___x_2722_;
goto v___jp_2704_;
}
}
}
v___jp_2704_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2706_, 0, v_val_2705_);
v___x_2707_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2702_, v___x_2703_, v___x_2706_, v___f_2701_);
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___boxed(lean_object* v_op_2725_, lean_object* v_flags_2726_, lean_object* v_payload_2727_, lean_object* v_failurePrefix_2728_, lean_object* v_a_2729_){
_start:
{
uint32_t v_op_boxed_2730_; uint64_t v_flags_boxed_2731_; lean_object* v_res_2732_; 
v_op_boxed_2730_ = lean_unbox_uint32(v_op_2725_);
lean_dec(v_op_2725_);
v_flags_boxed_2731_ = lean_unbox_uint64(v_flags_2726_);
lean_dec_ref(v_flags_2726_);
v_res_2732_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_boxed_2730_, v_flags_boxed_2731_, v_payload_2727_, v_failurePrefix_2728_);
return v_res_2732_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2733_; uint8_t v___x_2734_; uint64_t v___x_2735_; 
v___x_2733_ = 8ULL;
v___x_2734_ = 0;
v___x_2735_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__3(v___x_2734_, v___x_2733_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object* v_o_2736_, lean_object* v_name_2737_, lean_object* v_args_2738_){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; uint32_t v___x_2743_; uint64_t v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2740_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2741_, 0, v_o_2736_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2742_, 0, v_name_2737_);
v___x_2743_ = 205;
v___x_2744_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___closed__0);
v___x_2745_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2745_, 0, v_args_2738_);
v___x_2746_ = lean_unsigned_to_nat(3u);
v___x_2747_ = lean_mk_empty_array_with_capacity(v___x_2746_);
v___x_2748_ = lean_array_push(v___x_2747_, v___x_2741_);
v___x_2749_ = lean_array_push(v___x_2748_, v___x_2742_);
v___x_2750_ = lean_array_push(v___x_2749_, v___x_2745_);
v___x_2751_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2750_);
v___x_2752_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v___x_2743_, v___x_2744_, v___x_2751_, v___x_2740_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0___boxed(lean_object* v_o_2753_, lean_object* v_name_2754_, lean_object* v_args_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v_res_2757_; 
v_res_2757_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_o_2753_, v_name_2754_, v_args_2755_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel(lean_object* v_self_2758_, lean_object* v_reason_2759_){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2761_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_2762_ = lean_unsigned_to_nat(1u);
v___x_2763_ = lean_mk_empty_array_with_capacity(v___x_2762_);
v___x_2764_ = lean_array_push(v___x_2763_, v_reason_2759_);
v___x_2765_ = l_Lasm_JS_Web_Support_args(v___x_2764_);
v___x_2766_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2758_, v___x_2761_, v___x_2765_);
return v___x_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_cancel___boxed(lean_object* v_self_2767_, lean_object* v_reason_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lasm_JS_Web_ReadableStream_cancel(v_self_2767_, v_reason_2768_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(lean_object* v_context_2771_, uint32_t v_op_2772_, uint64_t v_flags_2773_, lean_object* v_payload_2774_, lean_object* v_failurePrefix_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg(v_op_2772_, v_flags_2773_, v_payload_2774_, v_failurePrefix_2775_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___boxed(lean_object* v_context_2778_, lean_object* v_op_2779_, lean_object* v_flags_2780_, lean_object* v_payload_2781_, lean_object* v_failurePrefix_2782_, lean_object* v_a_2783_){
_start:
{
uint32_t v_op_boxed_2784_; uint64_t v_flags_boxed_2785_; lean_object* v_res_2786_; 
v_op_boxed_2784_ = lean_unbox_uint32(v_op_2779_);
lean_dec(v_op_2779_);
v_flags_boxed_2785_ = lean_unbox_uint64(v_flags_2780_);
lean_dec_ref(v_flags_2780_);
v_res_2786_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0(v_context_2778_, v_op_boxed_2784_, v_flags_boxed_2785_, v_payload_2781_, v_failurePrefix_2782_);
lean_dec_ref(v_context_2778_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(lean_object* v_x_2787_){
_start:
{
if (lean_obj_tag(v_x_2787_) == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_box(0);
return v___x_2788_;
}
else
{
lean_object* v___x_2789_; 
v___x_2789_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamReaderMode___lam__0___closed__1));
return v___x_2789_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0___boxed(lean_object* v_x_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_x_2790_);
lean_dec(v_x_2790_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(lean_object* v_x_2792_){
_start:
{
if (lean_obj_tag(v_x_2792_) == 0)
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_box(0);
return v___x_2793_;
}
else
{
lean_object* v_val_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v_val_2794_ = lean_ctor_get(v_x_2792_, 0);
v___x_2795_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamGetReaderOptions___lam__0___closed__0));
v___x_2796_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0_spec__0(v_val_2794_);
v___x_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2795_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_unsigned_to_nat(1u);
v___x_2799_ = lean_mk_empty_array_with_capacity(v___x_2798_);
v___x_2800_ = lean_array_push(v___x_2799_, v___x_2797_);
v___x_2801_ = l_Lasm_JS_Web_Support_fields(v___x_2800_);
lean_dec_ref(v___x_2800_);
return v___x_2801_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0___boxed(lean_object* v_x_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_x_2802_);
lean_dec(v_x_2802_);
return v_res_2803_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_2804_; uint64_t v___x_2805_; 
v___x_2804_ = 1;
v___x_2805_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_2804_);
return v___x_2805_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(uint8_t v_await_2806_, uint64_t v_extra_2807_){
_start:
{
uint64_t v___x_2808_; uint64_t v___y_2810_; 
v___x_2808_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___closed__0);
if (v_await_2806_ == 0)
{
uint64_t v___x_2813_; 
v___x_2813_ = 0ULL;
v___y_2810_ = v___x_2813_;
goto v___jp_2809_;
}
else
{
uint64_t v___x_2814_; 
v___x_2814_ = 2ULL;
v___y_2810_ = v___x_2814_;
goto v___jp_2809_;
}
v___jp_2809_:
{
uint64_t v___x_2811_; uint64_t v___x_2812_; 
v___x_2811_ = lean_uint64_lor(v___x_2808_, v___y_2810_);
v___x_2812_ = lean_uint64_lor(v___x_2811_, v_extra_2807_);
return v___x_2812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2___boxed(lean_object* v_await_2815_, lean_object* v_extra_2816_){
_start:
{
uint8_t v_await_boxed_2817_; uint64_t v_extra_boxed_2818_; uint64_t v_res_2819_; lean_object* v_r_2820_; 
v_await_boxed_2817_ = lean_unbox(v_await_2815_);
v_extra_boxed_2818_ = lean_unbox_uint64(v_extra_2816_);
lean_dec_ref(v_extra_2816_);
v_res_2819_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v_await_boxed_2817_, v_extra_boxed_2818_);
v_r_2820_ = lean_box_uint64(v_res_2819_);
return v_r_2820_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0(void){
_start:
{
uint64_t v___x_2821_; uint8_t v___x_2822_; uint64_t v___x_2823_; 
v___x_2821_ = 8ULL;
v___x_2822_ = 0;
v___x_2823_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1_spec__2(v___x_2822_, v___x_2821_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object* v_o_2825_, lean_object* v_name_2826_, lean_object* v_args_2827_){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; uint64_t v___x_2832_; lean_object* v___x_2833_; 
v___x_2829_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2830_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2830_, 0, v_o_2825_);
lean_ctor_set(v___x_2830_, 1, v___x_2829_);
lean_inc_ref(v_name_2826_);
v___x_2831_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2831_, 0, v_name_2826_);
v___x_2832_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__0);
v___x_2833_ = l_Lasm_JS_Value_invokeRaw(v___x_2830_, v___x_2831_, v_args_2827_, v___x_2832_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___x_2833_, 1);
v___x_2835_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_2836_ = lean_string_append(v___x_2835_, v_name_2826_);
lean_dec_ref(v_name_2826_);
v___x_2837_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_2836_, v_a_2834_);
lean_dec(v_a_2834_);
lean_dec_ref(v___x_2836_);
return v___x_2837_;
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2845_; 
lean_dec_ref(v_name_2826_);
v_a_2838_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2840_ = v___x_2833_;
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2833_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2843_; 
if (v_isShared_2841_ == 0)
{
v___x_2843_ = v___x_2840_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2838_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___boxed(lean_object* v_o_2846_, lean_object* v_name_2847_, lean_object* v_args_2848_, lean_object* v_a_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_o_2846_, v_name_2847_, v_args_2848_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader(lean_object* v_self_2852_, lean_object* v_options_2853_){
_start:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2855_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_getReader___closed__0));
v___x_2856_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_getReader_spec__0(v_options_2853_);
v___x_2857_ = lean_unsigned_to_nat(1u);
v___x_2858_ = lean_mk_empty_array_with_capacity(v___x_2857_);
v___x_2859_ = lean_array_push(v___x_2858_, v___x_2856_);
v___x_2860_ = l_Lasm_JS_Web_Support_args(v___x_2859_);
v___x_2861_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2852_, v___x_2855_, v___x_2860_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_getReader___boxed(lean_object* v_self_2862_, lean_object* v_options_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lasm_JS_Web_ReadableStream_getReader(v_self_2862_, v_options_2863_);
lean_dec(v_options_2863_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(lean_object* v_x_2866_){
_start:
{
if (lean_obj_tag(v_x_2866_) == 0)
{
lean_object* v___x_2867_; 
v___x_2867_ = lean_box(0);
return v___x_2867_;
}
else
{
lean_object* v_val_2868_; lean_object* v_preventClose_2869_; lean_object* v_preventAbort_2870_; lean_object* v_preventCancel_2871_; lean_object* v_signal_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_val_2868_ = lean_ctor_get(v_x_2866_, 0);
v_preventClose_2869_ = lean_ctor_get(v_val_2868_, 0);
v_preventAbort_2870_ = lean_ctor_get(v_val_2868_, 1);
v_preventCancel_2871_ = lean_ctor_get(v_val_2868_, 2);
v_signal_2872_ = lean_ctor_get(v_val_2868_, 3);
v___x_2873_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__0));
v___x_2874_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventClose_2869_);
v___x_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2873_);
lean_ctor_set(v___x_2875_, 1, v___x_2874_);
v___x_2876_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__1));
v___x_2877_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventAbort_2870_);
v___x_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2876_);
lean_ctor_set(v___x_2878_, 1, v___x_2877_);
v___x_2879_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__2));
v___x_2880_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_preventCancel_2871_);
v___x_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2879_);
lean_ctor_set(v___x_2881_, 1, v___x_2880_);
v___x_2882_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_2883_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__1(v_signal_2872_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2882_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = lean_unsigned_to_nat(4u);
v___x_2886_ = lean_mk_empty_array_with_capacity(v___x_2885_);
v___x_2887_ = lean_array_push(v___x_2886_, v___x_2875_);
v___x_2888_ = lean_array_push(v___x_2887_, v___x_2878_);
v___x_2889_ = lean_array_push(v___x_2888_, v___x_2881_);
v___x_2890_ = lean_array_push(v___x_2889_, v___x_2884_);
v___x_2891_ = l_Lasm_JS_Web_Support_fields(v___x_2890_);
lean_dec_ref(v___x_2890_);
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0___boxed(lean_object* v_x_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_x_2892_);
lean_dec(v_x_2892_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough(lean_object* v_self_2895_, lean_object* v_transform_2896_, lean_object* v_options_2897_){
_start:
{
lean_object* v_readable_2899_; lean_object* v_writable_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2940_; 
v_readable_2899_ = lean_ctor_get(v_transform_2896_, 0);
v_writable_2900_ = lean_ctor_get(v_transform_2896_, 1);
v_isSharedCheck_2940_ = !lean_is_exclusive(v_transform_2896_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2902_ = v_transform_2896_;
v_isShared_2903_ = v_isSharedCheck_2940_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_writable_2900_);
lean_inc(v_readable_2899_);
lean_dec(v_transform_2896_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2940_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2904_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeThrough___closed__0));
v___x_2905_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_2906_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (v_isShared_2903_ == 0)
{
lean_ctor_set_tag(v___x_2902_, 9);
lean_ctor_set(v___x_2902_, 1, v___x_2906_);
v___x_2908_ = v___x_2902_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_readable_2899_);
lean_ctor_set(v_reuseFailAlloc_2939_, 1, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2905_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_2911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2911_, 0, v_writable_2900_);
lean_ctor_set(v___x_2911_, 1, v___x_2906_);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = lean_unsigned_to_nat(2u);
v___x_2914_ = lean_mk_empty_array_with_capacity(v___x_2913_);
lean_inc_ref(v___x_2914_);
v___x_2915_ = lean_array_push(v___x_2914_, v___x_2909_);
v___x_2916_ = lean_array_push(v___x_2915_, v___x_2912_);
v___x_2917_ = l_Lasm_JS_Web_Support_fields(v___x_2916_);
lean_dec_ref(v___x_2916_);
v___x_2918_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2897_);
v___x_2919_ = lean_array_push(v___x_2914_, v___x_2917_);
v___x_2920_ = lean_array_push(v___x_2919_, v___x_2918_);
v___x_2921_ = l_Lasm_JS_Web_Support_args(v___x_2920_);
v___x_2922_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2895_, v___x_2904_, v___x_2921_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2930_; 
v_a_2923_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2925_ = v___x_2922_;
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_dec(v___x_2922_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2930_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2928_; 
if (v_isShared_2926_ == 0)
{
v___x_2928_ = v___x_2925_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v_a_2923_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
v_a_2931_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2922_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2922_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeThrough___boxed(lean_object* v_self_2941_, lean_object* v_transform_2942_, lean_object* v_options_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lasm_JS_Web_ReadableStream_pipeThrough(v_self_2941_, v_transform_2942_, v_options_2943_);
lean_dec(v_options_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo(lean_object* v_self_2947_, lean_object* v_destination_2948_, lean_object* v_options_2949_){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2951_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_pipeTo___closed__0));
v___x_2952_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_2953_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2953_, 0, v_destination_2948_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_pipeThrough_spec__0(v_options_2949_);
v___x_2955_ = lean_unsigned_to_nat(2u);
v___x_2956_ = lean_mk_empty_array_with_capacity(v___x_2955_);
v___x_2957_ = lean_array_push(v___x_2956_, v___x_2953_);
v___x_2958_ = lean_array_push(v___x_2957_, v___x_2954_);
v___x_2959_ = l_Lasm_JS_Web_Support_args(v___x_2958_);
v___x_2960_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2947_, v___x_2951_, v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_pipeTo___boxed(lean_object* v_self_2961_, lean_object* v_destination_2962_, lean_object* v_options_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lasm_JS_Web_ReadableStream_pipeTo(v_self_2961_, v_destination_2962_, v_options_2963_);
lean_dec(v_options_2963_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(size_t v_sz_2968_, size_t v_i_2969_, lean_object* v_bs_2970_){
_start:
{
uint8_t v___x_2971_; 
v___x_2971_ = lean_usize_dec_lt(v_i_2969_, v_sz_2968_);
if (v___x_2971_ == 0)
{
lean_object* v___x_2972_; 
v___x_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2972_, 0, v_bs_2970_);
return v___x_2972_;
}
else
{
lean_object* v_v_2973_; 
v_v_2973_ = lean_array_uget_borrowed(v_bs_2970_, v_i_2969_);
if (lean_obj_tag(v_v_2973_) == 9)
{
lean_object* v_value_2974_; lean_object* v___x_2975_; lean_object* v_bs_x27_2976_; size_t v___x_2977_; size_t v___x_2978_; lean_object* v___x_2979_; 
v_value_2974_ = lean_ctor_get(v_v_2973_, 0);
lean_inc(v_value_2974_);
v___x_2975_ = lean_unsigned_to_nat(0u);
v_bs_x27_2976_ = lean_array_uset(v_bs_2970_, v_i_2969_, v___x_2975_);
v___x_2977_ = ((size_t)1ULL);
v___x_2978_ = lean_usize_add(v_i_2969_, v___x_2977_);
v___x_2979_ = lean_array_uset(v_bs_x27_2976_, v_i_2969_, v_value_2974_);
v_i_2969_ = v___x_2978_;
v_bs_2970_ = v___x_2979_;
goto _start;
}
else
{
lean_object* v___x_2981_; 
lean_dec_ref(v_bs_2970_);
v___x_2981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_2981_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_sz_2982_, lean_object* v_i_2983_, lean_object* v_bs_2984_){
_start:
{
size_t v_sz_boxed_2985_; size_t v_i_boxed_2986_; lean_object* v_res_2987_; 
v_sz_boxed_2985_ = lean_unbox_usize(v_sz_2982_);
lean_dec(v_sz_2982_);
v_i_boxed_2986_ = lean_unbox_usize(v_i_2983_);
lean_dec(v_i_2983_);
v_res_2987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_boxed_2985_, v_i_boxed_2986_, v_bs_2984_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(lean_object* v_context_2992_, lean_object* v_d_2993_){
_start:
{
lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_3002_; lean_object* v_received_3003_; lean_object* v___y_3022_; lean_object* v_a_3025_; 
if (lean_obj_tag(v_d_2993_) == 7)
{
lean_object* v_items_3049_; size_t v_sz_3050_; size_t v___x_3051_; lean_object* v___x_3052_; 
v_items_3049_ = lean_ctor_get(v_d_2993_, 0);
v_sz_3050_ = lean_array_size(v_items_3049_);
v___x_3051_ = ((size_t)0ULL);
lean_inc_ref(v_items_3049_);
v___x_3052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2_spec__3(v_sz_3050_, v___x_3051_, v_items_3049_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; uint8_t v___x_3057_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3052_, 1);
v___x_3054_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__3));
v___x_3055_ = lean_string_utf8_byte_size(v_a_3053_);
v___x_3056_ = lean_unsigned_to_nat(0u);
v___x_3057_ = lean_nat_dec_eq(v___x_3055_, v___x_3056_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3058_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3059_ = lean_string_append(v___x_3058_, v_a_3053_);
lean_dec(v_a_3053_);
v___x_3060_ = lean_string_append(v___x_3054_, v___x_3059_);
lean_dec_ref(v___x_3059_);
v_a_3025_ = v___x_3060_;
goto v___jp_3024_;
}
else
{
lean_dec(v_a_3053_);
v_a_3025_ = v___x_3054_;
goto v___jp_3024_;
}
}
else
{
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3061_; 
v_a_3061_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3052_, 1);
v_a_3025_ = v_a_3061_;
goto v___jp_3024_;
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
lean_dec_ref_known(v_d_2993_, 1);
v_a_3062_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___x_3052_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3052_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3067_; 
if (v_isShared_3065_ == 0)
{
lean_ctor_set_tag(v___x_3064_, 0);
v___x_3067_ = v___x_3064_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3062_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
}
else
{
lean_object* v___x_3070_; 
v___x_3070_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v_a_3025_ = v___x_3070_;
goto v___jp_3024_;
}
v___jp_2995_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2998_ = lean_string_append(v___y_2996_, v___y_2997_);
lean_dec_ref(v___y_2997_);
v___x_2999_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2998_);
v___x_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2999_);
return v___x_3000_;
}
v___jp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
v___x_3004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3005_ = lean_string_append(v___x_3004_, v_context_2992_);
v___x_3006_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3007_ = lean_string_append(v___x_3005_, v___x_3006_);
v___x_3008_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__0));
v___x_3009_ = lean_string_append(v___x_3007_, v___x_3008_);
v___x_3010_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3011_ = lean_string_append(v___x_3009_, v___x_3010_);
v___x_3012_ = lean_string_append(v___x_3011_, v_received_3003_);
lean_dec_ref(v_received_3003_);
v___x_3013_ = lean_string_utf8_byte_size(v___y_3002_);
v___x_3014_ = lean_unsigned_to_nat(0u);
v___x_3015_ = lean_nat_dec_eq(v___x_3013_, v___x_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3016_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3017_ = lean_string_append(v___x_3016_, v___y_3002_);
lean_dec_ref(v___y_3002_);
v___x_3018_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3019_ = lean_string_append(v___x_3017_, v___x_3018_);
v___y_2996_ = v___x_3012_;
v___y_2997_ = v___x_3019_;
goto v___jp_2995_;
}
else
{
lean_object* v___x_3020_; 
lean_dec_ref(v___y_3002_);
v___x_3020_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_2996_ = v___x_3012_;
v___y_2997_ = v___x_3020_;
goto v___jp_2995_;
}
}
v___jp_3021_:
{
lean_object* v___x_3023_; 
v___x_3023_ = l_Lasm_JS_Data_describe(v_d_2993_);
v___y_3002_ = v___y_3022_;
v_received_3003_ = v___x_3023_;
goto v___jp_3001_;
}
v___jp_3024_:
{
if (lean_obj_tag(v_d_2993_) == 9)
{
lean_object* v_value_3026_; lean_object* v_description_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; 
v_value_3026_ = lean_ctor_get(v_d_2993_, 0);
v_description_3027_ = lean_ctor_get(v_d_2993_, 1);
v___x_3028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3029_ = lean_string_dec_eq(v_description_3027_, v___x_3028_);
if (v___x_3029_ == 0)
{
v___y_3022_ = v_a_3025_;
goto v___jp_3021_;
}
else
{
lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3046_; 
lean_inc(v_value_3026_);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_d_2993_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; lean_object* v_unused_3048_; 
v_unused_3047_ = lean_ctor_get(v_d_2993_, 1);
lean_dec(v_unused_3047_);
v_unused_3048_ = lean_ctor_get(v_d_2993_, 0);
lean_dec(v_unused_3048_);
v___x_3031_ = v_d_2993_;
v_isShared_3032_ = v_isSharedCheck_3046_;
goto v_resetjp_3030_;
}
else
{
lean_dec(v_d_2993_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3046_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
uint32_t v___x_3033_; uint64_t v___x_3034_; lean_object* v___x_3036_; 
v___x_3033_ = 206;
v___x_3034_ = 0ULL;
lean_inc(v_value_3026_);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 1, v___x_3028_);
v___x_3036_ = v___x_3031_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_value_3026_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v___x_3028_);
v___x_3036_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
uint32_t v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = lasm_js_value_handle(v_value_3026_);
lean_dec(v_value_3026_);
v___x_3038_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3033_, v___x_3034_, v___x_3036_, v___x_3037_);
lean_dec_ref(v___x_3036_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_a_3039_; uint8_t v___x_3040_; 
v_a_3039_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3038_, 1);
v___x_3040_ = lean_string_validate_utf8(v_a_3039_);
if (v___x_3040_ == 0)
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
lean_dec(v_a_3039_);
v___x_3041_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3042_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3041_);
v___y_3002_ = v_a_3025_;
v_received_3003_ = v___x_3042_;
goto v___jp_3001_;
}
else
{
lean_object* v___x_3043_; 
v___x_3043_ = lean_string_from_utf8_unchecked(v_a_3039_);
v___y_3002_ = v_a_3025_;
v_received_3003_ = v___x_3043_;
goto v___jp_3001_;
}
}
else
{
lean_object* v___x_3044_; 
lean_dec_ref_known(v___x_3038_, 1);
v___x_3044_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3002_ = v_a_3025_;
v_received_3003_ = v___x_3044_;
goto v___jp_3001_;
}
}
}
}
}
else
{
v___y_3022_ = v_a_3025_;
goto v___jp_3021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3071_, lean_object* v_d_3072_, lean_object* v_a_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3071_, v_d_3072_);
lean_dec_ref(v_context_3071_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(lean_object* v_context_3075_, lean_object* v_bytes_3076_){
_start:
{
lean_object* v___x_3078_; 
v___x_3078_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3076_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v___x_3080_; 
v_a_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_a_3079_);
lean_dec_ref_known(v___x_3078_, 1);
v___x_3080_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2(v_context_3075_, v_a_3079_);
return v___x_3080_;
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
v_a_3081_ = lean_ctor_get(v___x_3078_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3078_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3078_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1___boxed(lean_object* v_context_3089_, lean_object* v_bytes_3090_, lean_object* v_a_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v_context_3089_, v_bytes_3090_);
lean_dec_ref(v_bytes_3090_);
lean_dec_ref(v_context_3089_);
return v_res_3092_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(uint8_t v_await_3093_, uint64_t v_extra_3094_){
_start:
{
uint64_t v___x_3095_; uint64_t v___y_3097_; 
v___x_3095_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3093_ == 0)
{
uint64_t v___x_3100_; 
v___x_3100_ = 0ULL;
v___y_3097_ = v___x_3100_;
goto v___jp_3096_;
}
else
{
uint64_t v___x_3101_; 
v___x_3101_ = 2ULL;
v___y_3097_ = v___x_3101_;
goto v___jp_3096_;
}
v___jp_3096_:
{
uint64_t v___x_3098_; uint64_t v___x_3099_; 
v___x_3098_ = lean_uint64_lor(v___x_3095_, v___y_3097_);
v___x_3099_ = lean_uint64_lor(v___x_3098_, v_extra_3094_);
return v___x_3099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0___boxed(lean_object* v_await_3102_, lean_object* v_extra_3103_){
_start:
{
uint8_t v_await_boxed_3104_; uint64_t v_extra_boxed_3105_; uint64_t v_res_3106_; lean_object* v_r_3107_; 
v_await_boxed_3104_ = lean_unbox(v_await_3102_);
v_extra_boxed_3105_ = lean_unbox_uint64(v_extra_3103_);
lean_dec_ref(v_extra_3103_);
v_res_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v_await_boxed_3104_, v_extra_boxed_3105_);
v_r_3107_ = lean_box_uint64(v_res_3106_);
return v_r_3107_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3108_; uint8_t v___x_3109_; uint64_t v___x_3110_; 
v___x_3108_ = 8ULL;
v___x_3109_ = 0;
v___x_3110_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__0(v___x_3109_, v___x_3108_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(lean_object* v_o_3111_, lean_object* v_name_3112_, lean_object* v_args_3113_){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; uint64_t v___x_3118_; lean_object* v___x_3119_; 
v___x_3115_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3116_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3116_, 0, v_o_3111_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
lean_inc_ref(v_name_3112_);
v___x_3117_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3117_, 0, v_name_3112_);
v___x_3118_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___closed__0);
v___x_3119_ = l_Lasm_JS_Value_invokeRaw(v___x_3116_, v___x_3117_, v_args_3113_, v___x_3118_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
lean_inc(v_a_3120_);
lean_dec_ref_known(v___x_3119_, 1);
v___x_3121_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3122_ = lean_string_append(v___x_3121_, v_name_3112_);
lean_dec_ref(v_name_3112_);
v___x_3123_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1(v___x_3122_, v_a_3120_);
lean_dec(v_a_3120_);
lean_dec_ref(v___x_3122_);
return v___x_3123_;
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_dec_ref(v_name_3112_);
v_a_3124_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3119_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3119_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0___boxed(lean_object* v_o_3132_, lean_object* v_name_3133_, lean_object* v_args_3134_, lean_object* v_a_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_o_3132_, v_name_3133_, v_args_3134_);
return v_res_3136_;
}
}
static lean_object* _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__1));
v___x_3141_ = l_Lasm_JS_Web_Support_args(v___x_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee(lean_object* v_self_3142_){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3144_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_tee___closed__0));
v___x_3145_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3146_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0(v_self_3142_, v___x_3144_, v___x_3145_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStream_tee___boxed(lean_object* v_self_3147_, lean_object* v_a_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_Lasm_JS_Web_ReadableStream_tee(v_self_3147_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(lean_object* v_context_3150_, lean_object* v_d_3151_){
_start:
{
lean_object* v___y_3154_; lean_object* v___y_3155_; 
if (lean_obj_tag(v_d_3151_) == 9)
{
lean_object* v_value_3159_; lean_object* v___x_3160_; 
v_value_3159_ = lean_ctor_get(v_d_3151_, 0);
lean_inc(v_value_3159_);
lean_dec_ref_known(v_d_3151_, 2);
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v_value_3159_);
return v___x_3160_;
}
else
{
lean_object* v___x_3161_; lean_object* v_received_3163_; 
v___x_3161_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3151_) == 9)
{
lean_object* v_value_3177_; lean_object* v_description_3178_; uint8_t v___x_3179_; 
v_value_3177_ = lean_ctor_get(v_d_3151_, 0);
v_description_3178_ = lean_ctor_get(v_d_3151_, 1);
v___x_3179_ = lean_string_dec_eq(v_description_3178_, v___x_3161_);
if (v___x_3179_ == 0)
{
goto v___jp_3175_;
}
else
{
uint32_t v___x_3180_; uint64_t v___x_3181_; lean_object* v___x_3182_; uint32_t v___x_3183_; lean_object* v___x_3184_; 
lean_inc_n(v_value_3177_, 2);
lean_dec_ref_known(v_d_3151_, 2);
v___x_3180_ = 206;
v___x_3181_ = 0ULL;
v___x_3182_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3182_, 0, v_value_3177_);
lean_ctor_set(v___x_3182_, 1, v___x_3161_);
v___x_3183_ = lasm_js_value_handle(v_value_3177_);
lean_dec(v_value_3177_);
v___x_3184_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3180_, v___x_3181_, v___x_3182_, v___x_3183_);
lean_dec_ref_known(v___x_3182_, 2);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; uint8_t v___x_3186_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v___x_3186_ = lean_string_validate_utf8(v_a_3185_);
if (v___x_3186_ == 0)
{
lean_object* v___x_3187_; lean_object* v___x_3188_; 
lean_dec(v_a_3185_);
v___x_3187_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3188_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3187_);
v_received_3163_ = v___x_3188_;
goto v___jp_3162_;
}
else
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_string_from_utf8_unchecked(v_a_3185_);
v_received_3163_ = v___x_3189_;
goto v___jp_3162_;
}
}
else
{
lean_object* v___x_3190_; 
lean_dec_ref_known(v___x_3184_, 1);
v___x_3190_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3163_ = v___x_3190_;
goto v___jp_3162_;
}
}
}
else
{
goto v___jp_3175_;
}
v___jp_3162_:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; uint8_t v___x_3173_; 
v___x_3164_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3165_ = lean_string_append(v___x_3164_, v_context_3150_);
v___x_3166_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3167_ = lean_string_append(v___x_3165_, v___x_3166_);
v___x_3168_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamDefaultReader___closed__0));
v___x_3169_ = lean_string_append(v___x_3167_, v___x_3168_);
v___x_3170_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3171_ = lean_string_append(v___x_3169_, v___x_3170_);
v___x_3172_ = lean_string_append(v___x_3171_, v_received_3163_);
lean_dec_ref(v_received_3163_);
v___x_3173_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3173_ == 0)
{
lean_object* v___x_3174_; 
v___x_3174_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3154_ = v___x_3172_;
v___y_3155_ = v___x_3174_;
goto v___jp_3153_;
}
else
{
v___y_3154_ = v___x_3172_;
v___y_3155_ = v___x_3161_;
goto v___jp_3153_;
}
}
v___jp_3175_:
{
lean_object* v___x_3176_; 
v___x_3176_ = l_Lasm_JS_Data_describe(v_d_3151_);
v_received_3163_ = v___x_3176_;
goto v___jp_3162_;
}
}
v___jp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = lean_string_append(v___y_3154_, v___y_3155_);
v___x_3157_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3156_);
v___x_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
return v___x_3158_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0___boxed(lean_object* v_context_3191_, lean_object* v_d_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v_context_3191_, v_d_3192_);
lean_dec_ref(v_context_3191_);
return v_res_3194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(lean_object* v_b_3195_, lean_object* v_args_3196_, uint8_t v_await_3197_){
_start:
{
uint64_t v___y_3200_; uint64_t v___y_3201_; uint64_t v___x_3244_; uint64_t v___y_3246_; 
v___x_3244_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3197_ == 0)
{
uint64_t v___x_3251_; 
v___x_3251_ = 0ULL;
v___y_3246_ = v___x_3251_;
goto v___jp_3245_;
}
else
{
uint64_t v___x_3252_; 
v___x_3252_ = 2ULL;
v___y_3246_ = v___x_3252_;
goto v___jp_3245_;
}
v___jp_3199_:
{
uint64_t v_flags_3202_; uint32_t v___x_3203_; lean_object* v___x_3204_; uint32_t v___x_3205_; lean_object* v___x_3206_; 
v_flags_3202_ = lean_uint64_lor(v___y_3200_, v___y_3201_);
v___x_3203_ = 214;
v___x_3204_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3195_, v_args_3196_);
v___x_3205_ = 0;
v___x_3206_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3203_, v_flags_3202_, v___x_3204_, v___x_3205_);
lean_dec(v___x_3204_);
if (lean_obj_tag(v___x_3206_) == 0)
{
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_object* v_a_3207_; lean_object* v___x_3208_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref_known(v___x_3206_, 1);
v___x_3208_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3207_);
lean_dec(v_a_3207_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3210_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3195_);
v___x_3211_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0_spec__0(v___x_3210_, v_a_3209_);
lean_dec_ref(v___x_3210_);
return v___x_3211_;
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
v_a_3212_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3208_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3208_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
v_a_3220_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3206_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3206_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set_tag(v___x_3222_, 1);
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3243_; 
v_a_3228_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3230_ = v___x_3206_;
v_isShared_3231_ = v_isSharedCheck_3243_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3206_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3243_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3232_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3233_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3195_);
v___x_3234_ = lean_string_append(v___x_3232_, v___x_3233_);
lean_dec_ref(v___x_3233_);
v___x_3235_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_3236_ = lean_string_append(v___x_3234_, v___x_3235_);
v___x_3237_ = lean_io_error_to_string(v_a_3228_);
v___x_3238_ = lean_string_append(v___x_3236_, v___x_3237_);
lean_dec_ref(v___x_3237_);
v___x_3239_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3239_);
v___x_3241_ = v___x_3230_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
v___jp_3245_:
{
uint8_t v_construct_3247_; uint64_t v___x_3248_; 
v_construct_3247_ = lean_ctor_get_uint8(v_b_3195_, sizeof(void*)*4);
v___x_3248_ = lean_uint64_lor(v___x_3244_, v___y_3246_);
if (v_construct_3247_ == 0)
{
uint64_t v___x_3249_; 
v___x_3249_ = 0ULL;
v___y_3200_ = v___x_3248_;
v___y_3201_ = v___x_3249_;
goto v___jp_3199_;
}
else
{
uint64_t v___x_3250_; 
v___x_3250_ = 4ULL;
v___y_3200_ = v___x_3248_;
v___y_3201_ = v___x_3250_;
goto v___jp_3199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0___boxed(lean_object* v_b_3253_, lean_object* v_args_3254_, lean_object* v_await_3255_, lean_object* v_a_3256_){
_start:
{
uint8_t v_await_boxed_3257_; lean_object* v_res_3258_; 
v_await_boxed_3257_ = lean_unbox(v_await_3255_);
v_res_3258_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v_b_3253_, v_args_3254_, v_await_boxed_3257_);
lean_dec_ref(v_b_3253_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new(lean_object* v_stream_3267_){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; 
v___x_3269_ = lean_unsigned_to_nat(1u);
v___x_3270_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_new___closed__2));
v___x_3271_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3272_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3272_, 0, v_stream_3267_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_mk_empty_array_with_capacity(v___x_3269_);
v___x_3274_ = lean_array_push(v___x_3273_, v___x_3272_);
v___x_3275_ = l_Lasm_JS_Web_Support_args(v___x_3274_);
v___x_3276_ = 0;
v___x_3277_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamDefaultReader_new_spec__0(v___x_3270_, v___x_3275_, v___x_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_new___boxed(lean_object* v_stream_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_new(v_stream_3278_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(lean_object* v___f_3281_, lean_object* v_a_3282_, lean_object* v___x_3283_, lean_object* v_x_3284_){
_start:
{
if (lean_obj_tag(v_x_3284_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3294_; 
lean_dec_ref(v___f_3281_);
v_a_3286_ = lean_ctor_get(v_x_3284_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v_x_3284_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3288_ = v_x_3284_;
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v_x_3284_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3291_; 
if (v_isShared_3289_ == 0)
{
v___x_3291_ = v___x_3288_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3286_);
v___x_3291_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
return v___x_3292_;
}
}
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3314_; 
v_a_3295_ = lean_ctor_get(v_x_3284_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_x_3284_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3297_ = v_x_3284_;
v_isShared_3298_ = v_isSharedCheck_3314_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v_x_3284_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3314_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3299_; uint8_t v___x_3300_; lean_object* v_val_3302_; lean_object* v___x_3305_; 
v___x_3299_ = lean_unsigned_to_nat(0u);
v___x_3300_ = 0;
v___x_3305_ = lasm_js_await_into(v_a_3282_, v_a_3295_, v___x_3283_);
lean_dec(v_a_3295_);
if (lean_obj_tag(v___x_3305_) == 0)
{
lean_object* v_a_3306_; lean_object* v___x_3308_; 
v_a_3306_ = lean_ctor_get(v___x_3305_, 0);
lean_inc(v_a_3306_);
lean_dec_ref_known(v___x_3305_, 1);
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 0, v_a_3306_);
v___x_3308_ = v___x_3297_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
v_val_3302_ = v___x_3308_;
goto v___jp_3301_;
}
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; 
v_a_3310_ = lean_ctor_get(v___x_3305_, 0);
lean_inc(v_a_3310_);
lean_dec_ref_known(v___x_3305_, 1);
if (v_isShared_3298_ == 0)
{
lean_ctor_set_tag(v___x_3297_, 0);
lean_ctor_set(v___x_3297_, 0, v_a_3310_);
v___x_3312_ = v___x_3297_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
v_val_3302_ = v___x_3312_;
goto v___jp_3301_;
}
}
v___jp_3301_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3303_, 0, v_val_3302_);
v___x_3304_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3299_, v___x_3300_, v___x_3303_, v___f_3281_);
return v___x_3304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed(lean_object* v___f_3315_, lean_object* v_a_3316_, lean_object* v___x_3317_, lean_object* v_x_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v_res_3320_; 
v_res_3320_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2(v___f_3315_, v_a_3316_, v___x_3317_, v_x_3318_);
lean_dec(v___x_3317_);
lean_dec(v_a_3316_);
return v_res_3320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(lean_object* v_a_3321_, lean_object* v___f_3322_, lean_object* v_x_3323_){
_start:
{
if (lean_obj_tag(v_x_3323_) == 0)
{
lean_object* v___x_3325_; 
lean_dec_ref(v___f_3322_);
v___x_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3325_, 0, v_x_3323_);
return v___x_3325_;
}
else
{
lean_object* v___x_3326_; uint8_t v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
lean_dec_ref_known(v_x_3323_, 1);
v___x_3326_ = lean_unsigned_to_nat(0u);
v___x_3327_ = 0;
v___x_3328_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3321_);
v___x_3329_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3326_, v___x_3327_, v___x_3328_, v___f_3322_);
return v___x_3329_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed(lean_object* v_a_3330_, lean_object* v___f_3331_, lean_object* v_x_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0(v_a_3330_, v___f_3331_, v_x_3332_);
lean_dec(v_a_3330_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(lean_object* v___f_3335_, lean_object* v_v_3336_, lean_object* v_x_3337_){
_start:
{
if (lean_obj_tag(v_x_3337_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3347_; 
lean_dec(v_v_3336_);
lean_dec_ref(v___f_3335_);
v_a_3339_ = lean_ctor_get(v_x_3337_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v_x_3337_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3341_ = v_x_3337_;
v_isShared_3342_ = v_isSharedCheck_3347_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v_x_3337_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3347_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
lean_object* v___x_3345_; 
v___x_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3344_);
return v___x_3345_;
}
}
}
else
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3371_; 
v_a_3348_ = lean_ctor_get(v_x_3337_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v_x_3337_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3350_ = v_x_3337_;
v_isShared_3351_ = v_isSharedCheck_3371_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v_x_3337_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3371_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___f_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___f_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; lean_object* v_val_3359_; lean_object* v___x_3362_; 
lean_inc(v_a_3348_);
v___f_3352_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3352_, 0, v_a_3348_);
lean_closure_set(v___f_3352_, 1, v___f_3335_);
v___x_3353_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3354_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3354_, 0, v_v_3336_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
lean_inc_ref(v___x_3354_);
v___f_3355_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3355_, 0, v___f_3352_);
lean_closure_set(v___f_3355_, 1, v_a_3348_);
lean_closure_set(v___f_3355_, 2, v___x_3354_);
v___x_3356_ = lean_unsigned_to_nat(0u);
v___x_3357_ = 0;
v___x_3362_ = l_Lasm_JS_Wire_encodeIO(v___x_3354_);
lean_dec_ref_known(v___x_3354_, 2);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v_a_3363_; lean_object* v___x_3365_; 
v_a_3363_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3363_);
lean_dec_ref_known(v___x_3362_, 1);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v_a_3363_);
v___x_3365_ = v___x_3350_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3363_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
v_val_3359_ = v___x_3365_;
goto v___jp_3358_;
}
}
else
{
lean_object* v_a_3367_; lean_object* v___x_3369_; 
v_a_3367_ = lean_ctor_get(v___x_3362_, 0);
lean_inc(v_a_3367_);
lean_dec_ref_known(v___x_3362_, 1);
if (v_isShared_3351_ == 0)
{
lean_ctor_set_tag(v___x_3350_, 0);
lean_ctor_set(v___x_3350_, 0, v_a_3367_);
v___x_3369_ = v___x_3350_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3367_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
v_val_3359_ = v___x_3369_;
goto v___jp_3358_;
}
}
v___jp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v_val_3359_);
v___x_3361_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3356_, v___x_3357_, v___x_3360_, v___f_3355_);
return v___x_3361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed(lean_object* v___f_3372_, lean_object* v_v_3373_, lean_object* v_x_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3(v___f_3372_, v_v_3373_, v_x_3374_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(lean_object* v___f_3377_, lean_object* v_x_3378_){
_start:
{
if (lean_obj_tag(v_x_3378_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3388_; 
lean_dec_ref(v___f_3377_);
v_a_3380_ = lean_ctor_get(v_x_3378_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v_x_3378_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3382_ = v_x_3378_;
v_isShared_3383_ = v_isSharedCheck_3388_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v_x_3378_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3388_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
lean_object* v___x_3386_; 
v___x_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
return v___x_3386_;
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3408_; 
v_a_3389_ = lean_ctor_get(v_x_3378_, 0);
v_isSharedCheck_3408_ = !lean_is_exclusive(v_x_3378_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3391_ = v_x_3378_;
v_isShared_3392_ = v_isSharedCheck_3408_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v_x_3378_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3408_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; uint8_t v___x_3394_; lean_object* v_val_3396_; lean_object* v___x_3399_; 
v___x_3393_ = lean_unsigned_to_nat(0u);
v___x_3394_ = 0;
v___x_3399_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3389_);
lean_dec(v_a_3389_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3402_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v_a_3400_);
v___x_3402_ = v___x_3391_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3400_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
v_val_3396_ = v___x_3402_;
goto v___jp_3395_;
}
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; 
v_a_3404_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3404_);
lean_dec_ref_known(v___x_3399_, 1);
if (v_isShared_3392_ == 0)
{
lean_ctor_set_tag(v___x_3391_, 0);
lean_ctor_set(v___x_3391_, 0, v_a_3404_);
v___x_3406_ = v___x_3391_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_a_3404_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
v_val_3396_ = v___x_3406_;
goto v___jp_3395_;
}
}
v___jp_3395_:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; 
v___x_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3397_, 0, v_val_3396_);
v___x_3398_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3393_, v___x_3394_, v___x_3397_, v___f_3377_);
return v___x_3398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1___boxed(lean_object* v___f_3409_, lean_object* v_x_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__1(v___f_3409_, v_x_3410_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(lean_object* v_v_3415_){
_start:
{
lean_object* v___f_3417_; lean_object* v___f_3418_; lean_object* v___f_3419_; lean_object* v___x_3420_; uint8_t v___x_3421_; lean_object* v_val_3423_; lean_object* v___x_3426_; 
v___f_3417_ = ((lean_object*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___closed__0));
v___f_3418_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3418_, 0, v___f_3417_);
lean_closure_set(v___f_3418_, 1, v_v_3415_);
v___f_3419_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3419_, 0, v___f_3418_);
v___x_3420_ = lean_unsigned_to_nat(0u);
v___x_3421_ = 0;
v___x_3426_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3434_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3429_ = v___x_3426_;
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v___x_3426_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3434_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3432_; 
if (v_isShared_3430_ == 0)
{
lean_ctor_set_tag(v___x_3429_, 1);
v___x_3432_ = v___x_3429_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_a_3427_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
v_val_3423_ = v___x_3432_;
goto v___jp_3422_;
}
}
}
else
{
lean_object* v_a_3435_; lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3442_; 
v_a_3435_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3437_ = v___x_3426_;
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
else
{
lean_inc(v_a_3435_);
lean_dec(v___x_3426_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3442_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3440_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set_tag(v___x_3437_, 0);
v___x_3440_ = v___x_3437_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3435_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
v_val_3423_ = v___x_3440_;
goto v___jp_3422_;
}
}
}
v___jp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3424_, 0, v_val_3423_);
v___x_3425_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3420_, v___x_3421_, v___x_3424_, v___f_3419_);
return v___x_3425_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0___boxed(lean_object* v_v_3443_, lean_object* v___y_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_v_3443_);
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(lean_object* v_x_3446_){
_start:
{
if (lean_obj_tag(v_x_3446_) == 0)
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3456_; 
v_a_3448_ = lean_ctor_get(v_x_3446_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_x_3446_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3450_ = v_x_3446_;
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v_x_3446_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3456_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3453_);
return v___x_3454_;
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3458_; 
v_a_3457_ = lean_ctor_get(v_x_3446_, 0);
lean_inc(v_a_3457_);
lean_dec_ref_known(v_x_3446_, 1);
v___x_3458_ = l_Lasm_JS_Value_await___at___00Lasm_JS_Web_ReadableStreamDefaultReader_closed_spec__0(v_a_3457_);
return v___x_3458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0___boxed(lean_object* v_x_3459_, lean_object* v___y_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___lam__0(v_x_3459_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(lean_object* v_self_3464_){
_start:
{
lean_object* v___f_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; uint8_t v___x_3469_; lean_object* v_val_3471_; lean_object* v___x_3474_; 
v___f_3466_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_3467_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_3468_ = lean_unsigned_to_nat(0u);
v___x_3469_ = 0;
v___x_3474_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_3464_, v___x_3467_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3474_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3474_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
lean_ctor_set_tag(v___x_3477_, 1);
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
v_val_3471_ = v___x_3480_;
goto v___jp_3470_;
}
}
}
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
v_a_3483_ = lean_ctor_get(v___x_3474_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3474_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3474_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3474_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
lean_ctor_set_tag(v___x_3485_, 0);
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
v_val_3471_ = v___x_3488_;
goto v___jp_3470_;
}
}
}
v___jp_3470_:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3472_, 0, v_val_3471_);
v___x_3473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3468_, v___x_3469_, v___x_3472_, v___f_3466_);
return v___x_3473_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___boxed(lean_object* v_self_3491_, lean_object* v_a_3492_){
_start:
{
lean_object* v_res_3493_; 
v_res_3493_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_closed(v_self_3491_);
return v_res_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(lean_object* v_failurePrefix_3494_, uint32_t v_op_3495_, uint64_t v_flags_3496_, lean_object* v_payload_3497_, lean_object* v___f_3498_, lean_object* v___f_3499_, lean_object* v___f_3500_, lean_object* v_x_3501_){
_start:
{
if (lean_obj_tag(v_x_3501_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3511_; 
lean_dec_ref(v___f_3500_);
lean_dec_ref(v___f_3499_);
lean_dec_ref(v___f_3498_);
lean_dec(v_payload_3497_);
v_a_3503_ = lean_ctor_get(v_x_3501_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_x_3501_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3505_ = v_x_3501_;
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v_x_3501_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3503_);
v___x_3508_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
return v___x_3509_;
}
}
}
else
{
lean_object* v_a_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3558_; 
v_a_3512_ = lean_ctor_get(v_x_3501_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v_x_3501_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3514_ = v_x_3501_;
v_isShared_3515_ = v_isSharedCheck_3558_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_a_3512_);
lean_dec(v_x_3501_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3558_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; uint8_t v___x_3518_; 
v___x_3516_ = lean_string_utf8_byte_size(v_failurePrefix_3494_);
v___x_3517_ = lean_unsigned_to_nat(0u);
v___x_3518_ = lean_nat_dec_eq(v___x_3516_, v___x_3517_);
if (v___x_3518_ == 0)
{
lean_object* v___f_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___f_3523_; lean_object* v_val_3525_; lean_object* v___x_3530_; 
lean_dec_ref(v___f_3500_);
lean_inc(v_a_3512_);
v___f_3519_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3519_, 0, v_a_3512_);
v___x_3520_ = lean_box(v___x_3518_);
v___x_3521_ = lean_box_uint32(v_op_3495_);
v___x_3522_ = lean_box_uint64(v_flags_3496_);
lean_inc(v_payload_3497_);
v___f_3523_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3523_, 0, v___x_3517_);
lean_closure_set(v___f_3523_, 1, v___x_3520_);
lean_closure_set(v___f_3523_, 2, v___f_3519_);
lean_closure_set(v___f_3523_, 3, v_a_3512_);
lean_closure_set(v___f_3523_, 4, v___x_3521_);
lean_closure_set(v___f_3523_, 5, v___x_3522_);
lean_closure_set(v___f_3523_, 6, v_payload_3497_);
v___x_3530_ = l_Lasm_JS_Wire_encodeIO(v_payload_3497_);
lean_dec(v_payload_3497_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3533_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3530_, 1);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v_a_3531_);
v___x_3533_ = v___x_3514_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3531_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
v_val_3525_ = v___x_3533_;
goto v___jp_3524_;
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; 
v_a_3535_ = lean_ctor_get(v___x_3530_, 0);
lean_inc(v_a_3535_);
lean_dec_ref_known(v___x_3530_, 1);
if (v_isShared_3515_ == 0)
{
lean_ctor_set_tag(v___x_3514_, 0);
lean_ctor_set(v___x_3514_, 0, v_a_3535_);
v___x_3537_ = v___x_3514_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3535_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
v_val_3525_ = v___x_3537_;
goto v___jp_3524_;
}
}
v___jp_3524_:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v_val_3525_);
v___x_3527_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3517_, v___x_3518_, v___x_3526_, v___f_3523_);
v___x_3528_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3517_, v___x_3518_, v___x_3527_, v___f_3498_);
v___x_3529_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3517_, v___x_3518_, v___x_3528_, v___f_3499_);
return v___x_3529_;
}
}
else
{
lean_object* v___f_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___f_3542_; uint8_t v___x_3543_; lean_object* v_val_3545_; lean_object* v___x_3549_; 
lean_dec_ref(v___f_3499_);
lean_dec_ref(v___f_3498_);
lean_inc(v_a_3512_);
v___f_3539_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3539_, 0, v_a_3512_);
v___x_3540_ = lean_box_uint32(v_op_3495_);
v___x_3541_ = lean_box_uint64(v_flags_3496_);
lean_inc(v_payload_3497_);
v___f_3542_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3542_, 0, v___f_3539_);
lean_closure_set(v___f_3542_, 1, v_a_3512_);
lean_closure_set(v___f_3542_, 2, v___x_3540_);
lean_closure_set(v___f_3542_, 3, v___x_3541_);
lean_closure_set(v___f_3542_, 4, v_payload_3497_);
v___x_3543_ = 0;
v___x_3549_ = l_Lasm_JS_Wire_encodeIO(v_payload_3497_);
lean_dec(v_payload_3497_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; lean_object* v___x_3552_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3550_);
lean_dec_ref_known(v___x_3549_, 1);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 0, v_a_3550_);
v___x_3552_ = v___x_3514_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3550_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
v_val_3545_ = v___x_3552_;
goto v___jp_3544_;
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; 
v_a_3554_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3554_);
lean_dec_ref_known(v___x_3549_, 1);
if (v_isShared_3515_ == 0)
{
lean_ctor_set_tag(v___x_3514_, 0);
lean_ctor_set(v___x_3514_, 0, v_a_3554_);
v___x_3556_ = v___x_3514_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3554_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
v_val_3545_ = v___x_3556_;
goto v___jp_3544_;
}
}
v___jp_3544_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v_val_3545_);
v___x_3547_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3517_, v___x_3543_, v___x_3546_, v___f_3542_);
v___x_3548_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3517_, v___x_3543_, v___x_3547_, v___f_3500_);
return v___x_3548_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed(lean_object* v_failurePrefix_3559_, lean_object* v_op_3560_, lean_object* v_flags_3561_, lean_object* v_payload_3562_, lean_object* v___f_3563_, lean_object* v___f_3564_, lean_object* v___f_3565_, lean_object* v_x_3566_, lean_object* v___y_3567_){
_start:
{
uint32_t v_op_boxed_3568_; uint64_t v_flags_boxed_3569_; lean_object* v_res_3570_; 
v_op_boxed_3568_ = lean_unbox_uint32(v_op_3560_);
lean_dec(v_op_3560_);
v_flags_boxed_3569_ = lean_unbox_uint64(v_flags_3561_);
lean_dec_ref(v_flags_3561_);
v_res_3570_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9(v_failurePrefix_3559_, v_op_boxed_3568_, v_flags_boxed_3569_, v_payload_3562_, v___f_3563_, v___f_3564_, v___f_3565_, v_x_3566_);
lean_dec_ref(v_failurePrefix_3559_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(lean_object* v___f_3571_, lean_object* v_x_3572_){
_start:
{
if (lean_obj_tag(v_x_3572_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref(v___f_3571_);
v_a_3574_ = lean_ctor_get(v_x_3572_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_x_3572_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3576_ = v_x_3572_;
v_isShared_3577_ = v_isSharedCheck_3582_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v_x_3572_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3582_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3579_; 
if (v_isShared_3577_ == 0)
{
v___x_3579_ = v___x_3576_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3574_);
v___x_3579_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
lean_object* v___x_3580_; 
v___x_3580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
return v___x_3580_;
}
}
}
else
{
lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3594_; 
v_isSharedCheck_3594_ = !lean_is_exclusive(v_x_3572_);
if (v_isSharedCheck_3594_ == 0)
{
lean_object* v_unused_3595_; 
v_unused_3595_ = lean_ctor_get(v_x_3572_, 0);
lean_dec(v_unused_3595_);
v___x_3584_ = v_x_3572_;
v_isShared_3585_ = v_isSharedCheck_3594_;
goto v_resetjp_3583_;
}
else
{
lean_dec(v_x_3572_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3594_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; uint8_t v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3590_; 
v___x_3586_ = lean_unsigned_to_nat(0u);
v___x_3587_ = 0;
v___x_3588_ = lean_io_promise_new();
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3588_);
v___x_3590_ = v___x_3584_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v___x_3588_);
v___x_3590_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
v___x_3592_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3586_, v___x_3587_, v___x_3591_, v___f_3571_);
return v___x_3592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed(lean_object* v___f_3596_, lean_object* v_x_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3(v___f_3596_, v_x_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(lean_object* v___f_3600_, lean_object* v_bytes_3601_){
_start:
{
lean_object* v___x_3603_; uint8_t v___x_3604_; lean_object* v_val_3606_; lean_object* v___x_3609_; 
v___x_3603_ = lean_unsigned_to_nat(0u);
v___x_3604_ = 0;
v___x_3609_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3601_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v_a_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3617_; 
v_a_3610_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3617_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3617_ == 0)
{
v___x_3612_ = v___x_3609_;
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_a_3610_);
lean_dec(v___x_3609_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3617_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3615_; 
if (v_isShared_3613_ == 0)
{
lean_ctor_set_tag(v___x_3612_, 1);
v___x_3615_ = v___x_3612_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3616_; 
v_reuseFailAlloc_3616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3616_, 0, v_a_3610_);
v___x_3615_ = v_reuseFailAlloc_3616_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
v_val_3606_ = v___x_3615_;
goto v___jp_3605_;
}
}
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
v_a_3618_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3609_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_a_3618_);
lean_dec(v___x_3609_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
lean_ctor_set_tag(v___x_3620_, 0);
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_a_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
v_val_3606_ = v___x_3623_;
goto v___jp_3605_;
}
}
}
v___jp_3605_:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_val_3606_);
v___x_3608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3603_, v___x_3604_, v___x_3607_, v___f_3600_);
return v___x_3608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed(lean_object* v___f_3626_, lean_object* v_bytes_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1(v___f_3626_, v_bytes_3627_);
lean_dec_ref(v_bytes_3627_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_3639_, lean_object* v_key_3640_){
_start:
{
if (lean_obj_tag(v_d_3639_) == 8)
{
lean_object* v___x_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3672_; 
v___x_3643_ = l_Lasm_JS_Data_field(v_d_3639_, v_key_3640_);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_d_3639_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; 
v_unused_3673_ = lean_ctor_get(v_d_3639_, 0);
lean_dec(v_unused_3673_);
v___x_3645_ = v_d_3639_;
v_isShared_3646_ = v_isSharedCheck_3672_;
goto v_resetjp_3644_;
}
else
{
lean_dec(v_d_3639_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3672_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
switch(lean_obj_tag(v___x_3643_))
{
case 1:
{
lean_del_object(v___x_3645_);
goto v___jp_3641_;
}
case 0:
{
lean_del_object(v___x_3645_);
goto v___jp_3641_;
}
default: 
{
if (lean_obj_tag(v___x_3643_) == 2)
{
uint8_t v_b_3647_; lean_object* v___x_3648_; lean_object* v___x_3650_; 
v_b_3647_ = lean_ctor_get_uint8(v___x_3643_, 0);
lean_dec_ref_known(v___x_3643_, 0);
v___x_3648_ = lean_box(v_b_3647_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 1);
lean_ctor_set(v___x_3645_, 0, v___x_3648_);
v___x_3650_ = v___x_3645_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3648_);
v___x_3650_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
lean_object* v___x_3651_; 
v___x_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3650_);
return v___x_3651_;
}
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v___x_3653_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__1));
v___x_3654_ = lean_string_append(v___x_3653_, v_key_3640_);
v___x_3655_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__2));
v___x_3656_ = lean_string_append(v___x_3654_, v___x_3655_);
v___x_3657_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__3));
v___x_3658_ = lean_string_append(v___x_3656_, v___x_3657_);
v___x_3659_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__4));
v___x_3660_ = lean_string_append(v___x_3658_, v___x_3659_);
v___x_3661_ = l_Lasm_JS_Data_describe(v___x_3643_);
v___x_3662_ = lean_string_append(v___x_3660_, v___x_3661_);
lean_dec_ref(v___x_3661_);
v___x_3663_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3663_ == 0)
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___x_3665_ = lean_string_append(v___x_3662_, v___x_3664_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3665_);
v___x_3667_ = v___x_3645_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3665_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
else
{
lean_object* v___x_3670_; 
if (v_isShared_3646_ == 0)
{
lean_ctor_set_tag(v___x_3645_, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3662_);
v___x_3670_ = v___x_3645_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3662_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3674_; 
lean_dec(v_d_3639_);
v___x_3674_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__6));
return v___x_3674_;
}
v___jp_3641_:
{
lean_object* v___x_3642_; 
v___x_3642_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___closed__0));
return v___x_3642_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_3675_, lean_object* v_key_3676_){
_start:
{
lean_object* v_res_3677_; 
v_res_3677_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3675_, v_key_3676_);
lean_dec_ref(v_key_3676_);
return v_res_3677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_3680_, lean_object* v_key_3681_){
_start:
{
if (lean_obj_tag(v_d_3680_) == 8)
{
lean_object* v___x_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
v___x_3682_ = l_Lasm_JS_Data_field(v_d_3680_, v_key_3681_);
v_isSharedCheck_3689_ = !lean_is_exclusive(v_d_3680_);
if (v_isSharedCheck_3689_ == 0)
{
lean_object* v_unused_3690_; 
v_unused_3690_ = lean_ctor_get(v_d_3680_, 0);
lean_dec(v_unused_3690_);
v___x_3684_ = v_d_3680_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_dec(v_d_3680_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
lean_ctor_set_tag(v___x_3684_, 1);
lean_ctor_set(v___x_3684_, 0, v___x_3682_);
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v___x_3691_; 
lean_dec(v_d_3680_);
v___x_3691_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___closed__0));
return v___x_3691_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_3692_, lean_object* v_key_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3692_, v_key_3693_);
lean_dec_ref(v_key_3693_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(lean_object* v_context_3695_, lean_object* v_d_3696_){
_start:
{
lean_object* v___y_3699_; lean_object* v___y_3700_; lean_object* v___y_3705_; lean_object* v_received_3706_; lean_object* v___y_3725_; lean_object* v_a_3728_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3752_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__0));
lean_inc(v_d_3696_);
v___x_3753_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__3(v_d_3696_, v___x_3752_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
lean_inc(v_a_3754_);
lean_dec_ref_known(v___x_3753_, 1);
v_a_3728_ = v_a_3754_;
goto v___jp_3727_;
}
else
{
lean_object* v_a_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v_a_3755_ = lean_ctor_get(v___x_3753_, 0);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3753_, 1);
v___x_3756_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___lam__0___closed__1));
lean_inc(v_d_3696_);
v___x_3757_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2_spec__4(v_d_3696_, v___x_3756_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; 
lean_dec(v_a_3755_);
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
lean_inc(v_a_3758_);
lean_dec_ref_known(v___x_3757_, 1);
v_a_3728_ = v_a_3758_;
goto v___jp_3727_;
}
else
{
lean_object* v_a_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3767_; 
lean_dec(v_d_3696_);
v_a_3759_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3761_ = v___x_3757_;
v_isShared_3762_ = v_isSharedCheck_3767_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_a_3759_);
lean_dec(v___x_3757_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3767_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3765_; 
v___x_3763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3763_, 0, v_a_3755_);
lean_ctor_set(v___x_3763_, 1, v_a_3759_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set_tag(v___x_3761_, 0);
lean_ctor_set(v___x_3761_, 0, v___x_3763_);
v___x_3765_ = v___x_3761_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3763_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
v___jp_3698_:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = lean_string_append(v___y_3699_, v___y_3700_);
lean_dec_ref(v___y_3700_);
v___x_3702_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
v___x_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3702_);
return v___x_3703_;
}
v___jp_3704_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; uint8_t v___x_3718_; 
v___x_3707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3708_ = lean_string_append(v___x_3707_, v_context_3695_);
v___x_3709_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3710_ = lean_string_append(v___x_3708_, v___x_3709_);
v___x_3711_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamReadResult___closed__2));
v___x_3712_ = lean_string_append(v___x_3710_, v___x_3711_);
v___x_3713_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3714_ = lean_string_append(v___x_3712_, v___x_3713_);
v___x_3715_ = lean_string_append(v___x_3714_, v_received_3706_);
lean_dec_ref(v_received_3706_);
v___x_3716_ = lean_string_utf8_byte_size(v___y_3705_);
v___x_3717_ = lean_unsigned_to_nat(0u);
v___x_3718_ = lean_nat_dec_eq(v___x_3716_, v___x_3717_);
if (v___x_3718_ == 0)
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3719_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__1));
v___x_3720_ = lean_string_append(v___x_3719_, v___y_3705_);
lean_dec_ref(v___y_3705_);
v___x_3721_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_tee_spec__0_spec__1_spec__2___closed__2));
v___x_3722_ = lean_string_append(v___x_3720_, v___x_3721_);
v___y_3699_ = v___x_3715_;
v___y_3700_ = v___x_3722_;
goto v___jp_3698_;
}
else
{
lean_object* v___x_3723_; 
lean_dec_ref(v___y_3705_);
v___x_3723_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___y_3699_ = v___x_3715_;
v___y_3700_ = v___x_3723_;
goto v___jp_3698_;
}
}
v___jp_3724_:
{
lean_object* v___x_3726_; 
v___x_3726_ = l_Lasm_JS_Data_describe(v_d_3696_);
v___y_3705_ = v___y_3725_;
v_received_3706_ = v___x_3726_;
goto v___jp_3704_;
}
v___jp_3727_:
{
if (lean_obj_tag(v_d_3696_) == 9)
{
lean_object* v_value_3729_; lean_object* v_description_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; 
v_value_3729_ = lean_ctor_get(v_d_3696_, 0);
v_description_3730_ = lean_ctor_get(v_d_3696_, 1);
v___x_3731_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3732_ = lean_string_dec_eq(v_description_3730_, v___x_3731_);
if (v___x_3732_ == 0)
{
v___y_3725_ = v_a_3728_;
goto v___jp_3724_;
}
else
{
lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3749_; 
lean_inc(v_value_3729_);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_d_3696_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; lean_object* v_unused_3751_; 
v_unused_3750_ = lean_ctor_get(v_d_3696_, 1);
lean_dec(v_unused_3750_);
v_unused_3751_ = lean_ctor_get(v_d_3696_, 0);
lean_dec(v_unused_3751_);
v___x_3734_ = v_d_3696_;
v_isShared_3735_ = v_isSharedCheck_3749_;
goto v_resetjp_3733_;
}
else
{
lean_dec(v_d_3696_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3749_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
uint32_t v___x_3736_; uint64_t v___x_3737_; lean_object* v___x_3739_; 
v___x_3736_ = 206;
v___x_3737_ = 0ULL;
lean_inc(v_value_3729_);
if (v_isShared_3735_ == 0)
{
lean_ctor_set(v___x_3734_, 1, v___x_3731_);
v___x_3739_ = v___x_3734_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_value_3729_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v___x_3731_);
v___x_3739_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
uint32_t v___x_3740_; lean_object* v___x_3741_; 
v___x_3740_ = lasm_js_value_handle(v_value_3729_);
lean_dec(v_value_3729_);
v___x_3741_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3736_, v___x_3737_, v___x_3739_, v___x_3740_);
lean_dec_ref(v___x_3739_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_a_3742_; uint8_t v___x_3743_; 
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___x_3741_, 1);
v___x_3743_ = lean_string_validate_utf8(v_a_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_dec(v_a_3742_);
v___x_3744_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3745_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3744_);
v___y_3705_ = v_a_3728_;
v_received_3706_ = v___x_3745_;
goto v___jp_3704_;
}
else
{
lean_object* v___x_3746_; 
v___x_3746_ = lean_string_from_utf8_unchecked(v_a_3742_);
v___y_3705_ = v_a_3728_;
v_received_3706_ = v___x_3746_;
goto v___jp_3704_;
}
}
else
{
lean_object* v___x_3747_; 
lean_dec_ref_known(v___x_3741_, 1);
v___x_3747_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v___y_3705_ = v_a_3728_;
v_received_3706_ = v___x_3747_;
goto v___jp_3704_;
}
}
}
}
}
else
{
v___y_3725_ = v_a_3728_;
goto v___jp_3724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3768_, lean_object* v_d_3769_, lean_object* v_a_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3768_, v_d_3769_);
lean_dec_ref(v_context_3768_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(lean_object* v_context_3772_, lean_object* v_x_3773_){
_start:
{
lean_object* v_val_3776_; 
if (lean_obj_tag(v_x_3773_) == 0)
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3786_; 
v_a_3778_ = lean_ctor_get(v_x_3773_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v_x_3773_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3780_ = v_x_3773_;
v_isShared_3781_ = v_isSharedCheck_3786_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v_x_3773_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3786_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3784_; 
v___x_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3783_);
return v___x_3784_;
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3800_; 
v_a_3787_ = lean_ctor_get(v_x_3773_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v_x_3773_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3789_ = v_x_3773_;
v_isShared_3790_ = v_isSharedCheck_3800_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v_x_3773_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3800_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3791_; 
v___x_3791_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1_spec__2(v_context_3772_, v_a_3787_);
if (lean_obj_tag(v___x_3791_) == 0)
{
lean_object* v_a_3792_; lean_object* v___x_3794_; 
v_a_3792_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3792_);
lean_dec_ref_known(v___x_3791_, 1);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 0, v_a_3792_);
v___x_3794_ = v___x_3789_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3792_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
v_val_3776_ = v___x_3794_;
goto v___jp_3775_;
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; 
v_a_3796_ = lean_ctor_get(v___x_3791_, 0);
lean_inc(v_a_3796_);
lean_dec_ref_known(v___x_3791_, 1);
if (v_isShared_3790_ == 0)
{
lean_ctor_set_tag(v___x_3789_, 0);
lean_ctor_set(v___x_3789_, 0, v_a_3796_);
v___x_3798_ = v___x_3789_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3796_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
v_val_3776_ = v___x_3798_;
goto v___jp_3775_;
}
}
}
}
v___jp_3775_:
{
lean_object* v___x_3777_; 
v___x_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3777_, 0, v_val_3776_);
return v___x_3777_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3801_, lean_object* v_x_3802_, lean_object* v___y_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0(v_context_3801_, v_x_3802_);
lean_dec_ref(v_context_3801_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(lean_object* v___f_3805_, lean_object* v_x_3806_){
_start:
{
if (lean_obj_tag(v_x_3806_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3816_; 
lean_dec_ref(v___f_3805_);
v_a_3808_ = lean_ctor_get(v_x_3806_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v_x_3806_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3810_ = v_x_3806_;
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v_x_3806_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3816_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
lean_object* v___x_3814_; 
v___x_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3813_);
return v___x_3814_;
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3818_; 
v_a_3817_ = lean_ctor_get(v_x_3806_, 0);
lean_inc(v_a_3817_);
lean_dec_ref_known(v_x_3806_, 1);
v___x_3818_ = lean_apply_2(v___f_3805_, v_a_3817_, lean_box(0));
return v___x_3818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed(lean_object* v___f_3819_, lean_object* v_x_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2(v___f_3819_, v_x_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(lean_object* v_context_3823_, uint32_t v_op_3824_, uint64_t v_flags_3825_, lean_object* v_payload_3826_, lean_object* v_failurePrefix_3827_){
_start:
{
lean_object* v___f_3829_; lean_object* v___f_3830_; lean_object* v___f_3831_; lean_object* v___f_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___f_3835_; lean_object* v___f_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; lean_object* v_val_3840_; lean_object* v___x_3843_; 
v___f_3829_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3829_, 0, v_context_3823_);
v___f_3830_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3830_, 0, v___f_3829_);
v___f_3831_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3831_, 0, v___f_3830_);
lean_inc_ref(v_failurePrefix_3827_);
v___f_3832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0_spec__0___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3832_, 0, v_failurePrefix_3827_);
v___x_3833_ = lean_box_uint32(v_op_3824_);
v___x_3834_ = lean_box_uint64(v_flags_3825_);
lean_inc_ref(v___f_3831_);
v___f_3835_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3835_, 0, v_failurePrefix_3827_);
lean_closure_set(v___f_3835_, 1, v___x_3833_);
lean_closure_set(v___f_3835_, 2, v___x_3834_);
lean_closure_set(v___f_3835_, 3, v_payload_3826_);
lean_closure_set(v___f_3835_, 4, v___f_3832_);
lean_closure_set(v___f_3835_, 5, v___f_3831_);
lean_closure_set(v___f_3835_, 6, v___f_3831_);
v___f_3836_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3836_, 0, v___f_3835_);
v___x_3837_ = lean_unsigned_to_nat(0u);
v___x_3838_ = 0;
v___x_3843_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3843_) == 0)
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3851_; 
v_a_3844_ = lean_ctor_get(v___x_3843_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3843_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3846_ = v___x_3843_;
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___x_3843_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
lean_ctor_set_tag(v___x_3846_, 1);
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
v_val_3840_ = v___x_3849_;
goto v___jp_3839_;
}
}
}
else
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3843_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3843_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3843_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3843_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
lean_ctor_set_tag(v___x_3854_, 0);
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
v_val_3840_ = v___x_3857_;
goto v___jp_3839_;
}
}
}
v___jp_3839_:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; 
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v_val_3840_);
v___x_3842_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3837_, v___x_3838_, v___x_3841_, v___f_3836_);
return v___x_3842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1___boxed(lean_object* v_context_3860_, lean_object* v_op_3861_, lean_object* v_flags_3862_, lean_object* v_payload_3863_, lean_object* v_failurePrefix_3864_, lean_object* v_a_3865_){
_start:
{
uint32_t v_op_boxed_3866_; uint64_t v_flags_boxed_3867_; lean_object* v_res_3868_; 
v_op_boxed_3866_ = lean_unbox_uint32(v_op_3861_);
lean_dec(v_op_3861_);
v_flags_boxed_3867_ = lean_unbox_uint64(v_flags_3862_);
lean_dec_ref(v_flags_3862_);
v_res_3868_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v_context_3860_, v_op_boxed_3866_, v_flags_boxed_3867_, v_payload_3863_, v_failurePrefix_3864_);
return v_res_3868_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(uint8_t v_await_3869_, uint64_t v_extra_3870_){
_start:
{
uint64_t v___x_3871_; uint64_t v___y_3873_; 
v___x_3871_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3869_ == 0)
{
uint64_t v___x_3876_; 
v___x_3876_ = 0ULL;
v___y_3873_ = v___x_3876_;
goto v___jp_3872_;
}
else
{
uint64_t v___x_3877_; 
v___x_3877_ = 2ULL;
v___y_3873_ = v___x_3877_;
goto v___jp_3872_;
}
v___jp_3872_:
{
uint64_t v___x_3874_; uint64_t v___x_3875_; 
v___x_3874_ = lean_uint64_lor(v___x_3871_, v___y_3873_);
v___x_3875_ = lean_uint64_lor(v___x_3874_, v_extra_3870_);
return v___x_3875_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0___boxed(lean_object* v_await_3878_, lean_object* v_extra_3879_){
_start:
{
uint8_t v_await_boxed_3880_; uint64_t v_extra_boxed_3881_; uint64_t v_res_3882_; lean_object* v_r_3883_; 
v_await_boxed_3880_ = lean_unbox(v_await_3878_);
v_extra_boxed_3881_ = lean_unbox_uint64(v_extra_3879_);
lean_dec_ref(v_extra_3879_);
v_res_3882_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v_await_boxed_3880_, v_extra_boxed_3881_);
v_r_3883_ = lean_box_uint64(v_res_3882_);
return v_r_3883_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3884_; uint8_t v___x_3885_; uint64_t v___x_3886_; 
v___x_3884_ = 8ULL;
v___x_3885_ = 0;
v___x_3886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__0(v___x_3885_, v___x_3884_);
return v___x_3886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(lean_object* v_o_3887_, lean_object* v_name_3888_, lean_object* v_args_3889_){
_start:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; uint32_t v___x_3896_; uint64_t v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3891_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_3892_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3892_, 0, v_o_3887_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
lean_inc_ref(v_name_3888_);
v___x_3893_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3893_, 0, v_name_3888_);
v___x_3894_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1___closed__1));
v___x_3895_ = lean_string_append(v___x_3894_, v_name_3888_);
lean_dec_ref(v_name_3888_);
v___x_3896_ = 205;
v___x_3897_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___closed__0);
v___x_3898_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3898_, 0, v_args_3889_);
v___x_3899_ = lean_unsigned_to_nat(3u);
v___x_3900_ = lean_mk_empty_array_with_capacity(v___x_3899_);
v___x_3901_ = lean_array_push(v___x_3900_, v___x_3892_);
v___x_3902_ = lean_array_push(v___x_3901_, v___x_3893_);
v___x_3903_ = lean_array_push(v___x_3902_, v___x_3898_);
v___x_3904_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3903_);
v___x_3905_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0_spec__1(v___x_3895_, v___x_3896_, v___x_3897_, v___x_3904_, v___x_3891_);
return v___x_3905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0___boxed(lean_object* v_o_3906_, lean_object* v_name_3907_, lean_object* v_args_3908_, lean_object* v___y_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_o_3906_, v_name_3907_, v_args_3908_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read(lean_object* v_self_3912_){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; 
v___x_3914_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_3915_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3916_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_3912_, v___x_3914_, v___x_3915_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_read___boxed(lean_object* v_self_3917_, lean_object* v_a_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_read(v_self_3917_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(lean_object* v_self_3921_){
_start:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3923_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_3924_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_3925_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3921_, v___x_3923_, v___x_3924_);
return v___x_3925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___boxed(lean_object* v_self_3926_, lean_object* v_a_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock(v_self_3926_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(lean_object* v_self_3929_, lean_object* v_reason_3930_){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3932_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_3933_ = lean_unsigned_to_nat(1u);
v___x_3934_ = lean_mk_empty_array_with_capacity(v___x_3933_);
v___x_3935_ = lean_array_push(v___x_3934_, v_reason_3930_);
v___x_3936_ = l_Lasm_JS_Web_Support_args(v___x_3935_);
v___x_3937_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3929_, v___x_3932_, v___x_3936_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel___boxed(lean_object* v_self_3938_, lean_object* v_reason_3939_, lean_object* v_a_3940_){
_start:
{
lean_object* v_res_3941_; 
v_res_3941_ = l_Lasm_JS_Web_ReadableStreamDefaultReader_cancel(v_self_3938_, v_reason_3939_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(lean_object* v_context_3942_, lean_object* v_d_3943_){
_start:
{
lean_object* v___y_3946_; lean_object* v___y_3947_; 
if (lean_obj_tag(v_d_3943_) == 9)
{
lean_object* v_value_3951_; lean_object* v___x_3952_; 
v_value_3951_ = lean_ctor_get(v_d_3943_, 0);
lean_inc(v_value_3951_);
lean_dec_ref_known(v_d_3943_, 2);
v___x_3952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3952_, 0, v_value_3951_);
return v___x_3952_;
}
else
{
lean_object* v___x_3953_; lean_object* v_received_3955_; 
v___x_3953_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_3943_) == 9)
{
lean_object* v_value_3969_; lean_object* v_description_3970_; uint8_t v___x_3971_; 
v_value_3969_ = lean_ctor_get(v_d_3943_, 0);
v_description_3970_ = lean_ctor_get(v_d_3943_, 1);
v___x_3971_ = lean_string_dec_eq(v_description_3970_, v___x_3953_);
if (v___x_3971_ == 0)
{
goto v___jp_3967_;
}
else
{
uint32_t v___x_3972_; uint64_t v___x_3973_; lean_object* v___x_3974_; uint32_t v___x_3975_; lean_object* v___x_3976_; 
lean_inc_n(v_value_3969_, 2);
lean_dec_ref_known(v_d_3943_, 2);
v___x_3972_ = 206;
v___x_3973_ = 0ULL;
v___x_3974_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3974_, 0, v_value_3969_);
lean_ctor_set(v___x_3974_, 1, v___x_3953_);
v___x_3975_ = lasm_js_value_handle(v_value_3969_);
lean_dec(v_value_3969_);
v___x_3976_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3972_, v___x_3973_, v___x_3974_, v___x_3975_);
lean_dec_ref_known(v___x_3974_, 2);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; uint8_t v___x_3978_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
v___x_3978_ = lean_string_validate_utf8(v_a_3977_);
if (v___x_3978_ == 0)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
lean_dec(v_a_3977_);
v___x_3979_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_3980_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3979_);
v_received_3955_ = v___x_3980_;
goto v___jp_3954_;
}
else
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_string_from_utf8_unchecked(v_a_3977_);
v_received_3955_ = v___x_3981_;
goto v___jp_3954_;
}
}
else
{
lean_object* v___x_3982_; 
lean_dec_ref_known(v___x_3976_, 1);
v___x_3982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_3955_ = v___x_3982_;
goto v___jp_3954_;
}
}
}
else
{
goto v___jp_3967_;
}
v___jp_3954_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; uint8_t v___x_3965_; 
v___x_3956_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_3957_ = lean_string_append(v___x_3956_, v_context_3942_);
v___x_3958_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_3959_ = lean_string_append(v___x_3957_, v___x_3958_);
v___x_3960_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSReadableStreamBYOBReader___closed__0));
v___x_3961_ = lean_string_append(v___x_3959_, v___x_3960_);
v___x_3962_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_3963_ = lean_string_append(v___x_3961_, v___x_3962_);
v___x_3964_ = lean_string_append(v___x_3963_, v_received_3955_);
lean_dec_ref(v_received_3955_);
v___x_3965_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_3965_ == 0)
{
lean_object* v___x_3966_; 
v___x_3966_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_3946_ = v___x_3964_;
v___y_3947_ = v___x_3966_;
goto v___jp_3945_;
}
else
{
v___y_3946_ = v___x_3964_;
v___y_3947_ = v___x_3953_;
goto v___jp_3945_;
}
}
v___jp_3967_:
{
lean_object* v___x_3968_; 
v___x_3968_ = l_Lasm_JS_Data_describe(v_d_3943_);
v_received_3955_ = v___x_3968_;
goto v___jp_3954_;
}
}
v___jp_3945_:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3948_ = lean_string_append(v___y_3946_, v___y_3947_);
v___x_3949_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3949_);
return v___x_3950_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0___boxed(lean_object* v_context_3983_, lean_object* v_d_3984_, lean_object* v_a_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v_context_3983_, v_d_3984_);
lean_dec_ref(v_context_3983_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(lean_object* v_b_3987_, lean_object* v_args_3988_, uint8_t v_await_3989_){
_start:
{
uint64_t v___y_3992_; uint64_t v___y_3993_; uint64_t v___x_4036_; uint64_t v___y_4038_; 
v___x_4036_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_3989_ == 0)
{
uint64_t v___x_4043_; 
v___x_4043_ = 0ULL;
v___y_4038_ = v___x_4043_;
goto v___jp_4037_;
}
else
{
uint64_t v___x_4044_; 
v___x_4044_ = 2ULL;
v___y_4038_ = v___x_4044_;
goto v___jp_4037_;
}
v___jp_3991_:
{
uint64_t v_flags_3994_; uint32_t v___x_3995_; lean_object* v___x_3996_; uint32_t v___x_3997_; lean_object* v___x_3998_; 
v_flags_3994_ = lean_uint64_lor(v___y_3992_, v___y_3993_);
v___x_3995_ = 214;
v___x_3996_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_3987_, v_args_3988_);
v___x_3997_ = 0;
v___x_3998_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3995_, v_flags_3994_, v___x_3996_, v___x_3997_);
lean_dec(v___x_3996_);
if (lean_obj_tag(v___x_3998_) == 0)
{
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_a_3999_; lean_object* v___x_4000_; 
v_a_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_a_3999_);
lean_dec_ref_known(v___x_3998_, 1);
v___x_4000_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_3999_);
lean_dec(v_a_3999_);
if (lean_obj_tag(v___x_4000_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v_a_4001_ = lean_ctor_get(v___x_4000_, 0);
lean_inc(v_a_4001_);
lean_dec_ref_known(v___x_4000_, 1);
v___x_4002_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3987_);
v___x_4003_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0_spec__0(v___x_4002_, v_a_4001_);
lean_dec_ref(v___x_4002_);
return v___x_4003_;
}
else
{
lean_object* v_a_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4011_; 
v_a_4004_ = lean_ctor_get(v___x_4000_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_4006_ = v___x_4000_;
v_isShared_4007_ = v_isSharedCheck_4011_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_a_4004_);
lean_dec(v___x_4000_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4011_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___x_4009_; 
if (v_isShared_4007_ == 0)
{
v___x_4009_ = v___x_4006_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v_a_4004_);
v___x_4009_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
return v___x_4009_;
}
}
}
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4019_; 
v_a_4012_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4019_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4019_ == 0)
{
v___x_4014_ = v___x_3998_;
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_3998_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4019_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4017_; 
if (v_isShared_4015_ == 0)
{
lean_ctor_set_tag(v___x_4014_, 1);
v___x_4017_ = v___x_4014_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4018_; 
v_reuseFailAlloc_4018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4018_, 0, v_a_4012_);
v___x_4017_ = v_reuseFailAlloc_4018_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
return v___x_4017_;
}
}
}
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4035_; 
v_a_4020_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4022_ = v___x_3998_;
v_isShared_4023_ = v_isSharedCheck_4035_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_3998_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4035_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4033_; 
v___x_4024_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4025_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_3987_);
v___x_4026_ = lean_string_append(v___x_4024_, v___x_4025_);
lean_dec_ref(v___x_4025_);
v___x_4027_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4028_ = lean_string_append(v___x_4026_, v___x_4027_);
v___x_4029_ = lean_io_error_to_string(v_a_4020_);
v___x_4030_ = lean_string_append(v___x_4028_, v___x_4029_);
lean_dec_ref(v___x_4029_);
v___x_4031_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4031_, 0, v___x_4030_);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 0, v___x_4031_);
v___x_4033_ = v___x_4022_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4031_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
v___jp_4037_:
{
uint8_t v_construct_4039_; uint64_t v___x_4040_; 
v_construct_4039_ = lean_ctor_get_uint8(v_b_3987_, sizeof(void*)*4);
v___x_4040_ = lean_uint64_lor(v___x_4036_, v___y_4038_);
if (v_construct_4039_ == 0)
{
uint64_t v___x_4041_; 
v___x_4041_ = 0ULL;
v___y_3992_ = v___x_4040_;
v___y_3993_ = v___x_4041_;
goto v___jp_3991_;
}
else
{
uint64_t v___x_4042_; 
v___x_4042_ = 4ULL;
v___y_3992_ = v___x_4040_;
v___y_3993_ = v___x_4042_;
goto v___jp_3991_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0___boxed(lean_object* v_b_4045_, lean_object* v_args_4046_, lean_object* v_await_4047_, lean_object* v_a_4048_){
_start:
{
uint8_t v_await_boxed_4049_; lean_object* v_res_4050_; 
v_await_boxed_4049_ = lean_unbox(v_await_4047_);
v_res_4050_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v_b_4045_, v_args_4046_, v_await_boxed_4049_);
lean_dec_ref(v_b_4045_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new(lean_object* v_stream_4059_){
_start:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; lean_object* v___x_4069_; 
v___x_4061_ = lean_unsigned_to_nat(1u);
v___x_4062_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBReader_new___closed__2));
v___x_4063_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4064_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4064_, 0, v_stream_4059_);
lean_ctor_set(v___x_4064_, 1, v___x_4063_);
v___x_4065_ = lean_mk_empty_array_with_capacity(v___x_4061_);
v___x_4066_ = lean_array_push(v___x_4065_, v___x_4064_);
v___x_4067_ = l_Lasm_JS_Web_Support_args(v___x_4066_);
v___x_4068_ = 0;
v___x_4069_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStreamBYOBReader_new_spec__0(v___x_4062_, v___x_4067_, v___x_4068_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_new___boxed(lean_object* v_stream_4070_, lean_object* v_a_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_new(v_stream_4070_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(lean_object* v_self_4073_){
_start:
{
lean_object* v___f_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; uint8_t v___x_4078_; lean_object* v_val_4080_; lean_object* v___x_4083_; 
v___f_4075_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4076_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4077_ = lean_unsigned_to_nat(0u);
v___x_4078_ = 0;
v___x_4083_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4073_, v___x_4076_);
if (lean_obj_tag(v___x_4083_) == 0)
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
v_a_4084_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_4083_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_4083_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
lean_ctor_set_tag(v___x_4086_, 1);
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4084_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
v_val_4080_ = v___x_4089_;
goto v___jp_4079_;
}
}
}
else
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
v_a_4092_ = lean_ctor_get(v___x_4083_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4083_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4083_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4083_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
lean_ctor_set_tag(v___x_4094_, 0);
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
v_val_4080_ = v___x_4097_;
goto v___jp_4079_;
}
}
}
v___jp_4079_:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4081_, 0, v_val_4080_);
v___x_4082_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4077_, v___x_4078_, v___x_4081_, v___f_4075_);
return v___x_4082_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_closed___boxed(lean_object* v_self_4100_, lean_object* v_a_4101_){
_start:
{
lean_object* v_res_4102_; 
v_res_4102_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_closed(v_self_4100_);
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object* v_x_4103_){
_start:
{
if (lean_obj_tag(v_x_4103_) == 0)
{
lean_object* v___x_4104_; 
v___x_4104_ = lean_box(0);
return v___x_4104_;
}
else
{
lean_object* v_val_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4118_; 
v_val_4105_ = lean_ctor_get(v_x_4103_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_x_4103_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4107_ = v_x_4103_;
v_isShared_4108_ = v_isSharedCheck_4118_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_val_4105_);
lean_dec(v_x_4103_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4118_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; uint8_t v___x_4112_; 
v___x_4109_ = lean_nat_to_int(v_val_4105_);
v___x_4110_ = lean_nat_abs(v___x_4109_);
v___x_4111_ = lean_cstr_to_nat("9007199254740991");
v___x_4112_ = lean_nat_dec_le(v___x_4110_, v___x_4111_);
lean_dec(v___x_4110_);
if (v___x_4112_ == 0)
{
lean_object* v___x_4114_; 
if (v_isShared_4108_ == 0)
{
lean_ctor_set_tag(v___x_4107_, 5);
lean_ctor_set(v___x_4107_, 0, v___x_4109_);
v___x_4114_ = v___x_4107_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v___x_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
else
{
double v___x_4116_; lean_object* v___x_4117_; 
lean_del_object(v___x_4107_);
v___x_4116_ = l_Float_ofInt(v___x_4109_);
lean_dec(v___x_4109_);
v___x_4117_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4117_, 0, v___x_4116_);
return v___x_4117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(lean_object* v_x_4119_){
_start:
{
if (lean_obj_tag(v_x_4119_) == 0)
{
lean_object* v___x_4120_; 
v___x_4120_ = lean_box(0);
return v___x_4120_;
}
else
{
lean_object* v_val_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v_val_4121_ = lean_ctor_get(v_x_4119_, 0);
lean_inc(v_val_4121_);
lean_dec_ref_known(v_x_4119_, 1);
v___x_4122_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStreamBYOBReaderReadOptions___lam__0___closed__0));
v___x_4123_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_val_4121_);
v___x_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4124_, 0, v___x_4122_);
lean_ctor_set(v___x_4124_, 1, v___x_4123_);
v___x_4125_ = lean_unsigned_to_nat(1u);
v___x_4126_ = lean_mk_empty_array_with_capacity(v___x_4125_);
v___x_4127_ = lean_array_push(v___x_4126_, v___x_4124_);
v___x_4128_ = l_Lasm_JS_Web_Support_fields(v___x_4127_);
lean_dec_ref(v___x_4127_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read(lean_object* v_self_4129_, lean_object* v_view_4130_, lean_object* v_options_4131_){
_start:
{
lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
v___x_4133_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_read___closed__0));
v___x_4134_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4134_, 0, v_view_4130_);
v___x_4135_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0(v_options_4131_);
v___x_4136_ = lean_unsigned_to_nat(2u);
v___x_4137_ = lean_mk_empty_array_with_capacity(v___x_4136_);
v___x_4138_ = lean_array_push(v___x_4137_, v___x_4134_);
v___x_4139_ = lean_array_push(v___x_4138_, v___x_4135_);
v___x_4140_ = l_Lasm_JS_Web_Support_args(v___x_4139_);
v___x_4141_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStreamDefaultReader_read_spec__0(v_self_4129_, v___x_4133_, v___x_4140_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_read___boxed(lean_object* v_self_4142_, lean_object* v_view_4143_, lean_object* v_options_4144_, lean_object* v_a_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_read(v_self_4142_, v_view_4143_, v_options_4144_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(lean_object* v_self_4147_){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4149_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_4150_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4151_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4147_, v___x_4149_, v___x_4150_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock___boxed(lean_object* v_self_4152_, lean_object* v_a_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_releaseLock(v_self_4152_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(lean_object* v_self_4155_, lean_object* v_reason_4156_){
_start:
{
lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4158_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSource___lam__0___closed__2));
v___x_4159_ = lean_unsigned_to_nat(1u);
v___x_4160_ = lean_mk_empty_array_with_capacity(v___x_4159_);
v___x_4161_ = lean_array_push(v___x_4160_, v_reason_4156_);
v___x_4162_ = l_Lasm_JS_Web_Support_args(v___x_4161_);
v___x_4163_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4155_, v___x_4158_, v___x_4162_);
return v___x_4163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel___boxed(lean_object* v_self_4164_, lean_object* v_reason_4165_, lean_object* v_a_4166_){
_start:
{
lean_object* v_res_4167_; 
v_res_4167_ = l_Lasm_JS_Web_ReadableStreamBYOBReader_cancel(v_self_4164_, v_reason_4165_);
return v_res_4167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object* v_context_4169_, lean_object* v_d_4170_){
_start:
{
lean_object* v___y_4176_; lean_object* v___y_4177_; 
switch(lean_obj_tag(v_d_4170_))
{
case 1:
{
goto v___jp_4172_;
}
case 0:
{
goto v___jp_4172_;
}
default: 
{
if (lean_obj_tag(v_d_4170_) == 3)
{
double v_n_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
v_n_4181_ = lean_ctor_get_float(v_d_4170_, 0);
lean_dec_ref_known(v_d_4170_, 0);
v___x_4182_ = lean_box_float(v_n_4181_);
v___x_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4182_);
v___x_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4183_);
return v___x_4184_;
}
else
{
lean_object* v___x_4185_; lean_object* v_received_4187_; 
v___x_4185_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4170_) == 9)
{
lean_object* v_value_4201_; lean_object* v_description_4202_; uint8_t v___x_4203_; 
v_value_4201_ = lean_ctor_get(v_d_4170_, 0);
v_description_4202_ = lean_ctor_get(v_d_4170_, 1);
v___x_4203_ = lean_string_dec_eq(v_description_4202_, v___x_4185_);
if (v___x_4203_ == 0)
{
goto v___jp_4199_;
}
else
{
uint32_t v___x_4204_; uint64_t v___x_4205_; lean_object* v___x_4206_; uint32_t v___x_4207_; lean_object* v___x_4208_; 
lean_inc_n(v_value_4201_, 2);
lean_dec_ref_known(v_d_4170_, 2);
v___x_4204_ = 206;
v___x_4205_ = 0ULL;
v___x_4206_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4206_, 0, v_value_4201_);
lean_ctor_set(v___x_4206_, 1, v___x_4185_);
v___x_4207_ = lasm_js_value_handle(v_value_4201_);
lean_dec(v_value_4201_);
v___x_4208_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4204_, v___x_4205_, v___x_4206_, v___x_4207_);
lean_dec_ref_known(v___x_4206_, 2);
if (lean_obj_tag(v___x_4208_) == 0)
{
lean_object* v_a_4209_; uint8_t v___x_4210_; 
v_a_4209_ = lean_ctor_get(v___x_4208_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4208_, 1);
v___x_4210_ = lean_string_validate_utf8(v_a_4209_);
if (v___x_4210_ == 0)
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
lean_dec(v_a_4209_);
v___x_4211_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4212_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4211_);
v_received_4187_ = v___x_4212_;
goto v___jp_4186_;
}
else
{
lean_object* v___x_4213_; 
v___x_4213_ = lean_string_from_utf8_unchecked(v_a_4209_);
v_received_4187_ = v___x_4213_;
goto v___jp_4186_;
}
}
else
{
lean_object* v___x_4214_; 
lean_dec_ref_known(v___x_4208_, 1);
v___x_4214_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4187_ = v___x_4214_;
goto v___jp_4186_;
}
}
}
else
{
goto v___jp_4199_;
}
v___jp_4186_:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; uint8_t v___x_4197_; 
v___x_4188_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4189_ = lean_string_append(v___x_4188_, v_context_4169_);
v___x_4190_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4191_ = lean_string_append(v___x_4189_, v___x_4190_);
v___x_4192_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___closed__0));
v___x_4193_ = lean_string_append(v___x_4191_, v___x_4192_);
v___x_4194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4195_ = lean_string_append(v___x_4193_, v___x_4194_);
v___x_4196_ = lean_string_append(v___x_4195_, v_received_4187_);
lean_dec_ref(v_received_4187_);
v___x_4197_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; 
v___x_4198_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4176_ = v___x_4196_;
v___y_4177_ = v___x_4198_;
goto v___jp_4175_;
}
else
{
v___y_4176_ = v___x_4196_;
v___y_4177_ = v___x_4185_;
goto v___jp_4175_;
}
}
v___jp_4199_:
{
lean_object* v___x_4200_; 
v___x_4200_ = l_Lasm_JS_Data_describe(v_d_4170_);
v_received_4187_ = v___x_4200_;
goto v___jp_4186_;
}
}
}
}
v___jp_4172_:
{
lean_object* v___x_4173_; lean_object* v___x_4174_; 
v___x_4173_ = lean_box(0);
v___x_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4174_, 0, v___x_4173_);
return v___x_4174_;
}
v___jp_4175_:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4178_ = lean_string_append(v___y_4176_, v___y_4177_);
v___x_4179_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4178_);
v___x_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4180_, 0, v___x_4179_);
return v___x_4180_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4215_, lean_object* v_d_4216_, lean_object* v_a_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4215_, v_d_4216_);
lean_dec_ref(v_context_4215_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(lean_object* v_context_4219_, lean_object* v_bytes_4220_){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4220_);
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_object* v_a_4223_; lean_object* v___x_4224_; 
v_a_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_a_4223_);
lean_dec_ref_known(v___x_4222_, 1);
v___x_4224_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_4219_, v_a_4223_);
return v___x_4224_;
}
else
{
lean_object* v_a_4225_; lean_object* v___x_4227_; uint8_t v_isShared_4228_; uint8_t v_isSharedCheck_4232_; 
v_a_4225_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4232_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4227_ = v___x_4222_;
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
else
{
lean_inc(v_a_4225_);
lean_dec(v___x_4222_);
v___x_4227_ = lean_box(0);
v_isShared_4228_ = v_isSharedCheck_4232_;
goto v_resetjp_4226_;
}
v_resetjp_4226_:
{
lean_object* v___x_4230_; 
if (v_isShared_4228_ == 0)
{
v___x_4230_ = v___x_4227_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4225_);
v___x_4230_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
return v___x_4230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0___boxed(lean_object* v_context_4233_, lean_object* v_bytes_4234_, lean_object* v_a_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v_context_4233_, v_bytes_4234_);
lean_dec_ref(v_bytes_4234_);
lean_dec_ref(v_context_4233_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(lean_object* v_o_4238_, lean_object* v_key_4239_){
_start:
{
lean_object* v_k_4241_; lean_object* v___x_4242_; 
v_k_4241_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4241_, 0, v_key_4239_);
v___x_4242_ = l_Lasm_JS_Wire_encodeIO(v_k_4241_);
if (lean_obj_tag(v___x_4242_) == 0)
{
lean_object* v_a_4243_; uint32_t v___x_4244_; uint32_t v___x_4245_; uint64_t v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; 
v_a_4243_ = lean_ctor_get(v___x_4242_, 0);
lean_inc(v_a_4243_);
lean_dec_ref_known(v___x_4242_, 1);
v___x_4244_ = 203;
v___x_4245_ = lasm_js_value_handle(v_o_4238_);
v___x_4246_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4247_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4248_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4248_, 0, v_o_4238_);
lean_ctor_set(v___x_4248_, 1, v___x_4247_);
v___x_4249_ = lean_unsigned_to_nat(2u);
v___x_4250_ = lean_mk_empty_array_with_capacity(v___x_4249_);
lean_inc_ref(v_k_4241_);
v___x_4251_ = lean_array_push(v___x_4250_, v_k_4241_);
v___x_4252_ = lean_array_push(v___x_4251_, v___x_4248_);
v___x_4253_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4252_);
v___x_4254_ = lasm_js_call(v___x_4244_, v___x_4245_, v___x_4246_, v_a_4243_, v___x_4253_);
lean_dec_ref_known(v___x_4253_, 1);
lean_dec(v_a_4243_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v_a_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v_a_4255_ = lean_ctor_get(v___x_4254_, 0);
lean_inc(v_a_4255_);
lean_dec_ref_known(v___x_4254_, 1);
v___x_4256_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4257_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4241_);
v___x_4258_ = lean_string_append(v___x_4256_, v___x_4257_);
lean_dec_ref(v___x_4257_);
v___x_4259_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0(v___x_4258_, v_a_4255_);
lean_dec(v_a_4255_);
lean_dec_ref(v___x_4258_);
return v___x_4259_;
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec_ref_known(v_k_4241_, 1);
v_a_4260_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4254_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4254_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
}
else
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
lean_dec_ref_known(v_k_4241_, 1);
lean_dec(v_o_4238_);
v_a_4268_ = lean_ctor_get(v___x_4242_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4242_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4270_ = v___x_4242_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4242_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4268_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___boxed(lean_object* v_o_4276_, lean_object* v_key_4277_, lean_object* v_a_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_o_4276_, v_key_4277_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(lean_object* v_self_4281_){
_start:
{
lean_object* v___x_4283_; lean_object* v___x_4284_; 
v___x_4283_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4284_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4281_, v___x_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___boxed(lean_object* v_self_4285_, lean_object* v_a_4286_){
_start:
{
lean_object* v_res_4287_; 
v_res_4287_ = l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize(v_self_4285_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close(lean_object* v_self_4288_){
_start:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4290_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4291_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4292_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4288_, v___x_4290_, v___x_4291_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_close___boxed(lean_object* v_self_4293_, lean_object* v_a_4294_){
_start:
{
lean_object* v_res_4295_; 
v_res_4295_ = l_Lasm_JS_Web_ReadableStreamDefaultController_close(v_self_4293_);
return v_res_4295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(lean_object* v_self_4297_, lean_object* v_chunk_4298_){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4300_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4301_ = lean_unsigned_to_nat(1u);
v___x_4302_ = lean_mk_empty_array_with_capacity(v___x_4301_);
v___x_4303_ = lean_array_push(v___x_4302_, v_chunk_4298_);
v___x_4304_ = l_Lasm_JS_Web_Support_args(v___x_4303_);
v___x_4305_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4297_, v___x_4300_, v___x_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___boxed(lean_object* v_self_4306_, lean_object* v_chunk_4307_, lean_object* v_a_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue(v_self_4306_, v_chunk_4307_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error(lean_object* v_self_4311_, lean_object* v_e_4312_){
_start:
{
lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4314_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4315_ = lean_unsigned_to_nat(1u);
v___x_4316_ = lean_mk_empty_array_with_capacity(v___x_4315_);
v___x_4317_ = lean_array_push(v___x_4316_, v_e_4312_);
v___x_4318_ = l_Lasm_JS_Web_Support_args(v___x_4317_);
v___x_4319_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4311_, v___x_4314_, v___x_4318_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamDefaultController_error___boxed(lean_object* v_self_4320_, lean_object* v_e_4321_, lean_object* v_a_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Lasm_JS_Web_ReadableStreamDefaultController_error(v_self_4320_, v_e_4321_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(lean_object* v_context_4325_, lean_object* v_d_4326_){
_start:
{
lean_object* v___y_4332_; lean_object* v___y_4333_; 
switch(lean_obj_tag(v_d_4326_))
{
case 1:
{
goto v___jp_4328_;
}
case 0:
{
goto v___jp_4328_;
}
default: 
{
if (lean_obj_tag(v_d_4326_) == 9)
{
lean_object* v_value_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; 
v_value_4337_ = lean_ctor_get(v_d_4326_, 0);
lean_inc(v_value_4337_);
lean_dec_ref_known(v_d_4326_, 2);
v___x_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4338_, 0, v_value_4337_);
v___x_4339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4338_);
return v___x_4339_;
}
else
{
lean_object* v___x_4340_; lean_object* v_received_4342_; 
v___x_4340_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4326_) == 9)
{
lean_object* v_value_4356_; lean_object* v_description_4357_; uint8_t v___x_4358_; 
v_value_4356_ = lean_ctor_get(v_d_4326_, 0);
v_description_4357_ = lean_ctor_get(v_d_4326_, 1);
v___x_4358_ = lean_string_dec_eq(v_description_4357_, v___x_4340_);
if (v___x_4358_ == 0)
{
goto v___jp_4354_;
}
else
{
uint32_t v___x_4359_; uint64_t v___x_4360_; lean_object* v___x_4361_; uint32_t v___x_4362_; lean_object* v___x_4363_; 
lean_inc_n(v_value_4356_, 2);
lean_dec_ref_known(v_d_4326_, 2);
v___x_4359_ = 206;
v___x_4360_ = 0ULL;
v___x_4361_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4361_, 0, v_value_4356_);
lean_ctor_set(v___x_4361_, 1, v___x_4340_);
v___x_4362_ = lasm_js_value_handle(v_value_4356_);
lean_dec(v_value_4356_);
v___x_4363_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4359_, v___x_4360_, v___x_4361_, v___x_4362_);
lean_dec_ref_known(v___x_4361_, 2);
if (lean_obj_tag(v___x_4363_) == 0)
{
lean_object* v_a_4364_; uint8_t v___x_4365_; 
v_a_4364_ = lean_ctor_get(v___x_4363_, 0);
lean_inc(v_a_4364_);
lean_dec_ref_known(v___x_4363_, 1);
v___x_4365_ = lean_string_validate_utf8(v_a_4364_);
if (v___x_4365_ == 0)
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
lean_dec(v_a_4364_);
v___x_4366_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4367_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4366_);
v_received_4342_ = v___x_4367_;
goto v___jp_4341_;
}
else
{
lean_object* v___x_4368_; 
v___x_4368_ = lean_string_from_utf8_unchecked(v_a_4364_);
v_received_4342_ = v___x_4368_;
goto v___jp_4341_;
}
}
else
{
lean_object* v___x_4369_; 
lean_dec_ref_known(v___x_4363_, 1);
v___x_4369_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4342_ = v___x_4369_;
goto v___jp_4341_;
}
}
}
else
{
goto v___jp_4354_;
}
v___jp_4341_:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; uint8_t v___x_4352_; 
v___x_4343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4344_ = lean_string_append(v___x_4343_, v_context_4325_);
v___x_4345_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4346_ = lean_string_append(v___x_4344_, v___x_4345_);
v___x_4347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___closed__0));
v___x_4348_ = lean_string_append(v___x_4346_, v___x_4347_);
v___x_4349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4350_ = lean_string_append(v___x_4348_, v___x_4349_);
v___x_4351_ = lean_string_append(v___x_4350_, v_received_4342_);
lean_dec_ref(v_received_4342_);
v___x_4352_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4352_ == 0)
{
lean_object* v___x_4353_; 
v___x_4353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4332_ = v___x_4351_;
v___y_4333_ = v___x_4353_;
goto v___jp_4331_;
}
else
{
v___y_4332_ = v___x_4351_;
v___y_4333_ = v___x_4340_;
goto v___jp_4331_;
}
}
v___jp_4354_:
{
lean_object* v___x_4355_; 
v___x_4355_ = l_Lasm_JS_Data_describe(v_d_4326_);
v_received_4342_ = v___x_4355_;
goto v___jp_4341_;
}
}
}
}
v___jp_4328_:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; 
v___x_4329_ = lean_box(0);
v___x_4330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4330_, 0, v___x_4329_);
return v___x_4330_;
}
v___jp_4331_:
{
lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v___x_4334_ = lean_string_append(v___y_4332_, v___y_4333_);
v___x_4335_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4335_, 0, v___x_4334_);
v___x_4336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4336_, 0, v___x_4335_);
return v___x_4336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4370_, lean_object* v_d_4371_, lean_object* v_a_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4370_, v_d_4371_);
lean_dec_ref(v_context_4370_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(lean_object* v_context_4374_, lean_object* v_bytes_4375_){
_start:
{
lean_object* v___x_4377_; 
v___x_4377_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4375_);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_object* v_a_4378_; lean_object* v___x_4379_; 
v_a_4378_ = lean_ctor_get(v___x_4377_, 0);
lean_inc(v_a_4378_);
lean_dec_ref_known(v___x_4377_, 1);
v___x_4379_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0_spec__1(v_context_4374_, v_a_4378_);
return v___x_4379_;
}
else
{
lean_object* v_a_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4387_; 
v_a_4380_ = lean_ctor_get(v___x_4377_, 0);
v_isSharedCheck_4387_ = !lean_is_exclusive(v___x_4377_);
if (v_isSharedCheck_4387_ == 0)
{
v___x_4382_ = v___x_4377_;
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_a_4380_);
lean_dec(v___x_4377_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4387_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v___x_4385_; 
if (v_isShared_4383_ == 0)
{
v___x_4385_ = v___x_4382_;
goto v_reusejp_4384_;
}
else
{
lean_object* v_reuseFailAlloc_4386_; 
v_reuseFailAlloc_4386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4386_, 0, v_a_4380_);
v___x_4385_ = v_reuseFailAlloc_4386_;
goto v_reusejp_4384_;
}
v_reusejp_4384_:
{
return v___x_4385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0___boxed(lean_object* v_context_4388_, lean_object* v_bytes_4389_, lean_object* v_a_4390_){
_start:
{
lean_object* v_res_4391_; 
v_res_4391_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v_context_4388_, v_bytes_4389_);
lean_dec_ref(v_bytes_4389_);
lean_dec_ref(v_context_4388_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(lean_object* v_o_4392_, lean_object* v_key_4393_){
_start:
{
lean_object* v_k_4395_; lean_object* v___x_4396_; 
v_k_4395_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4395_, 0, v_key_4393_);
v___x_4396_ = l_Lasm_JS_Wire_encodeIO(v_k_4395_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v_a_4397_; uint32_t v___x_4398_; uint32_t v___x_4399_; uint64_t v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
lean_inc(v_a_4397_);
lean_dec_ref_known(v___x_4396_, 1);
v___x_4398_ = 203;
v___x_4399_ = lasm_js_value_handle(v_o_4392_);
v___x_4400_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4402_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4402_, 0, v_o_4392_);
lean_ctor_set(v___x_4402_, 1, v___x_4401_);
v___x_4403_ = lean_unsigned_to_nat(2u);
v___x_4404_ = lean_mk_empty_array_with_capacity(v___x_4403_);
lean_inc_ref(v_k_4395_);
v___x_4405_ = lean_array_push(v___x_4404_, v_k_4395_);
v___x_4406_ = lean_array_push(v___x_4405_, v___x_4402_);
v___x_4407_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4407_, 0, v___x_4406_);
v___x_4408_ = lasm_js_call(v___x_4398_, v___x_4399_, v___x_4400_, v_a_4397_, v___x_4407_);
lean_dec_ref_known(v___x_4407_, 1);
lean_dec(v_a_4397_);
if (lean_obj_tag(v___x_4408_) == 0)
{
lean_object* v_a_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; 
v_a_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4409_);
lean_dec_ref_known(v___x_4408_, 1);
v___x_4410_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4411_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4395_);
v___x_4412_ = lean_string_append(v___x_4410_, v___x_4411_);
lean_dec_ref(v___x_4411_);
v___x_4413_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0_spec__0(v___x_4412_, v_a_4409_);
lean_dec(v_a_4409_);
lean_dec_ref(v___x_4412_);
return v___x_4413_;
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec_ref_known(v_k_4395_, 1);
v_a_4414_ = lean_ctor_get(v___x_4408_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4408_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4408_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4408_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4429_; 
lean_dec_ref_known(v_k_4395_, 1);
lean_dec(v_o_4392_);
v_a_4422_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4424_ = v___x_4396_;
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4396_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4427_; 
if (v_isShared_4425_ == 0)
{
v___x_4427_ = v___x_4424_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4422_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
return v___x_4427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0___boxed(lean_object* v_o_4430_, lean_object* v_key_4431_, lean_object* v_a_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_o_4430_, v_key_4431_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(lean_object* v_self_4435_){
_start:
{
lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4437_ = ((lean_object*)(l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___closed__0));
v___x_4438_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableByteStreamController_byobRequest_spec__0(v_self_4435_, v___x_4437_);
return v___x_4438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_byobRequest___boxed(lean_object* v_self_4439_, lean_object* v_a_4440_){
_start:
{
lean_object* v_res_4441_; 
v_res_4441_ = l_Lasm_JS_Web_ReadableByteStreamController_byobRequest(v_self_4439_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(lean_object* v_self_4442_){
_start:
{
lean_object* v___x_4444_; lean_object* v___x_4445_; 
v___x_4444_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4445_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4442_, v___x_4444_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_desiredSize___boxed(lean_object* v_self_4446_, lean_object* v_a_4447_){
_start:
{
lean_object* v_res_4448_; 
v_res_4448_ = l_Lasm_JS_Web_ReadableByteStreamController_desiredSize(v_self_4446_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close(lean_object* v_self_4449_){
_start:
{
lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
v___x_4451_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4452_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4453_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4449_, v___x_4451_, v___x_4452_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_close___boxed(lean_object* v_self_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lasm_JS_Web_ReadableByteStreamController_close(v_self_4454_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue(lean_object* v_self_4457_, lean_object* v_chunk_4458_){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4460_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_4461_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4461_, 0, v_chunk_4458_);
v___x_4462_ = lean_unsigned_to_nat(1u);
v___x_4463_ = lean_mk_empty_array_with_capacity(v___x_4462_);
v___x_4464_ = lean_array_push(v___x_4463_, v___x_4461_);
v___x_4465_ = l_Lasm_JS_Web_Support_args(v___x_4464_);
v___x_4466_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4457_, v___x_4460_, v___x_4465_);
return v___x_4466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_enqueue___boxed(lean_object* v_self_4467_, lean_object* v_chunk_4468_, lean_object* v_a_4469_){
_start:
{
lean_object* v_res_4470_; 
v_res_4470_ = l_Lasm_JS_Web_ReadableByteStreamController_enqueue(v_self_4467_, v_chunk_4468_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error(lean_object* v_self_4471_, lean_object* v_e_4472_){
_start:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4474_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_4475_ = lean_unsigned_to_nat(1u);
v___x_4476_ = lean_mk_empty_array_with_capacity(v___x_4475_);
v___x_4477_ = lean_array_push(v___x_4476_, v_e_4472_);
v___x_4478_ = l_Lasm_JS_Web_Support_args(v___x_4477_);
v___x_4479_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4471_, v___x_4474_, v___x_4478_);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableByteStreamController_error___boxed(lean_object* v_self_4480_, lean_object* v_e_4481_, lean_object* v_a_4482_){
_start:
{
lean_object* v_res_4483_; 
v_res_4483_ = l_Lasm_JS_Web_ReadableByteStreamController_error(v_self_4480_, v_e_4481_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(lean_object* v_context_4485_, lean_object* v_d_4486_){
_start:
{
lean_object* v___y_4492_; lean_object* v___y_4493_; 
switch(lean_obj_tag(v_d_4486_))
{
case 1:
{
goto v___jp_4488_;
}
case 0:
{
goto v___jp_4488_;
}
default: 
{
if (lean_obj_tag(v_d_4486_) == 6)
{
lean_object* v_b_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v_b_4497_ = lean_ctor_get(v_d_4486_, 0);
lean_inc_ref(v_b_4497_);
lean_dec_ref_known(v_d_4486_, 1);
v___x_4498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4498_, 0, v_b_4497_);
v___x_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4498_);
return v___x_4499_;
}
else
{
lean_object* v___x_4500_; lean_object* v_received_4502_; 
v___x_4500_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4486_) == 9)
{
lean_object* v_value_4516_; lean_object* v_description_4517_; uint8_t v___x_4518_; 
v_value_4516_ = lean_ctor_get(v_d_4486_, 0);
v_description_4517_ = lean_ctor_get(v_d_4486_, 1);
v___x_4518_ = lean_string_dec_eq(v_description_4517_, v___x_4500_);
if (v___x_4518_ == 0)
{
goto v___jp_4514_;
}
else
{
uint32_t v___x_4519_; uint64_t v___x_4520_; lean_object* v___x_4521_; uint32_t v___x_4522_; lean_object* v___x_4523_; 
lean_inc_n(v_value_4516_, 2);
lean_dec_ref_known(v_d_4486_, 2);
v___x_4519_ = 206;
v___x_4520_ = 0ULL;
v___x_4521_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4521_, 0, v_value_4516_);
lean_ctor_set(v___x_4521_, 1, v___x_4500_);
v___x_4522_ = lasm_js_value_handle(v_value_4516_);
lean_dec(v_value_4516_);
v___x_4523_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4519_, v___x_4520_, v___x_4521_, v___x_4522_);
lean_dec_ref_known(v___x_4521_, 2);
if (lean_obj_tag(v___x_4523_) == 0)
{
lean_object* v_a_4524_; uint8_t v___x_4525_; 
v_a_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_a_4524_);
lean_dec_ref_known(v___x_4523_, 1);
v___x_4525_ = lean_string_validate_utf8(v_a_4524_);
if (v___x_4525_ == 0)
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
lean_dec(v_a_4524_);
v___x_4526_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4527_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4526_);
v_received_4502_ = v___x_4527_;
goto v___jp_4501_;
}
else
{
lean_object* v___x_4528_; 
v___x_4528_ = lean_string_from_utf8_unchecked(v_a_4524_);
v_received_4502_ = v___x_4528_;
goto v___jp_4501_;
}
}
else
{
lean_object* v___x_4529_; 
lean_dec_ref_known(v___x_4523_, 1);
v___x_4529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4502_ = v___x_4529_;
goto v___jp_4501_;
}
}
}
else
{
goto v___jp_4514_;
}
v___jp_4501_:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; uint8_t v___x_4512_; 
v___x_4503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4504_ = lean_string_append(v___x_4503_, v_context_4485_);
v___x_4505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4506_ = lean_string_append(v___x_4504_, v___x_4505_);
v___x_4507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___closed__0));
v___x_4508_ = lean_string_append(v___x_4506_, v___x_4507_);
v___x_4509_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4510_ = lean_string_append(v___x_4508_, v___x_4509_);
v___x_4511_ = lean_string_append(v___x_4510_, v_received_4502_);
lean_dec_ref(v_received_4502_);
v___x_4512_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4512_ == 0)
{
lean_object* v___x_4513_; 
v___x_4513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4492_ = v___x_4511_;
v___y_4493_ = v___x_4513_;
goto v___jp_4491_;
}
else
{
v___y_4492_ = v___x_4511_;
v___y_4493_ = v___x_4500_;
goto v___jp_4491_;
}
}
v___jp_4514_:
{
lean_object* v___x_4515_; 
v___x_4515_ = l_Lasm_JS_Data_describe(v_d_4486_);
v_received_4502_ = v___x_4515_;
goto v___jp_4501_;
}
}
}
}
v___jp_4488_:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4489_ = lean_box(0);
v___x_4490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4489_);
return v___x_4490_;
}
v___jp_4491_:
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4494_ = lean_string_append(v___y_4492_, v___y_4493_);
v___x_4495_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
v___x_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4495_);
return v___x_4496_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1___boxed(lean_object* v_context_4530_, lean_object* v_d_4531_, lean_object* v_a_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4530_, v_d_4531_);
lean_dec_ref(v_context_4530_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(lean_object* v_context_4534_, lean_object* v_bytes_4535_){
_start:
{
lean_object* v___x_4537_; 
v___x_4537_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4535_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v_a_4538_; lean_object* v___x_4539_; 
v_a_4538_ = lean_ctor_get(v___x_4537_, 0);
lean_inc(v_a_4538_);
lean_dec_ref_known(v___x_4537_, 1);
v___x_4539_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0_spec__1(v_context_4534_, v_a_4538_);
return v___x_4539_;
}
else
{
lean_object* v_a_4540_; lean_object* v___x_4542_; uint8_t v_isShared_4543_; uint8_t v_isSharedCheck_4547_; 
v_a_4540_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4542_ = v___x_4537_;
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
else
{
lean_inc(v_a_4540_);
lean_dec(v___x_4537_);
v___x_4542_ = lean_box(0);
v_isShared_4543_ = v_isSharedCheck_4547_;
goto v_resetjp_4541_;
}
v_resetjp_4541_:
{
lean_object* v___x_4545_; 
if (v_isShared_4543_ == 0)
{
v___x_4545_ = v___x_4542_;
goto v_reusejp_4544_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v_a_4540_);
v___x_4545_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4544_;
}
v_reusejp_4544_:
{
return v___x_4545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0___boxed(lean_object* v_context_4548_, lean_object* v_bytes_4549_, lean_object* v_a_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v_context_4548_, v_bytes_4549_);
lean_dec_ref(v_bytes_4549_);
lean_dec_ref(v_context_4548_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(lean_object* v_o_4552_, lean_object* v_key_4553_){
_start:
{
lean_object* v_k_4555_; lean_object* v___x_4556_; 
v_k_4555_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_4555_, 0, v_key_4553_);
v___x_4556_ = l_Lasm_JS_Wire_encodeIO(v_k_4555_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; uint32_t v___x_4558_; uint32_t v___x_4559_; uint64_t v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v___x_4556_, 1);
v___x_4558_ = 203;
v___x_4559_ = lasm_js_value_handle(v_o_4552_);
v___x_4560_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_4561_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4562_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4562_, 0, v_o_4552_);
lean_ctor_set(v___x_4562_, 1, v___x_4561_);
v___x_4563_ = lean_unsigned_to_nat(2u);
v___x_4564_ = lean_mk_empty_array_with_capacity(v___x_4563_);
lean_inc_ref(v_k_4555_);
v___x_4565_ = lean_array_push(v___x_4564_, v_k_4555_);
v___x_4566_ = lean_array_push(v___x_4565_, v___x_4562_);
v___x_4567_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
v___x_4568_ = lasm_js_call(v___x_4558_, v___x_4559_, v___x_4560_, v_a_4557_, v___x_4567_);
lean_dec_ref_known(v___x_4567_, 1);
lean_dec(v_a_4557_);
if (lean_obj_tag(v___x_4568_) == 0)
{
lean_object* v_a_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
lean_inc(v_a_4569_);
lean_dec_ref_known(v___x_4568_, 1);
v___x_4570_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_4571_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4555_);
v___x_4572_ = lean_string_append(v___x_4570_, v___x_4571_);
lean_dec_ref(v___x_4571_);
v___x_4573_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0_spec__0(v___x_4572_, v_a_4569_);
lean_dec(v_a_4569_);
lean_dec_ref(v___x_4572_);
return v___x_4573_;
}
else
{
lean_object* v_a_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref_known(v_k_4555_, 1);
v_a_4574_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4576_ = v___x_4568_;
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_a_4574_);
lean_dec(v___x_4568_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4579_; 
if (v_isShared_4577_ == 0)
{
v___x_4579_ = v___x_4576_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v_a_4574_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
}
}
else
{
lean_object* v_a_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4589_; 
lean_dec_ref_known(v_k_4555_, 1);
lean_dec(v_o_4552_);
v_a_4582_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4584_ = v___x_4556_;
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_a_4582_);
lean_dec(v___x_4556_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4589_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4587_; 
if (v_isShared_4585_ == 0)
{
v___x_4587_ = v___x_4584_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4582_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0___boxed(lean_object* v_o_4590_, lean_object* v_key_4591_, lean_object* v_a_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_o_4590_, v_key_4591_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(lean_object* v_self_4595_){
_start:
{
lean_object* v___x_4597_; lean_object* v___x_4598_; 
v___x_4597_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___closed__0));
v___x_4598_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamBYOBRequest_view_spec__0(v_self_4595_, v___x_4597_);
return v___x_4598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_view___boxed(lean_object* v_self_4599_, lean_object* v_a_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_view(v_self_4599_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(lean_object* v_self_4603_, lean_object* v_bytesWritten_4604_){
_start:
{
lean_object* v___x_4606_; lean_object* v___y_4608_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; uint8_t v___x_4617_; 
v___x_4606_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___closed__0));
v___x_4614_ = lean_nat_to_int(v_bytesWritten_4604_);
v___x_4615_ = lean_nat_abs(v___x_4614_);
v___x_4616_ = lean_cstr_to_nat("9007199254740991");
v___x_4617_ = lean_nat_dec_le(v___x_4615_, v___x_4616_);
lean_dec(v___x_4615_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; 
v___x_4618_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4614_);
v___y_4608_ = v___x_4618_;
goto v___jp_4607_;
}
else
{
double v___x_4619_; lean_object* v___x_4620_; 
v___x_4619_ = l_Float_ofInt(v___x_4614_);
lean_dec(v___x_4614_);
v___x_4620_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_4620_, 0, v___x_4619_);
v___y_4608_ = v___x_4620_;
goto v___jp_4607_;
}
v___jp_4607_:
{
lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___x_4609_ = lean_unsigned_to_nat(1u);
v___x_4610_ = lean_mk_empty_array_with_capacity(v___x_4609_);
v___x_4611_ = lean_array_push(v___x_4610_, v___y_4608_);
v___x_4612_ = l_Lasm_JS_Web_Support_args(v___x_4611_);
v___x_4613_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4603_, v___x_4606_, v___x_4612_);
return v___x_4613_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond___boxed(lean_object* v_self_4621_, lean_object* v_bytesWritten_4622_, lean_object* v_a_4623_){
_start:
{
lean_object* v_res_4624_; 
v_res_4624_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respond(v_self_4621_, v_bytesWritten_4622_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(lean_object* v_self_4626_, lean_object* v_view_4627_){
_start:
{
lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
v___x_4629_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___closed__0));
v___x_4630_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_4630_, 0, v_view_4627_);
v___x_4631_ = lean_unsigned_to_nat(1u);
v___x_4632_ = lean_mk_empty_array_with_capacity(v___x_4631_);
v___x_4633_ = lean_array_push(v___x_4632_, v___x_4630_);
v___x_4634_ = l_Lasm_JS_Web_Support_args(v___x_4633_);
v___x_4635_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_4626_, v___x_4629_, v___x_4634_);
return v___x_4635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView___boxed(lean_object* v_self_4636_, lean_object* v_view_4637_, lean_object* v_a_4638_){
_start:
{
lean_object* v_res_4639_; 
v_res_4639_ = l_Lasm_JS_Web_ReadableStreamBYOBRequest_respondWithNewView(v_self_4636_, v_view_4637_);
return v_res_4639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(lean_object* v_context_4640_, lean_object* v_d_4641_){
_start:
{
lean_object* v___y_4644_; lean_object* v___y_4645_; 
if (lean_obj_tag(v_d_4641_) == 9)
{
lean_object* v_value_4649_; lean_object* v___x_4650_; 
v_value_4649_ = lean_ctor_get(v_d_4641_, 0);
lean_inc(v_value_4649_);
lean_dec_ref_known(v_d_4641_, 2);
v___x_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4650_, 0, v_value_4649_);
return v___x_4650_;
}
else
{
lean_object* v___x_4651_; lean_object* v_received_4653_; 
v___x_4651_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4641_) == 9)
{
lean_object* v_value_4667_; lean_object* v_description_4668_; uint8_t v___x_4669_; 
v_value_4667_ = lean_ctor_get(v_d_4641_, 0);
v_description_4668_ = lean_ctor_get(v_d_4641_, 1);
v___x_4669_ = lean_string_dec_eq(v_description_4668_, v___x_4651_);
if (v___x_4669_ == 0)
{
goto v___jp_4665_;
}
else
{
uint32_t v___x_4670_; uint64_t v___x_4671_; lean_object* v___x_4672_; uint32_t v___x_4673_; lean_object* v___x_4674_; 
lean_inc_n(v_value_4667_, 2);
lean_dec_ref_known(v_d_4641_, 2);
v___x_4670_ = 206;
v___x_4671_ = 0ULL;
v___x_4672_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4672_, 0, v_value_4667_);
lean_ctor_set(v___x_4672_, 1, v___x_4651_);
v___x_4673_ = lasm_js_value_handle(v_value_4667_);
lean_dec(v_value_4667_);
v___x_4674_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4670_, v___x_4671_, v___x_4672_, v___x_4673_);
lean_dec_ref_known(v___x_4672_, 2);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; uint8_t v___x_4676_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref_known(v___x_4674_, 1);
v___x_4676_ = lean_string_validate_utf8(v_a_4675_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
lean_dec(v_a_4675_);
v___x_4677_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4678_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4677_);
v_received_4653_ = v___x_4678_;
goto v___jp_4652_;
}
else
{
lean_object* v___x_4679_; 
v___x_4679_ = lean_string_from_utf8_unchecked(v_a_4675_);
v_received_4653_ = v___x_4679_;
goto v___jp_4652_;
}
}
else
{
lean_object* v___x_4680_; 
lean_dec_ref_known(v___x_4674_, 1);
v___x_4680_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4653_ = v___x_4680_;
goto v___jp_4652_;
}
}
}
else
{
goto v___jp_4665_;
}
v___jp_4652_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; uint8_t v___x_4663_; 
v___x_4654_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4655_ = lean_string_append(v___x_4654_, v_context_4640_);
v___x_4656_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4657_ = lean_string_append(v___x_4655_, v___x_4656_);
v___x_4658_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStream___closed__0));
v___x_4659_ = lean_string_append(v___x_4657_, v___x_4658_);
v___x_4660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4661_ = lean_string_append(v___x_4659_, v___x_4660_);
v___x_4662_ = lean_string_append(v___x_4661_, v_received_4653_);
lean_dec_ref(v_received_4653_);
v___x_4663_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; 
v___x_4664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4644_ = v___x_4662_;
v___y_4645_ = v___x_4664_;
goto v___jp_4643_;
}
else
{
v___y_4644_ = v___x_4662_;
v___y_4645_ = v___x_4651_;
goto v___jp_4643_;
}
}
v___jp_4665_:
{
lean_object* v___x_4666_; 
v___x_4666_ = l_Lasm_JS_Data_describe(v_d_4641_);
v_received_4653_ = v___x_4666_;
goto v___jp_4652_;
}
}
v___jp_4643_:
{
lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4646_ = lean_string_append(v___y_4644_, v___y_4645_);
v___x_4647_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4647_, 0, v___x_4646_);
v___x_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4648_, 0, v___x_4647_);
return v___x_4648_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0___boxed(lean_object* v_context_4681_, lean_object* v_d_4682_, lean_object* v_a_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v_context_4681_, v_d_4682_);
lean_dec_ref(v_context_4681_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(lean_object* v_b_4685_, lean_object* v_args_4686_, uint8_t v_await_4687_){
_start:
{
uint64_t v___y_4690_; uint64_t v___y_4691_; uint64_t v___x_4734_; uint64_t v___y_4736_; 
v___x_4734_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4687_ == 0)
{
uint64_t v___x_4741_; 
v___x_4741_ = 0ULL;
v___y_4736_ = v___x_4741_;
goto v___jp_4735_;
}
else
{
uint64_t v___x_4742_; 
v___x_4742_ = 2ULL;
v___y_4736_ = v___x_4742_;
goto v___jp_4735_;
}
v___jp_4689_:
{
uint64_t v_flags_4692_; uint32_t v___x_4693_; lean_object* v___x_4694_; uint32_t v___x_4695_; lean_object* v___x_4696_; 
v_flags_4692_ = lean_uint64_lor(v___y_4690_, v___y_4691_);
v___x_4693_ = 214;
v___x_4694_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4685_, v_args_4686_);
v___x_4695_ = 0;
v___x_4696_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4693_, v_flags_4692_, v___x_4694_, v___x_4695_);
lean_dec(v___x_4694_);
if (lean_obj_tag(v___x_4696_) == 0)
{
if (lean_obj_tag(v___x_4696_) == 0)
{
lean_object* v_a_4697_; lean_object* v___x_4698_; 
v_a_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_a_4697_);
lean_dec_ref_known(v___x_4696_, 1);
v___x_4698_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4697_);
lean_dec(v_a_4697_);
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_object* v_a_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; 
v_a_4699_ = lean_ctor_get(v___x_4698_, 0);
lean_inc(v_a_4699_);
lean_dec_ref_known(v___x_4698_, 1);
v___x_4700_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4685_);
v___x_4701_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0_spec__0(v___x_4700_, v_a_4699_);
lean_dec_ref(v___x_4700_);
return v___x_4701_;
}
else
{
lean_object* v_a_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4709_; 
v_a_4702_ = lean_ctor_get(v___x_4698_, 0);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___x_4698_);
if (v_isSharedCheck_4709_ == 0)
{
v___x_4704_ = v___x_4698_;
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_a_4702_);
lean_dec(v___x_4698_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___x_4707_; 
if (v_isShared_4705_ == 0)
{
v___x_4707_ = v___x_4704_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v_a_4702_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
return v___x_4707_;
}
}
}
}
else
{
lean_object* v_a_4710_; lean_object* v___x_4712_; uint8_t v_isShared_4713_; uint8_t v_isSharedCheck_4717_; 
v_a_4710_ = lean_ctor_get(v___x_4696_, 0);
v_isSharedCheck_4717_ = !lean_is_exclusive(v___x_4696_);
if (v_isSharedCheck_4717_ == 0)
{
v___x_4712_ = v___x_4696_;
v_isShared_4713_ = v_isSharedCheck_4717_;
goto v_resetjp_4711_;
}
else
{
lean_inc(v_a_4710_);
lean_dec(v___x_4696_);
v___x_4712_ = lean_box(0);
v_isShared_4713_ = v_isSharedCheck_4717_;
goto v_resetjp_4711_;
}
v_resetjp_4711_:
{
lean_object* v___x_4715_; 
if (v_isShared_4713_ == 0)
{
lean_ctor_set_tag(v___x_4712_, 1);
v___x_4715_ = v___x_4712_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v_a_4710_);
v___x_4715_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
return v___x_4715_;
}
}
}
}
else
{
lean_object* v_a_4718_; lean_object* v___x_4720_; uint8_t v_isShared_4721_; uint8_t v_isSharedCheck_4733_; 
v_a_4718_ = lean_ctor_get(v___x_4696_, 0);
v_isSharedCheck_4733_ = !lean_is_exclusive(v___x_4696_);
if (v_isSharedCheck_4733_ == 0)
{
v___x_4720_ = v___x_4696_;
v_isShared_4721_ = v_isSharedCheck_4733_;
goto v_resetjp_4719_;
}
else
{
lean_inc(v_a_4718_);
lean_dec(v___x_4696_);
v___x_4720_ = lean_box(0);
v_isShared_4721_ = v_isSharedCheck_4733_;
goto v_resetjp_4719_;
}
v_resetjp_4719_:
{
lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4731_; 
v___x_4722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4723_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4685_);
v___x_4724_ = lean_string_append(v___x_4722_, v___x_4723_);
lean_dec_ref(v___x_4723_);
v___x_4725_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4726_ = lean_string_append(v___x_4724_, v___x_4725_);
v___x_4727_ = lean_io_error_to_string(v_a_4718_);
v___x_4728_ = lean_string_append(v___x_4726_, v___x_4727_);
lean_dec_ref(v___x_4727_);
v___x_4729_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4728_);
if (v_isShared_4721_ == 0)
{
lean_ctor_set(v___x_4720_, 0, v___x_4729_);
v___x_4731_ = v___x_4720_;
goto v_reusejp_4730_;
}
else
{
lean_object* v_reuseFailAlloc_4732_; 
v_reuseFailAlloc_4732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4732_, 0, v___x_4729_);
v___x_4731_ = v_reuseFailAlloc_4732_;
goto v_reusejp_4730_;
}
v_reusejp_4730_:
{
return v___x_4731_;
}
}
}
}
v___jp_4735_:
{
uint8_t v_construct_4737_; uint64_t v___x_4738_; 
v_construct_4737_ = lean_ctor_get_uint8(v_b_4685_, sizeof(void*)*4);
v___x_4738_ = lean_uint64_lor(v___x_4734_, v___y_4736_);
if (v_construct_4737_ == 0)
{
uint64_t v___x_4739_; 
v___x_4739_ = 0ULL;
v___y_4690_ = v___x_4738_;
v___y_4691_ = v___x_4739_;
goto v___jp_4689_;
}
else
{
uint64_t v___x_4740_; 
v___x_4740_ = 4ULL;
v___y_4690_ = v___x_4738_;
v___y_4691_ = v___x_4740_;
goto v___jp_4689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0___boxed(lean_object* v_b_4743_, lean_object* v_args_4744_, lean_object* v_await_4745_, lean_object* v_a_4746_){
_start:
{
uint8_t v_await_boxed_4747_; lean_object* v_res_4748_; 
v_await_boxed_4747_ = lean_unbox(v_await_4745_);
v_res_4748_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v_b_4743_, v_args_4744_, v_await_boxed_4747_);
lean_dec_ref(v_b_4743_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new(lean_object* v_underlyingSink_4757_, lean_object* v_strategy_4758_){
_start:
{
lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; uint8_t v___x_4767_; lean_object* v___x_4768_; 
v___x_4760_ = lean_unsigned_to_nat(2u);
v___x_4761_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_new___closed__2));
v___x_4762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_strategy_4758_);
v___x_4763_ = lean_mk_empty_array_with_capacity(v___x_4760_);
v___x_4764_ = lean_array_push(v___x_4763_, v_underlyingSink_4757_);
v___x_4765_ = lean_array_push(v___x_4764_, v___x_4762_);
v___x_4766_ = l_Lasm_JS_Web_Support_args(v___x_4765_);
v___x_4767_ = 0;
v___x_4768_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStream_new_spec__0(v___x_4761_, v___x_4766_, v___x_4767_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_new___boxed(lean_object* v_underlyingSink_4769_, lean_object* v_strategy_4770_, lean_object* v_a_4771_){
_start:
{
lean_object* v_res_4772_; 
v_res_4772_ = l_Lasm_JS_Web_WritableStream_new(v_underlyingSink_4769_, v_strategy_4770_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked(lean_object* v_self_4773_){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4775_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStream_locked___closed__0));
v___x_4776_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_4773_, v___x_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_locked___boxed(lean_object* v_self_4777_, lean_object* v_a_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l_Lasm_JS_Web_WritableStream_locked(v_self_4777_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort(lean_object* v_self_4780_, lean_object* v_reason_4781_){
_start:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4783_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_4784_ = lean_unsigned_to_nat(1u);
v___x_4785_ = lean_mk_empty_array_with_capacity(v___x_4784_);
v___x_4786_ = lean_array_push(v___x_4785_, v_reason_4781_);
v___x_4787_ = l_Lasm_JS_Web_Support_args(v___x_4786_);
v___x_4788_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4780_, v___x_4783_, v___x_4787_);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_abort___boxed(lean_object* v_self_4789_, lean_object* v_reason_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v_res_4792_; 
v_res_4792_ = l_Lasm_JS_Web_WritableStream_abort(v_self_4789_, v_reason_4790_);
return v_res_4792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close(lean_object* v_self_4793_){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4795_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_4796_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4797_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_4793_, v___x_4795_, v___x_4796_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_close___boxed(lean_object* v_self_4798_, lean_object* v_a_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l_Lasm_JS_Web_WritableStream_close(v_self_4798_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter(lean_object* v_self_4802_){
_start:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; 
v___x_4804_ = ((lean_object*)(l_Lasm_JS_Web_WritableStream_getWriter___closed__0));
v___x_4805_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_4806_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_4802_, v___x_4804_, v___x_4805_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4814_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4814_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4814_ == 0)
{
v___x_4809_ = v___x_4806_;
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4806_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4814_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
lean_object* v___x_4812_; 
if (v_isShared_4810_ == 0)
{
v___x_4812_ = v___x_4809_;
goto v_reusejp_4811_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v_a_4807_);
v___x_4812_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4811_;
}
v_reusejp_4811_:
{
return v___x_4812_;
}
}
}
else
{
lean_object* v_a_4815_; lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4822_; 
v_a_4815_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4817_ = v___x_4806_;
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
else
{
lean_inc(v_a_4815_);
lean_dec(v___x_4806_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4822_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4820_; 
if (v_isShared_4818_ == 0)
{
v___x_4820_ = v___x_4817_;
goto v_reusejp_4819_;
}
else
{
lean_object* v_reuseFailAlloc_4821_; 
v_reuseFailAlloc_4821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4821_, 0, v_a_4815_);
v___x_4820_ = v_reuseFailAlloc_4821_;
goto v_reusejp_4819_;
}
v_reusejp_4819_:
{
return v___x_4820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStream_getWriter___boxed(lean_object* v_self_4823_, lean_object* v_a_4824_){
_start:
{
lean_object* v_res_4825_; 
v_res_4825_ = l_Lasm_JS_Web_WritableStream_getWriter(v_self_4823_);
return v_res_4825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(lean_object* v_context_4826_, lean_object* v_d_4827_){
_start:
{
lean_object* v___y_4830_; lean_object* v___y_4831_; 
if (lean_obj_tag(v_d_4827_) == 9)
{
lean_object* v_value_4835_; lean_object* v___x_4836_; 
v_value_4835_ = lean_ctor_get(v_d_4827_, 0);
lean_inc(v_value_4835_);
lean_dec_ref_known(v_d_4827_, 2);
v___x_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4836_, 0, v_value_4835_);
return v___x_4836_;
}
else
{
lean_object* v___x_4837_; lean_object* v_received_4839_; 
v___x_4837_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_4827_) == 9)
{
lean_object* v_value_4853_; lean_object* v_description_4854_; uint8_t v___x_4855_; 
v_value_4853_ = lean_ctor_get(v_d_4827_, 0);
v_description_4854_ = lean_ctor_get(v_d_4827_, 1);
v___x_4855_ = lean_string_dec_eq(v_description_4854_, v___x_4837_);
if (v___x_4855_ == 0)
{
goto v___jp_4851_;
}
else
{
uint32_t v___x_4856_; uint64_t v___x_4857_; lean_object* v___x_4858_; uint32_t v___x_4859_; lean_object* v___x_4860_; 
lean_inc_n(v_value_4853_, 2);
lean_dec_ref_known(v_d_4827_, 2);
v___x_4856_ = 206;
v___x_4857_ = 0ULL;
v___x_4858_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4858_, 0, v_value_4853_);
lean_ctor_set(v___x_4858_, 1, v___x_4837_);
v___x_4859_ = lasm_js_value_handle(v_value_4853_);
lean_dec(v_value_4853_);
v___x_4860_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4856_, v___x_4857_, v___x_4858_, v___x_4859_);
lean_dec_ref_known(v___x_4858_, 2);
if (lean_obj_tag(v___x_4860_) == 0)
{
lean_object* v_a_4861_; uint8_t v___x_4862_; 
v_a_4861_ = lean_ctor_get(v___x_4860_, 0);
lean_inc(v_a_4861_);
lean_dec_ref_known(v___x_4860_, 1);
v___x_4862_ = lean_string_validate_utf8(v_a_4861_);
if (v___x_4862_ == 0)
{
lean_object* v___x_4863_; lean_object* v___x_4864_; 
lean_dec(v_a_4861_);
v___x_4863_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_4864_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4863_);
v_received_4839_ = v___x_4864_;
goto v___jp_4838_;
}
else
{
lean_object* v___x_4865_; 
v___x_4865_ = lean_string_from_utf8_unchecked(v_a_4861_);
v_received_4839_ = v___x_4865_;
goto v___jp_4838_;
}
}
else
{
lean_object* v___x_4866_; 
lean_dec_ref_known(v___x_4860_, 1);
v___x_4866_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_4839_ = v___x_4866_;
goto v___jp_4838_;
}
}
}
else
{
goto v___jp_4851_;
}
v___jp_4838_:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; uint8_t v___x_4849_; 
v___x_4840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4841_ = lean_string_append(v___x_4840_, v_context_4826_);
v___x_4842_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_4843_ = lean_string_append(v___x_4841_, v___x_4842_);
v___x_4844_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSWritableStreamDefaultWriter___closed__0));
v___x_4845_ = lean_string_append(v___x_4843_, v___x_4844_);
v___x_4846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_4847_ = lean_string_append(v___x_4845_, v___x_4846_);
v___x_4848_ = lean_string_append(v___x_4847_, v_received_4839_);
lean_dec_ref(v_received_4839_);
v___x_4849_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_4849_ == 0)
{
lean_object* v___x_4850_; 
v___x_4850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_4830_ = v___x_4848_;
v___y_4831_ = v___x_4850_;
goto v___jp_4829_;
}
else
{
v___y_4830_ = v___x_4848_;
v___y_4831_ = v___x_4837_;
goto v___jp_4829_;
}
}
v___jp_4851_:
{
lean_object* v___x_4852_; 
v___x_4852_ = l_Lasm_JS_Data_describe(v_d_4827_);
v_received_4839_ = v___x_4852_;
goto v___jp_4838_;
}
}
v___jp_4829_:
{
lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; 
v___x_4832_ = lean_string_append(v___y_4830_, v___y_4831_);
v___x_4833_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4832_);
v___x_4834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4834_, 0, v___x_4833_);
return v___x_4834_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0___boxed(lean_object* v_context_4867_, lean_object* v_d_4868_, lean_object* v_a_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v_context_4867_, v_d_4868_);
lean_dec_ref(v_context_4867_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(lean_object* v_b_4871_, lean_object* v_args_4872_, uint8_t v_await_4873_){
_start:
{
uint64_t v___y_4876_; uint64_t v___y_4877_; uint64_t v___x_4920_; uint64_t v___y_4922_; 
v___x_4920_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_4873_ == 0)
{
uint64_t v___x_4927_; 
v___x_4927_ = 0ULL;
v___y_4922_ = v___x_4927_;
goto v___jp_4921_;
}
else
{
uint64_t v___x_4928_; 
v___x_4928_ = 2ULL;
v___y_4922_ = v___x_4928_;
goto v___jp_4921_;
}
v___jp_4875_:
{
uint64_t v_flags_4878_; uint32_t v___x_4879_; lean_object* v___x_4880_; uint32_t v___x_4881_; lean_object* v___x_4882_; 
v_flags_4878_ = lean_uint64_lor(v___y_4876_, v___y_4877_);
v___x_4879_ = 214;
v___x_4880_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_4871_, v_args_4872_);
v___x_4881_ = 0;
v___x_4882_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4879_, v_flags_4878_, v___x_4880_, v___x_4881_);
lean_dec(v___x_4880_);
if (lean_obj_tag(v___x_4882_) == 0)
{
if (lean_obj_tag(v___x_4882_) == 0)
{
lean_object* v_a_4883_; lean_object* v___x_4884_; 
v_a_4883_ = lean_ctor_get(v___x_4882_, 0);
lean_inc(v_a_4883_);
lean_dec_ref_known(v___x_4882_, 1);
v___x_4884_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4883_);
lean_dec(v_a_4883_);
if (lean_obj_tag(v___x_4884_) == 0)
{
lean_object* v_a_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; 
v_a_4885_ = lean_ctor_get(v___x_4884_, 0);
lean_inc(v_a_4885_);
lean_dec_ref_known(v___x_4884_, 1);
v___x_4886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4871_);
v___x_4887_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0_spec__0(v___x_4886_, v_a_4885_);
lean_dec_ref(v___x_4886_);
return v___x_4887_;
}
else
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4895_; 
v_a_4888_ = lean_ctor_get(v___x_4884_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4884_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4890_ = v___x_4884_;
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4884_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4891_ == 0)
{
v___x_4893_ = v___x_4890_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_a_4888_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
else
{
lean_object* v_a_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
v_a_4896_ = lean_ctor_get(v___x_4882_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4882_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v___x_4882_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_a_4896_);
lean_dec(v___x_4882_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
lean_ctor_set_tag(v___x_4898_, 1);
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_a_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
else
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4919_; 
v_a_4904_ = lean_ctor_get(v___x_4882_, 0);
v_isSharedCheck_4919_ = !lean_is_exclusive(v___x_4882_);
if (v_isSharedCheck_4919_ == 0)
{
v___x_4906_ = v___x_4882_;
v_isShared_4907_ = v_isSharedCheck_4919_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4882_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4919_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4917_; 
v___x_4908_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_4909_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_4871_);
v___x_4910_ = lean_string_append(v___x_4908_, v___x_4909_);
lean_dec_ref(v___x_4909_);
v___x_4911_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_4912_ = lean_string_append(v___x_4910_, v___x_4911_);
v___x_4913_ = lean_io_error_to_string(v_a_4904_);
v___x_4914_ = lean_string_append(v___x_4912_, v___x_4913_);
lean_dec_ref(v___x_4913_);
v___x_4915_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4915_, 0, v___x_4914_);
if (v_isShared_4907_ == 0)
{
lean_ctor_set(v___x_4906_, 0, v___x_4915_);
v___x_4917_ = v___x_4906_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v___x_4915_);
v___x_4917_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
return v___x_4917_;
}
}
}
}
v___jp_4921_:
{
uint8_t v_construct_4923_; uint64_t v___x_4924_; 
v_construct_4923_ = lean_ctor_get_uint8(v_b_4871_, sizeof(void*)*4);
v___x_4924_ = lean_uint64_lor(v___x_4920_, v___y_4922_);
if (v_construct_4923_ == 0)
{
uint64_t v___x_4925_; 
v___x_4925_ = 0ULL;
v___y_4876_ = v___x_4924_;
v___y_4877_ = v___x_4925_;
goto v___jp_4875_;
}
else
{
uint64_t v___x_4926_; 
v___x_4926_ = 4ULL;
v___y_4876_ = v___x_4924_;
v___y_4877_ = v___x_4926_;
goto v___jp_4875_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0___boxed(lean_object* v_b_4929_, lean_object* v_args_4930_, lean_object* v_await_4931_, lean_object* v_a_4932_){
_start:
{
uint8_t v_await_boxed_4933_; lean_object* v_res_4934_; 
v_await_boxed_4933_ = lean_unbox(v_await_4931_);
v_res_4934_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v_b_4929_, v_args_4930_, v_await_boxed_4933_);
lean_dec_ref(v_b_4929_);
return v_res_4934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new(lean_object* v_stream_4943_){
_start:
{
lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; uint8_t v___x_4952_; lean_object* v___x_4953_; 
v___x_4945_ = lean_unsigned_to_nat(1u);
v___x_4946_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_new___closed__2));
v___x_4947_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_4948_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4948_, 0, v_stream_4943_);
lean_ctor_set(v___x_4948_, 1, v___x_4947_);
v___x_4949_ = lean_mk_empty_array_with_capacity(v___x_4945_);
v___x_4950_ = lean_array_push(v___x_4949_, v___x_4948_);
v___x_4951_ = l_Lasm_JS_Web_Support_args(v___x_4950_);
v___x_4952_ = 0;
v___x_4953_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_WritableStreamDefaultWriter_new_spec__0(v___x_4946_, v___x_4951_, v___x_4952_);
return v___x_4953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_new___boxed(lean_object* v_stream_4954_, lean_object* v_a_4955_){
_start:
{
lean_object* v_res_4956_; 
v_res_4956_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_new(v_stream_4954_);
return v_res_4956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(lean_object* v_self_4957_){
_start:
{
lean_object* v___f_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; uint8_t v___x_4962_; lean_object* v_val_4964_; lean_object* v___x_4967_; 
v___f_4959_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4960_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__1));
v___x_4961_ = lean_unsigned_to_nat(0u);
v___x_4962_ = 0;
v___x_4967_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4957_, v___x_4960_);
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v_a_4968_; lean_object* v___x_4970_; uint8_t v_isShared_4971_; uint8_t v_isSharedCheck_4975_; 
v_a_4968_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4970_ = v___x_4967_;
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
else
{
lean_inc(v_a_4968_);
lean_dec(v___x_4967_);
v___x_4970_ = lean_box(0);
v_isShared_4971_ = v_isSharedCheck_4975_;
goto v_resetjp_4969_;
}
v_resetjp_4969_:
{
lean_object* v___x_4973_; 
if (v_isShared_4971_ == 0)
{
lean_ctor_set_tag(v___x_4970_, 1);
v___x_4973_ = v___x_4970_;
goto v_reusejp_4972_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_a_4968_);
v___x_4973_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4972_;
}
v_reusejp_4972_:
{
v_val_4964_ = v___x_4973_;
goto v___jp_4963_;
}
}
}
else
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_4983_; 
v_a_4976_ = lean_ctor_get(v___x_4967_, 0);
v_isSharedCheck_4983_ = !lean_is_exclusive(v___x_4967_);
if (v_isSharedCheck_4983_ == 0)
{
v___x_4978_ = v___x_4967_;
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4967_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v___x_4981_; 
if (v_isShared_4979_ == 0)
{
lean_ctor_set_tag(v___x_4978_, 0);
v___x_4981_ = v___x_4978_;
goto v_reusejp_4980_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v_a_4976_);
v___x_4981_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4980_;
}
v_reusejp_4980_:
{
v_val_4964_ = v___x_4981_;
goto v___jp_4963_;
}
}
}
v___jp_4963_:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___x_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4965_, 0, v_val_4964_);
v___x_4966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4961_, v___x_4962_, v___x_4965_, v___f_4959_);
return v___x_4966_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_closed___boxed(lean_object* v_self_4984_, lean_object* v_a_4985_){
_start:
{
lean_object* v_res_4986_; 
v_res_4986_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_closed(v_self_4984_);
return v_res_4986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(lean_object* v_self_4987_){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4989_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_4990_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_4987_, v___x_4989_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize___boxed(lean_object* v_self_4991_, lean_object* v_a_4992_){
_start:
{
lean_object* v_res_4993_; 
v_res_4993_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_desiredSize(v_self_4991_);
return v_res_4993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(lean_object* v_self_4995_){
_start:
{
lean_object* v___f_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; uint8_t v___x_5000_; lean_object* v_val_5002_; lean_object* v___x_5005_; 
v___f_4997_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_closed___closed__0));
v___x_4998_ = ((lean_object*)(l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___closed__0));
v___x_4999_ = lean_unsigned_to_nat(0u);
v___x_5000_ = 0;
v___x_5005_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_4995_, v___x_4998_);
if (lean_obj_tag(v___x_5005_) == 0)
{
lean_object* v_a_5006_; lean_object* v___x_5008_; uint8_t v_isShared_5009_; uint8_t v_isSharedCheck_5013_; 
v_a_5006_ = lean_ctor_get(v___x_5005_, 0);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_5005_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_5008_ = v___x_5005_;
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
else
{
lean_inc(v_a_5006_);
lean_dec(v___x_5005_);
v___x_5008_ = lean_box(0);
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
v_resetjp_5007_:
{
lean_object* v___x_5011_; 
if (v_isShared_5009_ == 0)
{
lean_ctor_set_tag(v___x_5008_, 1);
v___x_5011_ = v___x_5008_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_a_5006_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
v_val_5002_ = v___x_5011_;
goto v___jp_5001_;
}
}
}
else
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5021_; 
v_a_5014_ = lean_ctor_get(v___x_5005_, 0);
v_isSharedCheck_5021_ = !lean_is_exclusive(v___x_5005_);
if (v_isSharedCheck_5021_ == 0)
{
v___x_5016_ = v___x_5005_;
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___x_5005_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
lean_object* v___x_5019_; 
if (v_isShared_5017_ == 0)
{
lean_ctor_set_tag(v___x_5016_, 0);
v___x_5019_ = v___x_5016_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v_a_5014_);
v___x_5019_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
v_val_5002_ = v___x_5019_;
goto v___jp_5001_;
}
}
}
v___jp_5001_:
{
lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5003_, 0, v_val_5002_);
v___x_5004_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4999_, v___x_5000_, v___x_5003_, v___f_4997_);
return v___x_5004_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_ready___boxed(lean_object* v_self_5022_, lean_object* v_a_5023_){
_start:
{
lean_object* v_res_5024_; 
v_res_5024_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_ready(v_self_5022_);
return v_res_5024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(lean_object* v_self_5025_, lean_object* v_reason_5026_){
_start:
{
lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; 
v___x_5028_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__2));
v___x_5029_ = lean_unsigned_to_nat(1u);
v___x_5030_ = lean_mk_empty_array_with_capacity(v___x_5029_);
v___x_5031_ = lean_array_push(v___x_5030_, v_reason_5026_);
v___x_5032_ = l_Lasm_JS_Web_Support_args(v___x_5031_);
v___x_5033_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5025_, v___x_5028_, v___x_5032_);
return v___x_5033_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_abort___boxed(lean_object* v_self_5034_, lean_object* v_reason_5035_, lean_object* v_a_5036_){
_start:
{
lean_object* v_res_5037_; 
v_res_5037_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_abort(v_self_5034_, v_reason_5035_);
return v_res_5037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close(lean_object* v_self_5038_){
_start:
{
lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v___x_5040_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__1));
v___x_5041_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5042_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5038_, v___x_5040_, v___x_5041_);
return v___x_5042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_close___boxed(lean_object* v_self_5043_, lean_object* v_a_5044_){
_start:
{
lean_object* v_res_5045_; 
v_res_5045_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_close(v_self_5043_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(lean_object* v_self_5046_){
_start:
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; 
v___x_5048_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultReader_releaseLock___closed__0));
v___x_5049_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5050_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5046_, v___x_5048_, v___x_5049_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock___boxed(lean_object* v_self_5051_, lean_object* v_a_5052_){
_start:
{
lean_object* v_res_5053_; 
v_res_5053_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_releaseLock(v_self_5051_);
return v_res_5053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write(lean_object* v_self_5054_, lean_object* v_chunk_5055_){
_start:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; 
v___x_5057_ = ((lean_object*)(l_Lasm_JS_Web_instToJSUnderlyingSink___lam__0___closed__0));
v___x_5058_ = lean_unsigned_to_nat(1u);
v___x_5059_ = lean_mk_empty_array_with_capacity(v___x_5058_);
v___x_5060_ = lean_array_push(v___x_5059_, v_chunk_5055_);
v___x_5061_ = l_Lasm_JS_Web_Support_args(v___x_5060_);
v___x_5062_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5054_, v___x_5057_, v___x_5061_);
return v___x_5062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultWriter_write___boxed(lean_object* v_self_5063_, lean_object* v_chunk_5064_, lean_object* v_a_5065_){
_start:
{
lean_object* v_res_5066_; 
v_res_5066_ = l_Lasm_JS_Web_WritableStreamDefaultWriter_write(v_self_5063_, v_chunk_5064_);
return v_res_5066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal(lean_object* v_self_5067_){
_start:
{
lean_object* v___x_5069_; lean_object* v___x_5070_; 
v___x_5069_ = ((lean_object*)(l_Lasm_JS_Web_instToJSStreamPipeOptions___lam__0___closed__3));
v___x_5070_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5067_, v___x_5069_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
v_a_5071_ = lean_ctor_get(v___x_5070_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_5070_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_5070_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_5070_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
}
else
{
lean_object* v_a_5079_; lean_object* v___x_5081_; uint8_t v_isShared_5082_; uint8_t v_isSharedCheck_5086_; 
v_a_5079_ = lean_ctor_get(v___x_5070_, 0);
v_isSharedCheck_5086_ = !lean_is_exclusive(v___x_5070_);
if (v_isSharedCheck_5086_ == 0)
{
v___x_5081_ = v___x_5070_;
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
else
{
lean_inc(v_a_5079_);
lean_dec(v___x_5070_);
v___x_5081_ = lean_box(0);
v_isShared_5082_ = v_isSharedCheck_5086_;
goto v_resetjp_5080_;
}
v_resetjp_5080_:
{
lean_object* v___x_5084_; 
if (v_isShared_5082_ == 0)
{
v___x_5084_ = v___x_5081_;
goto v_reusejp_5083_;
}
else
{
lean_object* v_reuseFailAlloc_5085_; 
v_reuseFailAlloc_5085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5085_, 0, v_a_5079_);
v___x_5084_ = v_reuseFailAlloc_5085_;
goto v_reusejp_5083_;
}
v_reusejp_5083_:
{
return v___x_5084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_signal___boxed(lean_object* v_self_5087_, lean_object* v_a_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lasm_JS_Web_WritableStreamDefaultController_signal(v_self_5087_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error(lean_object* v_self_5090_, lean_object* v_e_5091_){
_start:
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; 
v___x_5093_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5094_ = lean_unsigned_to_nat(1u);
v___x_5095_ = lean_mk_empty_array_with_capacity(v___x_5094_);
v___x_5096_ = lean_array_push(v___x_5095_, v_e_5091_);
v___x_5097_ = l_Lasm_JS_Web_Support_args(v___x_5096_);
v___x_5098_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5090_, v___x_5093_, v___x_5097_);
return v___x_5098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_WritableStreamDefaultController_error___boxed(lean_object* v_self_5099_, lean_object* v_e_5100_, lean_object* v_a_5101_){
_start:
{
lean_object* v_res_5102_; 
v_res_5102_ = l_Lasm_JS_Web_WritableStreamDefaultController_error(v_self_5099_, v_e_5100_);
return v_res_5102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(lean_object* v_context_5103_, lean_object* v_d_5104_){
_start:
{
lean_object* v___y_5107_; lean_object* v___y_5108_; 
if (lean_obj_tag(v_d_5104_) == 9)
{
lean_object* v_value_5112_; lean_object* v___x_5113_; 
v_value_5112_ = lean_ctor_get(v_d_5104_, 0);
lean_inc(v_value_5112_);
lean_dec_ref_known(v_d_5104_, 2);
v___x_5113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5113_, 0, v_value_5112_);
return v___x_5113_;
}
else
{
lean_object* v___x_5114_; lean_object* v_received_5116_; 
v___x_5114_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5104_) == 9)
{
lean_object* v_value_5130_; lean_object* v_description_5131_; uint8_t v___x_5132_; 
v_value_5130_ = lean_ctor_get(v_d_5104_, 0);
v_description_5131_ = lean_ctor_get(v_d_5104_, 1);
v___x_5132_ = lean_string_dec_eq(v_description_5131_, v___x_5114_);
if (v___x_5132_ == 0)
{
goto v___jp_5128_;
}
else
{
uint32_t v___x_5133_; uint64_t v___x_5134_; lean_object* v___x_5135_; uint32_t v___x_5136_; lean_object* v___x_5137_; 
lean_inc_n(v_value_5130_, 2);
lean_dec_ref_known(v_d_5104_, 2);
v___x_5133_ = 206;
v___x_5134_ = 0ULL;
v___x_5135_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5135_, 0, v_value_5130_);
lean_ctor_set(v___x_5135_, 1, v___x_5114_);
v___x_5136_ = lasm_js_value_handle(v_value_5130_);
lean_dec(v_value_5130_);
v___x_5137_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5133_, v___x_5134_, v___x_5135_, v___x_5136_);
lean_dec_ref_known(v___x_5135_, 2);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; uint8_t v___x_5139_; 
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5138_);
lean_dec_ref_known(v___x_5137_, 1);
v___x_5139_ = lean_string_validate_utf8(v_a_5138_);
if (v___x_5139_ == 0)
{
lean_object* v___x_5140_; lean_object* v___x_5141_; 
lean_dec(v_a_5138_);
v___x_5140_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5141_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5140_);
v_received_5116_ = v___x_5141_;
goto v___jp_5115_;
}
else
{
lean_object* v___x_5142_; 
v___x_5142_ = lean_string_from_utf8_unchecked(v_a_5138_);
v_received_5116_ = v___x_5142_;
goto v___jp_5115_;
}
}
else
{
lean_object* v___x_5143_; 
lean_dec_ref_known(v___x_5137_, 1);
v___x_5143_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5116_ = v___x_5143_;
goto v___jp_5115_;
}
}
}
else
{
goto v___jp_5128_;
}
v___jp_5115_:
{
lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; uint8_t v___x_5126_; 
v___x_5117_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5118_ = lean_string_append(v___x_5117_, v_context_5103_);
v___x_5119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5120_ = lean_string_append(v___x_5118_, v___x_5119_);
v___x_5121_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSTransformStream___closed__0));
v___x_5122_ = lean_string_append(v___x_5120_, v___x_5121_);
v___x_5123_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5124_ = lean_string_append(v___x_5122_, v___x_5123_);
v___x_5125_ = lean_string_append(v___x_5124_, v_received_5116_);
lean_dec_ref(v_received_5116_);
v___x_5126_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5126_ == 0)
{
lean_object* v___x_5127_; 
v___x_5127_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5107_ = v___x_5125_;
v___y_5108_ = v___x_5127_;
goto v___jp_5106_;
}
else
{
v___y_5107_ = v___x_5125_;
v___y_5108_ = v___x_5114_;
goto v___jp_5106_;
}
}
v___jp_5128_:
{
lean_object* v___x_5129_; 
v___x_5129_ = l_Lasm_JS_Data_describe(v_d_5104_);
v_received_5116_ = v___x_5129_;
goto v___jp_5115_;
}
}
v___jp_5106_:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; 
v___x_5109_ = lean_string_append(v___y_5107_, v___y_5108_);
v___x_5110_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5110_, 0, v___x_5109_);
v___x_5111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
return v___x_5111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0___boxed(lean_object* v_context_5144_, lean_object* v_d_5145_, lean_object* v_a_5146_){
_start:
{
lean_object* v_res_5147_; 
v_res_5147_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v_context_5144_, v_d_5145_);
lean_dec_ref(v_context_5144_);
return v_res_5147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(lean_object* v_b_5148_, lean_object* v_args_5149_, uint8_t v_await_5150_){
_start:
{
uint64_t v___y_5153_; uint64_t v___y_5154_; uint64_t v___x_5197_; uint64_t v___y_5199_; 
v___x_5197_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5150_ == 0)
{
uint64_t v___x_5204_; 
v___x_5204_ = 0ULL;
v___y_5199_ = v___x_5204_;
goto v___jp_5198_;
}
else
{
uint64_t v___x_5205_; 
v___x_5205_ = 2ULL;
v___y_5199_ = v___x_5205_;
goto v___jp_5198_;
}
v___jp_5152_:
{
uint64_t v_flags_5155_; uint32_t v___x_5156_; lean_object* v___x_5157_; uint32_t v___x_5158_; lean_object* v___x_5159_; 
v_flags_5155_ = lean_uint64_lor(v___y_5153_, v___y_5154_);
v___x_5156_ = 214;
v___x_5157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5148_, v_args_5149_);
v___x_5158_ = 0;
v___x_5159_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5156_, v_flags_5155_, v___x_5157_, v___x_5158_);
lean_dec(v___x_5157_);
if (lean_obj_tag(v___x_5159_) == 0)
{
if (lean_obj_tag(v___x_5159_) == 0)
{
lean_object* v_a_5160_; lean_object* v___x_5161_; 
v_a_5160_ = lean_ctor_get(v___x_5159_, 0);
lean_inc(v_a_5160_);
lean_dec_ref_known(v___x_5159_, 1);
v___x_5161_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5160_);
lean_dec(v_a_5160_);
if (lean_obj_tag(v___x_5161_) == 0)
{
lean_object* v_a_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; 
v_a_5162_ = lean_ctor_get(v___x_5161_, 0);
lean_inc(v_a_5162_);
lean_dec_ref_known(v___x_5161_, 1);
v___x_5163_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5148_);
v___x_5164_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0_spec__0(v___x_5163_, v_a_5162_);
lean_dec_ref(v___x_5163_);
return v___x_5164_;
}
else
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5172_; 
v_a_5165_ = lean_ctor_get(v___x_5161_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v___x_5161_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5167_ = v___x_5161_;
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5161_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5172_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
return v___x_5170_;
}
}
}
}
else
{
lean_object* v_a_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5180_; 
v_a_5173_ = lean_ctor_get(v___x_5159_, 0);
v_isSharedCheck_5180_ = !lean_is_exclusive(v___x_5159_);
if (v_isSharedCheck_5180_ == 0)
{
v___x_5175_ = v___x_5159_;
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_a_5173_);
lean_dec(v___x_5159_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5178_; 
if (v_isShared_5176_ == 0)
{
lean_ctor_set_tag(v___x_5175_, 1);
v___x_5178_ = v___x_5175_;
goto v_reusejp_5177_;
}
else
{
lean_object* v_reuseFailAlloc_5179_; 
v_reuseFailAlloc_5179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5179_, 0, v_a_5173_);
v___x_5178_ = v_reuseFailAlloc_5179_;
goto v_reusejp_5177_;
}
v_reusejp_5177_:
{
return v___x_5178_;
}
}
}
}
else
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5196_; 
v_a_5181_ = lean_ctor_get(v___x_5159_, 0);
v_isSharedCheck_5196_ = !lean_is_exclusive(v___x_5159_);
if (v_isSharedCheck_5196_ == 0)
{
v___x_5183_ = v___x_5159_;
v_isShared_5184_ = v_isSharedCheck_5196_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v___x_5159_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5196_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5194_; 
v___x_5185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5186_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5148_);
v___x_5187_ = lean_string_append(v___x_5185_, v___x_5186_);
lean_dec_ref(v___x_5186_);
v___x_5188_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5189_ = lean_string_append(v___x_5187_, v___x_5188_);
v___x_5190_ = lean_io_error_to_string(v_a_5181_);
v___x_5191_ = lean_string_append(v___x_5189_, v___x_5190_);
lean_dec_ref(v___x_5190_);
v___x_5192_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5192_, 0, v___x_5191_);
if (v_isShared_5184_ == 0)
{
lean_ctor_set(v___x_5183_, 0, v___x_5192_);
v___x_5194_ = v___x_5183_;
goto v_reusejp_5193_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v___x_5192_);
v___x_5194_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5193_;
}
v_reusejp_5193_:
{
return v___x_5194_;
}
}
}
}
v___jp_5198_:
{
uint8_t v_construct_5200_; uint64_t v___x_5201_; 
v_construct_5200_ = lean_ctor_get_uint8(v_b_5148_, sizeof(void*)*4);
v___x_5201_ = lean_uint64_lor(v___x_5197_, v___y_5199_);
if (v_construct_5200_ == 0)
{
uint64_t v___x_5202_; 
v___x_5202_ = 0ULL;
v___y_5153_ = v___x_5201_;
v___y_5154_ = v___x_5202_;
goto v___jp_5152_;
}
else
{
uint64_t v___x_5203_; 
v___x_5203_ = 4ULL;
v___y_5153_ = v___x_5201_;
v___y_5154_ = v___x_5203_;
goto v___jp_5152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0___boxed(lean_object* v_b_5206_, lean_object* v_args_5207_, lean_object* v_await_5208_, lean_object* v_a_5209_){
_start:
{
uint8_t v_await_boxed_5210_; lean_object* v_res_5211_; 
v_await_boxed_5210_ = lean_unbox(v_await_5208_);
v_res_5211_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v_b_5206_, v_args_5207_, v_await_boxed_5210_);
lean_dec_ref(v_b_5206_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new(lean_object* v_transformer_5220_, lean_object* v_writableStrategy_5221_, lean_object* v_readableStrategy_5222_){
_start:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; uint8_t v___x_5233_; lean_object* v___x_5234_; 
v___x_5224_ = lean_unsigned_to_nat(3u);
v___x_5225_ = ((lean_object*)(l_Lasm_JS_Web_TransformStream_new___closed__2));
v___x_5226_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_writableStrategy_5221_);
v___x_5227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0(v_readableStrategy_5222_);
v___x_5228_ = lean_mk_empty_array_with_capacity(v___x_5224_);
v___x_5229_ = lean_array_push(v___x_5228_, v_transformer_5220_);
v___x_5230_ = lean_array_push(v___x_5229_, v___x_5226_);
v___x_5231_ = lean_array_push(v___x_5230_, v___x_5227_);
v___x_5232_ = l_Lasm_JS_Web_Support_args(v___x_5231_);
v___x_5233_ = 0;
v___x_5234_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_TransformStream_new_spec__0(v___x_5225_, v___x_5232_, v___x_5233_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_new___boxed(lean_object* v_transformer_5235_, lean_object* v_writableStrategy_5236_, lean_object* v_readableStrategy_5237_, lean_object* v_a_5238_){
_start:
{
lean_object* v_res_5239_; 
v_res_5239_ = l_Lasm_JS_Web_TransformStream_new(v_transformer_5235_, v_writableStrategy_5236_, v_readableStrategy_5237_);
return v_res_5239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable(lean_object* v_self_5240_){
_start:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; 
v___x_5242_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__0));
v___x_5243_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5240_, v___x_5242_);
if (lean_obj_tag(v___x_5243_) == 0)
{
lean_object* v_a_5244_; lean_object* v___x_5246_; uint8_t v_isShared_5247_; uint8_t v_isSharedCheck_5251_; 
v_a_5244_ = lean_ctor_get(v___x_5243_, 0);
v_isSharedCheck_5251_ = !lean_is_exclusive(v___x_5243_);
if (v_isSharedCheck_5251_ == 0)
{
v___x_5246_ = v___x_5243_;
v_isShared_5247_ = v_isSharedCheck_5251_;
goto v_resetjp_5245_;
}
else
{
lean_inc(v_a_5244_);
lean_dec(v___x_5243_);
v___x_5246_ = lean_box(0);
v_isShared_5247_ = v_isSharedCheck_5251_;
goto v_resetjp_5245_;
}
v_resetjp_5245_:
{
lean_object* v___x_5249_; 
if (v_isShared_5247_ == 0)
{
v___x_5249_ = v___x_5246_;
goto v_reusejp_5248_;
}
else
{
lean_object* v_reuseFailAlloc_5250_; 
v_reuseFailAlloc_5250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5250_, 0, v_a_5244_);
v___x_5249_ = v_reuseFailAlloc_5250_;
goto v_reusejp_5248_;
}
v_reusejp_5248_:
{
return v___x_5249_;
}
}
}
else
{
lean_object* v_a_5252_; lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5259_; 
v_a_5252_ = lean_ctor_get(v___x_5243_, 0);
v_isSharedCheck_5259_ = !lean_is_exclusive(v___x_5243_);
if (v_isSharedCheck_5259_ == 0)
{
v___x_5254_ = v___x_5243_;
v_isShared_5255_ = v_isSharedCheck_5259_;
goto v_resetjp_5253_;
}
else
{
lean_inc(v_a_5252_);
lean_dec(v___x_5243_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5259_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v___x_5257_; 
if (v_isShared_5255_ == 0)
{
v___x_5257_ = v___x_5254_;
goto v_reusejp_5256_;
}
else
{
lean_object* v_reuseFailAlloc_5258_; 
v_reuseFailAlloc_5258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5258_, 0, v_a_5252_);
v___x_5257_ = v_reuseFailAlloc_5258_;
goto v_reusejp_5256_;
}
v_reusejp_5256_:
{
return v___x_5257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_readable___boxed(lean_object* v_self_5260_, lean_object* v_a_5261_){
_start:
{
lean_object* v_res_5262_; 
v_res_5262_ = l_Lasm_JS_Web_TransformStream_readable(v_self_5260_);
return v_res_5262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable(lean_object* v_self_5263_){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; 
v___x_5265_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableWritablePair___lam__0___closed__1));
v___x_5266_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5263_, v___x_5265_);
if (lean_obj_tag(v___x_5266_) == 0)
{
lean_object* v_a_5267_; lean_object* v___x_5269_; uint8_t v_isShared_5270_; uint8_t v_isSharedCheck_5274_; 
v_a_5267_ = lean_ctor_get(v___x_5266_, 0);
v_isSharedCheck_5274_ = !lean_is_exclusive(v___x_5266_);
if (v_isSharedCheck_5274_ == 0)
{
v___x_5269_ = v___x_5266_;
v_isShared_5270_ = v_isSharedCheck_5274_;
goto v_resetjp_5268_;
}
else
{
lean_inc(v_a_5267_);
lean_dec(v___x_5266_);
v___x_5269_ = lean_box(0);
v_isShared_5270_ = v_isSharedCheck_5274_;
goto v_resetjp_5268_;
}
v_resetjp_5268_:
{
lean_object* v___x_5272_; 
if (v_isShared_5270_ == 0)
{
v___x_5272_ = v___x_5269_;
goto v_reusejp_5271_;
}
else
{
lean_object* v_reuseFailAlloc_5273_; 
v_reuseFailAlloc_5273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5273_, 0, v_a_5267_);
v___x_5272_ = v_reuseFailAlloc_5273_;
goto v_reusejp_5271_;
}
v_reusejp_5271_:
{
return v___x_5272_;
}
}
}
else
{
lean_object* v_a_5275_; lean_object* v___x_5277_; uint8_t v_isShared_5278_; uint8_t v_isSharedCheck_5282_; 
v_a_5275_ = lean_ctor_get(v___x_5266_, 0);
v_isSharedCheck_5282_ = !lean_is_exclusive(v___x_5266_);
if (v_isSharedCheck_5282_ == 0)
{
v___x_5277_ = v___x_5266_;
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
else
{
lean_inc(v_a_5275_);
lean_dec(v___x_5266_);
v___x_5277_ = lean_box(0);
v_isShared_5278_ = v_isSharedCheck_5282_;
goto v_resetjp_5276_;
}
v_resetjp_5276_:
{
lean_object* v___x_5280_; 
if (v_isShared_5278_ == 0)
{
v___x_5280_ = v___x_5277_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5281_; 
v_reuseFailAlloc_5281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5281_, 0, v_a_5275_);
v___x_5280_ = v_reuseFailAlloc_5281_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
return v___x_5280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStream_writable___boxed(lean_object* v_self_5283_, lean_object* v_a_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lasm_JS_Web_TransformStream_writable(v_self_5283_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(lean_object* v_self_5286_){
_start:
{
lean_object* v___x_5288_; lean_object* v___x_5289_; 
v___x_5288_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_desiredSize___closed__0));
v___x_5289_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0(v_self_5286_, v___x_5288_);
return v___x_5289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize___boxed(lean_object* v_self_5290_, lean_object* v_a_5291_){
_start:
{
lean_object* v_res_5292_; 
v_res_5292_ = l_Lasm_JS_Web_TransformStreamDefaultController_desiredSize(v_self_5290_);
return v_res_5292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(lean_object* v_self_5293_, lean_object* v_chunk_5294_){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; 
v___x_5296_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_enqueue___closed__0));
v___x_5297_ = lean_unsigned_to_nat(1u);
v___x_5298_ = lean_mk_empty_array_with_capacity(v___x_5297_);
v___x_5299_ = lean_array_push(v___x_5298_, v_chunk_5294_);
v___x_5300_ = l_Lasm_JS_Web_Support_args(v___x_5299_);
v___x_5301_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5293_, v___x_5296_, v___x_5300_);
return v___x_5301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_enqueue___boxed(lean_object* v_self_5302_, lean_object* v_chunk_5303_, lean_object* v_a_5304_){
_start:
{
lean_object* v_res_5305_; 
v_res_5305_ = l_Lasm_JS_Web_TransformStreamDefaultController_enqueue(v_self_5302_, v_chunk_5303_);
return v_res_5305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error(lean_object* v_self_5306_, lean_object* v_reason_5307_){
_start:
{
lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; 
v___x_5309_ = ((lean_object*)(l_Lasm_JS_Web_ReadableStreamDefaultController_error___closed__0));
v___x_5310_ = lean_unsigned_to_nat(1u);
v___x_5311_ = lean_mk_empty_array_with_capacity(v___x_5310_);
v___x_5312_ = lean_array_push(v___x_5311_, v_reason_5307_);
v___x_5313_ = l_Lasm_JS_Web_Support_args(v___x_5312_);
v___x_5314_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5306_, v___x_5309_, v___x_5313_);
return v___x_5314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_error___boxed(lean_object* v_self_5315_, lean_object* v_reason_5316_, lean_object* v_a_5317_){
_start:
{
lean_object* v_res_5318_; 
v_res_5318_ = l_Lasm_JS_Web_TransformStreamDefaultController_error(v_self_5315_, v_reason_5316_);
return v_res_5318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate(lean_object* v_self_5320_){
_start:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5322_ = ((lean_object*)(l_Lasm_JS_Web_TransformStreamDefaultController_terminate___closed__0));
v___x_5323_ = lean_obj_once(&l_Lasm_JS_Web_ReadableStream_tee___closed__2, &l_Lasm_JS_Web_ReadableStream_tee___closed__2_once, _init_l_Lasm_JS_Web_ReadableStream_tee___closed__2);
v___x_5324_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5320_, v___x_5322_, v___x_5323_);
return v___x_5324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TransformStreamDefaultController_terminate___boxed(lean_object* v_self_5325_, lean_object* v_a_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l_Lasm_JS_Web_TransformStreamDefaultController_terminate(v_self_5325_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5328_, lean_object* v_d_5329_){
_start:
{
lean_object* v___y_5332_; lean_object* v___y_5333_; 
if (lean_obj_tag(v_d_5329_) == 9)
{
lean_object* v_value_5337_; lean_object* v___x_5338_; 
v_value_5337_ = lean_ctor_get(v_d_5329_, 0);
lean_inc(v_value_5337_);
lean_dec_ref_known(v_d_5329_, 2);
v___x_5338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5338_, 0, v_value_5337_);
return v___x_5338_;
}
else
{
lean_object* v___x_5339_; lean_object* v_received_5341_; 
v___x_5339_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5329_) == 9)
{
lean_object* v_value_5355_; lean_object* v_description_5356_; uint8_t v___x_5357_; 
v_value_5355_ = lean_ctor_get(v_d_5329_, 0);
v_description_5356_ = lean_ctor_get(v_d_5329_, 1);
v___x_5357_ = lean_string_dec_eq(v_description_5356_, v___x_5339_);
if (v___x_5357_ == 0)
{
goto v___jp_5353_;
}
else
{
uint32_t v___x_5358_; uint64_t v___x_5359_; lean_object* v___x_5360_; uint32_t v___x_5361_; lean_object* v___x_5362_; 
lean_inc_n(v_value_5355_, 2);
lean_dec_ref_known(v_d_5329_, 2);
v___x_5358_ = 206;
v___x_5359_ = 0ULL;
v___x_5360_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5360_, 0, v_value_5355_);
lean_ctor_set(v___x_5360_, 1, v___x_5339_);
v___x_5361_ = lasm_js_value_handle(v_value_5355_);
lean_dec(v_value_5355_);
v___x_5362_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5358_, v___x_5359_, v___x_5360_, v___x_5361_);
lean_dec_ref_known(v___x_5360_, 2);
if (lean_obj_tag(v___x_5362_) == 0)
{
lean_object* v_a_5363_; uint8_t v___x_5364_; 
v_a_5363_ = lean_ctor_get(v___x_5362_, 0);
lean_inc(v_a_5363_);
lean_dec_ref_known(v___x_5362_, 1);
v___x_5364_ = lean_string_validate_utf8(v_a_5363_);
if (v___x_5364_ == 0)
{
lean_object* v___x_5365_; lean_object* v___x_5366_; 
lean_dec(v_a_5363_);
v___x_5365_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5366_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5365_);
v_received_5341_ = v___x_5366_;
goto v___jp_5340_;
}
else
{
lean_object* v___x_5367_; 
v___x_5367_ = lean_string_from_utf8_unchecked(v_a_5363_);
v_received_5341_ = v___x_5367_;
goto v___jp_5340_;
}
}
else
{
lean_object* v___x_5368_; 
lean_dec_ref_known(v___x_5362_, 1);
v___x_5368_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5341_ = v___x_5368_;
goto v___jp_5340_;
}
}
}
else
{
goto v___jp_5353_;
}
v___jp_5340_:
{
lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; uint8_t v___x_5351_; 
v___x_5342_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5343_ = lean_string_append(v___x_5342_, v_context_5328_);
v___x_5344_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5345_ = lean_string_append(v___x_5343_, v___x_5344_);
v___x_5346_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSByteLengthQueuingStrategy___closed__0));
v___x_5347_ = lean_string_append(v___x_5345_, v___x_5346_);
v___x_5348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5349_ = lean_string_append(v___x_5347_, v___x_5348_);
v___x_5350_ = lean_string_append(v___x_5349_, v_received_5341_);
lean_dec_ref(v_received_5341_);
v___x_5351_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5351_ == 0)
{
lean_object* v___x_5352_; 
v___x_5352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5332_ = v___x_5350_;
v___y_5333_ = v___x_5352_;
goto v___jp_5331_;
}
else
{
v___y_5332_ = v___x_5350_;
v___y_5333_ = v___x_5339_;
goto v___jp_5331_;
}
}
v___jp_5353_:
{
lean_object* v___x_5354_; 
v___x_5354_ = l_Lasm_JS_Data_describe(v_d_5329_);
v_received_5341_ = v___x_5354_;
goto v___jp_5340_;
}
}
v___jp_5331_:
{
lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5334_ = lean_string_append(v___y_5332_, v___y_5333_);
v___x_5335_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5335_, 0, v___x_5334_);
v___x_5336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5336_, 0, v___x_5335_);
return v___x_5336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5369_, lean_object* v_d_5370_, lean_object* v_a_5371_){
_start:
{
lean_object* v_res_5372_; 
v_res_5372_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v_context_5369_, v_d_5370_);
lean_dec_ref(v_context_5369_);
return v_res_5372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(lean_object* v_b_5373_, lean_object* v_args_5374_, uint8_t v_await_5375_){
_start:
{
uint64_t v___y_5378_; uint64_t v___y_5379_; uint64_t v___x_5422_; uint64_t v___y_5424_; 
v___x_5422_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5375_ == 0)
{
uint64_t v___x_5429_; 
v___x_5429_ = 0ULL;
v___y_5424_ = v___x_5429_;
goto v___jp_5423_;
}
else
{
uint64_t v___x_5430_; 
v___x_5430_ = 2ULL;
v___y_5424_ = v___x_5430_;
goto v___jp_5423_;
}
v___jp_5377_:
{
uint64_t v_flags_5380_; uint32_t v___x_5381_; lean_object* v___x_5382_; uint32_t v___x_5383_; lean_object* v___x_5384_; 
v_flags_5380_ = lean_uint64_lor(v___y_5378_, v___y_5379_);
v___x_5381_ = 214;
v___x_5382_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5373_, v_args_5374_);
v___x_5383_ = 0;
v___x_5384_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5381_, v_flags_5380_, v___x_5382_, v___x_5383_);
lean_dec(v___x_5382_);
if (lean_obj_tag(v___x_5384_) == 0)
{
if (lean_obj_tag(v___x_5384_) == 0)
{
lean_object* v_a_5385_; lean_object* v___x_5386_; 
v_a_5385_ = lean_ctor_get(v___x_5384_, 0);
lean_inc(v_a_5385_);
lean_dec_ref_known(v___x_5384_, 1);
v___x_5386_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5385_);
lean_dec(v_a_5385_);
if (lean_obj_tag(v___x_5386_) == 0)
{
lean_object* v_a_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v_a_5387_ = lean_ctor_get(v___x_5386_, 0);
lean_inc(v_a_5387_);
lean_dec_ref_known(v___x_5386_, 1);
v___x_5388_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5373_);
v___x_5389_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0_spec__0(v___x_5388_, v_a_5387_);
lean_dec_ref(v___x_5388_);
return v___x_5389_;
}
else
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
v_a_5390_ = lean_ctor_get(v___x_5386_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5386_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v___x_5386_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5386_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v_a_5390_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
return v___x_5395_;
}
}
}
}
else
{
lean_object* v_a_5398_; lean_object* v___x_5400_; uint8_t v_isShared_5401_; uint8_t v_isSharedCheck_5405_; 
v_a_5398_ = lean_ctor_get(v___x_5384_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v___x_5384_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5400_ = v___x_5384_;
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
else
{
lean_inc(v_a_5398_);
lean_dec(v___x_5384_);
v___x_5400_ = lean_box(0);
v_isShared_5401_ = v_isSharedCheck_5405_;
goto v_resetjp_5399_;
}
v_resetjp_5399_:
{
lean_object* v___x_5403_; 
if (v_isShared_5401_ == 0)
{
lean_ctor_set_tag(v___x_5400_, 1);
v___x_5403_ = v___x_5400_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_a_5398_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
return v___x_5403_;
}
}
}
}
else
{
lean_object* v_a_5406_; lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5421_; 
v_a_5406_ = lean_ctor_get(v___x_5384_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5384_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5408_ = v___x_5384_;
v_isShared_5409_ = v_isSharedCheck_5421_;
goto v_resetjp_5407_;
}
else
{
lean_inc(v_a_5406_);
lean_dec(v___x_5384_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5421_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5419_; 
v___x_5410_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5411_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5373_);
v___x_5412_ = lean_string_append(v___x_5410_, v___x_5411_);
lean_dec_ref(v___x_5411_);
v___x_5413_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5414_ = lean_string_append(v___x_5412_, v___x_5413_);
v___x_5415_ = lean_io_error_to_string(v_a_5406_);
v___x_5416_ = lean_string_append(v___x_5414_, v___x_5415_);
lean_dec_ref(v___x_5415_);
v___x_5417_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5417_, 0, v___x_5416_);
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 0, v___x_5417_);
v___x_5419_ = v___x_5408_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v___x_5417_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
return v___x_5419_;
}
}
}
}
v___jp_5423_:
{
uint8_t v_construct_5425_; uint64_t v___x_5426_; 
v_construct_5425_ = lean_ctor_get_uint8(v_b_5373_, sizeof(void*)*4);
v___x_5426_ = lean_uint64_lor(v___x_5422_, v___y_5424_);
if (v_construct_5425_ == 0)
{
uint64_t v___x_5427_; 
v___x_5427_ = 0ULL;
v___y_5378_ = v___x_5426_;
v___y_5379_ = v___x_5427_;
goto v___jp_5377_;
}
else
{
uint64_t v___x_5428_; 
v___x_5428_ = 4ULL;
v___y_5378_ = v___x_5426_;
v___y_5379_ = v___x_5428_;
goto v___jp_5377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5431_, lean_object* v_args_5432_, lean_object* v_await_5433_, lean_object* v_a_5434_){
_start:
{
uint8_t v_await_boxed_5435_; lean_object* v_res_5436_; 
v_await_boxed_5435_ = lean_unbox(v_await_5433_);
v_res_5436_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v_b_5431_, v_args_5432_, v_await_boxed_5435_);
lean_dec_ref(v_b_5431_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(double v_init_5445_){
_start:
{
lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; uint8_t v___x_5457_; lean_object* v___x_5458_; 
v___x_5447_ = lean_unsigned_to_nat(1u);
v___x_5448_ = ((lean_object*)(l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___closed__2));
v___x_5449_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5450_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5450_, 0, v_init_5445_);
v___x_5451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5449_);
lean_ctor_set(v___x_5451_, 1, v___x_5450_);
v___x_5452_ = lean_mk_empty_array_with_capacity(v___x_5447_);
lean_inc_ref(v___x_5452_);
v___x_5453_ = lean_array_push(v___x_5452_, v___x_5451_);
v___x_5454_ = l_Lasm_JS_Web_Support_fields(v___x_5453_);
lean_dec_ref(v___x_5453_);
v___x_5455_ = lean_array_push(v___x_5452_, v___x_5454_);
v___x_5456_ = l_Lasm_JS_Web_Support_args(v___x_5455_);
v___x_5457_ = 0;
v___x_5458_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_new_spec__0(v___x_5448_, v___x_5456_, v___x_5457_);
return v___x_5458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_new___boxed(lean_object* v_init_5459_, lean_object* v_a_5460_){
_start:
{
double v_init_boxed_5461_; lean_object* v_res_5462_; 
v_init_boxed_5461_ = lean_unbox_float(v_init_5459_);
lean_dec_ref(v_init_5459_);
v_res_5462_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_new(v_init_boxed_5461_);
return v_res_5462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(lean_object* v_self_5463_){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5465_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5466_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5463_, v___x_5465_);
return v___x_5466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5467_, lean_object* v_a_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_highWaterMark(v_self_5467_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(lean_object* v_context_5470_, lean_object* v_d_5471_){
_start:
{
lean_object* v___y_5474_; lean_object* v___y_5475_; 
if (lean_obj_tag(v_d_5471_) == 9)
{
lean_object* v_value_5479_; lean_object* v___x_5480_; 
v_value_5479_ = lean_ctor_get(v_d_5471_, 0);
lean_inc(v_value_5479_);
lean_dec_ref_known(v_d_5471_, 2);
v___x_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5480_, 0, v_value_5479_);
return v___x_5480_;
}
else
{
lean_object* v___x_5481_; lean_object* v_received_5483_; 
v___x_5481_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5471_) == 9)
{
lean_object* v_value_5497_; lean_object* v_description_5498_; uint8_t v___x_5499_; 
v_value_5497_ = lean_ctor_get(v_d_5471_, 0);
v_description_5498_ = lean_ctor_get(v_d_5471_, 1);
v___x_5499_ = lean_string_dec_eq(v_description_5498_, v___x_5481_);
if (v___x_5499_ == 0)
{
goto v___jp_5495_;
}
else
{
uint32_t v___x_5500_; uint64_t v___x_5501_; lean_object* v___x_5502_; uint32_t v___x_5503_; lean_object* v___x_5504_; 
lean_inc_n(v_value_5497_, 2);
lean_dec_ref_known(v_d_5471_, 2);
v___x_5500_ = 206;
v___x_5501_ = 0ULL;
v___x_5502_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5502_, 0, v_value_5497_);
lean_ctor_set(v___x_5502_, 1, v___x_5481_);
v___x_5503_ = lasm_js_value_handle(v_value_5497_);
lean_dec(v_value_5497_);
v___x_5504_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5500_, v___x_5501_, v___x_5502_, v___x_5503_);
lean_dec_ref_known(v___x_5502_, 2);
if (lean_obj_tag(v___x_5504_) == 0)
{
lean_object* v_a_5505_; uint8_t v___x_5506_; 
v_a_5505_ = lean_ctor_get(v___x_5504_, 0);
lean_inc(v_a_5505_);
lean_dec_ref_known(v___x_5504_, 1);
v___x_5506_ = lean_string_validate_utf8(v_a_5505_);
if (v___x_5506_ == 0)
{
lean_object* v___x_5507_; lean_object* v___x_5508_; 
lean_dec(v_a_5505_);
v___x_5507_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5508_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5507_);
v_received_5483_ = v___x_5508_;
goto v___jp_5482_;
}
else
{
lean_object* v___x_5509_; 
v___x_5509_ = lean_string_from_utf8_unchecked(v_a_5505_);
v_received_5483_ = v___x_5509_;
goto v___jp_5482_;
}
}
else
{
lean_object* v___x_5510_; 
lean_dec_ref_known(v___x_5504_, 1);
v___x_5510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5483_ = v___x_5510_;
goto v___jp_5482_;
}
}
}
else
{
goto v___jp_5495_;
}
v___jp_5482_:
{
lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; uint8_t v___x_5493_; 
v___x_5484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5485_ = lean_string_append(v___x_5484_, v_context_5470_);
v___x_5486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5487_ = lean_string_append(v___x_5485_, v___x_5486_);
v___x_5488_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSJSFunction___closed__0));
v___x_5489_ = lean_string_append(v___x_5487_, v___x_5488_);
v___x_5490_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5491_ = lean_string_append(v___x_5489_, v___x_5490_);
v___x_5492_ = lean_string_append(v___x_5491_, v_received_5483_);
lean_dec_ref(v_received_5483_);
v___x_5493_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5493_ == 0)
{
lean_object* v___x_5494_; 
v___x_5494_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5474_ = v___x_5492_;
v___y_5475_ = v___x_5494_;
goto v___jp_5473_;
}
else
{
v___y_5474_ = v___x_5492_;
v___y_5475_ = v___x_5481_;
goto v___jp_5473_;
}
}
v___jp_5495_:
{
lean_object* v___x_5496_; 
v___x_5496_ = l_Lasm_JS_Data_describe(v_d_5471_);
v_received_5483_ = v___x_5496_;
goto v___jp_5482_;
}
}
v___jp_5473_:
{
lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; 
v___x_5476_ = lean_string_append(v___y_5474_, v___y_5475_);
v___x_5477_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5477_, 0, v___x_5476_);
v___x_5478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5478_, 0, v___x_5477_);
return v___x_5478_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5511_, lean_object* v_d_5512_, lean_object* v_a_5513_){
_start:
{
lean_object* v_res_5514_; 
v_res_5514_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5511_, v_d_5512_);
lean_dec_ref(v_context_5511_);
return v_res_5514_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(lean_object* v_context_5515_, lean_object* v_bytes_5516_){
_start:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5516_);
if (lean_obj_tag(v___x_5518_) == 0)
{
lean_object* v_a_5519_; lean_object* v___x_5520_; 
v_a_5519_ = lean_ctor_get(v___x_5518_, 0);
lean_inc(v_a_5519_);
lean_dec_ref_known(v___x_5518_, 1);
v___x_5520_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0_spec__1(v_context_5515_, v_a_5519_);
return v___x_5520_;
}
else
{
lean_object* v_a_5521_; lean_object* v___x_5523_; uint8_t v_isShared_5524_; uint8_t v_isSharedCheck_5528_; 
v_a_5521_ = lean_ctor_get(v___x_5518_, 0);
v_isSharedCheck_5528_ = !lean_is_exclusive(v___x_5518_);
if (v_isSharedCheck_5528_ == 0)
{
v___x_5523_ = v___x_5518_;
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
else
{
lean_inc(v_a_5521_);
lean_dec(v___x_5518_);
v___x_5523_ = lean_box(0);
v_isShared_5524_ = v_isSharedCheck_5528_;
goto v_resetjp_5522_;
}
v_resetjp_5522_:
{
lean_object* v___x_5526_; 
if (v_isShared_5524_ == 0)
{
v___x_5526_ = v___x_5523_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v_a_5521_);
v___x_5526_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
return v___x_5526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0___boxed(lean_object* v_context_5529_, lean_object* v_bytes_5530_, lean_object* v_a_5531_){
_start:
{
lean_object* v_res_5532_; 
v_res_5532_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v_context_5529_, v_bytes_5530_);
lean_dec_ref(v_bytes_5530_);
lean_dec_ref(v_context_5529_);
return v_res_5532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(lean_object* v_o_5533_, lean_object* v_key_5534_){
_start:
{
lean_object* v_k_5536_; lean_object* v___x_5537_; 
v_k_5536_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5536_, 0, v_key_5534_);
v___x_5537_ = l_Lasm_JS_Wire_encodeIO(v_k_5536_);
if (lean_obj_tag(v___x_5537_) == 0)
{
lean_object* v_a_5538_; uint32_t v___x_5539_; uint32_t v___x_5540_; uint64_t v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; 
v_a_5538_ = lean_ctor_get(v___x_5537_, 0);
lean_inc(v_a_5538_);
lean_dec_ref_known(v___x_5537_, 1);
v___x_5539_ = 203;
v___x_5540_ = lasm_js_value_handle(v_o_5533_);
v___x_5541_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
v___x_5542_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
v___x_5543_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5543_, 0, v_o_5533_);
lean_ctor_set(v___x_5543_, 1, v___x_5542_);
v___x_5544_ = lean_unsigned_to_nat(2u);
v___x_5545_ = lean_mk_empty_array_with_capacity(v___x_5544_);
lean_inc_ref(v_k_5536_);
v___x_5546_ = lean_array_push(v___x_5545_, v_k_5536_);
v___x_5547_ = lean_array_push(v___x_5546_, v___x_5543_);
v___x_5548_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5548_, 0, v___x_5547_);
v___x_5549_ = lasm_js_call(v___x_5539_, v___x_5540_, v___x_5541_, v_a_5538_, v___x_5548_);
lean_dec_ref_known(v___x_5548_, 1);
lean_dec(v_a_5538_);
if (lean_obj_tag(v___x_5549_) == 0)
{
lean_object* v_a_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; 
v_a_5550_ = lean_ctor_get(v___x_5549_, 0);
lean_inc(v_a_5550_);
lean_dec_ref_known(v___x_5549_, 1);
v___x_5551_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0___closed__0));
v___x_5552_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5536_);
v___x_5553_ = lean_string_append(v___x_5551_, v___x_5552_);
lean_dec_ref(v___x_5552_);
v___x_5554_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0_spec__0(v___x_5553_, v_a_5550_);
lean_dec(v_a_5550_);
lean_dec_ref(v___x_5553_);
return v___x_5554_;
}
else
{
lean_object* v_a_5555_; lean_object* v___x_5557_; uint8_t v_isShared_5558_; uint8_t v_isSharedCheck_5562_; 
lean_dec_ref_known(v_k_5536_, 1);
v_a_5555_ = lean_ctor_get(v___x_5549_, 0);
v_isSharedCheck_5562_ = !lean_is_exclusive(v___x_5549_);
if (v_isSharedCheck_5562_ == 0)
{
v___x_5557_ = v___x_5549_;
v_isShared_5558_ = v_isSharedCheck_5562_;
goto v_resetjp_5556_;
}
else
{
lean_inc(v_a_5555_);
lean_dec(v___x_5549_);
v___x_5557_ = lean_box(0);
v_isShared_5558_ = v_isSharedCheck_5562_;
goto v_resetjp_5556_;
}
v_resetjp_5556_:
{
lean_object* v___x_5560_; 
if (v_isShared_5558_ == 0)
{
v___x_5560_ = v___x_5557_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v_a_5555_);
v___x_5560_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
return v___x_5560_;
}
}
}
}
else
{
lean_object* v_a_5563_; lean_object* v___x_5565_; uint8_t v_isShared_5566_; uint8_t v_isSharedCheck_5570_; 
lean_dec_ref_known(v_k_5536_, 1);
lean_dec(v_o_5533_);
v_a_5563_ = lean_ctor_get(v___x_5537_, 0);
v_isSharedCheck_5570_ = !lean_is_exclusive(v___x_5537_);
if (v_isSharedCheck_5570_ == 0)
{
v___x_5565_ = v___x_5537_;
v_isShared_5566_ = v_isSharedCheck_5570_;
goto v_resetjp_5564_;
}
else
{
lean_inc(v_a_5563_);
lean_dec(v___x_5537_);
v___x_5565_ = lean_box(0);
v_isShared_5566_ = v_isSharedCheck_5570_;
goto v_resetjp_5564_;
}
v_resetjp_5564_:
{
lean_object* v___x_5568_; 
if (v_isShared_5566_ == 0)
{
v___x_5568_ = v___x_5565_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5569_; 
v_reuseFailAlloc_5569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5569_, 0, v_a_5563_);
v___x_5568_ = v_reuseFailAlloc_5569_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
return v___x_5568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0___boxed(lean_object* v_o_5571_, lean_object* v_key_5572_, lean_object* v_a_5573_){
_start:
{
lean_object* v_res_5574_; 
v_res_5574_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_o_5571_, v_key_5572_);
return v_res_5574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(lean_object* v_self_5575_){
_start:
{
lean_object* v___x_5577_; lean_object* v___x_5578_; 
v___x_5577_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5578_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5575_, v___x_5577_);
return v___x_5578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_ByteLengthQueuingStrategy_size___boxed(lean_object* v_self_5579_, lean_object* v_a_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l_Lasm_JS_Web_ByteLengthQueuingStrategy_size(v_self_5579_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(lean_object* v_context_5582_, lean_object* v_d_5583_){
_start:
{
lean_object* v___y_5586_; lean_object* v___y_5587_; 
if (lean_obj_tag(v_d_5583_) == 9)
{
lean_object* v_value_5591_; lean_object* v___x_5592_; 
v_value_5591_ = lean_ctor_get(v_d_5583_, 0);
lean_inc(v_value_5591_);
lean_dec_ref_known(v_d_5583_, 2);
v___x_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5592_, 0, v_value_5591_);
return v___x_5592_;
}
else
{
lean_object* v___x_5593_; lean_object* v_received_5595_; 
v___x_5593_ = ((lean_object*)(l_Lasm_JS_Web_instToJSReadableStream___lam__0___closed__0));
if (lean_obj_tag(v_d_5583_) == 9)
{
lean_object* v_value_5609_; lean_object* v_description_5610_; uint8_t v___x_5611_; 
v_value_5609_ = lean_ctor_get(v_d_5583_, 0);
v_description_5610_ = lean_ctor_get(v_d_5583_, 1);
v___x_5611_ = lean_string_dec_eq(v_description_5610_, v___x_5593_);
if (v___x_5611_ == 0)
{
goto v___jp_5607_;
}
else
{
uint32_t v___x_5612_; uint64_t v___x_5613_; lean_object* v___x_5614_; uint32_t v___x_5615_; lean_object* v___x_5616_; 
lean_inc_n(v_value_5609_, 2);
lean_dec_ref_known(v_d_5583_, 2);
v___x_5612_ = 206;
v___x_5613_ = 0ULL;
v___x_5614_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5614_, 0, v_value_5609_);
lean_ctor_set(v___x_5614_, 1, v___x_5593_);
v___x_5615_ = lasm_js_value_handle(v_value_5609_);
lean_dec(v_value_5609_);
v___x_5616_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5612_, v___x_5613_, v___x_5614_, v___x_5615_);
lean_dec_ref_known(v___x_5614_, 2);
if (lean_obj_tag(v___x_5616_) == 0)
{
lean_object* v_a_5617_; uint8_t v___x_5618_; 
v_a_5617_ = lean_ctor_get(v___x_5616_, 0);
lean_inc(v_a_5617_);
lean_dec_ref_known(v___x_5616_, 1);
v___x_5618_ = lean_string_validate_utf8(v_a_5617_);
if (v___x_5618_ == 0)
{
lean_object* v___x_5619_; lean_object* v___x_5620_; 
lean_dec(v_a_5617_);
v___x_5619_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5620_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5619_);
v_received_5595_ = v___x_5620_;
goto v___jp_5594_;
}
else
{
lean_object* v___x_5621_; 
v___x_5621_ = lean_string_from_utf8_unchecked(v_a_5617_);
v_received_5595_ = v___x_5621_;
goto v___jp_5594_;
}
}
else
{
lean_object* v___x_5622_; 
lean_dec_ref_known(v___x_5616_, 1);
v___x_5622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__10));
v_received_5595_ = v___x_5622_;
goto v___jp_5594_;
}
}
}
else
{
goto v___jp_5607_;
}
v___jp_5594_:
{
lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; uint8_t v___x_5605_; 
v___x_5596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5597_ = lean_string_append(v___x_5596_, v_context_5582_);
v___x_5598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5599_ = lean_string_append(v___x_5597_, v___x_5598_);
v___x_5600_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSCountQueuingStrategy___closed__0));
v___x_5601_ = lean_string_append(v___x_5599_, v___x_5600_);
v___x_5602_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5603_ = lean_string_append(v___x_5601_, v___x_5602_);
v___x_5604_ = lean_string_append(v___x_5603_, v_received_5595_);
lean_dec_ref(v_received_5595_);
v___x_5605_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_5605_ == 0)
{
lean_object* v___x_5606_; 
v___x_5606_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__5));
v___y_5586_ = v___x_5604_;
v___y_5587_ = v___x_5606_;
goto v___jp_5585_;
}
else
{
v___y_5586_ = v___x_5604_;
v___y_5587_ = v___x_5593_;
goto v___jp_5585_;
}
}
v___jp_5607_:
{
lean_object* v___x_5608_; 
v___x_5608_ = l_Lasm_JS_Data_describe(v_d_5583_);
v_received_5595_ = v___x_5608_;
goto v___jp_5594_;
}
}
v___jp_5585_:
{
lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; 
v___x_5588_ = lean_string_append(v___y_5586_, v___y_5587_);
v___x_5589_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5589_, 0, v___x_5588_);
v___x_5590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5590_, 0, v___x_5589_);
return v___x_5590_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0___boxed(lean_object* v_context_5623_, lean_object* v_d_5624_, lean_object* v_a_5625_){
_start:
{
lean_object* v_res_5626_; 
v_res_5626_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v_context_5623_, v_d_5624_);
lean_dec_ref(v_context_5623_);
return v_res_5626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(lean_object* v_b_5627_, lean_object* v_args_5628_, uint8_t v_await_5629_){
_start:
{
uint64_t v___y_5632_; uint64_t v___y_5633_; uint64_t v___x_5676_; uint64_t v___y_5678_; 
v___x_5676_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__1);
if (v_await_5629_ == 0)
{
uint64_t v___x_5683_; 
v___x_5683_ = 0ULL;
v___y_5678_ = v___x_5683_;
goto v___jp_5677_;
}
else
{
uint64_t v___x_5684_; 
v___x_5684_ = 2ULL;
v___y_5678_ = v___x_5684_;
goto v___jp_5677_;
}
v___jp_5631_:
{
uint64_t v_flags_5634_; uint32_t v___x_5635_; lean_object* v___x_5636_; uint32_t v___x_5637_; lean_object* v___x_5638_; 
v_flags_5634_ = lean_uint64_lor(v___y_5632_, v___y_5633_);
v___x_5635_ = 214;
v___x_5636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5627_, v_args_5628_);
v___x_5637_ = 0;
v___x_5638_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5635_, v_flags_5634_, v___x_5636_, v___x_5637_);
lean_dec(v___x_5636_);
if (lean_obj_tag(v___x_5638_) == 0)
{
if (lean_obj_tag(v___x_5638_) == 0)
{
lean_object* v_a_5639_; lean_object* v___x_5640_; 
v_a_5639_ = lean_ctor_get(v___x_5638_, 0);
lean_inc(v_a_5639_);
lean_dec_ref_known(v___x_5638_, 1);
v___x_5640_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5639_);
lean_dec(v_a_5639_);
if (lean_obj_tag(v___x_5640_) == 0)
{
lean_object* v_a_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v_a_5641_ = lean_ctor_get(v___x_5640_, 0);
lean_inc(v_a_5641_);
lean_dec_ref_known(v___x_5640_, 1);
v___x_5642_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5627_);
v___x_5643_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0_spec__0(v___x_5642_, v_a_5641_);
lean_dec_ref(v___x_5642_);
return v___x_5643_;
}
else
{
lean_object* v_a_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5651_; 
v_a_5644_ = lean_ctor_get(v___x_5640_, 0);
v_isSharedCheck_5651_ = !lean_is_exclusive(v___x_5640_);
if (v_isSharedCheck_5651_ == 0)
{
v___x_5646_ = v___x_5640_;
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_a_5644_);
lean_dec(v___x_5640_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5649_; 
if (v_isShared_5647_ == 0)
{
v___x_5649_ = v___x_5646_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v_a_5644_);
v___x_5649_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
return v___x_5649_;
}
}
}
}
else
{
lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5659_; 
v_a_5652_ = lean_ctor_get(v___x_5638_, 0);
v_isSharedCheck_5659_ = !lean_is_exclusive(v___x_5638_);
if (v_isSharedCheck_5659_ == 0)
{
v___x_5654_ = v___x_5638_;
v_isShared_5655_ = v_isSharedCheck_5659_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v___x_5638_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5659_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___x_5657_; 
if (v_isShared_5655_ == 0)
{
lean_ctor_set_tag(v___x_5654_, 1);
v___x_5657_ = v___x_5654_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_a_5652_);
v___x_5657_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
return v___x_5657_;
}
}
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5662_; uint8_t v_isShared_5663_; uint8_t v_isSharedCheck_5675_; 
v_a_5660_ = lean_ctor_get(v___x_5638_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5638_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5662_ = v___x_5638_;
v_isShared_5663_ = v_isSharedCheck_5675_;
goto v_resetjp_5661_;
}
else
{
lean_inc(v_a_5660_);
lean_dec(v___x_5638_);
v___x_5662_ = lean_box(0);
v_isShared_5663_ = v_isSharedCheck_5675_;
goto v_resetjp_5661_;
}
v_resetjp_5661_:
{
lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5673_; 
v___x_5664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_UnderlyingSinkStartCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5665_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5627_);
v___x_5666_ = lean_string_append(v___x_5664_, v___x_5665_);
lean_dec_ref(v___x_5665_);
v___x_5667_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_ReadableStream_new_spec__1___closed__0));
v___x_5668_ = lean_string_append(v___x_5666_, v___x_5667_);
v___x_5669_ = lean_io_error_to_string(v_a_5660_);
v___x_5670_ = lean_string_append(v___x_5668_, v___x_5669_);
lean_dec_ref(v___x_5669_);
v___x_5671_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5671_, 0, v___x_5670_);
if (v_isShared_5663_ == 0)
{
lean_ctor_set(v___x_5662_, 0, v___x_5671_);
v___x_5673_ = v___x_5662_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v___x_5671_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
v___jp_5677_:
{
uint8_t v_construct_5679_; uint64_t v___x_5680_; 
v_construct_5679_ = lean_ctor_get_uint8(v_b_5627_, sizeof(void*)*4);
v___x_5680_ = lean_uint64_lor(v___x_5676_, v___y_5678_);
if (v_construct_5679_ == 0)
{
uint64_t v___x_5681_; 
v___x_5681_ = 0ULL;
v___y_5632_ = v___x_5680_;
v___y_5633_ = v___x_5681_;
goto v___jp_5631_;
}
else
{
uint64_t v___x_5682_; 
v___x_5682_ = 4ULL;
v___y_5632_ = v___x_5680_;
v___y_5633_ = v___x_5682_;
goto v___jp_5631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0___boxed(lean_object* v_b_5685_, lean_object* v_args_5686_, lean_object* v_await_5687_, lean_object* v_a_5688_){
_start:
{
uint8_t v_await_boxed_5689_; lean_object* v_res_5690_; 
v_await_boxed_5689_ = lean_unbox(v_await_5687_);
v_res_5690_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v_b_5685_, v_args_5686_, v_await_boxed_5689_);
lean_dec_ref(v_b_5685_);
return v_res_5690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new(double v_init_5699_){
_start:
{
lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; uint8_t v___x_5711_; lean_object* v___x_5712_; 
v___x_5701_ = lean_unsigned_to_nat(1u);
v___x_5702_ = ((lean_object*)(l_Lasm_JS_Web_CountQueuingStrategy_new___closed__2));
v___x_5703_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5704_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_5704_, 0, v_init_5699_);
v___x_5705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5705_, 0, v___x_5703_);
lean_ctor_set(v___x_5705_, 1, v___x_5704_);
v___x_5706_ = lean_mk_empty_array_with_capacity(v___x_5701_);
lean_inc_ref(v___x_5706_);
v___x_5707_ = lean_array_push(v___x_5706_, v___x_5705_);
v___x_5708_ = l_Lasm_JS_Web_Support_fields(v___x_5707_);
lean_dec_ref(v___x_5707_);
v___x_5709_ = lean_array_push(v___x_5706_, v___x_5708_);
v___x_5710_ = l_Lasm_JS_Web_Support_args(v___x_5709_);
v___x_5711_ = 0;
v___x_5712_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_CountQueuingStrategy_new_spec__0(v___x_5702_, v___x_5710_, v___x_5711_);
return v___x_5712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_new___boxed(lean_object* v_init_5713_, lean_object* v_a_5714_){
_start:
{
double v_init_boxed_5715_; lean_object* v_res_5716_; 
v_init_boxed_5715_ = lean_unbox_float(v_init_5713_);
lean_dec_ref(v_init_5713_);
v_res_5716_ = l_Lasm_JS_Web_CountQueuingStrategy_new(v_init_boxed_5715_);
return v_res_5716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(lean_object* v_self_5717_){
_start:
{
lean_object* v___x_5719_; lean_object* v___x_5720_; 
v___x_5719_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__0));
v___x_5720_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5717_, v___x_5719_);
return v___x_5720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark___boxed(lean_object* v_self_5721_, lean_object* v_a_5722_){
_start:
{
lean_object* v_res_5723_; 
v_res_5723_ = l_Lasm_JS_Web_CountQueuingStrategy_highWaterMark(v_self_5721_);
return v_res_5723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size(lean_object* v_self_5724_){
_start:
{
lean_object* v___x_5726_; lean_object* v___x_5727_; 
v___x_5726_ = ((lean_object*)(l_Lasm_JS_Web_instToJSQueuingStrategy___lam__0___closed__1));
v___x_5727_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_ByteLengthQueuingStrategy_size_spec__0(v_self_5724_, v___x_5726_);
return v___x_5727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_CountQueuingStrategy_size___boxed(lean_object* v_self_5728_, lean_object* v_a_5729_){
_start:
{
lean_object* v_res_5730_; 
v_res_5730_ = l_Lasm_JS_Web_CountQueuingStrategy_size(v_self_5728_);
return v_res_5730_;
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
